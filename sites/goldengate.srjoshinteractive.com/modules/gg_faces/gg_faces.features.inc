<?php
/**
 * @file
 * gg_faces.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gg_faces_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gg_faces_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function gg_faces_node_info() {
  $items = array(
    'face' => array(
      'name' => t('Face'),
      'base' => 'node_content',
      'description' => t('The people of San Francisco'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('You can use this form to create a new face for the Ghosts of the Golden Gate. '),
    ),
  );
  return $items;
}
