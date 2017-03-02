<?php
/**
 * @file
 * curb_webshop_feature_.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function curb_webshop_feature__default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact map';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact_maps';
  $fe_block_boxes->body = '<iframe src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d2508.2841440623147!2d3.7194530160193318!3d51.04784097956231!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x47c37144b8247623%3A0xe270b94eed929bcc!2sCurb+Skateshop!5e0!3m2!1snl!2sbe!4v1488484940325" width="220" height="400" frameborder="0" style="border:0" allowfullscreen></iframe>';

  $export['contact_maps'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'disclaimer';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'disclaimer';
  $fe_block_boxes->body = '© Curb Skateshop 2017';

  $export['disclaimer'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer info';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_info';
  $fe_block_boxes->body = '<b>Lorem ipsum</b> dolor sit amet, consectetur adipiscing elit. Mauris commodo elit id scelerisque auctor. Praesent vestibulum nulla vitae elit pretium, nec auctor leo eleifend. Praesent eget felis ac urna dictum malesuada. In est magna, congue nec mi eu, volutpat porta nisi. Pellentesque libero ex, laoreet in nibh a, vestibulum imperdiet est.
<br>
<a href="shop" class="cta">Bezoek onze webshop</a>';

  $export['footer_info'] = $fe_block_boxes;

  return $export;
}
