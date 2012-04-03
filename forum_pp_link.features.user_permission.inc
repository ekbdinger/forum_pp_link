<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function forum_pp_link_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_forum_pp
  $permissions['edit field_forum_pp'] = array(
    'name' => 'edit field_forum_pp',
    'roles' => array(
      '0' => 'Administrator',
    ),
  );

  // Exported permission: view field_forum_pp
  $permissions['view field_forum_pp'] = array(
    'name' => 'view field_forum_pp',
    'roles' => array(
      '0' => 'General Role',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
