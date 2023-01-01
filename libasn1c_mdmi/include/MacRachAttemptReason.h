/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _MacRachAttemptReason_H_
#define _MacRachAttemptReason_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MacRachAttemptReasonType.h"
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MacRachAttemptReason */
typedef struct MacRachAttemptReason {
    MacRachAttemptReasonType_t   reason;
    long     ueId;
    BOOLEAN_t    contention;
    long     preamble;
    long     preambleRaIndex;
    long     msg3Size;
    long     preambleGroupChosen;
    long     ueCrnti;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MacRachAttemptReason_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MacRachAttemptReason;

#ifdef __cplusplus
}
#endif

#endif  /* _MacRachAttemptReason_H_ */
#include <asn_internal.h>
