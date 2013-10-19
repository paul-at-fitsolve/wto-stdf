<?php
/**
 * @file
 * feature_frontpage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_frontpage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['gmap_location-0'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'gmap_location',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -27,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -23,
      ),
      'zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -21,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['nice_menus-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'nice_menus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -21,
      ),
      'zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'wto_stdf' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -22,
      ),
      'zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['stdfcustom-newsletter_signup'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'newsletter_signup',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'stdfcustom',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -20,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Join Mailing List',
    'visibility' => 0,
  );

  $export['stdffrontpage-contact_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'contact_info',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'stdffrontpage',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -21,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact Info',
    'visibility' => 0,
  );

  $export['stdffrontpage-proposal_deadline'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'proposal_deadline',
    'i18n_block_language' => array(
      0 => 'en',
      1 => 'es',
      2 => 'fr',
    ),
    'i18n_mode' => 1,
    'module' => 'stdffrontpage',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -24,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['stdffrontpage-publications'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'publications',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'stdffrontpage',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'second_content',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-beneficiaries-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'beneficiaries-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wto_stdf',
        'weight' => -22,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-eebb22e852a8f93e943e8c7a212a3c68'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'eebb22e852a8f93e943e8c7a212a3c68',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -8,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front_carousel-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'front_carousel-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'wto_stdf',
        'weight' => -28,
      ),
      'zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-nodequeue_briefings-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_briefings-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wto_stdf',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_news_feed-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_news_feed-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'filedepot',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wto_stdf',
        'weight' => -9,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nodequeue_publications-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nodequeue_publications-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'wto_stdf' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'wto_stdf',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
