--TEST--
Get the output of MurmurHash2.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHash2($key, $seed);

echo "MurmurHash2 output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHash2 output is : 1995194385.
