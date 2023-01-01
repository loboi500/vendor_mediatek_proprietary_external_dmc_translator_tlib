/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "D:\Module\NA\feature\MAPI\decode\MAPI-MIB_v3.1.asn"
 * 	`asn1c -fnative-types -fskeletons-copy -S`
 */

#ifndef	_MAPICallStatus_H_
#define	_MAPICallStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAPICallStatus {
	MAPICallStatus_inactive	= 0,
	MAPICallStatus_active	= 1,
	MAPICallStatus_attempting	= 2,
	MAPICallStatus_hold	= 3
	/*
	 * Enumeration is extensible
	 */
} e_MAPICallStatus;

/* MAPICallStatus */
typedef long	 MAPICallStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPICallStatus;
asn_struct_free_f MAPICallStatus_free;
asn_struct_print_f MAPICallStatus_print;
asn_constr_check_f MAPICallStatus_constraint;
ber_type_decoder_f MAPICallStatus_decode_ber;
der_type_encoder_f MAPICallStatus_encode_der;
xer_type_decoder_f MAPICallStatus_decode_xer;
xer_type_encoder_f MAPICallStatus_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _MAPICallStatus_H_ */
