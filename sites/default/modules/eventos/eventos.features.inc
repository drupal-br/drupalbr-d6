<?php

/**
 * Implementation of hook_node_info().
 */
function eventos_node_info() {
  $items = array(
    'evento' => array(
      'name' => t('Evento'),
      'module' => 'features',
      'description' => t('Eventos relacionados a comunidade Drupal Brasil, seja camps, meetups, treinamentos, e etc...'),
      'has_title' => '1',
      'title_label' => t('Nome'),
      'has_body' => '1',
      'body_label' => t('Descrição'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_rules_defaults().
 */
function eventos_rules_defaults() {
  return array(
    'rules' => array(
      'rules_atualizando_evento_gatilho_despublicar' => array(
        '#type' => 'rule',
        '#set' => 'event_node_update',
        '#label' => 'Atualizando Evento - Gatilho Despublicar',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'eventos',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'evento' => 'evento',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Updated content is Evento',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Conteúdo',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'arguments' => array(
                'task_identifier' => array(
                  'type' => 'string',
                  'label' => 'Identifier',
                  'description' => 'User provided string to identify the task. Existing tasks for this rule set with the same identifier will be replaced.',
                ),
                'task_date' => array(
                  'type' => 'date',
                  'label' => 'Scheduled evaluation date',
                ),
                'node' => array(
                  'label' => 'Conteúdo',
                  'type' => 'node',
                ),
              ),
              'label' => 'Schedule "RuleSet Agendar Unpublish de Eventos"',
              'status' => 'custom',
              'categories' => array(
                '0' => 'eventos',
              ),
              'module' => 'Rule Scheduler',
              'base' => 'rules_scheduler_action',
              'set' => 'rules_ruleset_agendar_unpublish_de_eventos',
            ),
            '#name' => 'rules_action_schedule_set_rules_ruleset_agendar_unpublish_de_eventos',
            '#settings' => array(
              'task_identifier' => 'Despublicar Evento [node:nid]',
              'task_date' => '[node:field_evento_data-datetime] +1 day',
              '#argument map' => array(
                'node' => 'node',
              ),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'task_identifier' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'task_date' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_rule_rs_despublica_evento' => array(
        '#type' => 'rule',
        '#set' => 'rules_ruleset_agendar_unpublish_de_eventos',
        '#label' => 'Rule RS Despublica Evento',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'eventos',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'evento' => 'evento',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Conteúdo is Evento',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Conteúdo',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'label' => 'Despublicar Conteúdo',
              'module' => 'Node',
              'arguments' => array(
                'node' => array(
                  'label' => 'Conteúdo',
                  'type' => 'node',
                ),
              ),
              'base' => 'rules_core_action_execute',
              'action_name' => 'node_unpublish_action',
              'configurable' => FALSE,
              'label callback' => 'rules_core_node_label_callback',
              'label_skeleton' => 'Despublicar @node',
            ),
            '#name' => 'rules_core_node_unpublish_action',
            '#settings' => array(
              'auto_save' => 1,
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
      'rules_salvando_novo_evento_gatilho_despublicar' => array(
        '#type' => 'rule',
        '#set' => 'event_node_insert',
        '#label' => 'Salvando novo Evento - Gatilho Despublicar',
        '#active' => 1,
        '#weight' => '0',
        '#categories' => array(
          '0' => 'eventos',
        ),
        '#status' => 'default',
        '#conditions' => array(
          '0' => array(
            '#type' => 'condition',
            '#settings' => array(
              'type' => array(
                'evento' => 'evento',
              ),
              '#argument map' => array(
                'node' => 'node',
              ),
            ),
            '#name' => 'rules_condition_content_is_type',
            '#info' => array(
              'label' => 'Created content is Evento',
              'arguments' => array(
                'node' => array(
                  'type' => 'node',
                  'label' => 'Conteúdo',
                ),
              ),
              'module' => 'Node',
            ),
            '#weight' => 0,
          ),
        ),
        '#actions' => array(
          '0' => array(
            '#weight' => 0,
            '#info' => array(
              'arguments' => array(
                'task_identifier' => array(
                  'type' => 'string',
                  'label' => 'Identifier',
                  'description' => 'User provided string to identify the task. Existing tasks for this rule set with the same identifier will be replaced.',
                ),
                'task_date' => array(
                  'type' => 'date',
                  'label' => 'Scheduled evaluation date',
                ),
                'node' => array(
                  'label' => 'Conteúdo',
                  'type' => 'node',
                ),
              ),
              'label' => 'Schedule "RuleSet Agendar Unpublish de Eventos"',
              'status' => 'custom',
              'categories' => array(
                '0' => 'eventos',
              ),
              'module' => 'Rule Scheduler',
              'base' => 'rules_scheduler_action',
              'set' => 'rules_ruleset_agendar_unpublish_de_eventos',
            ),
            '#name' => 'rules_action_schedule_set_rules_ruleset_agendar_unpublish_de_eventos',
            '#settings' => array(
              'task_identifier' => 'Despublicar Evento [node:nid]',
              'task_date' => '[node:field_evento_data-datetime] +1 day',
              '#argument map' => array(
                'node' => 'node',
              ),
              '#eval input' => array(
                'token_rules_input_evaluator' => array(
                  'task_identifier' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                  'task_date' => array(
                    '0' => 'node',
                    '1' => ':global',
                  ),
                ),
              ),
            ),
            '#type' => 'action',
          ),
        ),
        '#version' => 6003,
      ),
    ),
    'rule_sets' => array(
      'rules_ruleset_agendar_unpublish_de_eventos' => array(
        'arguments' => array(
          'node' => array(
            'label' => 'Conteúdo',
            'type' => 'node',
          ),
        ),
        'label' => 'RuleSet Agendar Unpublish de Eventos',
        'status' => 'default',
        'categories' => array(
          '0' => 'eventos',
          'eventos' => 'eventos',
        ),
      ),
    ),
  );
}

/**
 * Implementation of hook_views_api().
 */
function eventos_views_api() {
  return array(
    'api' => '2',
  );
}
