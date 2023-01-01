/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIEl1DlInfo_H_
#define _MAPIEl1DlInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAPIEl1DlInfo */
typedef struct MAPIEl1DlInfo {
    long    *rsrp0  /* OPTIONAL */;
    long    *rsrp1  /* OPTIONAL */;
    long    *rsrq0  /* OPTIONAL */;
    long    *rsrq1  /* OPTIONAL */;
    long    *rssi0  /* OPTIONAL */;
    long    *rssi1  /* OPTIONAL */;
    long    *sinr0  /* OPTIONAL */;
    long    *sinr1  /* OPTIONAL */;
    long    *cqiCw0 /* OPTIONAL */;
    long    *cqiCw1 /* OPTIONAL */;
    long    *ri /* OPTIONAL */;
    long    *pmi0   /* OPTIONAL */;
    long    *pmi1   /* OPTIONAL */;
    long    *dlMcs0 /* OPTIONAL */;
    long    *dlMcs1 /* OPTIONAL */;
    long    *dlMod0 /* OPTIONAL */;
    long    *dlMod1 /* OPTIONAL */;
    long    *dlPrb  /* OPTIONAL */;
    long    *dlBler /* OPTIONAL */;
    unsigned long   *dlThroughput   /* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
    long    *rsrq   /* OPTIONAL */;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MAPIEl1DlInfo_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dlThroughput_21;    // (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MAPIEl1DlInfo;

#ifdef __cplusplus
}
#endif

#endif  /* _MAPIEl1DlInfo_H_ */
#include <asn_internal.h>