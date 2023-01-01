/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _DlBandwidthValue_H_
#define _DlBandwidthValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Bandwidth.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DlBandwidthValue */
typedef Bandwidth_t  DlBandwidthValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DlBandwidthValue;
asn_struct_free_f DlBandwidthValue_free;
asn_struct_print_f DlBandwidthValue_print;
asn_constr_check_f DlBandwidthValue_constraint;
ber_type_decoder_f DlBandwidthValue_decode_ber;
der_type_encoder_f DlBandwidthValue_encode_der;
xer_type_decoder_f DlBandwidthValue_decode_xer;
xer_type_encoder_f DlBandwidthValue_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _DlBandwidthValue_H_ */
#include <asn_internal.h>
