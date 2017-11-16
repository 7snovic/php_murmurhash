PHP_ARG_ENABLE(murmurhash, whether to enable php murmurhash support,
[  --enable-murmurhash          Enable php murmurhash support])

if test "$PHP_MURMURHASH" != "no"; then
  AC_DEFINE(HAVE_MURMURHASH, 1, [ Have php_murmurhash support ])

  PHP_LIB_MURMUR="libmurmurhash"
  PHP_MURMUR_CFLAGS="-I@ext_srcdir@/libmurmurhash"

  PHP_MURMUR_SOURCES="$PHP_LIB_MURMUR/MurmurHash1.c $PHP_LIB_MURMUR/MurmurHash2.c $PHP_LIB_MURMUR/MurmurHash3.c"
  PHP_NEW_EXTENSION(murmurhash, php_murmurhash.c $PHP_MURMUR_SOURCES, $ext_shared,, $PHP_MURMUR_CFLAGS)
fi
