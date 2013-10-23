<?php

/**
 * @file
*/
class StdfMigrationProjectMigration extends StdfMigration {
  public function __construct($arguments) {
    parent::__construct ( $arguments );
    $this->description = t ( 'Import project data from CSV.' );
    $this->systemOfRecord = Migration::SOURCE;
    $this->source = new MigrateSourceCSV ( $this->project_source_file, $this->projectcsvcolumns (), array (
        'header_rows' => 1 
    ) );
    $this->destination = new MigrateDestinationNode ( 'project' );
    
    $this->map = new MigrateSQLMap ( $this->machineName, array (
        'reference_number' => array (
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
            'description' => 'Reference ID' 
        ) 
    ), MigrateDestinationNode::getKeySchema () );
    
    $unmigrated = array (
        'status',
        'uid',
        'created',
        'changed',
        'promote',
        'sticky',
        'revision',
        'log',
        'language',
        'tnid',
        'translate',
        'revision_uid',
        'is_new',
        'body:summary',
        'body:format',
        'body:language',
        'field_reference_number:language',
        'field_responsible:language',
        'field_accounting_code:language',
        'field_implementing_entity:source_type',
        'field_implementing_entity:ignore_case',
        'field_actions:language',
        'field_slideshow',
        'field_slideshow:revision_id',
        'field_key_objective',
        'field_key_objective:format',
        'field_key_objective:language',
        'field_partner:source_type',
        'field_partner:ignore_case',
        'field_comments:language',
        'field_actions_required:language' 
    );
    
    $this->addUnmigratedDestinations ( $unmigrated, t ( 'Do Not Migrate' ) );
    
    $this->addFieldMapping ( 'body', 'objective' );
    $this->addFieldMapping ( 'field_reference_number', 'reference_number' );
    $this->addFieldMapping ( 'field_responsible', 'responsible' );
    $this->addFieldMapping ( 'field_previous_responsible', 'previous_responsible' );
    $this->addFieldMapping ( 'field_accounting_code', 'accounting_code' );
    $this->addFieldMapping ( 'field_type', 'type' );
    $this->addFieldMapping ( 'field_status', 'status' );
    $this->addFieldMapping ( 'field_ppg_outcome', 'ppg_outcome' );
    $this->addFieldMapping ( 'field_region', 'region' );
    $this->addFieldMapping ( 'title', 'title' );
    $this->addFieldMapping ( 'field_dac', 'dac' );
    $this->addFieldMapping ( 'field_acp', 'acp' );
    $this->addFieldMapping ( 'field_sector', 'sector' );
    $this->addFieldMapping ( 'field_implementing_entity', 'implementing_entity' );
    $this->addFieldMapping ( 'field_implementing_entity:create_term' )->defaultValue ( TRUE );
    $this->addFieldMapping ( 'field_partner', 'partners' );
    $this->addFieldMapping ( 'field_partner:create_term' )->defaultValue ( TRUE );
    $this->addFieldMapping ( 'field_approval_date', 'approval_date' );
    $this->addFieldMapping ( 'field_approval_year', 'approval_year' );
    $this->addFieldMapping ( 'field_start_date', 'start_date' );
    $this->addFieldMapping ( 'field_start_year', 'start_year' );
    $this->addFieldMapping ( 'field_start_date:value2', 'end_date' );
    $this->addFieldMapping ( 'field_extension_date', 'extension' );
    $this->addFieldMapping ( 'field_end_date', 'actual_end_date' );
    $this->addFieldMapping ( 'field_end_year', 'end_year' );
    $this->addFieldMapping ( 'field_actions', 'actions_since' );
    $this->addFieldMapping ( 'field_actions_required', 'actions_required' );
    $this->addFieldMapping ( 'field_budget_total_stdf', 'total_stdf' );
    $this->addFieldMapping ( 'field_budget_implementation', 'implementation_budget' );
    $this->addFieldMapping ( 'field_overhead', 'overhead' );
    $this->addFieldMapping ( 'field_budget_non_stdf_contributi', 'non_stdf_contribution' );
    $this->addFieldMapping ( 'field_budget_total_project_value', 'total_project_value' );
    $this->addFieldMapping ( 'field_budget_euros', 'budget_eur' );
    $this->addFieldMapping ( 'field_budget_swiss_francs', 'budget_chf' );
    $this->addFieldMapping ( 'field_comments', 'comments' );
  }
  function prepareRow($row) {
    if (parent::prepareRow ( $row ) === FALSE) {
      return FALSE;
    }
    
    dpm($row);
    if ($row->acp != 'Yes') {
      $row->acp = FALSE;
    } else {
      $row->acp = TRUE;
    }
    
    if ($row->approval_date != 'NULL') {
      $row->approval_date = date ( 'Y-m-d', strtotime ( $row->approval_date ) );
    }
    
    if ($row->start_date != 'NULL') {
      $row->start_date = date ( 'Y-m-d', strtotime ( $row->start_date ) );
    }
    
    if ($row->end_date != 'NULL') {
      $row->end_date = date ( 'Y-m-d', strtotime ( $row->end_date ) );
    }
    
    if ($row->actual_end_date != 'NULL') {
      $row->actual_end_date = date ( 'Y-m-d', strtotime ( $row->actual_end_date ) );
    }
    
    if ($row->extension != 'NULL') {
      $row->extension = date ( 'Y-m-d', strtotime ( $row->extension ) );
    } else {
      $row->extension = NULL;
    }
    
    if ($row->total_stdf == '') {
      $row->total_stdf = NULL;
    } else {
      $row->total_stdf = str_replace(',', '', trim ($row->total_stdf, '$' ));
    }
    
    if ($row->implementation_budget == '') {
      $row->implementation_budget = NULL;
    } else {
      $row->implementation_budget = str_replace(',' , '', trim ($row->implementation_budget, '$' ));
    }
    
    if ($row->overhead == '') {
      $row->overhead = NULL;
    } else {
      $row->overhead = str_replace(',', '', trim ( $row->overhead, '$' ));
    }
    
    if ($row->non_stdf_contribution == '') {
      $row->non_stdf_contribution = NULL;
    } else {
      $row->non_stdf_contribution = str_replace(',','', trim ( $row->non_stdf_contribution, '$' ));
    }
    
    if ($row->total_project_value == '') {
      $row->total_project_value = NULL;
    } else {
      $row->total_project_value = str_replace(',' , '', trim ( $row->total_project_value, '$' ));
    }
    
    if ($row->budget_eur == '') {
      $row->budget_eur = NULL;
    } else {
      $row->budget_eur = str_replace(',','',substr ( $row->budget_eur, 4 ));
    }
    
    if ($row->budget_chf == '') {
      $row->budget_chf = NULL;
    } else {
      $row->budget_chf = str_replace(',','',substr ( $row->budget_chf, 4 ));
    }
    dpm($row);
  }
  function prepare(&$node, $row) {
    if ($row->start_date == 'NULL') {
      $node->field_uncertain_dates ['en'] [0] ['value'] = TRUE;
      $row->start_date = NULL;
    }
    
    if ($row->end_date == 'NULL') {
      $node->field_uncertain_dates ['en'] [0] ['value'] = TRUE;
      $row->end_date = NULL;
    }
    
    if ($row->actual_end_date == 'NULL') {
      $node->field_uncertain_dates ['en'] [0] ['value'] = TRUE;
      $row->actual_end_date = NULL;
    }
    
    if ($row->extension == NULL) {
      $node->field_uncertain_dates ['en'] [0] ['value'] = TRUE;
    }
  }
}
 