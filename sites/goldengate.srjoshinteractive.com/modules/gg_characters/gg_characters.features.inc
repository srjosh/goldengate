<?php
/**
 * @file
 * gg_characters.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gg_characters_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gg_characters_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function gg_characters_node_info() {
  $items = array(
    'character' => array(
      'name' => t('Character'),
      'base' => 'node_content',
      'description' => t('Characters of the Campaign'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
