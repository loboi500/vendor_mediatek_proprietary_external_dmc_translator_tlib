/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _IPSecFailureErrorCode_H_
#define _IPSecFailureErrorCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IPSecFailureErrorCode {
    IPSecFailureErrorCode_unsupported_critical_payload  = 1,
    IPSecFailureErrorCode_invalid_ike_spi   = 4,
    IPSecFailureErrorCode_invalid_major_version = 5,
    IPSecFailureErrorCode_invalid_syntax    = 7,
    IPSecFailureErrorCode_invalid_message_id    = 9,
    IPSecFailureErrorCode_invalid_spi   = 11,
    IPSecFailureErrorCode_no_proposal_chosen    = 14,
    IPSecFailureErrorCode_invalid_ke_payload    = 17,
    IPSecFailureErrorCode_authentication_failed = 24,
    IPSecFailureErrorCode_single_pair_required  = 34,
    IPSecFailureErrorCode_no_additional_sas = 35,
    IPSecFailureErrorCode_internal_address_failure  = 36,
    IPSecFailureErrorCode_failed_cp_required    = 37,
    IPSecFailureErrorCode_ts_unacceptable   = 38,
    IPSecFailureErrorCode_invalid_selectors = 39,
    IPSecFailureErrorCode_unacceptable_addresses    = 40,
    IPSecFailureErrorCode_unexpected_nat_detected   = 41,
    IPSecFailureErrorCode_temporary_failure = 43,
    IPSecFailureErrorCode_child_sa_not_found    = 44,
    IPSecFailureErrorCode_no_subscription   = 9000,
    IPSecFailureErrorCode_network_too_busy  = 10000,
    IPSecFailureErrorCode_network_failure   = 10500,
    IPSecFailureErrorCode_roaming_not_allowed   = 11000,
    IPSecFailureErrorCode_rat_disallowed    = 11001
} e_IPSecFailureErrorCode;

/* IPSecFailureErrorCode */
typedef long     IPSecFailureErrorCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IPSecFailureErrorCode;
asn_struct_free_f IPSecFailureErrorCode_free;
asn_struct_print_f IPSecFailureErrorCode_print;
asn_constr_check_f IPSecFailureErrorCode_constraint;
ber_type_decoder_f IPSecFailureErrorCode_decode_ber;
der_type_encoder_f IPSecFailureErrorCode_encode_der;
xer_type_decoder_f IPSecFailureErrorCode_decode_xer;
xer_type_encoder_f IPSecFailureErrorCode_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _IPSecFailureErrorCode_H_ */
#include <asn_internal.h>
