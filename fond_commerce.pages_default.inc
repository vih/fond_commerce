<?php
/**
 * @file
 * fond_commerce.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function fond_commerce_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'jeg_vil_bidrage';
  $page->task = 'page';
  $page->admin_title = 'Jeg vil bidrage';
  $page->admin_description = '';
  $page->path = 'bidrag';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Jeg vil bidrage',
    'weight' => 0,
    'name' => 'main-menu',
    'parent' => 'main-menu:0',
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_jeg_vil_bidrage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'jeg_vil_bidrage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Jeg vil bidrage';
  $display->uuid = '83d5721f-5157-4ffc-90ee-2e823b0453ac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c01b5941-8d3f-4392-8cad-c62931b2cca7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'samlet_bel_b-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c01b5941-8d3f-4392-8cad-c62931b2cca7';
    $display->content['new-c01b5941-8d3f-4392-8cad-c62931b2cca7'] = $pane;
    $display->panels['contentmain'][0] = 'new-c01b5941-8d3f-4392-8cad-c62931b2cca7';
    $pane = new stdClass();
    $pane->pid = 'new-ce082609-bf62-410d-808d-3b2b1ba40bf7';
    $pane->panel = 'contentmain';
    $pane->type = 'views_panes';
    $pane->subtype = 'produkter-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'teaser',
      'widget_title' => NULL,
      'items_per_page' => NULL,
      'exposed' => array(
        'sort_by' => NULL,
        'sort_order' => NULL,
      ),
      'use_pager' => NULL,
      'pager_id' => NULL,
      'offset' => NULL,
      'link_to_view' => NULL,
      'more_link' => NULL,
      'path' => NULL,
      'view_settings' => 'fields',
      'header_type' => 'none',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce082609-bf62-410d-808d-3b2b1ba40bf7';
    $display->content['new-ce082609-bf62-410d-808d-3b2b1ba40bf7'] = $pane;
    $display->panels['contentmain'][1] = 'new-ce082609-bf62-410d-808d-3b2b1ba40bf7';
    $pane = new stdClass();
    $pane->pid = 'new-0ec54d49-34e4-4da2-a32c-4bb363b4c14b';
    $pane->panel = 'contentmain';
    $pane->type = 'block';
    $pane->subtype = 'easy_social-easy_social_block_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0ec54d49-34e4-4da2-a32c-4bb363b4c14b';
    $display->content['new-0ec54d49-34e4-4da2-a32c-4bb363b4c14b'] = $pane;
    $display->panels['contentmain'][2] = 'new-0ec54d49-34e4-4da2-a32c-4bb363b4c14b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['jeg_vil_bidrage'] = $page;

  return $pages;

}
