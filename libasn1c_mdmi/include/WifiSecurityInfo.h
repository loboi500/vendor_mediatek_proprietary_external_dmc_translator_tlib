/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _WifiSecurityInfo_H_
#define _WifiSecurityInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WifiSecurityInfo {
    WifiSecurityInfo_wep    = 1,
    WifiSecurityInfo_wpa    = 2,
    WifiSecurityInfo_wpa2   = 3,
    WifiSecurityInfo_wpa_ccmp   = 4,
    WifiSecurityInfo_wpa_tkip   = 5,
    WifiSecurityInfo_wpa2_ccmp  = 6,
    WifiSecurityInfo_wpa2_tkip  = 7,
    WifiSecurityInfo_wpa2_enterprise    = 8
} e_WifiSecurityInfo;

/* WifiSecurityInfo */
typedef long     WifiSecurityInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WifiSecurityInfo;
asn_struct_free_f WifiSecurityInfo_free;
asn_struct_print_f WifiSecurityInfo_print;
asn_constr_check_f WifiSecurityInfo_constraint;
ber_type_decoder_f WifiSecurityInfo_decode_ber;
der_type_encoder_f WifiSecurityInfo_encode_der;
xer_type_decoder_f WifiSecurityInfo_decode_xer;
xer_type_encoder_f WifiSecurityInfo_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _WifiSecurityInfo_H_ */
#include <asn_internal.h>
