<?php

/**
 * Implementation of hook_views_default_views().
 */
function forum_pp_link_views_default_views() {
  $views = array();

  // Exported view: forum_pp_ref
  $view = new view;
  $view->name = 'forum_pp_ref';
  $view->description = 'PP being referenced by forum posts';
  $view->tag = 'forum, pp';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('arguments', array(
    'field_forum_pp_nid' => array(
      'default_action' => 'ignore',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'fixed',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'field_forum_pp_nid',
      'table' => 'node_data_field_forum_pp',
      'field' => 'field_forum_pp_nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        10 => 0,
        9 => 0,
        19 => 0,
        14 => 0,
        15 => 0,
        13 => 0,
        5 => 0,
        12 => 0,
        11 => 0,
        16 => 0,
        18 => 0,
        17 => 0,
        7 => 0,
        8 => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        12 => 0,
        11 => 0,
        14 => 0,
        15 => 0,
        16 => 0,
        25 => 0,
        19 => 0,
        23 => 0,
        5 => 0,
        7 => 0,
        18 => 0,
        22 => 0,
        9 => 0,
        24 => 0,
        17 => 0,
        10 => 0,
        27 => 0,
        26 => 0,
        29 => 0,
        28 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'multichoice' => 0,
        'truefalse' => 0,
        'quiz' => 0,
        'forum' => 0,
        'panel' => 0,
        'addit_content' => 0,
        'admin_content' => 0,
        'dv' => 0,
        'internal' => 0,
        'internal_documentation' => 0,
        'item_key' => 0,
        'kb_partner_pages' => 0,
        'link_content_type' => 0,
        'page' => 0,
        'primary_page_content' => 0,
        'story' => 0,
        'to_be_reviewed' => 0,
        'video_embed' => 0,
        'webform' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        12 => 0,
        11 => 0,
        14 => 0,
        15 => 0,
        16 => 0,
        25 => 0,
        19 => 0,
        23 => 0,
        5 => 0,
        7 => 0,
        18 => 0,
        22 => 0,
        9 => 0,
        24 => 0,
        17 => 0,
        10 => 0,
        27 => 0,
        26 => 0,
        29 => 0,
        28 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_node_flag_name' => '*relationship*',
      'validate_argument_node_flag_test' => 'flaggable',
      'validate_argument_node_flag_id_type' => 'id',
      'validate_argument_user_flag_name' => '*relationship*',
      'validate_argument_user_flag_test' => 'flaggable',
      'validate_argument_user_flag_id_type' => 'id',
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'forum' => 'forum',
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
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Forum Topics Related to this PP');
  $handler->override_option('items_per_page', 5);
  $handler->override_option('use_pager', 'mini');
  $handler->override_option('use_more', 1);
  $handler->override_option('use_more_always', 0);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ul',
  ));
  $handler = $view->new_display('node_content', 'Node content', 'node_content_1');
  $handler->override_option('title', 'Forum Topics Related to this Primary Page (PP)');
  $handler->override_option('header', 'Test');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('types', array(
    'primary_page_content' => 'primary_page_content',
  ));
  $handler->override_option('modes', array(
    0 => 'full',
  ));
  $handler->override_option('argument_mode', 'nid');
  $handler->override_option('default_argument', '');
  $handler->override_option('show_title', 1);

  $views[$view->name] = $view;

  return $views;
}
