/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "MAPI-MIB v1.9.2.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef _MAPIIntraECellInfo_H_
#define _MAPIIntraECellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAPIIntraECellInfo */
typedef struct MAPIIntraECellInfo {
    long    *pci    /* OPTIONAL */;
    long    *rsrp   /* OPTIONAL */;
    long    *rsrp0  /* OPTIONAL */;
    long    *rsrp1  /* OPTIONAL */;
    long    *rsrq   /* OPTIONAL */;
    long    *rsrq0  /* OPTIONAL */;
    long    *rsrq1  /* OPTIONAL */;
    long    *rssi   /* OPTIONAL */;
    long    *rssi0  /* OPTIONAL */;
    long    *rssi1  /* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} MAPIIntraECellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPIIntraECellInfo;

#ifdef __cplusplus
}
#endif

#endif  /* _MAPIIntraECellInfo_H_ */
#include <asn_internal.h>
