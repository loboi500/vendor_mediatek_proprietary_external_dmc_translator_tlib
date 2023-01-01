/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _MibVersion_H_
#define _MibVersion_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MibVersion */
typedef OCTET_STRING_t   MibVersion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MibVersion;
asn_struct_free_f MibVersion_free;
asn_struct_print_f MibVersion_print;
asn_constr_check_f MibVersion_constraint;
ber_type_decoder_f MibVersion_decode_ber;
der_type_encoder_f MibVersion_encode_der;
xer_type_decoder_f MibVersion_decode_xer;
xer_type_encoder_f MibVersion_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _MibVersion_H_ */
#include <asn_internal.h>
