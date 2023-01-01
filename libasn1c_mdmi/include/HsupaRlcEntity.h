/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _HsupaRlcEntity_H_
#define _HsupaRlcEntity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "LiSize.h"
#include "RlcMode.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HsupaRlcPdu;

/* HsupaRlcEntity */
typedef struct HsupaRlcEntity {
    long     rlcId;
    struct pdus {
        A_SEQUENCE_OF(struct HsupaRlcPdu) list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } pdus;
    LiSize_t     liLength;
    long     rlcBufferNewData;
    long     rlcBufferRetxData;
    long     rlcBufferControlData;
    long     numSdu;
    RlcMode_t    rlcMode;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} HsupaRlcEntity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HsupaRlcEntity;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "HsupaRlcPdu.h"

#endif  /* _HsupaRlcEntity_H_ */
#include <asn_internal.h>
