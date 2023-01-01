/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _GsmCodecType_H_
#define _GsmCodecType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GsmCodecType {
    GsmCodecType_amrmode_0475   = 0,
    GsmCodecType_amr_mode_0515  = 1,
    GsmCodecType_amr_mode_0590  = 2,
    GsmCodecType_amr_mode_0670  = 3,
    GsmCodecType_amr_mode_0740  = 4,
    GsmCodecType_amr_mode_0795  = 5,
    GsmCodecType_amr_mode_1020  = 6,
    GsmCodecType_amr_mode_1220  = 7,
    GsmCodecType_amr_wb_mode_0660   = 8,
    GsmCodecType_amr_wb_mode_0885   = 9,
    GsmCodecType_amr_wb_mode_1265   = 10
} e_GsmCodecType;

/* GsmCodecType */
typedef long     GsmCodecType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GsmCodecType;
asn_struct_free_f GsmCodecType_free;
asn_struct_print_f GsmCodecType_print;
asn_constr_check_f GsmCodecType_constraint;
ber_type_decoder_f GsmCodecType_decode_ber;
der_type_encoder_f GsmCodecType_encode_der;
xer_type_decoder_f GsmCodecType_decode_xer;
xer_type_encoder_f GsmCodecType_encode_xer;

#ifdef __cplusplus
}
#endif

#endif  /* _GsmCodecType_H_ */
#include <asn_internal.h>
