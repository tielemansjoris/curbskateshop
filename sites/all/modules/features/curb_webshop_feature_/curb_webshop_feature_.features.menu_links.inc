<?php
/**
 * @file
 * curb_webshop_feature_.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function curb_webshop_feature__menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/48.
  $menu_links['main-menu_about:node/48'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/48',
    'router_path' => 'node/%',
    'link_title' => 'about',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_about:node/48',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'blog',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_clothing:product_category/14.
  $menu_links['main-menu_clothing:product_category/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product_category/14',
    'router_path' => 'product_category/%',
    'link_title' => 'Clothing',
    'options' => array(
      'attributes' => array(
        'title' => 'Clothing',
      ),
      'identifier' => 'main-menu_clothing:product_category/14',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 0,
    'parent_identifier' => 'main-menu_shop:shop',
  );
  // Exported menu link: main-menu_contact:node/49.
  $menu_links['main-menu_contact:node/49'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/49',
    'router_path' => 'node/%',
    'link_title' => 'contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contact:node/49',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'events',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'home-menu',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:node/51.
  $menu_links['main-menu_home:node/51'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'home',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home:node/51',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_shop:shop.
  $menu_links['main-menu_shop:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Shop',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_shop:shop',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_skateboards:product_category/13.
  $menu_links['main-menu_skateboards:product_category/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'product_category/13',
    'router_path' => 'product_category/%',
    'link_title' => 'Skateboards',
    'options' => array(
      'attributes' => array(
        'title' => 'Skateboards',
      ),
      'identifier' => 'main-menu_skateboards:product_category/13',
    ),
    'module' => 'taxonomy_menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 0,
    'parent_identifier' => 'main-menu_shop:shop',
  );
  // Exported menu link: menu-footer-navigation_company-info:<nolink>.
  $menu_links['menu-footer-navigation_company-info:<nolink>'] = array(
    'menu_name' => 'menu-footer-navigation',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Company info',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-navigation_company-info:<nolink>',
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-navigation_security--privacy:<nolink>.
  $menu_links['menu-footer-navigation_security--privacy:<nolink>'] = array(
    'menu_name' => 'menu-footer-navigation',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Security & privacy',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-navigation_security--privacy:<nolink>',
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-navigation_service--support:<nolink>.
  $menu_links['menu-footer-navigation_service--support:<nolink>'] = array(
    'menu_name' => 'menu-footer-navigation',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Service & support',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-navigation_service--support:<nolink>',
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-navigation_shipping--returns:<nolink>.
  $menu_links['menu-footer-navigation_shipping--returns:<nolink>'] = array(
    'menu_name' => 'menu-footer-navigation',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Shipping & returns',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-navigation_shipping--returns:<nolink>',
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-user-menu_log-in:user/login.
  $menu_links['menu-user-menu_log-in:user/login'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-user-menu_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 1,
  );
  // Exported menu link: menu-user-menu_log-out:user/logout.
  $menu_links['menu-user-menu_log-out:user/logout'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-user-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 4,
    'customized' => 1,
  );
  // Exported menu link: menu-user-menu_maak-account-aan:user/register.
  $menu_links['menu-user-menu_maak-account-aan:user/register'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Maak account aan',
    'options' => array(
      'identifier' => 'menu-user-menu_maak-account-aan:user/register',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'customized' => 1,
  );
  // Exported menu link: menu-user-menu_mijn-account:user.
  $menu_links['menu-user-menu_mijn-account:user'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Mijn account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-user-menu_mijn-account:user',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 1,
  );
  // Exported menu link: menu-user-menu_mijn-winkelwagen:cart/my.
  $menu_links['menu-user-menu_mijn-winkelwagen:cart/my'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'cart/my',
    'router_path' => 'cart/my',
    'link_title' => 'Mijn winkelwagen',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-user-menu_mijn-winkelwagen:cart/my',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Clothing');
  t('Company info');
  t('Home');
  t('Log in');
  t('Log out');
  t('Maak account aan');
  t('Mijn account');
  t('Mijn winkelwagen');
  t('Security & privacy');
  t('Service & support');
  t('Shipping & returns');
  t('Shop');
  t('Skateboards');
  t('User account');
  t('about');
  t('blog');
  t('contact');
  t('events');
  t('home');

  return $menu_links;
}
