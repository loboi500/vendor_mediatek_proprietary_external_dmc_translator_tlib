/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIVoiceDomainPreferenceType_H_
#define _MAPIVoiceDomainPreferenceType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAPIVoiceDomainPreferenceType {
    MAPIVoiceDomainPreferenceType_cs_voice_only = 1,
    MAPIVoiceDomainPreferenceType_cs_voice_preferred_ims_ps_voice_as_secondary  = 2,
    MAPIVoiceDomainPreferenceType_ims_ps_voice_preferred_cs_voice_as_secondary  = 3,
    MAPIVoiceDomainPreferenceType_ims_ps_voice_only = 4
	/*
	 * Enumeration is extensible
	 */
} e_MAPIVoiceDomainPreferenceType;

/* MAPIVoiceDomainPreferenceType */
typedef long     MAPIVoiceDomainPreferenceType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIVoiceDomainPreferenceType;
asn_struct_free_f MAPIVoiceDomainPreferenceType_free;
asn_struct_print_f MAPIVoiceDomainPreferenceType_print;
asn_constr_check_f MAPIVoiceDomainPreferenceType_constraint;
ber_type_decoder_f MAPIVoiceDomainPreferenceType_decode_ber;
der_type_encoder_f MAPIVoiceDomainPreferenceType_encode_der;
xer_type_decoder_f MAPIVoiceDomainPreferenceType_decode_xer;
xer_type_encoder_f MAPIVoiceDomainPreferenceType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _MAPIVoiceDomainPreferenceType_H_ */
#include <asn_internal.h>
