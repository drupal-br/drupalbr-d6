<div class="comment<?php print ($comment->new) ? ' comment-new' : ''; print ' '. $status ?> cid-<?php print $comment->cid ?>">

  <?php print $picture ?>

  <div class="submitted">
    Em <?php print $date." ".$author ?> disse:
  </div>


  <?php if ($comment->new): ?>
    <span class="new"><?php print $new ?></span>
  <?php endif; ?>

  <div class="content">
    <?php print $content ?>
    <?php if ($signature): ?>
    <div class="user-signature">
      <?php print $signature ?>
    </div>
    <?php endif; ?>
  </div>

  <?php print $links ?>
</div>
