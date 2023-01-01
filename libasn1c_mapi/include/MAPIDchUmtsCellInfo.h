/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIDchUmtsCellInfo_H_
#define _MAPIDchUmtsCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "MAPICellType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAPIDchUmtsCellInfo */
typedef struct MAPIDchUmtsCellInfo {
    long    *uarfcn /* OPTIONAL */;
    long    *psc    /* OPTIONAL */;
    long    *rscp   /* OPTIONAL */;
    long    *ecn0   /* OPTIONAL */;
    MAPICellType_t  *cellType   /* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MAPIDchUmtsCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIDchUmtsCellInfo;

#ifdef __cplusplus
}
#endif

#endif  /* _MAPIDchUmtsCellInfo_H_ */
#include <asn_internal.h>