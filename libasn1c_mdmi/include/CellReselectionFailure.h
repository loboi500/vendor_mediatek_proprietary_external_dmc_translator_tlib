/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _CellReselectionFailure_H_
#define _CellReselectionFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Earfcn.h"
#include <NativeInteger.h>
#include "CellReselectionFailureType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellReselectionFailure */
typedef struct CellReselectionFailure {
    Earfcn_t     dlArfcn;
    long     cellId;
    CellReselectionFailureType_t     failureType;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} CellReselectionFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionFailure;

#ifdef __cplusplus
}
#endif

#endif  /* _CellReselectionFailure_H_ */
#include <asn_internal.h>
