/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _WifiInformation_H_
#define _WifiInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WifiInformation */
typedef struct WifiInformation {
    OCTET_STRING_t   bssid;
    OCTET_STRING_t   ssid;
    OCTET_STRING_t   rssi;
    OCTET_STRING_t   detailState;
    OCTET_STRING_t   supplicantState;
    OCTET_STRING_t   ip;
    long     linkSpeed;
    OCTET_STRING_t   macAddress;
    OCTET_STRING_t   networkID;
    OCTET_STRING_t   hiddenSSID;
    OCTET_STRING_t   gateway;
    OCTET_STRING_t   netMask;
    OCTET_STRING_t   dns1;
    OCTET_STRING_t   dns2;
    OCTET_STRING_t   serverIP;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} WifiInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WifiInformation;

#ifdef __cplusplus
}
#endif

#endif  /* _WifiInformation_H_ */
#include <asn_internal.h>
