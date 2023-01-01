/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIIpVersion_H_
#define _MAPIIpVersion_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MAPIIpVersion {
    MAPIIpVersion_ipv4  = 1,
    MAPIIpVersion_ipv6  = 2
} e_MAPIIpVersion;

/* MAPIIpVersion */
typedef long     MAPIIpVersion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIIpVersion;
asn_struct_free_f MAPIIpVersion_free;
asn_struct_print_f MAPIIpVersion_print;
asn_constr_check_f MAPIIpVersion_constraint;
ber_type_decoder_f MAPIIpVersion_decode_ber;
der_type_encoder_f MAPIIpVersion_encode_der;
xer_type_decoder_f MAPIIpVersion_decode_xer;
xer_type_encoder_f MAPIIpVersion_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _MAPIIpVersion_H_ */
#include <asn_internal.h>
