<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function eventos_user_default_permissions() {
  $permissions = array();

  // Exported permission: create evento content
  $permissions['create evento content'] = array(
    'name' => 'create evento content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: delete own evento content
  $permissions['delete own evento content'] = array(
    'name' => 'delete own evento content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_evento_banner
  $permissions['edit field_evento_banner'] = array(
    'name' => 'edit field_evento_banner',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_evento_cidade
  $permissions['edit field_evento_cidade'] = array(
    'name' => 'edit field_evento_cidade',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_evento_data
  $permissions['edit field_evento_data'] = array(
    'name' => 'edit field_evento_data',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_evento_estado
  $permissions['edit field_evento_estado'] = array(
    'name' => 'edit field_evento_estado',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit field_evento_tipo
  $permissions['edit field_evento_tipo'] = array(
    'name' => 'edit field_evento_tipo',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: edit own evento content
  $permissions['edit own evento content'] = array(
    'name' => 'edit own evento content',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'super admin',
    ),
  );

  // Exported permission: view field_evento_banner
  $permissions['view field_evento_banner'] = array(
    'name' => 'view field_evento_banner',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_evento_cidade
  $permissions['view field_evento_cidade'] = array(
    'name' => 'view field_evento_cidade',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_evento_data
  $permissions['view field_evento_data'] = array(
    'name' => 'view field_evento_data',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_evento_estado
  $permissions['view field_evento_estado'] = array(
    'name' => 'view field_evento_estado',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  // Exported permission: view field_evento_tipo
  $permissions['view field_evento_tipo'] = array(
    'name' => 'view field_evento_tipo',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
      '2' => 'super admin',
    ),
  );

  return $permissions;
}
