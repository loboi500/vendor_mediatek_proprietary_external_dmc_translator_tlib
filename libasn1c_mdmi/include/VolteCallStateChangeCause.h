/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _VolteCallStateChangeCause_H_
#define _VolteCallStateChangeCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VolteCallStateChangeCause {
    VolteCallStateChangeCause_notAvailable  = 0,
    VolteCallStateChangeCause_normalCallClearing    = 1,
    VolteCallStateChangeCause_callDrop  = 2
} e_VolteCallStateChangeCause;

/* VolteCallStateChangeCause */
typedef long     VolteCallStateChangeCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VolteCallStateChangeCause;
asn_struct_free_f VolteCallStateChangeCause_free;
asn_struct_print_f VolteCallStateChangeCause_print;
asn_constr_check_f VolteCallStateChangeCause_constraint;
ber_type_decoder_f VolteCallStateChangeCause_decode_ber;
der_type_encoder_f VolteCallStateChangeCause_encode_der;
xer_type_decoder_f VolteCallStateChangeCause_decode_xer;
xer_type_encoder_f VolteCallStateChangeCause_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _VolteCallStateChangeCause_H_ */
#include <asn_internal.h>
