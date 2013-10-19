<?php
/**
 * @file
 * feature_video_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_video_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_video_gallery_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_mediafront_default_presets().
 */
function feature_video_gallery_mediafront_default_presets() {
  $items = array(
    'nodeplayer' => array(
      'name' => 'nodeplayer',
      'description' => '',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(),
        'isplaylist' => array(),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 10,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.mediafront.org',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 1,
        'controllerOnly' => 0,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 0,
        ),
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-playlist-settings',
      ),
    ),
    'videogallery' => array(
      'name' => 'videogallery',
      'description' => '',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => 0,
        ),
        'isplaylist' => array(
          0 => 0,
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 10,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.mediafront.org',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 1,
        ),
        'theme' => 'dark-hive',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-playlist-settings',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_mediafront_views_default_options().
 */
function feature_video_gallery_mediafront_views_default_options() {
  $options = array(
    'video_gallery' => array(
      'title' => array(
        'link_to_player' => 0,
        'field_type' => 'title',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_file' => array(
        'link_to_player' => 0,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_thumbnail' => array(
        'link_to_player' => 0,
        'field_type' => 'image',
        'media_type' => 'media',
        'preview' => 'mediafront_original',
        'thumbnail' => 'thumbnail',
        'custom' => '',
      ),
      'field_media_upload' => array(
        'link_to_player' => 0,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
    ),
  );
  return $options;
}

/**
 * Implements hook_node_info().
 */
function feature_video_gallery_node_info() {
  $items = array(
    'media' => array(
      'name' => t('Video in Gallery'),
      'base' => 'node_content',
      'description' => t('This is a video to be displayed in the site\'s video gallery.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
