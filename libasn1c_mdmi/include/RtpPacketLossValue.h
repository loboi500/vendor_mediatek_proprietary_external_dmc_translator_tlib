/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _RtpPacketLossValue_H_
#define _RtpPacketLossValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RtpPacketLossValue */
typedef struct RtpPacketLossValue {
    unsigned long    ssrc;
    long     packetsLost;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} RtpPacketLossValue_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ssrc_2; // (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RtpPacketLossValue;

#ifdef __cplusplus
}
#endif

#endif  /* _RtpPacketLossValue_H_ */
#include <asn_internal.h>
