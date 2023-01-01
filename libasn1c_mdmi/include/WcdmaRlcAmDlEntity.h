/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _WcdmaRlcAmDlEntity_H_
#define _WcdmaRlcAmDlEntity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LogicalChannelName.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WcdmaRlcAmDlEntity */
typedef struct WcdmaRlcAmDlEntity {
    long     dlAmdLogicalChannelId;
    long     dlControlLogicalChannelId;
    LogicalChannelName_t     logicalChannelName;
    long     receivedPduByteCount;
    long     receivedSduByteCount;
    long     unrecoverablePduCount;
    long     receivedDataPduCount;
    long     receivedControlPduCount;
    long     numReceivedNak;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} WcdmaRlcAmDlEntity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WcdmaRlcAmDlEntity;

#ifdef __cplusplus
}
#endif

#endif  /* _WcdmaRlcAmDlEntity_H_ */
#include <asn_internal.h>
