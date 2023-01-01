/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _Gsm3gCellMeasurement_H_
#define _Gsm3gCellMeasurement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Gsm3gCellMeasurement */
typedef struct Gsm3gCellMeasurement {
    long     cellIndex;
    long     uarfcn;
    long     scramblingCode;
    long     diversity;
    long     rssi;
    long     energy;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} Gsm3gCellMeasurement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Gsm3gCellMeasurement;

#ifdef __cplusplus
}
#endif

#endif  /* _Gsm3gCellMeasurement_H_ */
#include <asn_internal.h>
