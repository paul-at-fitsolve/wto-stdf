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
    $this->addFieldMapping ( 'field_implementing_entity', 'implementing_entity' )->separator ( ';' );
    $this->addFieldMapping ( 'language' )->defaultValue ( 'en' );
    $this->addFieldMapping ( 'field_implementing_entity:create_term' )->defaultValue ( TRUE );
    $this->addFieldMapping ( 'field_partner', 'partners' )->separator ( ';' );
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
    $this->addFieldMapping ( 'field_beneficiary_text', 'beneficiary' )->separator(';');
    $this->addFieldMapping ( 'field_beneficiary_text:create_term' )->defaultValue ( TRUE );
    
    $this->addFieldMapping ( 'field_documents', 'link1' )->separator ( ';' );
    
    $source_dir = drupal_get_path ( 'module', 'stdfmigrate' ) . '/virtual_library';
    
    $this->addFieldMapping ( 'field_documents:source_dir' )->defaultValue ( $source_dir );
  }
  function prepareRow($row) {
    if (parent::prepareRow ( $row ) === FALSE) {
      return FALSE;
    }
    

    if ($row->acp != 'Yes') {
      $row->acp = FALSE;
    } else {
      $row->acp = TRUE;
    }
    
    if ($row->link1 != null) {
      $row->link1 = substr ( $row->link1, 72 );
    }
    
    if ($row->link2 != null) {
      $row->link1 .= ';' . substr ( $row->link2, 72 );
    }
    
    if ($row->link3 != null) {
      $row->link1 .= ';' . substr ( $row->link3, 72 );
    }
    
    if ($row->link4 != null) {
      $row->link1 .= ';' . substr ( $row->link4, 72 );
    }
    
    if ($row->link5 != null) {
      $row->link1 .= ';' . substr ( $row->link5, 72 );
    }
    
    if ($row->link6 != null) {
      $row->link1 .= ';' . substr ( $row->link6, 72 );
    }
    
    if ($row->link7 != null) {
      $row->link1 .= ';' . substr ( $row->link7, 72 );
    }
    
    if ($row->link8 != null) {
      $row->link1 .= ';' . substr ( $row->link8, 72 );
    }
    
    if ($row->link9 != null) {
      $row->link1 .= ';' . substr ( $row->link9, 72 );
      
      if ($row->link10 != null) {
        $row->link1 .= ';' . substr ( $row->link10, 72 );
      }
    }
    
    if (!(empty($row->approval_date))) {
      $date = explode('/',$row->approval_date);
      $row->approvalxx_date = $date[2] .'/' . $date[1] . '/' . $date[0];
      $row->approval_date = date ( 'Y-m-d', strtotime ( $row->approval_date ) );
    }
    
    if (!(empty($row->start_date))) {
      $date = explode('/',$row->start_date);
      $row->start_date = $date[2] .'/' . $date[1] . '/' . $date[0];
      $row->start_date = date ( 'Y-m-d', strtotime ( $row->start_date ) );
    }
    
    if (!(empty($row->end_date))) {
      $date = explode('/',$row->end_date);
      $row->end_date = $date[2] .'/' . $date[1] . '/' . $date[0];
      $row->end_date = date ( 'Y-m-d', strtotime ( $row->end_date ) );
    }
    
    if (!(empty($row->actual_end_date))) {
      $date = explode('/',$row->actual_end_date);
      $row->actual_end_date = $date[2] .'/' . $date[1] . '/' . $date[0];
      $row->actual_end_date = date ( 'Y-m-d', strtotime ( $row->actual_end_date ) );
    }
    
    if (!(empty($row->extension))) {
      $date = explode('/',$row->extension);
      $row->extension = $date[2] .'/' . $date[1] . '/' . $date[0];
      $row->extension = date ( 'Y-m-d', strtotime ( $row->extension ) );
    }
    
    /*
    if ($row->total_stdf != NULL) {
      $row->total_stdf = str_replace ( ',', '', trim ( $row->total_stdf, '$' ) );
    }
    
    if ($row->implementation_budget != NULL) {
      $row->implementation_budget = str_replace ( ',', '', trim ( $row->implementation_budget, '$' ) );
    }
    
    if ($row->overhead != NULL) {
      $row->overhead = str_replace ( ',', '', trim ( $row->overhead, '$' ) );
    }
    
    if ($row->non_stdf_contribution == '') {
      $row->non_stdf_contribution = NULL;
    } else {
      $row->non_stdf_contribution = str_replace ( ',', '', trim ( $row->non_stdf_contribution, '$' ) );
    }
    
    if ($row->total_project_value == '') {
      $row->total_project_value = NULL;
    } else {
      $row->total_project_value = str_replace ( ',', '', trim ( $row->total_project_value, '$' ) );
    }
    
    if ($row->budget_eur == '') {
      $row->budget_eur = NULL;
    } else {
      $row->budget_eur = str_replace ( ',', '', substr ( $row->budget_eur, 4 ) );
    }
    
    if ($row->budget_chf == '') {
      $row->budget_chf = NULL;
    } else {
      $row->budget_chf = str_replace ( ',', '', substr ( $row->budget_chf, 4 ) );
    }
    */

  }

}
 