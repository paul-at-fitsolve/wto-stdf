<?php
/**
 * @file
 * wto_theme_settings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function wto_theme_settings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Calendar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  /* Sort criterion: Content: Date and Time -  start date (field_date_and_time) */
  $handler->display->display_options['sorts']['field_date_and_time_value']['id'] = 'field_date_and_time_value';
  $handler->display->display_options['sorts']['field_date_and_time_value']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['sorts']['field_date_and_time_value']['field'] = 'field_date_and_time_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date_and_time.field_date_and_time_value' => 'field_data_field_date_and_time.field_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date-and-time/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Event Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'main-menu';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'week';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date_and_time.field_date_and_time_value' => 'field_data_field_date_and_time.field_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date-and-time/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date_and_time.field_date_and_time_value' => 'field_data_field_date_and_time.field_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date-and-time/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => '',
  );
  $handler->display->display_options['fields']['field_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date_and_time.field_date_and_time_value' => 'field_data_field_date_and_time.field_date_and_time_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-date-and-time/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_date_and_time.field_date_and_time_value' => 'field_data_field_date_and_time.field_date_and_time_value',
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date_and_time.field_date_and_time_value' => 'field_data_field_date_and_time.field_date_and_time_value',
  );

  /* Display: Mini upcoming */
  $handler = $view->new_display('block', 'Mini upcoming', 'mini_upcoming');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['display_description'] = 'Upcoming events block';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/events" class="action-button more-events">MORE EVENTS</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_date_and_time']['id'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_and_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['settings'] = array(
    'format_type' => 'mini_calendar_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_date_and_time']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time']['delta_offset'] = '0';
  /* Field: Content: Date and Time */
  $handler->display->display_options['fields']['field_date_and_time_1']['id'] = 'field_date_and_time_1';
  $handler->display->display_options['fields']['field_date_and_time_1']['table'] = 'field_data_field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time_1']['field'] = 'field_date_and_time';
  $handler->display->display_options['fields']['field_date_and_time_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_and_time_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date_and_time_1']['alter']['text'] = '<div class="mini-date">[field_date_and_time]<div class="mini-month">[field_date_and_time_1]</div></div>';
  $handler->display->display_options['fields']['field_date_and_time_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_and_time_1']['settings'] = array(
    'format_type' => 'mini_calendar_month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  /* Field: Content: Organiser */
  $handler->display->display_options['fields']['field_organiser']['id'] = 'field_organiser';
  $handler->display->display_options['fields']['field_organiser']['table'] = 'field_data_field_organiser';
  $handler->display->display_options['fields']['field_organiser']['field'] = 'field_organiser';
  $handler->display->display_options['fields']['field_organiser']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organiser']['alter']['text'] = '<div class="mini-row"><div class="split">[field_location]</div><div class="split">[field_organiser]</div></div>';
  $handler->display->display_options['fields']['field_organiser']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_date_and_time.field_date_and_time_value' => 'field_data_field_date_and_time.field_date_and_time_value',
  );
  $handler->display->display_options['block_description'] = 'Mini upcoming events';
  $translatables['calendar'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Location'),
    t('Month'),
    t('All'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('Upcoming'),
    t('Upcoming events block'),
    t('Mini upcoming'),
    t('Events'),
    t('<a href="/events" class="action-button more-events">MORE EVENTS</a>'),
    t('<div class="mini-date">[field_date_and_time]<div class="mini-month">[field_date_and_time_1]</div></div>'),
    t('Organiser'),
    t('<div class="mini-row"><div class="split">[field_location]</div><div class="split">[field_organiser]</div></div>'),
    t('Mini upcoming events'),
  );
  $export['calendar'] = $view;

  $view = new view();
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Remove filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_reference_number' => 'field_reference_number',
    'field_agenda' => 'field_agenda',
    'body' => 'body',
    'field_region' => 'field_region',
    'field_status' => 'field_status',
    'field_sector' => 'field_sector',
    'field_start_date' => 'field_start_date',
    'field_status_1' => 'field_status_1',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reference_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_agenda' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sector' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['id'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['table'] = 'field_data_field_beneficiaries';
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['field'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['label'] = 'Beneficiaries';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Reference Number */
  $handler->display->display_options['fields']['field_reference_number']['id'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['table'] = 'field_data_field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['field'] = 'field_reference_number';
  /* Field: Content: Agenda */
  $handler->display->display_options['fields']['field_agenda']['id'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['fields']['field_agenda']['field'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_agenda']['type'] = 'file_url_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status_1']['id'] = 'field_status_1';
  $handler->display->display_options['fields']['field_status_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_1']['field'] = 'field_status';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Beneficiaries';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'Project' => 'Project',
  );
  $handler->display->display_options['filters']['field_type_value']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'all' => 'all',
    '002' => '002',
    142 => '142',
    'Global' => 'Global',
    'LAC' => 'LAC',
    'Other' => 'Other',
  );
  $handler->display->display_options['filters']['field_region_value']['group'] = 1;
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['description'] = 'Select one or more regions to filter by.';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_region_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value_1']['id'] = 'field_status_value_1';
  $handler->display->display_options['filters']['field_status_value_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_1']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value_1']['value'] = array(
    'all' => 'all',
    'Awaiting' => 'Awaiting',
    'Completed' => 'Completed',
    'On-going' => 'On-going',
  );
  $handler->display->display_options['filters']['field_status_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_1']['expose']['operator_id'] = 'field_status_value_1_op';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['description'] = 'FIlter by one or more project status types.';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['operator'] = 'field_status_value_1_op';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['identifier'] = 'field_status_value_1';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_status_value_1']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Sector (field_sector) */
  $handler->display->display_options['filters']['field_sector_value']['id'] = 'field_sector_value';
  $handler->display->display_options['filters']['field_sector_value']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_value']['field'] = 'field_sector_value';
  $handler->display->display_options['filters']['field_sector_value']['value'] = array(
    'all' => 'all',
    'Animal Health' => 'Animal Health',
    'Food Safety' => 'Food Safety',
    'General SPS' => 'General SPS',
    'Plant Health' => 'Plant Health',
  );
  $handler->display->display_options['filters']['field_sector_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value']['expose']['operator_id'] = 'field_sector_value_op';
  $handler->display->display_options['filters']['field_sector_value']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_value']['expose']['description'] = 'Filter by one or more project sectors.';
  $handler->display->display_options['filters']['field_sector_value']['expose']['operator'] = 'field_sector_value_op';
  $handler->display->display_options['filters']['field_sector_value']['expose']['identifier'] = 'field_sector_value';
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_sector_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Start Date -  start date (field_start_date) */
  $handler->display->display_options['filters']['field_start_date_value']['id'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['filters']['field_start_date_value']['field'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_start_date_value']['expose']['operator_id'] = 'field_start_date_value_op';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['label'] = 'Start Year';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['description'] = 'Filter by the year that the project started or is due to start.';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['operator'] = 'field_start_date_value_op';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['identifier'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_start_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_start_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_start_date_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Revoked' => 'Revoked',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Filter by one or more beneficiaries.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Project Page */
  $handler = $view->new_display('page', 'Project Page', 'page');
  $handler->display->display_options['display_description'] = 'This page holds the view of projects.';
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_reference_number' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_agenda' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'body' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_status' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_sector' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_start_date' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_illustration' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_status_1' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'title_1' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'projects';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['description'] = 'Details of our projects.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = '%view%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Reference Number */
  $handler->display->display_options['fields']['field_reference_number']['id'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['table'] = 'field_data_field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['field'] = 'field_reference_number';
  /* Field: Content: Agenda */
  $handler->display->display_options['fields']['field_agenda']['id'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['table'] = 'field_data_field_agenda';
  $handler->display->display_options['fields']['field_agenda']['field'] = 'field_agenda';
  $handler->display->display_options['fields']['field_agenda']['click_sort_column'] = 'fid';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_illustration']['id'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['table'] = 'field_data_field_illustration';
  $handler->display->display_options['fields']['field_illustration']['field'] = 'field_illustration';
  $handler->display->display_options['fields']['field_illustration']['label'] = 'Illustration';
  $handler->display->display_options['fields']['field_illustration']['hide_empty'] = TRUE;
  /* Field: Content: Beneficiaries */
  $handler->display->display_options['fields']['field_beneficiaries']['id'] = 'field_beneficiaries';
  $handler->display->display_options['fields']['field_beneficiaries']['table'] = 'field_data_field_beneficiaries';
  $handler->display->display_options['fields']['field_beneficiaries']['field'] = 'field_beneficiaries';
  $handler->display->display_options['fields']['field_beneficiaries']['relationship'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['fields']['field_beneficiaries']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_beneficiaries']['settings'] = array(
    'view_mode' => 'full',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_beneficiaries']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status_1']['id'] = 'field_status_1';
  $handler->display->display_options['fields']['field_status_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_1']['field'] = 'field_status';
  /* Field: Content: Accounting Code */
  $handler->display->display_options['fields']['field_accounting_code']['id'] = 'field_accounting_code';
  $handler->display->display_options['fields']['field_accounting_code']['table'] = 'field_data_field_accounting_code';
  $handler->display->display_options['fields']['field_accounting_code']['field'] = 'field_accounting_code';
  /* Field: Content: ACP */
  $handler->display->display_options['fields']['field_acp']['id'] = 'field_acp';
  $handler->display->display_options['fields']['field_acp']['table'] = 'field_data_field_acp';
  $handler->display->display_options['fields']['field_acp']['field'] = 'field_acp';
  /* Field: Content: Actions */
  $handler->display->display_options['fields']['field_actions']['id'] = 'field_actions';
  $handler->display->display_options['fields']['field_actions']['table'] = 'field_data_field_actions';
  $handler->display->display_options['fields']['field_actions']['field'] = 'field_actions';
  $handler->display->display_options['fields']['field_actions']['delta_offset'] = '0';
  /* Field: Content: Actions Required */
  $handler->display->display_options['fields']['field_actions_required']['id'] = 'field_actions_required';
  $handler->display->display_options['fields']['field_actions_required']['table'] = 'field_data_field_actions_required';
  $handler->display->display_options['fields']['field_actions_required']['field'] = 'field_actions_required';
  $handler->display->display_options['fields']['field_actions_required']['delta_offset'] = '0';
  /* Field: Content: Approval Date */
  $handler->display->display_options['fields']['field_approval_date']['id'] = 'field_approval_date';
  $handler->display->display_options['fields']['field_approval_date']['table'] = 'field_data_field_approval_date';
  $handler->display->display_options['fields']['field_approval_date']['field'] = 'field_approval_date';
  $handler->display->display_options['fields']['field_approval_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Beneficiaries */
  $handler->display->display_options['fields']['field_beneficiaries_1']['id'] = 'field_beneficiaries_1';
  $handler->display->display_options['fields']['field_beneficiaries_1']['table'] = 'field_data_field_beneficiaries';
  $handler->display->display_options['fields']['field_beneficiaries_1']['field'] = 'field_beneficiaries';
  $handler->display->display_options['fields']['field_beneficiaries_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_beneficiaries_1']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body_1']['id'] = 'body_1';
  $handler->display->display_options['fields']['body_1']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_1']['field'] = 'body';
  /* Field: Content: Budget - Euros */
  $handler->display->display_options['fields']['field_budget_euros']['id'] = 'field_budget_euros';
  $handler->display->display_options['fields']['field_budget_euros']['table'] = 'field_data_field_budget_euros';
  $handler->display->display_options['fields']['field_budget_euros']['field'] = 'field_budget_euros';
  $handler->display->display_options['fields']['field_budget_euros']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Budget - Implementation */
  $handler->display->display_options['fields']['field_budget_implementation']['id'] = 'field_budget_implementation';
  $handler->display->display_options['fields']['field_budget_implementation']['table'] = 'field_data_field_budget_implementation';
  $handler->display->display_options['fields']['field_budget_implementation']['field'] = 'field_budget_implementation';
  $handler->display->display_options['fields']['field_budget_implementation']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Budget - Non STDF Contribution */
  $handler->display->display_options['fields']['field_budget_non_stdf_contributi']['id'] = 'field_budget_non_stdf_contributi';
  $handler->display->display_options['fields']['field_budget_non_stdf_contributi']['table'] = 'field_data_field_budget_non_stdf_contributi';
  $handler->display->display_options['fields']['field_budget_non_stdf_contributi']['field'] = 'field_budget_non_stdf_contributi';
  $handler->display->display_options['fields']['field_budget_non_stdf_contributi']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Budget - Supervision Implementation */
  $handler->display->display_options['fields']['field_budget_supervision_impleme']['id'] = 'field_budget_supervision_impleme';
  $handler->display->display_options['fields']['field_budget_supervision_impleme']['table'] = 'field_data_field_budget_supervision_impleme';
  $handler->display->display_options['fields']['field_budget_supervision_impleme']['field'] = 'field_budget_supervision_impleme';
  $handler->display->display_options['fields']['field_budget_supervision_impleme']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Budget - Swiss Francs */
  $handler->display->display_options['fields']['field_budget_swiss_francs']['id'] = 'field_budget_swiss_francs';
  $handler->display->display_options['fields']['field_budget_swiss_francs']['table'] = 'field_data_field_budget_swiss_francs';
  $handler->display->display_options['fields']['field_budget_swiss_francs']['field'] = 'field_budget_swiss_francs';
  $handler->display->display_options['fields']['field_budget_swiss_francs']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Budget - Total Project Value */
  $handler->display->display_options['fields']['field_budget_total_project_value']['id'] = 'field_budget_total_project_value';
  $handler->display->display_options['fields']['field_budget_total_project_value']['table'] = 'field_data_field_budget_total_project_value';
  $handler->display->display_options['fields']['field_budget_total_project_value']['field'] = 'field_budget_total_project_value';
  $handler->display->display_options['fields']['field_budget_total_project_value']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Budget - Total STDF */
  $handler->display->display_options['fields']['field_budget_total_stdf']['id'] = 'field_budget_total_stdf';
  $handler->display->display_options['fields']['field_budget_total_stdf']['table'] = 'field_data_field_budget_total_stdf';
  $handler->display->display_options['fields']['field_budget_total_stdf']['field'] = 'field_budget_total_stdf';
  $handler->display->display_options['fields']['field_budget_total_stdf']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Comments */
  $handler->display->display_options['fields']['field_comments']['id'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['table'] = 'field_data_field_comments';
  $handler->display->display_options['fields']['field_comments']['field'] = 'field_comments';
  $handler->display->display_options['fields']['field_comments']['delta_offset'] = '0';
  /* Field: Content: DAC */
  $handler->display->display_options['fields']['field_dac']['id'] = 'field_dac';
  $handler->display->display_options['fields']['field_dac']['table'] = 'field_data_field_dac';
  $handler->display->display_options['fields']['field_dac']['field'] = 'field_dac';
  /* Field: Content: Documents */
  $handler->display->display_options['fields']['field_documents']['id'] = 'field_documents';
  $handler->display->display_options['fields']['field_documents']['table'] = 'field_data_field_documents';
  $handler->display->display_options['fields']['field_documents']['field'] = 'field_documents';
  $handler->display->display_options['fields']['field_documents']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_documents']['delta_offset'] = '0';
  /* Field: Content: End Date */
  $handler->display->display_options['fields']['field_end_date']['id'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['table'] = 'field_data_field_end_date';
  $handler->display->display_options['fields']['field_end_date']['field'] = 'field_end_date';
  $handler->display->display_options['fields']['field_end_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Extension Date */
  $handler->display->display_options['fields']['field_extension_date']['id'] = 'field_extension_date';
  $handler->display->display_options['fields']['field_extension_date']['table'] = 'field_data_field_extension_date';
  $handler->display->display_options['fields']['field_extension_date']['field'] = 'field_extension_date';
  $handler->display->display_options['fields']['field_extension_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Implementing Entity */
  $handler->display->display_options['fields']['field_implementing_entity']['id'] = 'field_implementing_entity';
  $handler->display->display_options['fields']['field_implementing_entity']['table'] = 'field_data_field_implementing_entity';
  $handler->display->display_options['fields']['field_implementing_entity']['field'] = 'field_implementing_entity';
  $handler->display->display_options['fields']['field_implementing_entity']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_implementing_entity']['delta_offset'] = '0';
  /* Field: Content: PPG Outcome */
  $handler->display->display_options['fields']['field_ppg_outcome']['id'] = 'field_ppg_outcome';
  $handler->display->display_options['fields']['field_ppg_outcome']['table'] = 'field_data_field_ppg_outcome';
  $handler->display->display_options['fields']['field_ppg_outcome']['field'] = 'field_ppg_outcome';
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_type']['id'] = 'field_type';
  $handler->display->display_options['fields']['field_type']['table'] = 'field_data_field_type';
  $handler->display->display_options['fields']['field_type']['field'] = 'field_type';
  /* Field: Content: Responsible */
  $handler->display->display_options['fields']['field_responsible']['id'] = 'field_responsible';
  $handler->display->display_options['fields']['field_responsible']['table'] = 'field_data_field_responsible';
  $handler->display->display_options['fields']['field_responsible']['field'] = 'field_responsible';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector_1']['id'] = 'field_sector_1';
  $handler->display->display_options['fields']['field_sector_1']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector_1']['field'] = 'field_sector';
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date_1']['id'] = 'field_start_date_1';
  $handler->display->display_options['fields']['field_start_date_1']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date_1']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status_2']['id'] = 'field_status_2';
  $handler->display->display_options['fields']['field_status_2']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_2']['field'] = 'field_status';
  /* Field: Content: Supervision */
  $handler->display->display_options['fields']['field_supervision']['id'] = 'field_supervision';
  $handler->display->display_options['fields']['field_supervision']['table'] = 'field_data_field_supervision';
  $handler->display->display_options['fields']['field_supervision']['field'] = 'field_supervision';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Project Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'Project' => 'Project',
    'PPG' => 'PPG',
  );
  $handler->display->display_options['filters']['field_type_value']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) */
  $handler->display->display_options['filters']['field_region_value']['id'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_value']['field'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['value'] = array(
    'all' => 'all',
    '002' => '002',
    142 => '142',
    'Global' => 'Global',
    'LAC' => 'LAC',
    'Other' => 'Other',
  );
  $handler->display->display_options['filters']['field_region_value']['group'] = 1;
  $handler->display->display_options['filters']['field_region_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['operator_id'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_value']['expose']['description'] = 'Select one or more regions to filter by.';
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_region_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value_1']['id'] = 'field_status_value_1';
  $handler->display->display_options['filters']['field_status_value_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_1']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value_1']['value'] = array(
    'all' => 'all',
    'Awaiting' => 'Awaiting',
    'Completed' => 'Completed',
    'On-going' => 'On-going',
  );
  $handler->display->display_options['filters']['field_status_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_1']['expose']['operator_id'] = 'field_status_value_1_op';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['description'] = 'FIlter by one or more project status types.';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['operator'] = 'field_status_value_1_op';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['identifier'] = 'field_status_value_1';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_1']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember_roles'] = array(
    2 => 0,
    4 => '4',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_status_value_1']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Sector (field_sector) */
  $handler->display->display_options['filters']['field_sector_value']['id'] = 'field_sector_value';
  $handler->display->display_options['filters']['field_sector_value']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_value']['field'] = 'field_sector_value';
  $handler->display->display_options['filters']['field_sector_value']['value'] = array(
    'all' => 'all',
    'Animal Health' => 'Animal Health',
    'Food Safety' => 'Food Safety',
    'General SPS' => 'General SPS',
    'Plant Health' => 'Plant Health',
  );
  $handler->display->display_options['filters']['field_sector_value']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value']['expose']['operator_id'] = 'field_sector_value_op';
  $handler->display->display_options['filters']['field_sector_value']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_value']['expose']['description'] = 'Filter by one or more project sectors.';
  $handler->display->display_options['filters']['field_sector_value']['expose']['operator'] = 'field_sector_value_op';
  $handler->display->display_options['filters']['field_sector_value']['expose']['identifier'] = 'field_sector_value';
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_sector_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Start Date -  start date (field_start_date) */
  $handler->display->display_options['filters']['field_start_date_value']['id'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['filters']['field_start_date_value']['field'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_start_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_start_date_value']['expose']['operator_id'] = 'field_start_date_value_op';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['label'] = 'Start Year';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['description'] = 'Filter by the year that the project started or is due to start.';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['operator'] = 'field_start_date_value_op';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['identifier'] = 'field_start_date_value';
  $handler->display->display_options['filters']['field_start_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_start_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_start_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_start_date_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['path'] = 'stdf_database';
  $translatables['projects'] = array(
    t('Master'),
    t('Projects'),
    t('more'),
    t('Apply'),
    t('Remove filters'),
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
    t('Beneficiaries'),
    t('Title'),
    t('Reference Number'),
    t('Agenda'),
    t('Body'),
    t('Region'),
    t('Status'),
    t('Sector'),
    t('Start Date'),
    t('Select one or more regions to filter by.'),
    t('FIlter by one or more project status types.'),
    t('Filter by one or more project sectors.'),
    t('Start Year'),
    t('Filter by the year that the project started or is due to start.'),
    t('Filter by one or more beneficiaries.'),
    t('Project Page'),
    t('This page holds the view of projects.'),
    t('Data export'),
    t('Illustration'),
    t('Accounting Code'),
    t('ACP'),
    t('Actions'),
    t('Actions Required'),
    t('Approval Date'),
    t('Budget - Euros'),
    t('Budget - Implementation'),
    t('Budget - Non STDF Contribution'),
    t('Budget - Supervision Implementation'),
    t('Budget - Swiss Francs'),
    t('Budget - Total Project Value'),
    t('Budget - Total STDF'),
    t('Comments'),
    t('DAC'),
    t('Documents'),
    t('End Date'),
    t('Extension Date'),
    t('Implementing Entity'),
    t('PPG Outcome'),
    t('Project Type'),
    t('Responsible'),
    t('Supervision'),
  );
  $export['projects'] = $view;

  return $export;
}
