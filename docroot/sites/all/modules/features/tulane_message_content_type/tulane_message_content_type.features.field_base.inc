<?php
/**
 * @file
 * tulane_message_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tulane_message_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_campaigns'
  $field_bases['field_campaigns'] = array(
    'active' => 1,
    'cardinality' => 4,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_campaigns',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Global Leadership' => 'Global Leadership',
        'Freeman Learning' => 'Freeman Learning',
        'Collaborative Community' => 'Collaborative Community',
        'Career Capitol' => 'Career Capitol',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
