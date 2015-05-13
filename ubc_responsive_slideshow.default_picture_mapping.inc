<?php
/**
 * @file
 * ubc_responsive_slideshow.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function ubc_responsive_slideshow_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Slideshow';
  $picture_mapping->machine_name = 'slideshow';
  $picture_mapping->breakpoint_group = 'slideshow';
  $picture_mapping->mapping = array(
    'custom.user.extralarge' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'custom.user.large' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow-extralarge',
      ),
    ),
    'custom.user.medium' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow-large',
      ),
    ),
    'custom.user.small' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow-medium',
      ),
    ),
    'custom.user.extrasmall' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow-small',
      ),
    ),
    'custom.user.tiny' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'slideshow-extrasmall',
      ),
    ),
  );
  $export['slideshow'] = $picture_mapping;

  return $export;
}
