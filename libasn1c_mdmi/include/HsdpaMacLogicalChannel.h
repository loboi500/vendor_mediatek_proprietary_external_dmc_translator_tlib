/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _HsdpaMacLogicalChannel_H_
#define _HsdpaMacLogicalChannel_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LogicalChannelName.h"
#include "LogicalChannelMode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HsdpaMacLogicalChannel */
typedef struct HsdpaMacLogicalChannel {
    long     rlcLogicalChannelId;
    LogicalChannelName_t     logicalChannelName;
    LogicalChannelMode_t     logicalChannelMode;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} HsdpaMacLogicalChannel_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HsdpaMacLogicalChannel;

#ifdef __cplusplus
}
#endif

#endif  /* _HsdpaMacLogicalChannel_H_ */
#include <asn_internal.h>
