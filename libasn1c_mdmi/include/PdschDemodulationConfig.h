/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _PdschDemodulationConfig_H_
#define _PdschDemodulationConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ModulationScheme.h"
#include "PdschModulationStream.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PdschDemodulationConfig */
typedef struct PdschDemodulationConfig {
    ModulationScheme_t   modulationStream0;
    PdschModulationStream_t  modulationStream1;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} PdschDemodulationConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PdschDemodulationConfig;

#ifdef __cplusplus
}
#endif

#endif  /* _PdschDemodulationConfig_H_ */
#include <asn_internal.h>
