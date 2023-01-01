/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _WifiDnsQueryEvent_H_
#define _WifiDnsQueryEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "WifiResultCode.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WifiDnsQueryEvent_PR {
    WifiDnsQueryEvent_PR_NOTHING,   /* No components present */
    WifiDnsQueryEvent_PR_dnsQuery,
    WifiDnsQueryEvent_PR_dnsResult
} WifiDnsQueryEvent_PR;

/* WifiDnsQueryEvent */
typedef struct WifiDnsQueryEvent {
    WifiDnsQueryEvent_PR present;
    union WifiDnsQueryEvent_u {
        NULL_t   dnsQuery;
        WifiResultCode_t     dnsResult;
    } choice;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} WifiDnsQueryEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WifiDnsQueryEvent;

#ifdef __cplusplus
}
#endif

#endif  /* _WifiDnsQueryEvent_H_ */
#include <asn_internal.h>
