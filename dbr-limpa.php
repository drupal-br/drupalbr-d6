<?php

require_once './includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

// Rodando com usuario 1
$user = user_load(1);

$rs = db_query("select * from {users} where uid > 1 order by uid");
print "Removendo os usuarios:";
$i = 0;
while($row = db_fetch_array($rs)) {
  user_delete($row, $row['uid']);
  if ($i++ % 100 == 0) { print $i ."\n"; } 
}
print "Pronto! ($i)\n\n";

// Nodes --------------------------------------------------------------


$node_types = array(
  'forum',
  'webform',
  'webform_report',
  'poll',
  'coluna',
  'projeto',
  'dica',
  'story',
  'book'
);

$rs = db_query("SELECT nid FROM {node} WHERE type IN ('".join("','", $node_types)."') ORDER BY nid");
print "Removendo os nodes:";
$i = 0;
while($row = db_fetch_array($rs)) {
  node_delete($row['nid']);
  if ($i++ % 100 == 0) { print $i ."\n"; } 
}
print "Pronto! ($i)\n\n";


print "Limpando watchdog...\n";
db_query("DELETE FROM {watchdog}");
print "Pronto! \n\n";

print "Limpando sessions...\n";
db_query("DELETE FROM {sessions}");
print "Pronto! \n\n";

cache_clear_all();
