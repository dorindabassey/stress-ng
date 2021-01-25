{ .crypto_type = CRYPTO_AEAD, .type = "aead", .name = "aegis128",	.block_size = 1,	.max_auth_size = 16,	.iv_size = 16 },
{ .crypto_type = CRYPTO_AEAD, .type = "aead", .name = "aegis128l",	.block_size = 1,	.max_auth_size = 16,	.iv_size = 16 },
{ .crypto_type = CRYPTO_AEAD, .type = "aead", .name = "aegis256",	.block_size = 1,	.max_auth_size = 16,	.iv_size = 32 },
{ .crypto_type = CRYPTO_AEAD, .type = "aead", .name = "gcm(aes)",	.block_size = 1,	.max_auth_size = 16,	.iv_size = 12 },
{ .crypto_type = CRYPTO_AEAD, .type = "aead", .name = "morus1280",	.block_size = 1,	.max_auth_size = 16,	.iv_size = 16 },
{ .crypto_type = CRYPTO_AEAD, .type = "aead", .name = "morus640",	.block_size = 1,	.max_auth_size = 16,	.iv_size = 16 },
{ .crypto_type = CRYPTO_AEAD, .type = "aead", .name = "rfc4106(gcm(aes))",	.block_size = 1,	.max_auth_size = 16,	.iv_size = 8 },
{ .crypto_type = CRYPTO_AHASH, .type = "ahash", .name = "ghash",	.block_size = 16,	.digest_size = 16 },
{ .crypto_type = CRYPTO_AKCIPHER, .type = "akcipher", .name = "ecrdsa" },
{ .crypto_type = CRYPTO_AKCIPHER, .type = "akcipher", .name = "pkcs1pad(rsa,sha256)" },
{ .crypto_type = CRYPTO_AKCIPHER, .type = "akcipher", .name = "pkcs1pad(rsa,sha512)" },
{ .crypto_type = CRYPTO_AKCIPHER, .type = "akcipher", .name = "rsa" },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "aes",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "anubis",	.block_size = 16,	.max_key_size = 40 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "blowfish",	.block_size = 8,	.max_key_size = 56 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "camellia",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "cast5",	.block_size = 8,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "cast6",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "cipher_null",	.block_size = 1 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "des",	.block_size = 8,	.max_key_size = 8 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "des3_ede",	.block_size = 8,	.max_key_size = 24 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "fcrypt",	.block_size = 8,	.max_key_size = 8 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "khazad",	.block_size = 8,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "seed",	.block_size = 16,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "serpent",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "sm4",	.block_size = 16,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "tea",	.block_size = 8,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "tnepres",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "twofish",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "xeta",	.block_size = 8,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_CIPHER, .type = "cipher", .name = "xtea",	.block_size = 8,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_RNG, .type = "rng", .name = "jitterentropy_rng" },
{ .crypto_type = CRYPTO_RNG, .type = "rng", .name = "stdrng" },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "blake2b-160",	.block_size = 128,	.digest_size = 20 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "blake2b-256",	.block_size = 128,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "blake2b-384",	.block_size = 128,	.digest_size = 48 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "blake2b-512",	.block_size = 128,	.digest_size = 64 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "cbcmac(aes)",	.block_size = 1,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "cmac(aes)",	.block_size = 16,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "crc32",	.block_size = 1,	.digest_size = 4 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "crc32c",	.block_size = 1,	.digest_size = 4 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "crct10dif",	.block_size = 1,	.digest_size = 2 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "digest_null",	.block_size = 1 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "ghash",	.block_size = 16,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "hmac(sha1)",	.block_size = 64,	.digest_size = 20 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "hmac(sha256)",	.block_size = 64,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "md4",	.block_size = 64,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "md5",	.block_size = 64,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "michael_mic",	.block_size = 8,	.digest_size = 8 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "nhpoly1305",	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "poly1305",	.block_size = 16,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "rmd128",	.block_size = 64,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "rmd160",	.block_size = 64,	.digest_size = 20 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "rmd256",	.block_size = 64,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "rmd320",	.block_size = 64,	.digest_size = 40 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha1",	.block_size = 64,	.digest_size = 20 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha224",	.block_size = 64,	.digest_size = 28 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha256",	.block_size = 64,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha3-224",	.block_size = 144,	.digest_size = 28 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha3-256",	.block_size = 136,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha3-384",	.block_size = 104,	.digest_size = 48 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha3-512",	.block_size = 72,	.digest_size = 64 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha384",	.block_size = 128,	.digest_size = 48 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sha512",	.block_size = 128,	.digest_size = 64 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "sm3",	.block_size = 64,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "streebog256",	.block_size = 64,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "streebog512",	.block_size = 64,	.digest_size = 64 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "tgr128",	.block_size = 64,	.digest_size = 16 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "tgr160",	.block_size = 64,	.digest_size = 20 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "tgr192",	.block_size = 64,	.digest_size = 24 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "wp256",	.block_size = 64,	.digest_size = 32 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "wp384",	.block_size = 64,	.digest_size = 48 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "wp512",	.block_size = 64,	.digest_size = 64 },
{ .crypto_type = CRYPTO_SHASH, .type = "shash", .name = "xxhash64",	.block_size = 32,	.digest_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(aes)",	.block_size = 16,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(blowfish)",	.block_size = 8,	.max_key_size = 56,	.iv_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(camellia)",	.block_size = 16,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(cast5)",	.block_size = 8,	.max_key_size = 16,	.iv_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(cast6)",	.block_size = 16,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(des3_ede)",	.block_size = 8,	.max_key_size = 24,	.iv_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(serpent)",	.block_size = 16,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "cbc(twofish)",	.block_size = 16,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "chacha20",	.block_size = 1,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(aes)",	.block_size = 1,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(blowfish)",	.block_size = 1,	.max_key_size = 56,	.iv_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(camellia)",	.block_size = 1,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(cast5)",	.block_size = 1,	.max_key_size = 16,	.iv_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(cast6)",	.block_size = 1,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(des3_ede)",	.block_size = 1,	.max_key_size = 24,	.iv_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(serpent)",	.block_size = 1,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ctr(twofish)",	.block_size = 1,	.max_key_size = 32,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(aes)",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(blowfish)",	.block_size = 8,	.max_key_size = 56 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(camellia)",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(cast5)",	.block_size = 8,	.max_key_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(cast6)",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(cipher_null)",	.block_size = 1 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(des3_ede)",	.block_size = 8,	.max_key_size = 24 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(serpent)",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "ecb(twofish)",	.block_size = 16,	.max_key_size = 32 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "salsa20",	.block_size = 1,	.max_key_size = 32,	.iv_size = 8 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "xchacha12",	.block_size = 1,	.max_key_size = 32,	.iv_size = 32 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "xchacha20",	.block_size = 1,	.max_key_size = 32,	.iv_size = 32 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "xts(aes)",	.block_size = 16,	.max_key_size = 64,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "xts(camellia)",	.block_size = 16,	.max_key_size = 64,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "xts(cast6)",	.block_size = 16,	.max_key_size = 64,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "xts(serpent)",	.block_size = 16,	.max_key_size = 64,	.iv_size = 16 },
{ .crypto_type = CRYPTO_SKCIPHER, .type = "skcipher", .name = "xts(twofish)",	.block_size = 16,	.max_key_size = 64,	.iv_size = 16 },
