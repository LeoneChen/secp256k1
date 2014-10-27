// Copyright (c) 2013-2014 Pieter Wuille
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef _SECP256K1_ECKEY_
#define _SECP256K1_ECKEY_

#include "group.h"
#include "num.h"

int static secp256k1_eckey_pubkey_parse(secp256k1_ge_t *elem, const unsigned char *pub, int size);
void static secp256k1_eckey_pubkey_serialize(secp256k1_ge_t *elem, unsigned char *pub, int *size, int compressed);

int static secp256k1_eckey_privkey_parse(secp256k1_num_t *key, const unsigned char *privkey, int privkeylen);
int static secp256k1_eckey_privkey_serialize(unsigned char *privkey, int *privkeylen, const secp256k1_num_t *key, int compressed);

int static secp256k1_eckey_privkey_tweak_add(secp256k1_num_t *key, const secp256k1_num_t *tweak);
int static secp256k1_eckey_pubkey_tweak_add(secp256k1_ge_t *key, const secp256k1_num_t *tweak);
int static secp256k1_eckey_privkey_tweak_mul(secp256k1_num_t *key, const secp256k1_num_t *tweak);
int static secp256k1_eckey_pubkey_tweak_mul(secp256k1_ge_t *key, const secp256k1_num_t *tweak);

#endif