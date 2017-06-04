<?php
/**
 * @file
 * curb_webshop_feature_.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function curb_webshop_feature__default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-about-us'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'about-us',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'about',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -32,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-erzt'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'erzt',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 23,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-home-block-main'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home-block-main',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -31,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-home-block-sub-left'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home-block-sub-left',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'postscript_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 0,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-home-block-sub-right'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'home-block-sub-right',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 0,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-contact_maps'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'contact_maps',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'contact',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 0,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact',
    'visibility' => 1,
  );

  $export['block-disclaimer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'disclaimer',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'footer2_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 0,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-footer_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'footer_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => 'Webshop',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 5,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cart',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'checkout*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -34,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_checkout_progress-indication'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'indication',
    'module' => 'commerce_checkout_progress',
    'node_types' => array(),
    'pages' => 'checkout/*
cart',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -10,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -25,
      ),
      'omega_kickstart' => array(
        'region' => 'breadcrumb',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['commerce_kickstart_block-powered_drupal_commerce'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered_drupal_commerce',
    'module' => 'commerce_kickstart_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -10,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_kickstart_block-proudly_built_by_cg'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'proudly_built_by_cg',
    'module' => 'commerce_kickstart_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -4,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['connector-one_click_block'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'one_click_block',
    'module' => 'connector',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -23,
      ),
      'omega_kickstart' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['crumbs-breadcrumb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'breadcrumb',
    'module' => 'crumbs',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -26,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['current_search-kickstart_search'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'kickstart_search',
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -21,
      ),
      'omega_kickstart' => array(
        'region' => 'breadcrumb',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['current_search-standard'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'standard',
    'module' => 'current_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -19,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 12,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-H24ObDRB0Wq0KpRW1qalIgb7TvlKP7aj'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'H24ObDRB0Wq0KpRW1qalIgb7TvlKP7aj',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'shop
shop/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -16,
      ),
      'omega_kickstart' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['facetapi-TFVaQKSORCPdrULxfXDnLQZ40xH0Nper'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'TFVaQKSORCPdrULxfXDnLQZ40xH0Nper',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'shop
shop/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -15,
      ),
      'omega_kickstart' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => -1,
      ),
    ),
    'title' => 'Price',
    'visibility' => 1,
  );

  $export['facetapi-ljmT8Ts69OP0ErEpRJXGjkCr6c79Qs0Z'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ljmT8Ts69OP0ErEpRJXGjkCr6c79Qs0Z',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'shop
shop/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -18,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['footer_sitemap-footer_sitemap'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_sitemap',
    'module' => 'footer_sitemap',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 15,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['megamenu-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'megamenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['megamenu-menu-social-connection'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-social-connection',
    'module' => 'megamenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['megamenu-menu-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-user-menu',
    'module' => 'megamenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -34,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -2,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-navigation',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 18,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-payment-methods'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-payment-methods',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -29,
      ),
      'omega_kickstart' => array(
        'region' => 'footer2_second',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-social-connection'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-social-connection',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -24,
      ),
      'omega_kickstart' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-top-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-top-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 16,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-user-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -7,
      ),
      'omega_kickstart' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-secondary-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'secondary-navigation',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 8,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['multiblock-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'multiblock',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -22,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 4,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 13,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'user_second',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search-sorts',
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 4,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 7,
      ),
      'omega_kickstart' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['service_links-service_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'service_links',
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 11,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['service_links-service_links_fisheye'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'service_links_fisheye',
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 9,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['service_links-service_links_not_node'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'service_links_not_node',
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 10,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 5,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 14,
      ),
      'omega_kickstart' => array(
        'region' => 'preface_first',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -34,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -5,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -3,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -12,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -29,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -11,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 19,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 20,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views--exp-display_products-page'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '-exp-display_products-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 22,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-49752f912f8ab9a08d50b004eeffd55d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '49752f912f8ab9a08d50b004eeffd55d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 1,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-73bf5fb8a97d85b206f0ac7edff0a9aa'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '73bf5fb8a97d85b206f0ac7edff0a9aa',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 2,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blog-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -6,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-blog-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blog-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 6,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog-blog_archives'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blog-blog_archives',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -28,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-blog_category_list-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blog_category_list-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -27,
      ),
      'omega_kickstart' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-brands_home-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'brands_home-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -1,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-collection_products-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_products-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 0,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-display_products-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_products-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'postscript_third',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -34,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-new_arrivals_front_-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new_arrivals_front_-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -33,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-shopping_cart-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shopping_cart-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'cart\\ncheckout/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => 3,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-team-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'team-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'about',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'curb_webshop_theme_v2' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'curb_webshop_theme_v2',
        'weight' => -30,
      ),
      'omega_kickstart' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega_kickstart',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
