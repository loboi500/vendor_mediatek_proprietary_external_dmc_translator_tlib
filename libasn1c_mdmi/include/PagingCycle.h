/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _PagingCycle_H_
#define _PagingCycle_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PagingCycle {
    PagingCycle_pagingcycle320ms    = 0,
    PagingCycle_pagingcycle640ms    = 1,
    PagingCycle_pagingcycle1280ms   = 2,
    PagingCycle_pagingcycle2560ms   = 3
} e_PagingCycle;

/* PagingCycle */
typedef long     PagingCycle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingCycle;
asn_struct_free_f PagingCycle_free;
asn_struct_print_f PagingCycle_print;
asn_constr_check_f PagingCycle_constraint;
ber_type_decoder_f PagingCycle_decode_ber;
der_type_encoder_f PagingCycle_encode_der;
xer_type_decoder_f PagingCycle_decode_xer;
xer_type_encoder_f PagingCycle_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _PagingCycle_H_ */
#include <asn_internal.h>
