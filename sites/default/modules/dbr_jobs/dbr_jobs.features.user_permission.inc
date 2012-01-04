<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dbr_jobs_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_dbr_jobs_contato
  $permissions['edit field_dbr_jobs_contato'] = array(
    'name' => 'edit field_dbr_jobs_contato',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_dbr_jobs_diferencial
  $permissions['edit field_dbr_jobs_diferencial'] = array(
    'name' => 'edit field_dbr_jobs_diferencial',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_dbr_jobs_empresa
  $permissions['edit field_dbr_jobs_empresa'] = array(
    'name' => 'edit field_dbr_jobs_empresa',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_dbr_jobs_local
  $permissions['edit field_dbr_jobs_local'] = array(
    'name' => 'edit field_dbr_jobs_local',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_dbr_jobs_logo
  $permissions['edit field_dbr_jobs_logo'] = array(
    'name' => 'edit field_dbr_jobs_logo',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_dbr_jobs_remoto
  $permissions['edit field_dbr_jobs_remoto'] = array(
    'name' => 'edit field_dbr_jobs_remoto',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_dbr_jobs_requisitos
  $permissions['edit field_dbr_jobs_requisitos'] = array(
    'name' => 'edit field_dbr_jobs_requisitos',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_dbr_jobs_vaga
  $permissions['edit field_dbr_jobs_vaga'] = array(
    'name' => 'edit field_dbr_jobs_vaga',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_contato
  $permissions['view field_dbr_jobs_contato'] = array(
    'name' => 'view field_dbr_jobs_contato',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_diferencial
  $permissions['view field_dbr_jobs_diferencial'] = array(
    'name' => 'view field_dbr_jobs_diferencial',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_empresa
  $permissions['view field_dbr_jobs_empresa'] = array(
    'name' => 'view field_dbr_jobs_empresa',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_local
  $permissions['view field_dbr_jobs_local'] = array(
    'name' => 'view field_dbr_jobs_local',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_logo
  $permissions['view field_dbr_jobs_logo'] = array(
    'name' => 'view field_dbr_jobs_logo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_remoto
  $permissions['view field_dbr_jobs_remoto'] = array(
    'name' => 'view field_dbr_jobs_remoto',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_requisitos
  $permissions['view field_dbr_jobs_requisitos'] = array(
    'name' => 'view field_dbr_jobs_requisitos',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_dbr_jobs_vaga
  $permissions['view field_dbr_jobs_vaga'] = array(
    'name' => 'view field_dbr_jobs_vaga',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  return $permissions;
}
