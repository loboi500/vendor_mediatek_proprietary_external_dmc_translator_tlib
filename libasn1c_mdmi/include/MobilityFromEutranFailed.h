/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _MobilityFromEutranFailed_H_
#define _MobilityFromEutranFailed_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityFromEutranFailed {
    MobilityFromEutranFailed_protocol_error = 0,
    MobilityFromEutranFailed_configuration_error    = 1,
    MobilityFromEutranFailed_physical_channel_error = 2,
    MobilityFromEutranFailed_invalid_frequency  = 3,
    MobilityFromEutranFailed_invalid_message    = 4,
    MobilityFromEutranFailed_other  = 5
} e_MobilityFromEutranFailed;

/* MobilityFromEutranFailed */
typedef long     MobilityFromEutranFailed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromEutranFailed;
asn_struct_free_f MobilityFromEutranFailed_free;
asn_struct_print_f MobilityFromEutranFailed_print;
asn_constr_check_f MobilityFromEutranFailed_constraint;
ber_type_decoder_f MobilityFromEutranFailed_decode_ber;
der_type_encoder_f MobilityFromEutranFailed_encode_der;
xer_type_decoder_f MobilityFromEutranFailed_decode_xer;
xer_type_encoder_f MobilityFromEutranFailed_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _MobilityFromEutranFailed_H_ */
#include <asn_internal.h>
