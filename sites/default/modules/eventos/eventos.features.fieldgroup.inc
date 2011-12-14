<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function eventos_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_evento_localizacao
  $groups['evento-group_evento_localizacao'] = array(
    'group_type' => 'standard',
    'type_name' => 'evento',
    'group_name' => 'group_evento_localizacao',
    'label' => 'Localização',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_evento_estado',
      '1' => 'field_evento_cidade',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Localização');

  return $groups;
}
