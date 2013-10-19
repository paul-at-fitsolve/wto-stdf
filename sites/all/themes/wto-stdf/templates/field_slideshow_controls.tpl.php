<?php
/**
 * @file
 * Template file for field_slideshow_controls
 *
 *
 */
?>
<div id="field-slideshow-<?php print $slideshow_id; ?>-controls" class="field-slideshow-controls">
  <a href="#" class="prev"><img src="/sites/all/themes/wto-stdf/images/back.png" width="32" height="32" alt="<?php print t('Prev');?>"></a>
  <?php if (!empty($controls_pause)) : ?>
    <a href="#" class="play"><?php print t('Play'); ?></a>
    <a href="#" class="pause"><?php print t('Pause'); ?></a>
  <?php endif; ?>
  <a href="#" class="next"><img src="/sites/all/themes/wto-stdf/images/forward.png" width="32" height="32" alt="<?php print t('Next');?>"></a>
</div>
