--TEST--
Get the output of MurmurHash3_x64_128.
--SKIPIF--
<?php if(!extension_loaded("murmurhash")) print "skip"; ?>
--FILE--
<?php

$key = "Hello World";
$seed = 20;

$out = MurmurHash3_x64_128($key, $seed);

echo "MurmurHash3_x64_128 output is :\n";
print_r($out);

?>
--EXPECTF--
MurmurHash3_x64_128 output is :
Array
(
    [0] => -2165696989961268517
    [1] => -7428631855031787409
)
