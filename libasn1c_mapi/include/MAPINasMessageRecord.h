/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPINasMessageRecord_H_
#define _MAPINasMessageRecord_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MAPIOtaMessageDirection.h"
#include "MAPINasMessageType.h"
#include <BOOLEAN.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MAPIVersion3gpp;

/* MAPINasMessageRecord */
typedef struct MAPINasMessageRecord {
    struct MAPIVersion3gpp  *nasVersion /* OPTIONAL */;
    MAPIOtaMessageDirection_t   *direction  /* OPTIONAL */;
    MAPINasMessageType_t    *type   /* OPTIONAL */;
    BOOLEAN_t   *ciphered   /* OPTIONAL */;
    OCTET_STRING_t  *nasPayload /* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MAPINasMessageRecord_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPINasMessageRecord;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAPIVersion3gpp.h"

#endif  /* _MAPINasMessageRecord_H_ */
#include <asn_internal.h>
