<?php
/**
 * @file
 * npu_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function npu_base_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 3,
  );

  // Exported role: Moderator.
  $roles['Moderator'] = array(
    'name' => 'Moderator',
    'weight' => 4,
  );

  // Exported role: Working Knowledge Editor.
  $roles['Working Knowledge Editor'] = array(
    'name' => 'Working Knowledge Editor',
    'weight' => 5,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
