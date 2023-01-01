/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _WifiScan_H_
#define _WifiScan_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeStamp.h"
#include "WifiScanType.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct WifiChannel;
struct WifiAccessPoint;

/* WifiScan */
typedef struct WifiScan {
    TimeStamp_t  timeScanStart;
    TimeStamp_t  timeScanEnd;
    struct scannedChannelList {
        A_SEQUENCE_OF(struct WifiChannel) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } scannedChannelList;
    WifiScanType_t   scanType;
    struct scannedAccessPoints {
        A_SEQUENCE_OF(struct WifiAccessPoint) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } scannedAccessPoints;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} WifiScan_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WifiScan;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "WifiChannel.h"
#include "WifiAccessPoint.h"

#endif  /* _WifiScan_H_ */
#include <asn_internal.h>
