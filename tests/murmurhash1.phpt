--TEST--
Get the output of MurmurHash1.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHash1($key, $seed);

echo "MurmurHash1 output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHash1 output is : 1366704579.
