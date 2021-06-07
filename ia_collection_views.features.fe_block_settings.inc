<?php
/**
 * @file
 * ia_collection_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ia_collection_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['islandora_blocks-citation'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'citation',
    'icon' => NULL,
    'module' => 'islandora_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'islandarchives' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'islandarchives',
        'weight' => -33,
      ),
      'ohm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ohm',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vanilla' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vanilla',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_blocks-collections'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collections',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'islandarchives' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'islandarchives',
        'weight' => -35,
      ),
      'ohm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ohm',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vanilla' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vanilla',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_blocks-datastreams'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'datastreams',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'islandarchives' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'islandarchives',
        'weight' => -39,
      ),
      'ohm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ohm',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vanilla' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vanilla',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_blocks-metadata'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'metadata',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'islandarchives' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'islandarchives',
        'weight' => -37,
      ),
      'ohm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ohm',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vanilla' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vanilla',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_collection_search-islandora_collection_search'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_collection_search',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_collection_search',
    'node_types' => array(),
    'pages' => 'topics-collection
islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'islandarchives' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'islandarchives',
        'weight' => -36,
      ),
      'ohm' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ohm',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vanilla' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vanilla',
        'weight' => 0,
      ),
    ),
    'title' => 'Collection Search',
    'visibility' => 1,
  );

  return $export;
}
