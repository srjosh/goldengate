<?php
/**
 * @file
 * gg_faces.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gg_faces_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dminfo|node|face|default';
  $field_group->group_name = 'group_dminfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'face';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'DM Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_dmnotes',
      1 => 'field_character_sheet',
      2 => 'field_npc_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_dminfo|node|face|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dminfo|node|face|form';
  $field_group->group_name = 'group_dminfo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'face';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'DM Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_dmnotes',
      1 => 'field_character_sheet',
      2 => 'field_npc_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dminfo|node|face|form'] = $field_group;

  return $export;
}
