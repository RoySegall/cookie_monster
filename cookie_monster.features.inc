<?php
/**
 * @file
 * cookie_monster.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cookie_monster_node_info() {
  $items = array(
    'cookies' => array(
      'name' => t('Cookies'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
