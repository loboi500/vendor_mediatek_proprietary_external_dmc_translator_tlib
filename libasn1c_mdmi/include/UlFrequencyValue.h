/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _UlFrequencyValue_H_
#define _UlFrequencyValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Earfcn.h"

#ifdef __cplusplus
extern "C" {
#endif

/* UlFrequencyValue */
typedef Earfcn_t     UlFrequencyValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UlFrequencyValue;
asn_struct_free_f UlFrequencyValue_free;
asn_struct_print_f UlFrequencyValue_print;
asn_constr_check_f UlFrequencyValue_constraint;
ber_type_decoder_f UlFrequencyValue_decode_ber;
der_type_encoder_f UlFrequencyValue_encode_der;
xer_type_decoder_f UlFrequencyValue_decode_xer;
xer_type_encoder_f UlFrequencyValue_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _UlFrequencyValue_H_ */
#include <asn_internal.h>
