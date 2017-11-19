--TEST--
Get the output of MurmurHash64B.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHash64B($key, $seed);

echo "MurmurHash64B output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHash64B output is : -1221448354433978805.
