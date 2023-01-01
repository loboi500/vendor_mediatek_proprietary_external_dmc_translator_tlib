/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _NewCellCause_H_
#define _NewCellCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NewCellCause {
    NewCellCause_cellSelection  = 1,
    NewCellCause_cellReselection    = 2,
    NewCellCause_handover   = 3,
    NewCellCause_redirection    = 4
} e_NewCellCause;

/* NewCellCause */
typedef long     NewCellCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewCellCause;
asn_struct_free_f NewCellCause_free;
asn_struct_print_f NewCellCause_print;
asn_constr_check_f NewCellCause_constraint;
ber_type_decoder_f NewCellCause_decode_ber;
der_type_encoder_f NewCellCause_encode_der;
xer_type_decoder_f NewCellCause_decode_xer;
xer_type_encoder_f NewCellCause_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _NewCellCause_H_ */
#include <asn_internal.h>
