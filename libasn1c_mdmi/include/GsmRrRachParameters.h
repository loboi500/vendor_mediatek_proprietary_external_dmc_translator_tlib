/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _GsmRrRachParameters_H_
#define _GsmRrRachParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GsmRrRachParameters */
typedef struct GsmRrRachParameters {
    long     maxAllowedRetransmissions;
    BOOLEAN_t    cellBarAccess;
    long     accessControlClass;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} GsmRrRachParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GsmRrRachParameters;

#ifdef __cplusplus
}
#endif

#endif  /* _GsmRrRachParameters_H_ */
#include <asn_internal.h>
