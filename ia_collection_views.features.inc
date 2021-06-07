<?php
/**
 * @file
 * ia_collection_views.features.inc
 */

/**
 * Implements hook_block_islandora_options_config_features_default_settings().
 */
function ia_collection_views_block_islandora_options_config_features_default_settings() {
  return array(
  0 => array(
    'cmodel' => 'islandora:collectionCModel',
    'delta' => 'datastreams',
    'module' => 'islandora_blocks',
  ),
);
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ia_collection_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ia_collection_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
