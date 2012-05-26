<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_forum_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_forum';
  $context->description = 'Atrium Forum';
  $context->tag = 'Forum';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'forum' => 'forum',
      ),
    ),
    'node' => array(
      'values' => array(
        'forum' => 'forum',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'forum/*' => 'forum/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'atrium_forum-atrium_forum_list' => array(
          'module' => 'atrium_forum',
          'delta' => 'atrium_forum_list',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'forum',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Atrium Forum');
  t('Forum');
  $export['atrium_forum'] = $context;

  return $export;
}
