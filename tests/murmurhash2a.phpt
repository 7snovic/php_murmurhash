--TEST--
Get the output of MurmurHash2A.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHash2A($key, $seed);

echo "MurmurHash2A output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHash2A output is : 3322633793.
