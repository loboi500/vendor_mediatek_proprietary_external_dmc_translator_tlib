/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _EmmFailureCauseEvent_H_
#define _EmmFailureCauseEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EMMCause.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EmmFailureCauseEvent */
typedef EMMCause_t   EmmFailureCauseEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EmmFailureCauseEvent;
asn_struct_free_f EmmFailureCauseEvent_free;
asn_struct_print_f EmmFailureCauseEvent_print;
asn_constr_check_f EmmFailureCauseEvent_constraint;
ber_type_decoder_f EmmFailureCauseEvent_decode_ber;
der_type_encoder_f EmmFailureCauseEvent_encode_der;
xer_type_decoder_f EmmFailureCauseEvent_decode_xer;
xer_type_encoder_f EmmFailureCauseEvent_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _EmmFailureCauseEvent_H_ */
#include <asn_internal.h>
