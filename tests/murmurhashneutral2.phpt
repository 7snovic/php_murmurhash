--TEST--
Get the output of MurmurHashNeutral2.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "PHP7";
$seed = 20;

$out = MurmurHashNeutral2($key, $seed);

echo "MurmurHashNeutral2 output is : " . $out . ".\n";

?>
--EXPECTF--
MurmurHashNeutral2 output is : 1995194385.
