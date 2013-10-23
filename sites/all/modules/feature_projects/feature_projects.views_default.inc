<?php
/**
 * @file
 * feature_projects.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_projects_views_default_views() {
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
  /* Relationship: Broken/missing handler */
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

  /* Display: Combined Beneficiaries */
  $handler = $view->new_display('block', 'Combined Beneficiaries', 'block_1');
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
    t('Combined Beneficiaries'),
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
    'field_reference_number' => 'view_node',
    'view_node' => 'view_node',
    'title' => 'title',
    'title_1' => 'title_1',
    'field_region' => 'field_region',
    'field_sector' => 'field_sector',
    'field_start_date' => 'field_start_date',
    'field_status' => 'field_status',
    'field_budget_total_project_value' => 'field_budget_total_project_value',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reference_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 1,
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
    'field_sector' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_start_date' => array(
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
    'field_budget_total_project_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['id'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['table'] = 'field_data_field_beneficiaries';
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['field'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['relationships']['field_beneficiaries_target_id']['label'] = 'Beneficiaries';
  /* Field: Content: Reference Number */
  $handler->display->display_options['fields']['field_reference_number']['id'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['table'] = 'field_data_field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['field'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['label'] = 'Ref. #';
  $handler->display->display_options['fields']['field_reference_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reference_number']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Ref #';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_reference_number]';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Beneficiaries';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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
    'scale' => '0',
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
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_status_value_1']['expose']['operator'] = 'field_status_value_1_op';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['identifier'] = 'field_status_value_1';
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    4 => '4',
    3 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_sector_value']['expose']['operator'] = 'field_sector_value_op';
  $handler->display->display_options['filters']['field_sector_value']['expose']['identifier'] = 'field_sector_value';
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sector_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Start typing the beneficiary\'s name for suggestions.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
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

  /* Display: Project Preparation Grants */
  $handler = $view->new_display('page', 'Project Preparation Grants', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Preparation Grants';
  $handler->display->display_options['display_description'] = 'This page holds the view of project preparation grants.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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
  $handler->display->display_options['filters']['field_region_value']['expose']['operator'] = 'field_region_value_op';
  $handler->display->display_options['filters']['field_region_value']['expose']['identifier'] = 'field_region_value';
  $handler->display->display_options['filters']['field_region_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    4 => '4',
    3 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sector_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_beneficiaries_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['title']['expose']['description'] = 'Start typing the beneficiary\'s name for suggestions.';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title_1';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
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

  /* Display: Project Grants Download */
  $handler = $view->new_display('views_data_export', 'Project Grants Download', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Grants Download';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
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
  $handler->display->display_options['filters']['field_region_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    4 => '4',
    3 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sector_value']['expose']['reduce'] = TRUE;
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
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
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
    'field_reference_number' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'title_1' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
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
    'field_status' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_budget_total_project_value' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'projectgrants/download';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Project Preparation Grants Download */
  $handler = $view->new_display('views_data_export', 'Project Preparation Grants Download', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Preparation Grants Download';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
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
  $handler->display->display_options['filters']['field_region_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_status_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    4 => '4',
    3 => 0,
    5 => 0,
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
  $handler->display->display_options['filters']['field_sector_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_sector_value']['expose']['reduce'] = TRUE;
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
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
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
    'field_reference_number' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'title_1' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
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
    'field_status' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_budget_total_project_value' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'projectpreparationgrants/download';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
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
    t('Ref #'),
    t('[field_reference_number]'),
    t('Title'),
    t('Region'),
    t('Sector'),
    t('Start Date'),
    t('Status'),
    t('Budget (US$)'),
    t('Select one or more regions to filter by.'),
    t('FIlter by one or more project status types.'),
    t('Filter by one or more project sectors.'),
    t('Filter by one or more beneficiaries.'),
    t('This page holds the view of project grants.'),
    t('Start typing the beneficiary\'s name for suggestions.'),
    t('Project Preparation Grants'),
    t('This page holds the view of project preparation grants.'),
    t('Project Grants Download'),
    t('Project Preparation Grants Download'),
  );
  $export['projects'] = $view;

  return $export;
}
