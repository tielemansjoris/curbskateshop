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
  t('MasterCard');
  t('PayPal');
  t('Visa');

  return $menu_links;
}
