/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIUSIMECapability_H_
#define _MAPIUSIMECapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAPIUSIMECapability */
typedef struct MAPIUSIMECapability {
    BOOLEAN_t   *isHSDPAEnabled /* OPTIONAL */;
    BOOLEAN_t   *isHSUPAEnabled /* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MAPIUSIMECapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIUSIMECapability;

#ifdef __cplusplus
}
#endif

#endif  /* _MAPIUSIMECapability_H_ */
#include <asn_internal.h>
