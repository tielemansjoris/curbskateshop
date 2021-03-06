<?php
/**
 * @file
 * curb_webshop_feature_.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function curb_webshop_feature__bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'about_us';
  $bean_type->label = 'About us';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['about_us'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'home_block_main';
  $bean_type->label = 'home_block_main';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['home_block_main'] = $bean_type;

  return $export;
}
