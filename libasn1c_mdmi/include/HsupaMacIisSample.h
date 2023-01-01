/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _HsupaMacIisSample_H_
#define _HsupaMacIisSample_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransmissionType.h"
#include <BOOLEAN.h>
#include "SchedulingInfo.h"
#include <NativeInteger.h>
#include "SegmentationType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HsupaMacIisSample */
typedef struct HsupaMacIisSample {
    TransmissionType_t   txType;
    BOOLEAN_t    happyBit;
    SchedulingInfo_t     siType;
    long     uePowerHeadroom;
    long     highestPriorityLogicalChannel;
    long     highestPriorityLogicalChannelBufferStatus;
    long     edchBufferStatus;
    SegmentationType_t   segmentationType;
    long     sduSize;
    long     logicalChannelId;
    long     erntiType;
    long     f;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} HsupaMacIisSample_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HsupaMacIisSample;

#ifdef __cplusplus
}
#endif

#endif  /* _HsupaMacIisSample_H_ */
#include <asn_internal.h>
