/* fips_test.h
 *
 * Copyright (C) 2006-2014 wolfSSL Inc.
 *
 * This file is part of CyaSSL.
 *
 * CyaSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CyaSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */


#ifndef CTAO_CRYPT_FIPS_TEST_H
#define CTAO_CRYPT_FIPS_TEST_H

#include <cyassl/ctaocrypt/types.h>


#ifdef __cplusplus
    extern "C" {
#endif

/* Known Answer Test string inputs are hex */

CYASSL_LOCAL int DoKnownAnswerTests(char*);


/* Power on self test failure callback */
typedef void(*wolfCrypt_fips_cb)(int ok, int err, const char* hash);

/* Public set function */
CYASSL_API int wolfCrypt_SetCb_fips(wolfCrypt_fips_cb cbf);


#ifdef __cplusplus
    } /* extern "C" */
#endif

#endif /* CTAO_CRYPT_FIPS_TEST_H */

