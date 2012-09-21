<?php
/**
 * @file
 * gg_places.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gg_places_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gg_places_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function gg_places_node_info() {
  $items = array(
    'place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => t('Locations in and around San Francisco'),
      'has_title' => '1',
      'title_label' => t('Location Name'),
      'help' => t('You can use this form to create a new place for the Ghosts of the Golden Gate Campaign'),
    ),
  );
  return $items;
}
