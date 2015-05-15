<?php
/**
 * @file
 * litmos_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function litmos_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function litmos_feature_node_info() {
  $items = array(
    'litmos_course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('Litmos course'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
