--TEST--
Get the output of MurmurHash1Aligned.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHash1Aligned($key, $seed);

echo "MurmurHash1Aligned output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHash1Aligned output is : 1366704579.
