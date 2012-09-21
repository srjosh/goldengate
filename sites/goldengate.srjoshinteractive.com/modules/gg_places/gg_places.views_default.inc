<?php
/**
 * @file
 * gg_places.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gg_places_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'places';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Places';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Places';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_themethreat' => 'field_themethreat',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/place">Add a place</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['group_type'] = 'min';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Aspect */
  $handler->display->display_options['fields']['field_aspect']['id'] = 'field_aspect';
  $handler->display->display_options['fields']['field_aspect']['table'] = 'field_data_field_aspect';
  $handler->display->display_options['fields']['field_aspect']['field'] = 'field_aspect';
  $handler->display->display_options['fields']['field_aspect']['label'] = '';
  $handler->display->display_options['fields']['field_aspect']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_aspect']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_aspect']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_aspect']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_aspect']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_aspect']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aspect']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_aspect']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_aspect']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_aspect']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_aspect']['group_columns'] = array(
    'entity id' => 'entity id',
  );
  $handler->display->display_options['fields']['field_aspect']['field_api_classes'] = 0;
  /* Field: Content: Theme or Threat */
  $handler->display->display_options['fields']['field_themethreat']['id'] = 'field_themethreat';
  $handler->display->display_options['fields']['field_themethreat']['table'] = 'field_data_field_themethreat';
  $handler->display->display_options['fields']['field_themethreat']['field'] = 'field_themethreat';
  $handler->display->display_options['fields']['field_themethreat']['label'] = 'Theme or Threat?';
  $handler->display->display_options['fields']['field_themethreat']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_themethreat']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_themethreat']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_themethreat']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_themethreat']['field_api_classes'] = 0;
  /* Field: Content: The Face */
  $handler->display->display_options['fields']['field_face']['id'] = 'field_face';
  $handler->display->display_options['fields']['field_face']['table'] = 'field_data_field_face';
  $handler->display->display_options['fields']['field_face']['field'] = 'field_face';
  $handler->display->display_options['fields']['field_face']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_face']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_face']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_face']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_face']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_face']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_face']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_face']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_face']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_face']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_face']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_face']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_face']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Name';
  /* Sort criterion: Content: Theme or Threat (field_themethreat) */
  $handler->display->display_options['sorts']['field_themethreat_value']['id'] = 'field_themethreat_value';
  $handler->display->display_options['sorts']['field_themethreat_value']['table'] = 'field_data_field_themethreat';
  $handler->display->display_options['sorts']['field_themethreat_value']['field'] = 'field_themethreat_value';
  $handler->display->display_options['sorts']['field_themethreat_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_themethreat_value']['expose']['label'] = 'Theme or Threat';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'place' => 'place',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'places';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Places';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['places'] = $view;

  return $export;
}
