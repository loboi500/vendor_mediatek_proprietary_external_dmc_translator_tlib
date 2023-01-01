/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _SipPublishEvent_H_
#define _SipPublishEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "PublishResult.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SipPublishEvent_PR {
    SipPublishEvent_PR_NOTHING, /* No components present */
    SipPublishEvent_PR_publishNotAvailable,
    SipPublishEvent_PR_publishAvailable
} SipPublishEvent_PR;

/* SipPublishEvent */
typedef struct SipPublishEvent {
    SipPublishEvent_PR present;
    union SipPublishEvent_u {
        NULL_t   publishNotAvailable;
        PublishResult_t  publishAvailable;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} SipPublishEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SipPublishEvent;

#ifdef __cplusplus
}
#endif

#endif  /* _SipPublishEvent_H_ */
#include <asn_internal.h>
