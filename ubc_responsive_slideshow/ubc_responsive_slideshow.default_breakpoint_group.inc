<?php
/**
 * @file
 * ubc_responsive_slideshow.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function ubc_responsive_slideshow_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'slideshow';
  $breakpoint_group->name = 'slideshow';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.extralarge',
    1 => 'custom.user.large',
    2 => 'custom.user.medium',
    3 => 'custom.user.small',
    4 => 'custom.user.extrasmall',
    5 => 'custom.user.tiny',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['slideshow'] = $breakpoint_group;

  return $export;
}
