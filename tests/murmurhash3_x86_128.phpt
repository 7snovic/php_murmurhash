--TEST--
Get the output of MurmurHash3_x86_128.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "Hello World";
$seed = 20;

$out = MurmurHash3_x86_128($key, $seed);

echo "MurmurHash3_x86_128 output is :\n";
print_r($out);

?>
--EXPECTF--
MurmurHash3_x86_128 output is :
Array
(
    [0] => 2807399100
    [1] => 2041383936
    [2] => 2647288306
    [3] => 496108139
)
