/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _Mac_OTA_Messages_H_
#define _Mac_OTA_Messages_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MacMessageReport.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Mac-OTA-Messages */
typedef MacMessageReport_t   Mac_OTA_Messages_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Mac_OTA_Messages;
asn_struct_free_f Mac_OTA_Messages_free;
asn_struct_print_f Mac_OTA_Messages_print;
asn_constr_check_f Mac_OTA_Messages_constraint;
ber_type_decoder_f Mac_OTA_Messages_decode_ber;
der_type_encoder_f Mac_OTA_Messages_encode_der;
xer_type_decoder_f Mac_OTA_Messages_decode_xer;
xer_type_encoder_f Mac_OTA_Messages_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _Mac_OTA_Messages_H_ */
#include <asn_internal.h>
