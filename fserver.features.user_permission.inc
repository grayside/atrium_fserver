<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function fserver_user_default_permissions() {
  $permissions = array();

  // Exported permission: create fserver_distro content
  $permissions['create fserver_distro content'] = array(
    'name' => 'create fserver_distro content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: create fserver_project content
  $permissions['create fserver_project content'] = array(
    'name' => 'create fserver_project content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: create fserver_release content
  $permissions['create fserver_release content'] = array(
    'name' => 'create fserver_release content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: delete own fserver_distro content
  $permissions['delete own fserver_distro content'] = array(
    'name' => 'delete own fserver_distro content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: delete own fserver_project content
  $permissions['delete own fserver_project content'] = array(
    'name' => 'delete own fserver_project content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: delete own fserver_release content
  $permissions['delete own fserver_release content'] = array(
    'name' => 'delete own fserver_release content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: edit own fserver_distro content
  $permissions['edit own fserver_distro content'] = array(
    'name' => 'edit own fserver_distro content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: edit own fserver_project content
  $permissions['edit own fserver_project content'] = array(
    'name' => 'edit own fserver_project content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  // Exported permission: edit own fserver_release content
  $permissions['edit own fserver_release content'] = array(
    'name' => 'edit own fserver_release content',
    'roles' => array(
      '0' => 'manager',
    ),
  );

  return $permissions;
}
