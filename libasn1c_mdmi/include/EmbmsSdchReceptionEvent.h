/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _EmbmsSdchReceptionEvent_H_
#define _EmbmsSdchReceptionEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SDCHReceptionEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EmbmsSdchReceptionEvent */
typedef SDCHReceptionEvent_t     EmbmsSdchReceptionEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmbmsSdchReceptionEvent;
asn_struct_free_f EmbmsSdchReceptionEvent_free;
asn_struct_print_f EmbmsSdchReceptionEvent_print;
asn_constr_check_f EmbmsSdchReceptionEvent_constraint;
ber_type_decoder_f EmbmsSdchReceptionEvent_decode_ber;
der_type_encoder_f EmbmsSdchReceptionEvent_encode_der;
xer_type_decoder_f EmbmsSdchReceptionEvent_decode_xer;
xer_type_encoder_f EmbmsSdchReceptionEvent_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _EmbmsSdchReceptionEvent_H_ */
#include <asn_internal.h>
