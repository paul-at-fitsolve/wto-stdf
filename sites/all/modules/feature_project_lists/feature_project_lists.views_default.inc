<?php
/**
 * @file
 * feature_project_lists.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_project_lists_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'beneficiaries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Beneficiaries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beneficiaries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['markers'] = 'field';
  $handler->display->display_options['style_options']['markertype'] = 'orange';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['center_on_nodearg'] = 1;
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'nid';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'nid';
  $handler->display->display_options['style_options']['autoclick_on_nodearg_arg'] = 'nid';
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'title';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_beneficiaries_node']['id'] = 'reverse_field_beneficiaries_node';
  $handler->display->display_options['relationships']['reverse_field_beneficiaries_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_beneficiaries_node']['field'] = 'reverse_field_beneficiaries_node';
  $handler->display->display_options['relationships']['reverse_field_beneficiaries_node']['label'] = 'Referencing entity';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
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
    'beneficiary' => 'beneficiary',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'beneficiaries';
  $handler->display->display_options['menu']['title'] = 'Beneficiaries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_beneficiaries_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['block_description'] = 'Beneficiary Map';
  $translatables['beneficiaries'] = array(
    t('Master'),
    t('Beneficiaries'),
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
    t('Referencing entity'),
    t('Title'),
    t('Page'),
    t('Block'),
    t('All'),
    t('Beneficiary Map'),
  );
  $export['beneficiaries'] = $view;

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
  $handler->display->display_options['title'] = 'Project Grants';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Remove filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
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
  /* Field: Content: Reference Number */
  $handler->display->display_options['fields']['field_reference_number']['id'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['table'] = 'field_data_field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['field'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['label'] = 'Ref. #';
  $handler->display->display_options['fields']['field_reference_number']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Beneficiaries';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['element_label_colon'] = FALSE;
  /* Field: Content: Start Date */
  $handler->display->display_options['fields']['field_start_date']['id'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['table'] = 'field_data_field_start_date';
  $handler->display->display_options['fields']['field_start_date']['field'] = 'field_start_date';
  $handler->display->display_options['fields']['field_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_start_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Content: Budget - Total Project Value */
  $handler->display->display_options['fields']['field_budget_total_project_value']['id'] = 'field_budget_total_project_value';
  $handler->display->display_options['fields']['field_budget_total_project_value']['table'] = 'field_data_field_budget_total_project_value';
  $handler->display->display_options['fields']['field_budget_total_project_value']['field'] = 'field_budget_total_project_value';
  $handler->display->display_options['fields']['field_budget_total_project_value']['label'] = 'Budget (US$)';
  $handler->display->display_options['fields']['field_budget_total_project_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_budget_total_project_value']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
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

  /* Display: Project Grants */
  $handler = $view->new_display('page', 'Project Grants', 'page');
  $handler->display->display_options['display_description'] = 'This page holds the view of project grants.';
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
  $handler->display->display_options['path'] = 'projectgrants';
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

  /* Display: Project Preparation Grants */
  $handler = $view->new_display('page', 'Project Preparation Grants', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Preparation Grants';
  $handler->display->display_options['display_description'] = 'This page holds the view of project preparation grants.';
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
  $handler->display->display_options['path'] = 'projectpreparationgrants';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['description'] = 'Details of our projects.';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['projects'] = array(
    t('Master'),
    t('Project Grants'),
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
    t('Ref. #'),
    t('Title'),
    t('Region'),
    t('Sector'),
    t('Start Date'),
    t('Status'),
    t('Budget (US$)'),
    t('Select one or more regions to filter by.'),
    t('FIlter by one or more project status types.'),
    t('Filter by one or more project sectors.'),
    t('Start Year'),
    t('Filter by the year that the project started or is due to start.'),
    t('Filter by one or more beneficiaries.'),
    t('This page holds the view of project grants.'),
    t('Data export'),
    t('Reference Number'),
    t('Agenda'),
    t('Body'),
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
    t('Project Preparation Grants'),
    t('This page holds the view of project preparation grants.'),
  );
  $export['projects'] = $view;

  return $export;
}
