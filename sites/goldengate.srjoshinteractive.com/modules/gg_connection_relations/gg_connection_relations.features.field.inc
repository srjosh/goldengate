<?php
/**
 * @file
 * gg_connection_relations.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function gg_connection_relations_field_default_fields() {
  $fields = array();

  // Exported field: 'relation-is_connected_to-endpoints'.
  $fields['relation-is_connected_to-endpoints'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'endpoints',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'relation' => array(
          0 => 'entity_type',
          1 => 'entity_id',
          2 => 'r_index',
        ),
      ),
      'locked' => '0',
      'module' => 'relation_endpoint',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'relation_endpoint',
    ),
    'field_instance' => array(
      'bundle' => 'is_connected_to',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'relation_endpoint',
          'settings' => array(
            'view_modes' => array(
              'node' => 'full',
            ),
          ),
          'type' => 'relation_endpoint',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'relation',
      'field_name' => 'endpoints',
      'label' => 'Connections',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'relation_endpoint',
        'settings' => array(),
        'type' => 'relation_endpoint',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'relation-is_connected_to-field_relationship_detail'.
  $fields['relation-is_connected_to-field_relationship_detail'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_relationship_detail',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'is_connected_to',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'relation',
      'field_name' => 'field_relationship_detail',
      'label' => 'Relationship Details',
      'required' => 1,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Connections');
  t('Relationship Details');

  return $fields;
}
