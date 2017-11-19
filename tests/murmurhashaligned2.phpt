--TEST--
Get the output of MurmurHashAligned2.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHashAligned2($key, $seed);

echo "MurmurHashAligned2 output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHashAligned2 output is : 1995194385.
