<?php
/**
 * @file
 * curb_webshop_feature_.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function curb_webshop_feature__user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any about_us bean'.
  $permissions['create any about_us bean'] = array(
    'name' => 'create any about_us bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any about_us bean'.
  $permissions['delete any about_us bean'] = array(
    'name' => 'delete any about_us bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any about_us bean'.
  $permissions['edit any about_us bean'] = array(
    'name' => 'edit any about_us bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any about_us bean'.
  $permissions['view any about_us bean'] = array(
    'name' => 'view any about_us bean',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
