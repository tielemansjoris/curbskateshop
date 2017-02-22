<?php
/**
 * @file
 * curb_webshop_feature_.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function curb_webshop_feature__ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|home_block_main|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'home_block_main';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_link_shop_now',
        2 => 'field_image_home_block_main',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_link_shop_now' => 'ds_content',
      'field_image_home_block_main' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['bean|home_block_main|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|brand|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'brand';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_logo',
      ),
    ),
    'fields' => array(
      'field_logo' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|brand|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function curb_webshop_feature__ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'product_thumb';
  $ds_view_mode->label = 'product-thumb';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'commerce_product' => 'commerce_product',
  );
  $export['product_thumb'] = $ds_view_mode;

  return $export;
}
