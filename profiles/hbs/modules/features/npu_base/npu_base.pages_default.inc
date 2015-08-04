<?php
/**
 * @file
 * npu_base.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function npu_base_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article_node';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article Node',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article_node',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '100',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '285',
        'width_type' => 'px',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3c2fc2a0-311b-4c40-8b34-f209bc60c62f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6796e110-f6de-4b22-92dc-d9421b454794';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 1,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6796e110-f6de-4b22-92dc-d9421b454794';
    $display->content['new-6796e110-f6de-4b22-92dc-d9421b454794'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-6796e110-f6de-4b22-92dc-d9421b454794';
    $pane = new stdClass();
    $pane->pid = 'new-2dd4fbc9-d753-4d01-bf84-cfdb6f76d0ad';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'views-related_pages-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2dd4fbc9-d753-4d01-bf84-cfdb6f76d0ad';
    $display->content['new-2dd4fbc9-d753-4d01-bf84-cfdb6f76d0ad'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-2dd4fbc9-d753-4d01-bf84-cfdb6f76d0ad';
    $pane = new stdClass();
    $pane->pid = 'new-0c2cc32e-4fb4-4a53-8ef5-b3976a10c628';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0c2cc32e-4fb4-4a53-8ef5-b3976a10c628';
    $display->content['new-0c2cc32e-4fb4-4a53-8ef5-b3976a10c628'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-0c2cc32e-4fb4-4a53-8ef5-b3976a10c628';
    $pane = new stdClass();
    $pane->pid = 'new-7a88bd20-fdff-4866-96af-b87a07be905e';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'views-related_pages-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7a88bd20-fdff-4866-96af-b87a07be905e';
    $display->content['new-7a88bd20-fdff-4866-96af-b87a07be905e'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-7a88bd20-fdff-4866-96af-b87a07be905e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article_node'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function npu_base_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home__panel_context_b0951de2-9cf0-474a-a146-3527b834aab5';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a250fba4-f4e4-40db-b92b-6f48948e639f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3a2ece7-4168-49cc-ae37-e112d836cfd6';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'block';
    $pane->subtype = 'views-3c615b8551c3c6ba946c5b3a7f1c5baa';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3a2ece7-4168-49cc-ae37-e112d836cfd6';
    $display->content['new-b3a2ece7-4168-49cc-ae37-e112d836cfd6'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-b3a2ece7-4168-49cc-ae37-e112d836cfd6';
    $pane = new stdClass();
    $pane->pid = 'new-4683fb79-9f4c-4f1c-a62c-41125c329156';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4683fb79-9f4c-4f1c-a62c-41125c329156';
    $display->content['new-4683fb79-9f4c-4f1c-a62c-41125c329156'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-4683fb79-9f4c-4f1c-a62c-41125c329156';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b3a2ece7-4168-49cc-ae37-e112d836cfd6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
