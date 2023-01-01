/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIMSStateType_H_
#define _MAPIMSStateType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAPIMSStateType {
    MAPIMSStateType_ms_null_state   = 0,
    MAPIMSStateType_ms_ready_state  = 1,
    MAPIMSStateType_ms_standby_state    = 2,
    MAPIMSStateType_ms_forced_to_standby_state  = 3
	/*
	 * Enumeration is extensible
	 */
} e_MAPIMSStateType;

/* MAPIMSStateType */
typedef long     MAPIMSStateType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIMSStateType;
asn_struct_free_f MAPIMSStateType_free;
asn_struct_print_f MAPIMSStateType_print;
asn_constr_check_f MAPIMSStateType_constraint;
ber_type_decoder_f MAPIMSStateType_decode_ber;
der_type_encoder_f MAPIMSStateType_encode_der;
xer_type_decoder_f MAPIMSStateType_decode_xer;
xer_type_encoder_f MAPIMSStateType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _MAPIMSStateType_H_ */
#include <asn_internal.h>
