<?php
/**
 * @file
 * curb_webshop_feature_.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function curb_webshop_feature__taxonomy_default_vocabularies() {
  return array(
    'product_brand' => array(
      'name' => 'Product brand',
      'machine_name' => 'product_brand',
      'description' => 'Brands',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
