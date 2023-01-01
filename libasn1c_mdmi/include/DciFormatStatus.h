/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _DciFormatStatus_H_
#define _DciFormatStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DciFormatStatus {
    DciFormatStatus_dciSuccess  = 1,
    DciFormatStatus_dciError    = 2
} e_DciFormatStatus;

/* DciFormatStatus */
typedef long     DciFormatStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DciFormatStatus;
asn_struct_free_f DciFormatStatus_free;
asn_struct_print_f DciFormatStatus_print;
asn_constr_check_f DciFormatStatus_constraint;
ber_type_decoder_f DciFormatStatus_decode_ber;
der_type_encoder_f DciFormatStatus_encode_der;
xer_type_decoder_f DciFormatStatus_decode_xer;
xer_type_encoder_f DciFormatStatus_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _DciFormatStatus_H_ */
#include <asn_internal.h>