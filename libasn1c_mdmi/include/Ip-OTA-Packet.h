/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _Ip_OTA_Packet_H_
#define _Ip_OTA_Packet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IpPacketReport.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Ip-OTA-Packet */
typedef IpPacketReport_t     Ip_OTA_Packet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ip_OTA_Packet;
asn_struct_free_f Ip_OTA_Packet_free;
asn_struct_print_f Ip_OTA_Packet_print;
asn_constr_check_f Ip_OTA_Packet_constraint;
ber_type_decoder_f Ip_OTA_Packet_decode_ber;
der_type_encoder_f Ip_OTA_Packet_encode_der;
xer_type_decoder_f Ip_OTA_Packet_decode_xer;
xer_type_encoder_f Ip_OTA_Packet_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _Ip_OTA_Packet_H_ */
#include <asn_internal.h>
