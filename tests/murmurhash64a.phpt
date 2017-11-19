--TEST--
Get the output of MurmurHash64A.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHash64A($key, $seed);

echo "MurmurHash64A output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHash64A output is : 9099570780534205380.
