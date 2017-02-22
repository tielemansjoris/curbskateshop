<?php
/**
 * @file
 * curb_webshop_feature_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function curb_webshop_feature__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function curb_webshop_feature__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function curb_webshop_feature__image_default_styles() {
  $styles = array();

  // Exported image style: brand_thumb.
  $styles['brand_thumb'] = array(
    'label' => 'Brand Thumb',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 75,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_img_main.
  $styles['front_img_main'] = array(
    'label' => 'front_img_main',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_img_sub.
  $styles['front_img_sub'] = array(
    'label' => 'front_img_sub',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_large.
  $styles['front_large'] = array(
    'label' => 'front_large',
    'effects' => array(),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function curb_webshop_feature__node_info() {
  $items = array(
    'brand' => array(
      'name' => t('Brand'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'product_display' => array(
      'name' => t('Product display'),
      'base' => 'node_content',
      'description' => t('Use product displays for adding product pages to your store'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
