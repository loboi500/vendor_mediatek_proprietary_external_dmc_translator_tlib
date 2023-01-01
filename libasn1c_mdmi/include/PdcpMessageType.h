/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _PdcpMessageType_H_
#define _PdcpMessageType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PdcpMessageType {
    PdcpMessageType_data    = 1,
    PdcpMessageType_control = 2
} e_PdcpMessageType;

/* PdcpMessageType */
typedef long     PdcpMessageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PdcpMessageType;
asn_struct_free_f PdcpMessageType_free;
asn_struct_print_f PdcpMessageType_print;
asn_constr_check_f PdcpMessageType_constraint;
ber_type_decoder_f PdcpMessageType_decode_ber;
der_type_encoder_f PdcpMessageType_encode_der;
xer_type_decoder_f PdcpMessageType_decode_xer;
xer_type_encoder_f PdcpMessageType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _PdcpMessageType_H_ */
#include <asn_internal.h>