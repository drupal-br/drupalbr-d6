  <div class="box block block-<?php print $block->module; ?>" id="block-<?php print $block->module; ?>-<?php print $block->delta; ?>">
    <?php if($block->subject): ?><h1><?php print $block->subject; ?></h1><?php endif; ?>
    <div class="box-content"><?php print $block->content; ?></div>
 </div>
