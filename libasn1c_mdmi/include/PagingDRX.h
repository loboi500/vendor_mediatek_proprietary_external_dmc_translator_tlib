/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _PagingDRX_H_
#define _PagingDRX_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Earfcn.h"
#include <NativeInteger.h>
#include "PagingCycle.h"
#include "DrxNb.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PagingDRX */
typedef struct PagingDRX {
    Earfcn_t     earfcn;
    long     pci;
    PagingCycle_t    pagingCycle;
    DrxNb_t  nb;
    long     ueId;
    long     drxSysFrameNumOffset;
    long     drxSubFrameNumOffset;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} PagingDRX_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PagingDRX;

#ifdef __cplusplus
}
#endif

#endif  /* _PagingDRX_H_ */
#include <asn_internal.h>
