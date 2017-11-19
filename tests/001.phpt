--TEST--
Check if the extension has been loaded.
--FILE--
<?php

if(extension_loaded("murmurhash")) {
    print "MurmurHash is enabled.";
}

?>
--EXPECTF--
MurmurHash is enabled.
