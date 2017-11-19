--TEST--
Get the output of MurmurHash3_x86_32.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHash3_x86_32($key, $seed);

echo "MurmurHash3_x86_32 output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHash3_x86_32 output is : 217831011.
