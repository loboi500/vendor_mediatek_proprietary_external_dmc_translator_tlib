/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _SssCellInfo_H_
#define _SssCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemFrameNumber.h"
#include "SubFrameNumber.h"
#include <NativeInteger.h>
#include "CyclicPrefix.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct BarredCell;
struct DetectedCell;

/* SssCellInfo */
typedef struct SssCellInfo {
    SystemFrameNumber_t  sysFrameNumber;
    SubFrameNumber_t     subFrameNumber;
    long     pci;
    long     peakValue;
    long     frameBoundary;
    CyclicPrefix_t   cyclicPrefix;
    struct barredCells {
        A_SEQUENCE_OF(struct BarredCell) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } barredCells;
    struct detectedCells {
        A_SEQUENCE_OF(struct DetectedCell) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } detectedCells;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} SssCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SssCellInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "BarredCell.h"
#include "DetectedCell.h"

#endif  /* _SssCellInfo_H_ */
#include <asn_internal.h>
