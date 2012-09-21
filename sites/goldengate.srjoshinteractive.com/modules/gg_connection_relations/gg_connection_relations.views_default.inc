<?php
/**
 * @file
 * gg_connection_relations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gg_connection_relations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'display_people_connections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'relation';
  $view->human_name = 'Relationships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Connections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'endpoints' => 'endpoints',
    'rid' => 'rid',
  );
  $handler->display->display_options['row_options']['separator'] = '&nbsp;&nbsp;';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Relation: Relation: Is Connected To (relation -> node) */
  $handler->display->display_options['relationships']['relation_base_is_connected_to_node']['id'] = 'relation_base_is_connected_to_node';
  $handler->display->display_options['relationships']['relation_base_is_connected_to_node']['table'] = 'relation';
  $handler->display->display_options['relationships']['relation_base_is_connected_to_node']['field'] = 'relation_base_is_connected_to_node';
  $handler->display->display_options['relationships']['relation_base_is_connected_to_node']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_base_is_connected_to_node']['entity_deduplication_right'] = 1;
  /* Relationship: Content: Relation: Is Connected To (node &lt;-&gt; node) */
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['id'] = 'relation_is_connected_to_node';
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['field'] = 'relation_is_connected_to_node';
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['relationship'] = 'relation_base_is_connected_to_node';
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['entity_deduplication_left'] = 1;
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['entity_deduplication_right'] = 1;
  /* Field: Relation: Rid */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'relation';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['label'] = '';
  $handler->display->display_options['fields']['rid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['rid']['alter']['text'] = '<a href="/relation/[rid]/edit">Edit</a> | <a href="/relation/[rid]/delete">Delete</a>';
  $handler->display->display_options['fields']['rid']['element_label_colon'] = FALSE;
  /* Field: Relation: Rendered Relation */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_relation';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['alter']['text'] = '[rendered_entity]';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'relation_base_is_connected_to_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['display_people_connections'] = $view;

  $view = new view();
  $view->name = 'graph_relations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Graph relations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Personal Relationships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'thejit_forcedirected';
  $handler->display->display_options['style_options']['mapping']['from']['id'] = 'nid';
  $handler->display->display_options['style_options']['mapping']['from']['label'] = 'title';
  $handler->display->display_options['style_options']['mapping']['from']['uri'] = '0';
  $handler->display->display_options['style_options']['mapping']['to']['id'] = 'nid_1';
  $handler->display->display_options['style_options']['mapping']['to']['label'] = 'title_1';
  $handler->display->display_options['style_options']['mapping']['to']['uri'] = '0';
  $handler->display->display_options['style_options']['graphapi']['width'] = '920';
  $handler->display->display_options['style_options']['graphapi']['height'] = '600';
  $handler->display->display_options['style_options']['graphapi']['background-color'] = 'white';
  $handler->display->display_options['style_options']['thejit_forcedirected']['node_color'] = '#ffffff';
  $handler->display->display_options['style_options']['thejit_forcedirected']['edge_color'] = '#333333';
  $handler->display->display_options['style_options']['thejit_forcedirected']['shape'] = 'square';
  $handler->display->display_options['style_options']['thejit_forcedirected']['level_distance'] = '35';
  /* Relationship: Content: Relation: Is Connected To (node &lt;-&gt; node) */
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['id'] = 'relation_is_connected_to_node';
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['table'] = 'node';
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['field'] = 'relation_is_connected_to_node';
  $handler->display->display_options['relationships']['relation_is_connected_to_node']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'relation_is_connected_to_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'relation_is_connected_to_node';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'relationships';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Relationships';
  $handler->display->display_options['menu']['weight'] = '50';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['graph_relations'] = $view;

  return $export;
}
