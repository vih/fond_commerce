<?php
/**
 * @file
 * fond_commerce.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function fond_commerce_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:donation:default';
  $panelizer->title = 'Standard';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'donation';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e7495754-79af-4b34-9a27-ef5b89754751';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-061a4bbb-b7ad-48ec-b13b-2fabb027b1d4';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '061a4bbb-b7ad-48ec-b13b-2fabb027b1d4';
  $display->content['new-061a4bbb-b7ad-48ec-b13b-2fabb027b1d4'] = $pane;
  $display->panels['center'][0] = 'new-061a4bbb-b7ad-48ec-b13b-2fabb027b1d4';
  $pane = new stdClass();
  $pane->pid = 'new-31c8c997-0f28-4f07-a0fa-f7a574c11ab4';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_product';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'commerce_cart_add_to_cart_form',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'show_quantity' => 0,
      'default_quantity' => '1',
      'combine' => 1,
      'show_single_product_attributes' => 1,
      'line_item_type' => 'commerce_donate',
    ),
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '31c8c997-0f28-4f07-a0fa-f7a574c11ab4';
  $display->content['new-31c8c997-0f28-4f07-a0fa-f7a574c11ab4'] = $pane;
  $display->panels['center'][1] = 'new-31c8c997-0f28-4f07-a0fa-f7a574c11ab4';
  $pane = new stdClass();
  $pane->pid = 'new-924fcdd8-a8df-4f3f-9fbe-acb4a89bff7f';
  $pane->panel = 'center';
  $pane->type = 'node_links';
  $pane->subtype = 'node_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => FALSE,
    'override_title_text' => '',
    'build_mode' => 'page_manager',
    'identifier' => '',
    'link' => TRUE,
    'context' => 'panelizer',
  );
  $pane->cache = array();
  $pane->style = array();
  $pane->css = array(
    'css_class' => 'link-wrapper',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '924fcdd8-a8df-4f3f-9fbe-acb4a89bff7f';
  $display->content['new-924fcdd8-a8df-4f3f-9fbe-acb4a89bff7f'] = $pane;
  $display->panels['center'][2] = 'new-924fcdd8-a8df-4f3f-9fbe-acb4a89bff7f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->storage_id = 'node:donation:default';
  $display->storage_type = 'panelizer_default';
  $display->title_pane = 'new-924fcdd8-a8df-4f3f-9fbe-acb4a89bff7f';
  $panelizer->display = $display;
  $export['node:donation:default'] = $panelizer;

  return $export;
}
