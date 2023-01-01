/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _RlcMessage_H_
#define _RlcMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Version3gpp.h"
#include "OtaMessageDirection.h"
#include "RlcMessageType.h"
#include "RlcMode.h"
#include "SnFieldLength.h"
#include <BOOLEAN.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RlcMessage */
typedef struct RlcMessage {
    Version3gpp_t    rlc_version;
    OtaMessageDirection_t    direction;
    RlcMessageType_t     type;
    RlcMode_t    rlcMode;
    SnFieldLength_t  snFieldLength;
    BOOLEAN_t    lIField;
    OCTET_STRING_t   rlcHeader;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} RlcMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RlcMessage;

#ifdef __cplusplus
}
#endif

#endif  /* _RlcMessage_H_ */
#include <asn_internal.h>
