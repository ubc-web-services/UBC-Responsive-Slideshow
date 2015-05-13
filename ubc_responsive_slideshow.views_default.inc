<?php
/**
 * @file
 * ubc_responsive_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ubc_responsive_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slideshows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshows';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'slides';
  $handler->display->display_options['style_options']['wrapper_class'] = 'flexslider featured-content';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'homepage_slideshow' => 'homepage_slideshow',
  );
  /* Field: Content: Call To Action */
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['id'] = 'field_slideshow_call_to_action';
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['table'] = 'field_data_field_slideshow_call_to_action';
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['field'] = 'field_slideshow_call_to_action';
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_call_to_action']['click_sort_column'] = 'url';
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_slideshow_caption']['id'] = 'field_slideshow_caption';
  $handler->display->display_options['fields']['field_slideshow_caption']['table'] = 'field_data_field_slideshow_caption';
  $handler->display->display_options['fields']['field_slideshow_caption']['field'] = 'field_slideshow_caption';
  $handler->display->display_options['fields']['field_slideshow_caption']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_caption']['element_default_classes'] = FALSE;
  /* Field: Content: Caption Background */
  $handler->display->display_options['fields']['field_slideshow_background']['id'] = 'field_slideshow_background';
  $handler->display->display_options['fields']['field_slideshow_background']['table'] = 'field_data_field_slideshow_background';
  $handler->display->display_options['fields']['field_slideshow_background']['field'] = 'field_slideshow_background';
  $handler->display->display_options['fields']['field_slideshow_background']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_background']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_background']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_background']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_background']['type'] = 'list_key';
  /* Field: Content: Caption Position */
  $handler->display->display_options['fields']['field_slideshow_caption_position']['id'] = 'field_slideshow_caption_position';
  $handler->display->display_options['fields']['field_slideshow_caption_position']['table'] = 'field_data_field_slideshow_caption_position';
  $handler->display->display_options['fields']['field_slideshow_caption_position']['field'] = 'field_slideshow_caption_position';
  $handler->display->display_options['fields']['field_slideshow_caption_position']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_caption_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_caption_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_caption_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_caption_position']['type'] = 'list_key';
  /* Field: Content: Heading */
  $handler->display->display_options['fields']['field_slideshow_heading']['id'] = 'field_slideshow_heading';
  $handler->display->display_options['fields']['field_slideshow_heading']['table'] = 'field_data_field_slideshow_heading';
  $handler->display->display_options['fields']['field_slideshow_heading']['field'] = 'field_slideshow_heading';
  $handler->display->display_options['fields']['field_slideshow_heading']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_heading']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_heading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_heading']['element_default_classes'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_slideshow_image']['id'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['table'] = 'field_data_field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['field'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_slideshow_image']['settings'] = array(
    'picture_mapping' => 'slideshow',
    'fallback_image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="flex-caption [field_slideshow_background] [field_slideshow_caption_position]">
<h4>[field_slideshow_heading]</h4>
<p>[field_slideshow_caption]</p>
<p>[field_slideshow_call_to_action]</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'slideshow');
  $export['slideshows'] = $view;

  return $export;
}
