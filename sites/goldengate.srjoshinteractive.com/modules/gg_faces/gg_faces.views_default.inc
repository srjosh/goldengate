<?php
/**
 * @file
 * gg_faces.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gg_faces_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faces';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Faces';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Faces';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = '';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_status' => 'field_status',
    'field_place' => 'field_place',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/node/add/face">Add a new face</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: High Concept */
  $handler->display->display_options['fields']['field_concept']['id'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['table'] = 'field_data_field_concept';
  $handler->display->display_options['fields']['field_concept']['field'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['label'] = '';
  $handler->display->display_options['fields']['field_concept']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_concept']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concept']['hide_alter_empty'] = FALSE;
  /* Field: Content: Life Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status']['hide_alter_empty'] = FALSE;
  /* Field: Content: Is the Face Of */
  $handler->display->display_options['fields']['field_place']['id'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['table'] = 'field_data_field_place';
  $handler->display->display_options['fields']['field_place']['field'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['label'] = 'Is the Face of';
  $handler->display->display_options['fields']['field_place']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place']['hide_alter_empty'] = FALSE;
  /* Field: Content: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['hide_alter_empty'] = FALSE;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  /* Field: PDF: Page Break */
  $handler->display->display_options['fields']['page_break']['id'] = 'page_break';
  $handler->display->display_options['fields']['page_break']['table'] = 'pdf';
  $handler->display->display_options['fields']['page_break']['field'] = 'page_break';
  $handler->display->display_options['fields']['page_break']['label'] = '';
  $handler->display->display_options['fields']['page_break']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_break']['last_row'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Name';
  /* Sort criterion: Content: Is the Face Of (field_place) */
  $handler->display->display_options['sorts']['field_place_nid']['id'] = 'field_place_nid';
  $handler->display->display_options['sorts']['field_place_nid']['table'] = 'field_data_field_place';
  $handler->display->display_options['sorts']['field_place_nid']['field'] = 'field_place_nid';
  $handler->display->display_options['sorts']['field_place_nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_place_nid']['expose']['label'] = 'Location';
  /* Sort criterion: Content: Life Status (field_status) */
  $handler->display->display_options['sorts']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['sorts']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['sorts']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['sorts']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_status_value']['expose']['label'] = 'Life Status';
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
    'face' => 'face',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: High Concept */
  $handler->display->display_options['fields']['field_concept']['id'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['table'] = 'field_data_field_concept';
  $handler->display->display_options['fields']['field_concept']['field'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['label'] = '';
  $handler->display->display_options['fields']['field_concept']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_concept']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concept']['hide_alter_empty'] = FALSE;
  /* Field: Content: Life Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status']['hide_alter_empty'] = FALSE;
  /* Field: Content: Is the Face Of */
  $handler->display->display_options['fields']['field_place']['id'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['table'] = 'field_data_field_place';
  $handler->display->display_options['fields']['field_place']['field'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['label'] = 'Is the Face of';
  $handler->display->display_options['fields']['field_place']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place']['hide_alter_empty'] = FALSE;
  /* Field: Content: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['path'] = 'faces';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Faces';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: PDF Page */
  $handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'pdf_unformatted';
  $handler->display->display_options['row_plugin'] = 'pdf_fields';
  $handler->display->display_options['row_options']['formats'] = array(
    'title' => array(
      'position' => array(
        'object' => 'page',
        'corner' => 'top_left',
        'x' => '',
        'y' => '',
        'width' => '',
        'height' => '17',
      ),
      'text' => array(
        'font_size' => '17',
        'font_family' => 'default',
        'font_style' => array(
          'b' => 'b',
          'i' => 'i',
          'u' => 0,
          'd' => 0,
          'o' => 0,
        ),
        'align' => NULL,
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
    'field_concept' => array(
      'position' => array(
        'object' => 'field_title',
        'corner' => 'bottom_left',
        'x' => '',
        'y' => '10',
        'width' => 'auto',
        'height' => 'auto',
      ),
      'text' => array(
        'font_size' => '9',
        'font_family' => 'default',
        'font_style' => array(
          'i' => 'i',
          'b' => 0,
          'u' => 0,
          'd' => 0,
          'o' => 0,
        ),
        'align' => NULL,
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
    'field_status' => array(
      'position' => array(
        'object' => 'field_field_concept',
        'corner' => 'bottom_left',
        'x' => '',
        'y' => '10',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '10',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
    'field_place' => array(
      'position' => array(
        'object' => 'field_field_status',
        'corner' => 'bottom_left',
        'x' => '',
        'y' => '10',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '10',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
    'field_motivation' => array(
      'position' => array(
        'object' => 'field_field_place',
        'corner' => 'bottom_left',
        'x' => '',
        'y' => '10',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '10',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
    'field_notes' => array(
      'position' => array(
        'object' => 'field_field_motivation',
        'corner' => 'bottom_left',
        'x' => '',
        'y' => '10',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '10',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => 'J',
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
    'rendered_entity' => array(
      'position' => array(
        'object' => 'field_field_notes',
        'corner' => 'bottom_left',
        'x' => '',
        'y' => '10',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '10',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
    'page_break' => array(
      'position' => array(
        'object' => 'field_field_notes',
        'corner' => 'bottom_left',
        'x' => '',
        'y' => '10',
        'width' => '',
        'height' => '',
      ),
      'text' => array(
        'font_size' => '1',
        'font_family' => 'default',
        'font_style' => NULL,
        'align' => NULL,
        'hyphenate' => 'none',
        'color' => '3F3636',
      ),
      'render' => array(
        'is_html' => 1,
        'minimal_space' => '1',
        'eval_before' => '',
        'eval_after' => '',
      ),
    ),
  );
  $handler->display->display_options['row_options']['leading_template'] = '0';
  $handler->display->display_options['row_options']['template'] = '0';
  $handler->display->display_options['row_options']['succeed_template'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: High Concept */
  $handler->display->display_options['fields']['field_concept']['id'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['table'] = 'field_data_field_concept';
  $handler->display->display_options['fields']['field_concept']['field'] = 'field_concept';
  $handler->display->display_options['fields']['field_concept']['label'] = '';
  $handler->display->display_options['fields']['field_concept']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_concept']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_concept']['hide_alter_empty'] = FALSE;
  /* Field: Content: Life Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Status';
  $handler->display->display_options['fields']['field_status']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_status']['hide_alter_empty'] = FALSE;
  /* Field: Content: Is the Face Of */
  $handler->display->display_options['fields']['field_place']['id'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['table'] = 'field_data_field_place';
  $handler->display->display_options['fields']['field_place']['field'] = 'field_place';
  $handler->display->display_options['fields']['field_place']['label'] = 'Is the Face of';
  $handler->display->display_options['fields']['field_place']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_place']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_place']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_place']['type'] = 'node_reference_plain';
  /* Field: Content: Motivation */
  $handler->display->display_options['fields']['field_motivation']['id'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['table'] = 'field_data_field_motivation';
  $handler->display->display_options['fields']['field_motivation']['field'] = 'field_motivation';
  $handler->display->display_options['fields']['field_motivation']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_motivation']['hide_alter_empty'] = FALSE;
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_notes']['id'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['table'] = 'field_data_field_notes';
  $handler->display->display_options['fields']['field_notes']['field'] = 'field_notes';
  $handler->display->display_options['fields']['field_notes']['element_label_type'] = 'strong';
  /* Field: PDF: Page Break */
  $handler->display->display_options['fields']['page_break']['id'] = 'page_break';
  $handler->display->display_options['fields']['page_break']['table'] = 'pdf';
  $handler->display->display_options['fields']['page_break']['field'] = 'page_break';
  $handler->display->display_options['fields']['page_break']['label'] = '';
  $handler->display->display_options['fields']['page_break']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['page_break']['last_row'] = 0;
  $handler->display->display_options['path'] = 'faces/print';
  $handler->display->display_options['default_page_format'] = 'LETTER';
  $handler->display->display_options['unit'] = 'pt';
  $handler->display->display_options['margin_left'] = '75';
  $handler->display->display_options['margin_right'] = '50';
  $handler->display->display_options['margin_top'] = '50';
  $handler->display->display_options['margin_bottom'] = '50';
  $handler->display->display_options['default_font_family'] = 'dejavuserif';
  $handler->display->display_options['default_font_style'] = array(
    'b' => 0,
    'i' => 0,
    'u' => 0,
    'd' => 0,
    'o' => 0,
  );
  $handler->display->display_options['default_font_color'] = '3F3636';
  $export['faces'] = $view;

  return $export;
}
