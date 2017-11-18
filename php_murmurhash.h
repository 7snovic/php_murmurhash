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


#ifndef PHP_MURMURHASH_H
#define PHP_MURMURHASH_H

#include "MurmurHash1.h"
#include "MurmurHash2.h"
#include "MurmurHash3.h"

extern zend_module_entry php_murmurhash_module_entry;
# define phpext_php_murmurhash_ptr &php_murmurhash_module_entry

# define PHP_MURMURHASH_VERSION "0.1.0"

PHP_FUNCTION(MurmurHash1);
PHP_FUNCTION(MurmurHash1Aligned);
PHP_FUNCTION(MurmurHash2);
PHP_FUNCTION(MurmurHash64A);
PHP_FUNCTION(MurmurHash64B);
PHP_FUNCTION(MurmurHash2A);
PHP_FUNCTION(MurmurHashNeutral2);
PHP_FUNCTION(MurmurHashAligned2);

# if defined(ZTS) && defined(COMPILE_DL_MURMURHASH)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_PHP_MURMURHASH_H */
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 */
