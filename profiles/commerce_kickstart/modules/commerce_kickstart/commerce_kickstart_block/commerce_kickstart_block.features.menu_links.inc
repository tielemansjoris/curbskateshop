<?php
/**
 * @file
 * commerce_kickstart_block.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function commerce_kickstart_block_menu_default_menu_links() {
  $menu_links = array();

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
  // Exported menu link: menu-payment-methods_american-express:<front>.
  $menu_links['menu-payment-methods_american-express:<front>'] = array(
    'menu_name' => 'menu-payment-methods',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'American Express',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'american-express',
        ),
      ),
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
      'identifier' => 'menu-payment-methods_american-express:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-payment-methods_mastercard:<front>.
  $menu_links['menu-payment-methods_mastercard:<front>'] = array(
    'menu_name' => 'menu-payment-methods',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'MasterCard',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'mastercard',
        ),
      ),
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
      'identifier' => 'menu-payment-methods_mastercard:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-payment-methods_paypal:<front>.
  $menu_links['menu-payment-methods_paypal:<front>'] = array(
    'menu_name' => 'menu-payment-methods',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'PayPal',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'paypal',
        ),
      ),
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
      'identifier' => 'menu-payment-methods_paypal:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-payment-methods_visa:<front>.
  $menu_links['menu-payment-methods_visa:<front>'] = array(
    'menu_name' => 'menu-payment-methods',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Visa',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'visa',
        ),
      ),
      'toolbar_expanded' => 0,
      'toolbar_break' => 0,
      'identifier' => 'menu-payment-methods_visa:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('American Express');
  t('Company info');
  t('MasterCard');
  t('PayPal');
  t('Security & privacy');
  t('Service & support');
  t('Shipping & returns');
  t('Visa');

  return $menu_links;
}
