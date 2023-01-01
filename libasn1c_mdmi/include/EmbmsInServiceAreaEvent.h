/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _EmbmsInServiceAreaEvent_H_
#define _EmbmsInServiceAreaEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InServiceAreaEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EmbmsInServiceAreaEvent */
typedef InServiceAreaEvent_t     EmbmsInServiceAreaEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmbmsInServiceAreaEvent;
asn_struct_free_f EmbmsInServiceAreaEvent_free;
asn_struct_print_f EmbmsInServiceAreaEvent_print;
asn_constr_check_f EmbmsInServiceAreaEvent_constraint;
ber_type_decoder_f EmbmsInServiceAreaEvent_decode_ber;
der_type_encoder_f EmbmsInServiceAreaEvent_encode_der;
xer_type_decoder_f EmbmsInServiceAreaEvent_decode_xer;
xer_type_encoder_f EmbmsInServiceAreaEvent_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _EmbmsInServiceAreaEvent_H_ */
#include <asn_internal.h>