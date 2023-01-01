/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _ServiceType_H_
#define _ServiceType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ServiceType {
    ServiceType_no_service  = 0,
    ServiceType_cs_only = 1,
    ServiceType_ps_only = 2,
    ServiceType_cs_ps_service   = 3,
    ServiceType_limited_service = 4
} e_ServiceType;

/* ServiceType */
typedef long     ServiceType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServiceType;
asn_struct_free_f ServiceType_free;
asn_struct_print_f ServiceType_print;
asn_constr_check_f ServiceType_constraint;
ber_type_decoder_f ServiceType_decode_ber;
der_type_encoder_f ServiceType_encode_der;
xer_type_decoder_f ServiceType_decode_xer;
xer_type_encoder_f ServiceType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _ServiceType_H_ */
#include <asn_internal.h>
