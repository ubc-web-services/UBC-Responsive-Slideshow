

#####
Changes to feature files
#####

Once the feature was created, the following changes were made to these files:


ubc_responsive_slideshow.info

// line 15: force manualcrop to have version 7.x-1.4 due to libraries dependency
dependencies[] = manualcrop (7.x-1.4)


ubc_responsive_slideshow.module

// this function adds css and js
function ubc_responsive_slideshow_init() {
  drupal_add_css(drupal_get_path('module', 'ubc_responsive_slideshow') . '/css/slideshow.css');
  drupal_add_js(drupal_get_path('module', 'ubc_responsive_slideshow') . '/js/jquery.flexslider-min.js');
  drupal_add_js(drupal_get_path('module', 'ubc_responsive_slideshow') . '/js/slideshow.js');
}