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

  // Exported permission: 'create blog_post content'.
  $permissions['create blog_post content'] = array(
    'name' => 'create blog_post content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any about_us bean'.
  $permissions['delete any about_us bean'] = array(
    'name' => 'delete any about_us bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any blog_post content'.
  $permissions['delete any blog_post content'] = array(
    'name' => 'delete any blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog_post content'.
  $permissions['delete own blog_post content'] = array(
    'name' => 'delete own blog_post content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in blog_category'.
  $permissions['delete terms in blog_category'] = array(
    'name' => 'delete terms in blog_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any about_us bean'.
  $permissions['edit any about_us bean'] = array(
    'name' => 'edit any about_us bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any blog_post content'.
  $permissions['edit any blog_post content'] = array(
    'name' => 'edit any blog_post content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog_post content'.
  $permissions['edit own blog_post content'] = array(
    'name' => 'edit own blog_post content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in blog_category'.
  $permissions['edit terms in blog_category'] = array(
    'name' => 'edit terms in blog_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any about_us bean'.
  $permissions['view any about_us bean'] = array(
    'name' => 'view any about_us bean',
    'roles' => array(),
    'module' => 'bean',
  );

  return $permissions;
}
