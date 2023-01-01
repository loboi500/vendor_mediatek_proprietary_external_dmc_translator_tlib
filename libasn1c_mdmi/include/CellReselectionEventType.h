/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _CellReselectionEventType_H_
#define _CellReselectionEventType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "CellReselectionFailure.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellReselectionEventType_PR {
    CellReselectionEventType_PR_NOTHING,    /* No components present */
    CellReselectionEventType_PR_cellReselectionAttempt,
    CellReselectionEventType_PR_cellReselectionFailure
} CellReselectionEventType_PR;

/* CellReselectionEventType */
typedef struct CellReselectionEventType {
    CellReselectionEventType_PR present;
    union CellReselectionEventType_u {
        NULL_t   cellReselectionAttempt;
        CellReselectionFailure_t     cellReselectionFailure;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} CellReselectionEventType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellReselectionEventType;

#ifdef __cplusplus
}
#endif

#endif  /* _CellReselectionEventType_H_ */
#include <asn_internal.h>
