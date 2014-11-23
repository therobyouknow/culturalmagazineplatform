<?php
/**
 * @file
 * cmp_multi_media_article.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cmp_multi_media_article_node_info() {
  $items = array(
    'multi_media_article' => array(
      'name' => t('Multi Media Article'),
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
