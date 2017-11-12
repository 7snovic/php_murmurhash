

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_murmurhash.h"



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



/* {{{ PHP_MINIT_FUNCTION
 */
PHP_MINIT_FUNCTION(php_murmurhash)
{
	return SUCCESS;
}
/* }}} */

/* {{{ PHP_MSHUTDOWN_FUNCTION
 */
PHP_MSHUTDOWN_FUNCTION(php_murmurhash)
{
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

/* }}} */

/* {{{ php_murmurhash_functions[]
 */
const zend_function_entry php_murmurhash_functions[] = {
	PHP_FE_END
};

/* }}} */

/* {{{ php_murmurhash_module_entry
 */
zend_module_entry php_murmurhash_module_entry = {
	STANDARD_MODULE_HEADER,
	"php_murmurhash",						/* Extension name */
	php_murmurhash_functions,				/* zend_function_entry */
	PHP_MINIT_FUNCTION(php_murmurhash),		/* PHP_MINIT - Module initialization */
	PHP_MSHUTDOWN_FUNCTION(php_murmurhash),	/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(php_murmurhash),				/* PHP_RINIT - Request initialization */
	NULL,								/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(php_murmurhash),				/* PHP_MINFO - Module info */
	PHP_PHP_MURMURHASH_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_PHP_MURMURHASH
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
