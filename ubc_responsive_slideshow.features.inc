<?php
/**
 * @file
 * ubc_responsive_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ubc_responsive_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function ubc_responsive_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function ubc_responsive_slideshow_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_slideshow
  $nodequeues['homepage_slideshow'] = array(
    'name' => 'homepage_slideshow',
    'title' => 'Homepage Slideshow',
    'subqueue_title' => '',
    'size' => 5,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'slideshow_item',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function ubc_responsive_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: slideshow-extralarge.
  $styles['slideshow-extralarge'] = array(
    'label' => 'slideshow-extralarge',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1200,
          'height' => 400,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 1,
          'style_name' => 'slideshow-extralarge',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: slideshow-extrasmall.
  $styles['slideshow-extrasmall'] = array(
    'label' => 'slideshow-extrasmall',
    'effects' => array(
      8 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'slideshow-extralarge',
          'style_name' => 'slideshow-extrasmall',
        ),
        'weight' => 0,
      ),
      9 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 480,
          'height' => 160,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: slideshow-large.
  $styles['slideshow-large'] = array(
    'label' => 'slideshow-large',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'slideshow-extralarge',
          'style_name' => 'slideshow-large',
        ),
        'weight' => 0,
      ),
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 980,
          'height' => 327,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: slideshow-medium.
  $styles['slideshow-medium'] = array(
    'label' => 'slideshow-medium',
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'slideshow-extralarge',
          'style_name' => 'slideshow-medium',
        ),
        'weight' => 0,
      ),
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 768,
          'height' => 256,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: slideshow-small.
  $styles['slideshow-small'] = array(
    'label' => 'slideshow-small',
    'effects' => array(
      6 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'slideshow-extralarge',
          'style_name' => 'slideshow-small',
        ),
        'weight' => 0,
      ),
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 650,
          'height' => 217,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ubc_responsive_slideshow_node_info() {
  $items = array(
    'slideshow_item' => array(
      'name' => t('Slideshow Item'),
      'base' => 'node_content',
      'description' => t('Create a single slide that can be added to a nodequeue and displayed as part of a carousel'),
      'has_title' => '1',
      'title_label' => t('Admin Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
