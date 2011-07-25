  <div class="item_entry node<?php if ($sticky) { print " sticky"; } ?><?php if (!$status) { print " node-unpublished"; } ?>">
    <?php if ($picture) {
      print $picture;
    }?>
    <div class="top"><div class="top_left"></div></div>
    <div class="content">
      <?php if ($page == 0) { ?><h1 class="title"><a href="<?php print $node_url?>"><?php print $title?></a></h1><?php }; ?>
      <?php print $content?>
    <?php if ($links) { ?><div class="links"><?php print $submitted?> <?php print theme('image', 'themes/drupalbr/imgs/ico_categories.gif')." ".$terms?> <?php print $links?></div><?php }; ?>
    </div>
    
  </div>
