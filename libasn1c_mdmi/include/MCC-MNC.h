/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _MCC_MNC_H_
#define _MCC_MNC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MCC.h"
#include "MNC.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MCC-MNC */
typedef struct MCC_MNC {
    MCC_t    mcc;
    MNC_t    mnc;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MCC_MNC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MCC_MNC;

#ifdef __cplusplus
}
#endif

#endif  /* _MCC_MNC_H_ */
#include <asn_internal.h>
