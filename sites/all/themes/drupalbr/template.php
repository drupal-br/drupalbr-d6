<?php

function phptemplate_links($links, $attributes = array('class' => 'links')) {

  $output = '';

  if (count($links) > 0) {
    $output = '<ul'. drupal_attributes($attributes) .'>';

    $num_links = count($links);
    $i = 1;

    foreach ($links as $key => $link) {
      $class = '';

      // Automatically add a class to each link and also to each LI
      if (isset($link['attributes']) && isset($link['attributes']['class'])) {
        $link['attributes']['class'] .= ' ' . $key;
        $class = $key;
      }
      else {
        $link['attributes']['class'] = $key;
        $class = $key;
      }

      // Add first and last classes to the list of links to help out themers.
      $extra_class = '';
      if ($i == 1) {
        $extra_class .= 'first ';
      }
      if ($i == $num_links) {
        $extra_class .= 'last ';
      }

      //adicionando classe extra
      if (strstr($key,"taxonomy_term")) {
         $extra_class = " categories ";      
      }

      $output .= '<li class="'. $extra_class . $class .'">';
      // Is the title HTML?
      $html = isset($link['html']) && $link['html'];

      // Initialize fragment and query variables.
      $link['query'] = isset($link['query']) ? $link['query'] : NULL;
      $link['fragment'] = isset($link['fragment']) ? $link['fragment'] : NULL;

      //personalizando icones
      if ($key == "comment_add" || $key == "comment_comments") {
         $output .= theme('image', 'themes/drupalbr/imgs/ico_comments.gif')." ";
      }
      
      if (isset($link['href'])) {
        $output .= l($link['title'], $link['href'], $link['attributes'], $link['query'], $link['fragment'], FALSE, $html);
      }
      else if ($link['title']) {
        //Some links are actually not links, but we wrap these in <span> for adding title and class attributes
        if (!$html) {
          $link['title'] = check_plain($link['title']);
        }
        $output .= '<span'. drupal_attributes($link['attributes']) .'>'. $link['title'] .'</span>';
      }

      $i++;
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;

}

function phptemplate_feed_icon($url) {
  if ($image = theme('image', 'themes/drupalbr/imgs/RSS_icon.gif', t('Syndicate content'), t('Syndicate content'))) {
    return  $image.' <a href="'. check_url($url) .'"> RSS feeds</a>';
  }
}

function phptemplate_forum_topic_navigation($node) {
  $output = '';

  // get previous and next topic
  $sql = "SELECT n.nid, n.title, n.sticky, l.comment_count, l.last_comment_timestamp FROM {node} n INNER JOIN {node_comment_statistics} l ON n.nid = l.nid INNER JOIN {term_node} r ON n.nid = r.nid AND r.tid = %d WHERE n.status = 1 AND n.type = 'forum' ORDER BY n.sticky DESC, ". _forum_get_topic_order_sql(variable_get('forum_order', 1));
  $result = db_query(db_rewrite_sql($sql), $node->tid);

  $stop = 0;
  while ($topic = db_fetch_object($result)) {
    if ($stop == 1) {
      $next = new stdClass();
      $next->nid = $topic->nid;
      $next->title = $topic->title;
      break;
    }
    if ($topic->nid == $node->nid) {
      $stop = 1;
    }
    else {
      $prev = new stdClass();
      $prev->nid = $topic->nid;
      $prev->title = $topic->title;
    }
  }

  if ($prev || $next) {
    $output .= '<div class="forum-topic-navigation">';

    if ($prev) {
      $output .= l(t('‹ ') . $prev->title, 'node/'. $prev->nid, array('class' => 'topic-previous', 'title' => t('Go to previous forum topic')));
    }
    if ($prev && $next) {
      // Word break (a is an inline element)
      $output .= ' ';
    }
    if ($next) {
      $output .= l($next->title . t(' ›'), 'node/'. $next->nid, array('class' => 'topic-next', 'title' => t('Go to next forum topic')));
    }

    $output .= '</div>';
  }

  return $output;
}

function phptemplate_fivestar_static($rating, $stars = 5) {
  // Add necessary CSS.
  fivestar_add_css();

  $output = '';
  $output .= '<div class="fivestar-widget-static">';
  for ($n=1; $n <= $stars; $n++) {
    $star_value = ceil((100/$stars) * $n);
    $prev_star_value = ceil((100/$stars) * ($n-1));
    $zebra = ($n % 2 == 0) ? 'even' : 'odd';
    $output .= '<div class="star star-'. $n .' star-'. $zebra .'">';
    if ($rating < $star_value && $rating > $prev_star_value) {
      $percent = (($rating - $prev_star_value) / ($star_value - $prev_star_value)) * 100;
      $output .= '<span class="on" style="width: '.$percent.'%">' . $n . '</span>';
    }
    elseif ($rating >= $star_value) {
      $output .= '<span class="on">' . $n . '</span>';
    }
    else {
      $output .= '<span class="off">' . $n . '</span>';
    }
    $output .= '</div>';
  }
  $output .= '</div>';
  return $output;
}


function drupalbr_preprocess_page(&$variables) {
  drupal_add_js(drupal_get_path('theme', 'drupalbr') . '/libraries/liveTwitter/jquery.livetwitter.js', 'theme');
  drupal_add_js('$(function(){$("#twitterUserTimeline").liveTwitter("chuvainc", {limit: 5, mode: "user_timeline"});});', 'inline');
  drupal_add_css(drupal_get_path('theme', 'drupalbr') . '/libraries/liveTwitter/liveTwitter.css', 'theme');
  
  $variables['scripts'] = drupal_get_js();
  $variables['styles'] = drupal_get_css(); 
}
