<?php
/**
 * @file
 * gg_characters.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gg_characters_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'characters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Characters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Characters';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_template' => 'field_template',
    'field_player' => 'field_player',
  );
  $handler->display->display_options['row_options']['separator'] = '<br />';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/character">Add a new character</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_fullname']['id'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['table'] = 'field_data_field_fullname';
  $handler->display->display_options['fields']['field_fullname']['field'] = 'field_fullname';
  $handler->display->display_options['fields']['field_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_fullname']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fullname']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fullname']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fullname']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fullname']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fullname']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_fullname']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fullname']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_fullname']['field_api_classes'] = 0;
  /* Field: Content: High Concept */
  $handler->display->display_options['fields']['field_concept']['id'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['table'] = 'field_data_field_concept';
  $handler->display->display_options['fields']['field_concept']['field'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_concept']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_concept']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_concept']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_concept']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_concept']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_concept']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_concept']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_concept']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_concept']['field_api_classes'] = 0;
  /* Field: Content: Character Template */
  $handler->display->display_options['fields']['field_template']['id'] = 'field_template';
  $handler->display->display_options['fields']['field_template']['table'] = 'field_data_field_template';
  $handler->display->display_options['fields']['field_template']['field'] = 'field_template';
  $handler->display->display_options['fields']['field_template']['label'] = 'Character Type';
  $handler->display->display_options['fields']['field_template']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_template']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_template']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_template']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_template']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_template']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_template']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_template']['empty_zero'] = 1;
  $handler->display->display_options['fields']['field_template']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_template']['field_api_classes'] = 0;
  /* Field: Content: Player */
  $handler->display->display_options['fields']['field_player']['id'] = 'field_player';
  $handler->display->display_options['fields']['field_player']['table'] = 'field_data_field_player';
  $handler->display->display_options['fields']['field_player']['field'] = 'field_player';
  $handler->display->display_options['fields']['field_player']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_player']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_player']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_player']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_player']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_player']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_player']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_player']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_player']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_player']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'character' => 'character',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'characters';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Characters';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['characters'] = $view;

  return $export;
}
