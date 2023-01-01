/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIMemeDchUmtsCellInfo_H_
#define _MAPIMemeDchUmtsCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MAPIDchUmtsCellInfo;

/* MAPIMemeDchUmtsCellInfo */
typedef struct MAPIMemeDchUmtsCellInfo {
    struct MAPIMemeDchUmtsCellInfo__umtsCellList {
        A_SEQUENCE_OF(struct MAPIDchUmtsCellInfo) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } *umtsCellList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MAPIMemeDchUmtsCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIMemeDchUmtsCellInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAPIDchUmtsCellInfo.h"

#endif  /* _MAPIMemeDchUmtsCellInfo_H_ */
#include <asn_internal.h>
