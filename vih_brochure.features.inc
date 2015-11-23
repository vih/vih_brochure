<?php
/**
 * @file
 * vih_brochure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_brochure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_brochure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_brochure_node_info() {
  $items = array(
    'vih_brochure' => array(
      'name' => t('Brochure'),
      'base' => 'node_content',
      'description' => t('Used for different <em>brochures</em>'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
