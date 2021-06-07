<?php
/**
 * @file
 * ia_collection_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ia_collection_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'collection_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_titleInfo_title_ms */
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['id'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['field'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['alter']['text'] = '<a href="/islandora/object/[PID]" title="[mods_titleInfo_title_ms] "><img typeof="foaf:Image" src="https://dev.islandarchives.ca/islandora/object/[PID]/datastream/TN/view" alt="[mods_titleInfo_title_ms]" /><br/>
[mods_titleInfo_title_ms]
</a>';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['link_to_object'] = 1;
  /* Field: Islandora Solr: mods_originInfo_edition_ms */
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['id'] = 'mods_originInfo_edition_ms';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['field'] = 'mods_originInfo_edition_ms';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_originInfo_dateIssued_dt */
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['id'] = 'mods_originInfo_dateIssued_dt';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['field'] = 'mods_originInfo_dateIssued_dt';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['label'] = '';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['link_to_object'] = 0;
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['date_format'] = 'custom';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['custom_date_format'] = 'F j, Y';
  /* Filter criterion: Islandora Solr: PID */
  $handler->display->display_options['filters']['PID']['id'] = 'PID';
  $handler->display->display_options['filters']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['PID']['field'] = 'PID';
  $handler->display->display_options['filters']['PID']['value'] = 'topics*';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Topics */
  $handler = $view->new_display('block', 'Topics', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Topics Collection View';
  $handler->display->display_options['display_description'] = 'A view for the topics newsletter.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_originInfo_dateIssued_dt */
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['id'] = 'mods_originInfo_dateIssued_dt';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['field'] = 'mods_originInfo_dateIssued_dt';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['label'] = '';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['link_to_object'] = 0;
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['date_format'] = 'custom';
  $handler->display->display_options['fields']['mods_originInfo_dateIssued_dt']['custom_date_format'] = 'F j, Y';
  /* Field: Islandora Solr: mods_originInfo_edition_ms */
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['id'] = 'mods_originInfo_edition_ms';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['field'] = 'mods_originInfo_edition_ms';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['exclude'] = TRUE;
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_originInfo_edition_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: mods_titleInfo_title_ms */
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['id'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['field'] = 'mods_titleInfo_title_ms';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['alter']['text'] = '<a href="/islandora/object/[PID]" title="[mods_titleInfo_title_ms] "><img typeof="foaf:Image" src="https://dev.islandarchives.ca/islandora/object/[PID]/datastream/TN/view" alt="[mods_titleInfo_title_ms]" /><br/>
[mods_titleInfo_title_ms]<br/>
[mods_originInfo_edition_ms]<br/>
[mods_originInfo_dateIssued_dt]</a><br/>';
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mods_titleInfo_title_ms']['link_to_object'] = 1;
  $translatables['collection_view'] = array(
    t('Master'),
    t('Collection View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="/islandora/object/[PID]" title="[mods_titleInfo_title_ms] "><img typeof="foaf:Image" src="https://dev.islandarchives.ca/islandora/object/[PID]/datastream/TN/view" alt="[mods_titleInfo_title_ms]" /><br/>
[mods_titleInfo_title_ms]
</a>'),
    t('Block'),
    t('Topics'),
    t('Topics Collection View'),
    t('A view for the topics newsletter.'),
    t('<a href="/islandora/object/[PID]" title="[mods_titleInfo_title_ms] "><img typeof="foaf:Image" src="https://dev.islandarchives.ca/islandora/object/[PID]/datastream/TN/view" alt="[mods_titleInfo_title_ms]" /><br/>
[mods_titleInfo_title_ms]<br/>
[mods_originInfo_edition_ms]<br/>
[mods_originInfo_dateIssued_dt]</a><br/>'),
  );
  $export['collection_view'] = $view;

  return $export;
}
