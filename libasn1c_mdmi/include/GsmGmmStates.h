/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _GsmGmmStates_H_
#define _GsmGmmStates_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GmmStateType.h"
#include "GmmSubstateType.h"
#include "GmmUpdateStatus.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GsmGmmStates */
typedef struct GsmGmmStates {
    GmmStateType_t   gmmState;
    GmmSubstateType_t    gmmSubstate;
    GmmUpdateStatus_t    gmmUpdateStatus;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} GsmGmmStates_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GsmGmmStates;

#ifdef __cplusplus
}
#endif

#endif  /* _GsmGmmStates_H_ */
#include <asn_internal.h>
