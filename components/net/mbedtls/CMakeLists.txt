# Copyright (C) 2018 RDA Technologies Limited and/or its affiliates("RDA").
# All rights reserved.
#
# This software is supplied "AS IS" without any warranties.
# RDA assumes no responsibility or liability for the use of the software,
# conveys no license or title under any patent, copyright, or mask work
# right to the product. RDA reserves the right to make changes in the
# software without notification.  RDA also make no representation or
# warranty that such application will be suitable for the specified use
# without further testing or modification.

configure_file(include/mbedtls_config.h.in ${out_inc_dir}/mbedtls_config.h)

if(CONFIG_MBEDTLS_SUPPORT_SM2)
    file(GLOB headers 3rdparty/sm2/include/*.h)
    install_headers(${headers} OUTPUT ${out_inc_dir}/mbedtls)
endif()
set(target mbedtls)
add_app_libraries($<TARGET_FILE:${target}>)

add_library(${target} STATIC)
set_target_properties(${target} PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${out_lib_dir})
#target_compile_definitions(${target} PRIVATE AT_MQTTSN_SUPPORT=1)
target_include_directories(${target} PUBLIC include)
target_include_directories(${target} PRIVATE ${CMAKE_CURRENT_BINARY_DIR})
target_include_targets(${target} PRIVATE kernel driver calclib net lwip cfw)

set(MBEDLIBDIR library)
set(src_crypto
    ${MBEDLIBDIR}/mbed_aes.c
    ${MBEDLIBDIR}/mbed_aesni.c
    ${MBEDLIBDIR}/arc4.c
	${MBEDLIBDIR}/aria.c
    ${MBEDLIBDIR}/asn1parse.c
    ${MBEDLIBDIR}/asn1write.c
    ${MBEDLIBDIR}/base64.c
    ${MBEDLIBDIR}/bignum.c
    ${MBEDLIBDIR}/blowfish.c
    ${MBEDLIBDIR}/camellia.c
    ${MBEDLIBDIR}/ccm.c
    ${MBEDLIBDIR}/cipher.c
	${MBEDLIBDIR}/chacha20.c
	${MBEDLIBDIR}/chachapoly.c
	${MBEDLIBDIR}/poly1305.c
	${MBEDLIBDIR}/cipher.c
    ${MBEDLIBDIR}/cipher_wrap.c
    ${MBEDLIBDIR}/constant_time.c
    ${MBEDLIBDIR}/cmac.c
    ${MBEDLIBDIR}/ctr_drbg.c
    ${MBEDLIBDIR}/des.c
    ${MBEDLIBDIR}/dhm.c
    ${MBEDLIBDIR}/ecdh.c
    ${MBEDLIBDIR}/ecdsa.c
    ${MBEDLIBDIR}/ecjpake.c
    ${MBEDLIBDIR}/ecp.c
    ${MBEDLIBDIR}/ecp_curves.c
    ${MBEDLIBDIR}/entropy.c
    ${MBEDLIBDIR}/entropy_poll.c
    ${MBEDLIBDIR}/error.c
    ${MBEDLIBDIR}/gcm.c
    ${MBEDLIBDIR}/havege.c
    ${MBEDLIBDIR}/hkdf.c
    ${MBEDLIBDIR}/hmac_drbg.c
    ${MBEDLIBDIR}/md.c
    ${MBEDLIBDIR}/md2.c
    ${MBEDLIBDIR}/md4.c
    ${MBEDLIBDIR}/md5.c
    ${MBEDLIBDIR}/memory_buffer_alloc.c
    ${MBEDLIBDIR}/mps_reader.c
    ${MBEDLIBDIR}/mps_trace.c
    ${MBEDLIBDIR}/nist_kw.c
    ${MBEDLIBDIR}/oid.c
    ${MBEDLIBDIR}/padlock.c
    ${MBEDLIBDIR}/pem.c
    ${MBEDLIBDIR}/pk.c
    ${MBEDLIBDIR}/pk_wrap.c
    ${MBEDLIBDIR}/pkcs12.c
    ${MBEDLIBDIR}/pkcs5.c
    ${MBEDLIBDIR}/pkparse.c
    ${MBEDLIBDIR}/pkwrite.c
    ${MBEDLIBDIR}/platform.c
	${MBEDLIBDIR}/platform_util.c
    ${MBEDLIBDIR}/poly1305.c
    ${MBEDLIBDIR}/psa_crypto.c
    ${MBEDLIBDIR}/psa_crypto_aead.c
    ${MBEDLIBDIR}/psa_crypto_cipher.c
    ${MBEDLIBDIR}/psa_crypto_client.c
    ${MBEDLIBDIR}/psa_crypto_driver_wrappers.c
    ${MBEDLIBDIR}/psa_crypto_ecp.c
    ${MBEDLIBDIR}/psa_crypto_hash.c
    ${MBEDLIBDIR}/psa_crypto_mac.c
    ${MBEDLIBDIR}/psa_crypto_rsa.c
    ${MBEDLIBDIR}/psa_crypto_se.c
    ${MBEDLIBDIR}/psa_crypto_slot_management.c
    ${MBEDLIBDIR}/psa_crypto_storage.c
    ${MBEDLIBDIR}/psa_its_file.c
    ${MBEDLIBDIR}/ripemd160.c
    ${MBEDLIBDIR}/rsa.c
	${MBEDLIBDIR}/rsa_internal.c
    ${MBEDLIBDIR}/sha1.c
    ${MBEDLIBDIR}/mbed_sha256.c
    ${MBEDLIBDIR}/sha512.c
    ${MBEDLIBDIR}/threading.c
    ${MBEDLIBDIR}/timing.c
    ${MBEDLIBDIR}/version.c
    ${MBEDLIBDIR}/version_features.c
    ${MBEDLIBDIR}/xtea.c
)

if(CONFIG_MBEDTLS_SUPPORT_SM2)
    set(src_crypto ${src_crypto}
        3rdparty/sm2/src/ecdsa_sm2.c
    )
endif()

set(src_x509
    #quectel removed
    #${MBEDLIBDIR}/certs.c
    ${MBEDLIBDIR}/pkcs11.c
    ${MBEDLIBDIR}/x509.c
    ${MBEDLIBDIR}/x509_create.c
    ${MBEDLIBDIR}/x509_crl.c
    ${MBEDLIBDIR}/x509_crt.c
    ${MBEDLIBDIR}/x509_csr.c
    ${MBEDLIBDIR}/x509write_crt.c
    ${MBEDLIBDIR}/x509write_csr.c
)

set(src_tls
    ${MBEDLIBDIR}/mbed_debug.c
    ${MBEDLIBDIR}/net_sockets.c
    ${MBEDLIBDIR}/ssl_cache.c
    ${MBEDLIBDIR}/ssl_ciphersuites.c
    ${MBEDLIBDIR}/ssl_cli.c
    ${MBEDLIBDIR}/ssl_cookie.c
    ${MBEDLIBDIR}/ssl_msg.c
    ${MBEDLIBDIR}/ssl_srv.c
    ${MBEDLIBDIR}/ssl_ticket.c
    ${MBEDLIBDIR}/ssl_tls.c
    ${MBEDLIBDIR}/ssl_tls13_keys.c
)

target_sources(${target} PRIVATE
    ${src_crypto}
	${src_x509}
	${src_tls}
)
