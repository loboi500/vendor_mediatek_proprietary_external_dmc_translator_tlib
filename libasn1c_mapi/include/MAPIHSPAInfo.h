/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIHSPAInfo_H_
#define _MAPIHSPAInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MAPIHSDSCHConfig;
struct MAPIEDCHConfig;
struct MAPICPCConfig;
struct MAPISecHSDSCHConfig;
struct MAPIHSDSCHBler;
struct MAPIEDCHAckRate;

/* MAPIHSPAInfo */
typedef struct MAPIHSPAInfo {
    struct MAPIHSDSCHConfig *hsdschConfig   /* OPTIONAL */;
    struct MAPIEDCHConfig   *edchConfig /* OPTIONAL */;
    struct MAPICPCConfig    *cpcConfig  /* OPTIONAL */;
    struct MAPISecHSDSCHConfig  *secHSDSCHConfig    /* OPTIONAL */;
    struct MAPIHSDSCHBler   *primaryHSDSCHBler  /* OPTIONAL */;
    struct MAPIHSDSCHBler   *secondaryHSDSCHBler    /* OPTIONAL */;
    struct MAPIEDCHAckRate  *edchAckRate    /* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MAPIHSPAInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIHSPAInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MAPIHSDSCHConfig.h"
#include "MAPIEDCHConfig.h"
#include "MAPICPCConfig.h"
#include "MAPISecHSDSCHConfig.h"
#include "MAPIHSDSCHBler.h"
#include "MAPIEDCHAckRate.h"

#endif  /* _MAPIHSPAInfo_H_ */
#include <asn_internal.h>
