/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _Version3gpp_H_
#define _Version3gpp_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Version3gpp */
typedef struct Version3gpp {
    long     majorVersion;
    long     minorVersion;
    long     releaseVersion;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} Version3gpp_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Version3gpp;

#ifdef __cplusplus
}
#endif

#endif  /* _Version3gpp_H_ */
#include <asn_internal.h>
