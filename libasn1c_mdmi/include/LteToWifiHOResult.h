/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _LteToWifiHOResult_H_
#define _LteToWifiHOResult_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "LteToWifiHOSuccess.h"
#include "LteToWifiHOFailure.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum result_PR {
    result_PR_NOTHING,  /* No components present */
    result_PR_success,
    result_PR_failure
} result_PR;

/* LteToWifiHOResult */
typedef struct LteToWifiHOResult {
    OCTET_STRING_t   epdgIpAddress;
    struct result {
        result_PR present;
        union LteToWifiHOResult__result_u {
            LteToWifiHOSuccess_t     success;
            LteToWifiHOFailure_t     failure;
        } choice;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } result;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} LteToWifiHOResult_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LteToWifiHOResult;

#ifdef __cplusplus
}
#endif

#endif  /* _LteToWifiHOResult_H_ */
#include <asn_internal.h>
