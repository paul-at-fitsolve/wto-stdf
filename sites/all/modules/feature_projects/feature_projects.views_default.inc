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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'CLEAR';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '3';
  $handler->display->display_options['pager']['options']['tags']['first'] = '<<';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '<';
  $handler->display->display_options['pager']['options']['tags']['next'] = '>';
  $handler->display->display_options['pager']['options']['tags']['last'] = '>>';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_reference_number' => 'field_reference_number',
    'title' => 'title',
    'field_beneficiary_text' => 'field_beneficiary_text',
    'field_region' => 'field_region',
    'field_sector' => 'field_sector',
    'field_start_date' => 'field_start_date',
    'field_status' => 'field_status',
    'field_budget_total_project_value' => 'field_budget_total_project_value',
    'view_node_1' => 'view_node_1',
  );
  $handler->display->display_options['style_options']['default'] = 'field_reference_number';
  $handler->display->display_options['style_options']['info'] = array(
    'field_reference_number' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => 'views-align-center',
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
    'field_beneficiary_text' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sector' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
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
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_budget_total_project_value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node_1' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Reference Number */
  $handler->display->display_options['fields']['field_reference_number']['id'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['table'] = 'field_data_field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['field'] = 'field_reference_number';
  $handler->display->display_options['fields']['field_reference_number']['label'] = 'Ref #';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Beneficiary Text */
  $handler->display->display_options['fields']['field_beneficiary_text']['id'] = 'field_beneficiary_text';
  $handler->display->display_options['fields']['field_beneficiary_text']['table'] = 'field_data_field_beneficiary_text';
  $handler->display->display_options['fields']['field_beneficiary_text']['field'] = 'field_beneficiary_text';
  $handler->display->display_options['fields']['field_beneficiary_text']['label'] = 'Beneficiaries';
  $handler->display->display_options['fields']['field_beneficiary_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beneficiary_text']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_beneficiary_text']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_region']['id'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['table'] = 'field_data_field_region';
  $handler->display->display_options['fields']['field_region']['field'] = 'field_region';
  $handler->display->display_options['fields']['field_region']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_region']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Sector */
  $handler->display->display_options['fields']['field_sector']['id'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['table'] = 'field_data_field_sector';
  $handler->display->display_options['fields']['field_sector']['field'] = 'field_sector';
  $handler->display->display_options['fields']['field_sector']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sector']['type'] = 'i18n_list_default';
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
  $handler->display->display_options['fields']['field_status']['type'] = 'i18n_list_default';
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node_1']['id'] = 'view_node_1';
  $handler->display->display_options['fields']['view_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node_1']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node_1']['label'] = 'Details';
  $handler->display->display_options['fields']['view_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node_1']['text'] = 'View';
  /* Sort criterion: Content: Reference Number (field_reference_number) */
  $handler->display->display_options['sorts']['field_reference_number_value']['id'] = 'field_reference_number_value';
  $handler->display->display_options['sorts']['field_reference_number_value']['table'] = 'field_data_field_reference_number';
  $handler->display->display_options['sorts']['field_reference_number_value']['field'] = 'field_reference_number_value';
  $handler->display->display_options['sorts']['field_reference_number_value']['order'] = 'DESC';
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n_1']['id'] = 'field_status_value_i18n_1';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['filters']['field_status_value_i18n_1']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) (translated) */
  $handler->display->display_options['filters']['field_region_tid_i18n']['id'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['field'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator_id'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['identifier'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid_i18n']['vocabulary'] = 'region';
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n']['id'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['value'] = array(
    'Awaiting' => 'Awaiting',
    'Completed' => 'Completed',
    'On-going' => 'On-going',
  );
  $handler->display->display_options['filters']['field_status_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator_id'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['identifier'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Sector (field_sector) (translated) */
  $handler->display->display_options['filters']['field_sector_value_i18n']['id'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['field'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator_id'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['identifier'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Beneficiary Text (field_beneficiary_text) (translated) */
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['id'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['table'] = 'field_data_field_beneficiary_text';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['field'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['value'] = '';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator_id'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['identifier'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['vocabulary'] = 'beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['error_message'] = FALSE;
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'field_reference_number' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_beneficiary_text' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_sector' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_start_date' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_status' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_budget_total_project_value' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'view_node_1' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
  );

  /* Display: Project Grants */
  $handler = $view->new_display('page', 'Project Grants', 'project_grants');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Grants';
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n_1']['id'] = 'field_status_value_i18n_1';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['filters']['field_status_value_i18n_1']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) (translated) */
  $handler->display->display_options['filters']['field_region_tid_i18n']['id'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['field'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator_id'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['identifier'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid_i18n']['vocabulary'] = 'region';
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n']['id'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['value'] = array(
    'Awaiting' => 'Awaiting',
    'Completed' => 'Completed',
    'On-going' => 'On-going',
  );
  $handler->display->display_options['filters']['field_status_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator_id'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['identifier'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Sector (field_sector) (translated) */
  $handler->display->display_options['filters']['field_sector_value_i18n']['id'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['field'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator_id'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['identifier'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Beneficiary Text (field_beneficiary_text) (translated) */
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['id'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['table'] = 'field_data_field_beneficiary_text';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['field'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['value'] = '';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator_id'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['identifier'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['vocabulary'] = 'beneficiaries';
  /* Filter criterion: Content: Project Type (field_type) (translated) */
  $handler->display->display_options['filters']['field_type_value_i18n']['id'] = 'field_type_value_i18n';
  $handler->display->display_options['filters']['field_type_value_i18n']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value_i18n']['field'] = 'field_type_value_i18n';
  $handler->display->display_options['filters']['field_type_value_i18n']['value'] = array(
    'Project' => 'Project',
  );
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'field_reference_number' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_beneficiary_text' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_sector' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_start_date' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_status' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_budget_total_project_value' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'view_node_1' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'projectgrants';

  /* Display: Project Preparation Grants */
  $handler = $view->new_display('page', 'Project Preparation Grants', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Preparation Grants';
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n_1']['id'] = 'field_status_value_i18n_1';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['filters']['field_status_value_i18n_1']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) (translated) */
  $handler->display->display_options['filters']['field_region_tid_i18n']['id'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['field'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator_id'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['identifier'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid_i18n']['vocabulary'] = 'region';
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n']['id'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['value'] = array(
    'Awaiting' => 'Awaiting',
    'Completed' => 'Completed',
    'On-going' => 'On-going',
  );
  $handler->display->display_options['filters']['field_status_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator_id'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['identifier'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Sector (field_sector) (translated) */
  $handler->display->display_options['filters']['field_sector_value_i18n']['id'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['field'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator_id'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['identifier'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Beneficiary Text (field_beneficiary_text) (translated) */
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['id'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['table'] = 'field_data_field_beneficiary_text';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['field'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['value'] = '';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator_id'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['identifier'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['vocabulary'] = 'beneficiaries';
  /* Filter criterion: Content: Project Type (field_type) (translated) */
  $handler->display->display_options['filters']['field_type_value_i18n']['id'] = 'field_type_value_i18n';
  $handler->display->display_options['filters']['field_type_value_i18n']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value_i18n']['field'] = 'field_type_value_i18n';
  $handler->display->display_options['filters']['field_type_value_i18n']['value'] = array(
    'PPG' => 'PPG',
  );
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'field_reference_number' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_beneficiary_text' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_sector' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_start_date' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_status' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_budget_total_project_value' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'view_node_1' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'projectpreparationgrants';

  /* Display: Project Grants Export */
  $handler = $view->new_display('views_data_export', 'Project Grants Export', 'project_grants_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Grants Export';
  $handler->display->display_options['display_description'] = 'This exports filtered project grants to xls.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'project_grants%timestamp-full.xls';
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n_1']['id'] = 'field_status_value_i18n_1';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['filters']['field_status_value_i18n_1']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) (translated) */
  $handler->display->display_options['filters']['field_region_tid_i18n']['id'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['field'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator_id'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['identifier'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid_i18n']['vocabulary'] = 'region';
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n']['id'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator_id'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['identifier'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Sector (field_sector) (translated) */
  $handler->display->display_options['filters']['field_sector_value_i18n']['id'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['field'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator_id'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['identifier'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Beneficiary Text (field_beneficiary_text) (translated) */
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['id'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['table'] = 'field_data_field_beneficiary_text';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['field'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['value'] = '';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator_id'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['identifier'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['vocabulary'] = 'beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'Project' => 'Project',
  );
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'field_reference_number' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_beneficiary_text' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_sector' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_start_date' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_status' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_budget_total_project_value' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'view_node_1' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'projectgrants/export';
  $handler->display->display_options['displays'] = array(
    'project_grants' => 'project_grants',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Project Preparation Grants Export */
  $handler = $view->new_display('views_data_export', 'Project Preparation Grants Export', 'project_preparation_grants_export');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Project Grants Export';
  $handler->display->display_options['display_description'] = 'This exports filtered project preparation grants to xls.';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'project_preparation_grants%timestamp-full.xls';
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
  /* Filter criterion: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n_1']['id'] = 'field_status_value_i18n_1';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value_i18n_1']['value'] = array(
    'Revoked' => 'Revoked',
  );
  $handler->display->display_options['filters']['field_status_value_i18n_1']['group'] = 1;
  /* Filter criterion: Content: Region (field_region) (translated) */
  $handler->display->display_options['filters']['field_region_tid_i18n']['id'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['field'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_region_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator_id'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['operator'] = 'field_region_tid_i18n_op';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['identifier'] = 'field_region_tid_i18n';
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid_i18n']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid_i18n']['vocabulary'] = 'region';
  /* Filter criterion: Content: Status (field_status) (translated) */
  $handler->display->display_options['filters']['field_status_value_i18n']['id'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value_i18n']['field'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator_id'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['operator'] = 'field_status_value_i18n_op';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['identifier'] = 'field_status_value_i18n';
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_status_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Sector (field_sector) (translated) */
  $handler->display->display_options['filters']['field_sector_value_i18n']['id'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['table'] = 'field_data_field_sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['field'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_sector_value_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator_id'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['label'] = 'Sector';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['operator'] = 'field_sector_value_i18n_op';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['identifier'] = 'field_sector_value_i18n';
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_sector_value_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Beneficiary Text (field_beneficiary_text) (translated) */
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['id'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['table'] = 'field_data_field_beneficiary_text';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['field'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['value'] = '';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator_id'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['label'] = 'Beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['operator'] = 'field_beneficiary_text_tid_i18n_op';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['identifier'] = 'field_beneficiary_text_tid_i18n';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['vocabulary'] = 'beneficiaries';
  $handler->display->display_options['filters']['field_beneficiary_text_tid_i18n']['error_message'] = FALSE;
  /* Filter criterion: Content: Project Type (field_type) */
  $handler->display->display_options['filters']['field_type_value']['id'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['table'] = 'field_data_field_type';
  $handler->display->display_options['filters']['field_type_value']['field'] = 'field_type_value';
  $handler->display->display_options['filters']['field_type_value']['value'] = array(
    'PPG' => 'PPG',
  );
  $handler->display->display_options['merge_rows'] = TRUE;
  $handler->display->display_options['field_config'] = array(
    'field_reference_number' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'title' => array(
      'merge_option' => 'filter',
      'separator' => ', ',
    ),
    'field_beneficiary_text' => array(
      'merge_option' => 'merge_unique',
      'separator' => ', ',
    ),
    'field_region' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_sector' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_start_date' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_status' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'field_budget_total_project_value' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
    'view_node_1' => array(
      'merge_option' => 'first_value',
      'separator' => ', ',
    ),
  );
  $handler->display->display_options['path'] = 'projectpreparationgrants/export';
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'project_grants' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;
  $export['projects'] = $view;

  return $export;
}
