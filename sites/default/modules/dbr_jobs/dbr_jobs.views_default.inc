<?php

/**
 * Implementation of hook_views_default_views().
 */
function dbr_jobs_views_default_views() {
  $views = array();

  // Exported view: dbr_jobs_listagem
  $view = new view;
  $view->name = 'dbr_jobs_listagem';
  $view->description = 'Listagem das oportunidades';
  $view->tag = 'dbr_jobs';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('sorts', array(
    'created' => array(
      'order' => 'DESC',
      'granularity' => 'second',
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'dbr_jobs' => 'dbr_jobs',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_dbr_jobs_remoto_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_dbr_jobs_remoto_value_many_to_one_op',
        'identifier' => 'field_dbr_jobs_remoto_value_many_to_one',
        'label' => 'Aceita Trabalho Remoto',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_dbr_jobs_remoto_value_many_to_one',
      'table' => 'node_data_field_dbr_jobs_remoto',
      'field' => 'field_dbr_jobs_remoto_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 1,
    ),
    'field_dbr_jobs_vaga_value_many_to_one' => array(
      'operator' => 'or',
      'value' => array(),
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'field_dbr_jobs_vaga_value_many_to_one_op',
        'identifier' => 'field_dbr_jobs_vaga_value_many_to_one',
        'label' => 'Tipo de vaga',
        'optional' => 1,
        'single' => 1,
        'remember' => 0,
        'reduce' => 0,
      ),
      'id' => 'field_dbr_jobs_vaga_value_many_to_one',
      'table' => 'node_data_field_dbr_jobs_vaga',
      'field' => 'field_dbr_jobs_vaga_value_many_to_one',
      'relationship' => 'none',
      'reduce_duplicates' => 1,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Oportunidades');
  $handler->override_option('empty', 'Nenhuma oportunidade cadastrada.');
  $handler->override_option('empty_format', '1');
  $handler->override_option('use_pager', '1');
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 1,
    'comments' => 0,
  ));
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->override_option('path', 'oportunidades');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Oportunidades',
    'description' => 'Ofertas de empregos e trabalhos',
    'weight' => '10',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
