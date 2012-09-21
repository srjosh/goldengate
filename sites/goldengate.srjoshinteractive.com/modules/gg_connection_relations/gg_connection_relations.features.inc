<?php
/**
 * @file
 * gg_connection_relations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gg_connection_relations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function gg_connection_relations_views_api() {
  return array("version" => "3.0");
}
