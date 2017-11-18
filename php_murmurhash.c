/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) 1997-2017 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Hassan Ahmed <hsn@outlook.hu>                                |
   +----------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_murmurhash.h"


PHP_FUNCTION(MurmurHash1)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    uint32_t out = MurmurHash1(key, keylen, seed);

    RETURN_LONG(out);
}

PHP_FUNCTION(MurmurHash1Aligned)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    uint32_t out = MurmurHash1Aligned(key, keylen, seed);

    RETURN_LONG(out);
}


/* MurmurHash2 */

PHP_FUNCTION(MurmurHash2)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    uint32_t out = MurmurHash2(key, keylen, seed);

    RETURN_LONG(out);
}

PHP_FUNCTION(MurmurHash64A)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    size_t out = MurmurHash64A(key, keylen, seed);

    RETURN_LONG(out);
}

PHP_FUNCTION(MurmurHash64B)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    size_t out = MurmurHash64B(key, keylen, seed);

    RETURN_LONG(out);
}

PHP_FUNCTION(MurmurHash2A)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    uint32_t out = MurmurHash2A(key, keylen, seed);

    RETURN_LONG(out);
}

PHP_FUNCTION(MurmurHashNeutral2)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    uint32_t out = MurmurHashNeutral2(key, keylen, seed);

    RETURN_LONG(out);
}

PHP_FUNCTION(MurmurHashAligned2)
{
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    uint32_t out = MurmurHashAligned2(key, keylen, seed);

    RETURN_LONG(out);
}

/* MurmurHash3 functions */
PHP_FUNCTION(MurmurHash3_x86_32)
{
    uint32_t out[4];
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    MurmurHash3_x86_32(key, keylen, seed, out);

    RETURN_LONG(out[0]);

}

PHP_FUNCTION(MurmurHash3_x86_128)
{
    uint32_t out[4];
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    MurmurHash3_x86_128(key, keylen, seed, out);

    array_init(return_value);
    add_next_index_long(return_value, out[0]);
    add_next_index_long(return_value, out[1]);
    add_next_index_long(return_value, out[2]);
    add_next_index_long(return_value, out[3]);
}

PHP_FUNCTION(MurmurHash3_x64_128)
{
    uint64_t out[2];
    char *key = NULL;
    size_t keylen = 0;
    zend_long seed = 0;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "sl", &key, &keylen, &seed) == FAILURE) {
        RETURN_FALSE;
    }

    MurmurHash3_x64_128(key, keylen, seed, out);

    array_init(return_value);
    add_next_index_long(return_value, out[0]);
    add_next_index_long(return_value, out[1]);
}


/* {{{ PHP_RINIT_FUNCTION
 */
PHP_RINIT_FUNCTION(php_murmurhash)
{
#if defined(ZTS) && defined(COMPILE_DL_PHP_MURMURHASH)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MINFO_FUNCTION
 */
PHP_MINFO_FUNCTION(php_murmurhash)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "php_murmurhash support", "enabled");
	php_info_print_table_end();

}
/* }}} */

/* {{{ arginfo
 */
ZEND_BEGIN_ARG_INFO(arginfo_MurmurHash1, 2)
    ZEND_ARG_INFO(0, key)
    ZEND_ARG_INFO(0, seed)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(arginfo_MurmurHash2, 2)
    ZEND_ARG_INFO(0, key)
    ZEND_ARG_INFO(0, seed)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO(arginfo_MurmurHash3, 2)
    ZEND_ARG_INFO(0, key)
    ZEND_ARG_INFO(0, seed)
ZEND_END_ARG_INFO()
/* }}} */

/* {{{ php_murmurhash_functions[]
 */
const zend_function_entry php_murmurhash_functions[] = {
	PHP_FE(MurmurHash1, arginfo_MurmurHash1)
	PHP_FE(MurmurHash1Aligned, arginfo_MurmurHash1)

	PHP_FE(MurmurHash2, arginfo_MurmurHash2)
	PHP_FE(MurmurHash64A, arginfo_MurmurHash2)
	PHP_FE(MurmurHash64B, arginfo_MurmurHash2)
	PHP_FE(MurmurHash2A, arginfo_MurmurHash2)
	PHP_FE(MurmurHashNeutral2, arginfo_MurmurHash2)
	PHP_FE(MurmurHashAligned2, arginfo_MurmurHash2)

	PHP_FE(MurmurHash3_x86_32, arginfo_MurmurHash3)
	PHP_FE(MurmurHash3_x86_128, arginfo_MurmurHash3)
	PHP_FE(MurmurHash3_x64_128, arginfo_MurmurHash3)
	PHP_FE_END
};
/* }}} */

/* {{{ php_murmurhash_module_entry
 */
zend_module_entry php_murmurhash_module_entry = {
	STANDARD_MODULE_HEADER,
	"murmurhash",						/* Extension name */
	php_murmurhash_functions,				/* zend_function_entry */
	NULL,		/* PHP_MINIT - Module initialization */
	NULL,	/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(php_murmurhash),				/* PHP_RINIT - Request initialization */
	NULL,								/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(php_murmurhash),				/* PHP_MINFO - Module info */
	PHP_MURMURHASH_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_MURMURHASH
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(php_murmurhash)
#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
