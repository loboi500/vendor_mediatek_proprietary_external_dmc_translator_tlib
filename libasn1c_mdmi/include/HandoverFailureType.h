/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _HandoverFailureType_H_
#define _HandoverFailureType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum HandoverFailureType {
    HandoverFailureType_other   = 1,
    HandoverFailureType_invalidcfg  = 2,
    HandoverFailureType_physicalfailure = 3,
    HandoverFailureType_rach    = 4,
    HandoverFailureType_rachmeasconfigincluded  = 5
} e_HandoverFailureType;

/* HandoverFailureType */
typedef long     HandoverFailureType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFailureType;
asn_struct_free_f HandoverFailureType_free;
asn_struct_print_f HandoverFailureType_print;
asn_constr_check_f HandoverFailureType_constraint;
ber_type_decoder_f HandoverFailureType_decode_ber;
der_type_encoder_f HandoverFailureType_encode_der;
xer_type_decoder_f HandoverFailureType_decode_xer;
xer_type_encoder_f HandoverFailureType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _HandoverFailureType_H_ */
#include <asn_internal.h>
