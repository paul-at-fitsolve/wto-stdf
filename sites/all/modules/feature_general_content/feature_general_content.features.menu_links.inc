<?php
/**
 * @file
 * feature_general_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_general_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Information Resources',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: main-menu:advancedsearch
  $menu_links['main-menu:advancedsearch'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'advancedsearch',
    'router_path' => 'advancedsearch',
    'link_title' => 'Advanced Search',
    'options' => array(
      'attributes' => array(
        'title' => 'Advanced Search using SOLR',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:calendar-node-field-date-and-time
  $menu_links['main-menu:calendar-node-field-date-and-time'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar-node-field-date-and-time',
    'router_path' => 'calendar-node-field-date-and-time',
    'link_title' => 'Event Calendar',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:calendar-node-field-date-and-time/day
  $menu_links['main-menu:calendar-node-field-date-and-time/day'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar-node-field-date-and-time/day',
    'router_path' => 'calendar-node-field-date-and-time/day',
    'link_title' => 'Day',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_path' => 'calendar-node-field-date-and-time',
  );
  // Exported menu link: main-menu:calendar-node-field-date-and-time/month
  $menu_links['main-menu:calendar-node-field-date-and-time/month'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar-node-field-date-and-time/month',
    'router_path' => 'calendar-node-field-date-and-time/month',
    'link_title' => 'Month',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'calendar-node-field-date-and-time',
  );
  // Exported menu link: main-menu:calendar-node-field-date-and-time/week
  $menu_links['main-menu:calendar-node-field-date-and-time/week'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar-node-field-date-and-time/week',
    'router_path' => 'calendar-node-field-date-and-time/week',
    'link_title' => 'Week',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_path' => 'calendar-node-field-date-and-time',
  );
  // Exported menu link: main-menu:calendar-node-field-date-and-time/year
  $menu_links['main-menu:calendar-node-field-date-and-time/year'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendar-node-field-date-and-time/year',
    'router_path' => 'calendar-node-field-date-and-time/year',
    'link_title' => 'Year',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'parent_path' => 'calendar-node-field-date-and-time',
  );
  // Exported menu link: main-menu:events
  $menu_links['main-menu:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Diary List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'parent_path' => 'calendar-node-field-date-and-time',
  );
  // Exported menu link: main-menu:file/add
  $menu_links['main-menu:file/add'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'file/add',
    'router_path' => 'file/add',
    'link_title' => 'Add File',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:mailchimp_archive
  $menu_links['main-menu:mailchimp_archive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mailchimp_archive',
    'router_path' => 'mailchimp_archive',
    'link_title' => 'STDF Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => 'Archive of newsletters',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Bermondsey',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/10
  $menu_links['main-menu:node/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Donors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'parent_path' => 'node/9',
  );
  // Exported menu link: main-menu:node/11
  $menu_links['main-menu:node/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'Observers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'parent_path' => 'node/9',
  );
  // Exported menu link: main-menu:node/12
  $menu_links['main-menu:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Developing country experts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'parent_path' => 'node/9',
  );
  // Exported menu link: main-menu:node/13
  $menu_links['main-menu:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'STDF Secretariat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'parent_path' => 'node/9',
  );
  // Exported menu link: main-menu:node/14
  $menu_links['main-menu:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'How we operate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/15
  $menu_links['main-menu:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Working group',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'parent_path' => 'node/14',
  );
  // Exported menu link: main-menu:node/16
  $menu_links['main-menu:node/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Secretariat',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'parent_path' => 'node/14',
  );
  // Exported menu link: main-menu:node/17
  $menu_links['main-menu:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Donor support',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'parent_path' => 'node/14',
  );
  // Exported menu link: main-menu:node/18
  $menu_links['main-menu:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Documents for the Working Group',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'parent_path' => 'node/19',
  );
  // Exported menu link: main-menu:node/19
  $menu_links['main-menu:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Administrative documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Test Members',
    'options' => array(
      'node_type' => 'members_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/20
  $menu_links['main-menu:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Documents for the Policy Committee',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'parent_path' => 'node/19',
  );
  // Exported menu link: main-menu:node/21
  $menu_links['main-menu:node/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Documents for the WTO SPS Committee',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'parent_path' => 'node/19',
  );
  // Exported menu link: main-menu:node/22
  $menu_links['main-menu:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'STDF at a glance',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/23
  $menu_links['main-menu:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'STDF Annual Reports',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/19',
  );
  // Exported menu link: main-menu:node/24
  $menu_links['main-menu:node/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/24',
    'router_path' => 'node/%',
    'link_title' => 'History',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/25
  $menu_links['main-menu:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Funding Opportunities',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
  );
  // Exported menu link: main-menu:node/26
  $menu_links['main-menu:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Project Grants',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/25',
  );
  // Exported menu link: main-menu:node/27
  $menu_links['main-menu:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Eligibility',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/25',
  );
  // Exported menu link: main-menu:node/28
  $menu_links['main-menu:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Who can apply',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/25',
  );
  // Exported menu link: main-menu:node/29
  $menu_links['main-menu:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'How to apply',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/25',
  );
  // Exported menu link: main-menu:node/30
  $menu_links['main-menu:node/30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/30',
    'router_path' => 'node/%',
    'link_title' => 'Application Forms',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'parent_path' => 'node/25',
  );
  // Exported menu link: main-menu:node/31
  $menu_links['main-menu:node/31'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/31',
    'router_path' => 'node/%',
    'link_title' => 'Thematic Activities',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
  );
  // Exported menu link: main-menu:node/32
  $menu_links['main-menu:node/32'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/32',
    'router_path' => 'node/%',
    'link_title' => 'Aid for Trade',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/33
  $menu_links['main-menu:node/33'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/33',
    'router_path' => 'node/%',
    'link_title' => 'Invasive Alien Species',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/34
  $menu_links['main-menu:node/34'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/34',
    'router_path' => 'node/%',
    'link_title' => 'Laboratory infrastructure',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/35
  $menu_links['main-menu:node/35'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/35',
    'router_path' => 'node/%',
    'link_title' => 'Trade Facilitation',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/37
  $menu_links['main-menu:node/37'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/37',
    'router_path' => 'node/%',
    'link_title' => 'Good practice',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/38
  $menu_links['main-menu:node/38'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/38',
    'router_path' => 'node/%',
    'link_title' => 'Public-Private Partnerships',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/40
  $menu_links['main-menu:node/40'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/40',
    'router_path' => 'node/%',
    'link_title' => 'Private standards',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/41
  $menu_links['main-menu:node/41'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41',
    'router_path' => 'node/%',
    'link_title' => 'Enhanced Integrated Framework',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/42
  $menu_links['main-menu:node/42'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'SPS indicators',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/43
  $menu_links['main-menu:node/43'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Economic analysis / MCDA',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/44
  $menu_links['main-menu:node/44'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/44',
    'router_path' => 'node/%',
    'link_title' => 'PAN-SPSO Programme',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/45
  $menu_links['main-menu:node/45'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/45',
    'router_path' => 'node/%',
    'link_title' => 'Climate change',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/46
  $menu_links['main-menu:node/46'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/46',
    'router_path' => 'node/%',
    'link_title' => 'Capacity evaluation tools',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'parent_path' => 'node/31',
  );
  // Exported menu link: main-menu:node/47
  $menu_links['main-menu:node/47'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/47',
    'router_path' => 'node/%',
    'link_title' => 'STDF Publications',
    'options' => array(
      'node_type' => 'general_content',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:node/7
  $menu_links['main-menu:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
  );
  // Exported menu link: main-menu:node/8
  $menu_links['main-menu:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'STDF vision and mission',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'general_content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:node/9
  $menu_links['main-menu:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Who we are',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'parent_path' => 'node/7',
  );
  // Exported menu link: main-menu:projectgrants
  $menu_links['main-menu:projectgrants'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'projectgrants',
    'router_path' => 'projectgrants',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'title' => 'Details of our projects.',
      ),
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:simplesearch
  $menu_links['main-menu:simplesearch'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'simplesearch',
    'router_path' => 'simplesearch',
    'link_title' => 'Simple Search',
    'options' => array(
      'attributes' => array(
        'title' => 'Simple Search using SOLR',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_path' => '<front>',
  );
  // Exported menu link: main-menu:video-gallery
  $menu_links['main-menu:video-gallery'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'video-gallery',
    'router_path' => 'video-gallery',
    'link_title' => 'Video Gallery',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
    'parent_path' => '<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Add File');
  t('Administrative documents');
  t('Advanced Search');
  t('Aid for Trade');
  t('Application Forms');
  t('Bermondsey');
  t('Capacity evaluation tools');
  t('Climate change');
  t('Day');
  t('Developing country experts');
  t('Diary List');
  t('Documents for the Policy Committee');
  t('Documents for the WTO SPS Committee');
  t('Documents for the Working Group');
  t('Donor support');
  t('Donors');
  t('Economic analysis / MCDA');
  t('Eligibility');
  t('Enhanced Integrated Framework');
  t('Event Calendar');
  t('Funding Opportunities');
  t('Good practice');
  t('History');
  t('How to apply');
  t('How we operate');
  t('Information Resources');
  t('Invasive Alien Species');
  t('Laboratory infrastructure');
  t('Month');
  t('Observers');
  t('PAN-SPSO Programme');
  t('Private standards');
  t('Project Grants');
  t('Projects');
  t('Public-Private Partnerships');
  t('SPS indicators');
  t('STDF Annual Reports');
  t('STDF Newsletter');
  t('STDF Publications');
  t('STDF Secretariat');
  t('STDF at a glance');
  t('STDF vision and mission');
  t('Secretariat');
  t('Simple Search');
  t('Test Members');
  t('Thematic Activities');
  t('Trade Facilitation');
  t('Video Gallery');
  t('Week');
  t('Who can apply');
  t('Who we are');
  t('Working group');
  t('Year');


  return $menu_links;
}
