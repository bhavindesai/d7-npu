<?php

/**
 * Implements hook_install_tasks().
 */
function hbs_install_tasks() {
  $tasks = array();
  $tasks['hbs_task_clean_up'] = array(
    'display_name' => st('Clean up'),
    'type' => 'batch',
  );
  return $tasks;
}

/**
 * Install task callback to clean up the installation and ready the site
 * for use.
 *
 * @see hbs_install_tasks()
 */
function hbs_task_clean_up() {
  $operations = array();

  // Fetch the all feature information.
  $features = features_get_features();

  // Clear the caches.
  $operations[] = array('drupal_flush_all_caches', array());

  // Revert the features that are enabled.
  foreach ($features as $name => $feature) {
    if ($feature->status) {
      $revert = array_keys($features[$name]->info['features']);
      $operations[] = array('features_revert', array(array($name => $revert)));
    }
  }

  // Enable the themes we need.
  $operations[] = array('theme_enable', array(array(
        'adaptivetheme', 'mix_and_match'
  )));

  variable_set('theme_default', 'mix_and_match');

  // Disable Bartik.
  $operations[] = array('theme_disable', array(array(
        'bartik',
  )));

  // Clear the caches again.
  $operations[] = array('drupal_flush_all_caches', array());

  $admin_role = user_role_load_by_name('administrator');
  user_role_grant_permissions($admin_role->rid, array_keys(module_invoke_all('permission')));
  // Set this as the administrator role.
  variable_set('user_admin_role', $admin_role->rid);

  // Update the menu router information.
  menu_rebuild();

  // Enable the admin theme.
  db_update('system')
      ->fields(array('status' => 1))
      ->condition('type', 'theme')
      ->condition('name', 'seven')
      ->execute();
  variable_set('admin_theme', 'ember');
  variable_set('node_admin_theme', '1');

  // Return the batch.
  return array(
    'title' => st('Cleaning up'),
    'operations' => $operations,
  );
}
