PHP_ARG_ENABLE(murmurhash, whether to enable php murmurhash support,
[  --enable-murmurhash          Enable php murmurhash support])

if test "$PHP_MURMURHASH" != "no"; then
  AC_DEFINE(HAVE_MURMURHASH, 1, [ Have php_murmurhash support ])
  PHP_NEW_EXTENSION(murmurhash, php_murmurhash.c, $ext_shared)
fi
