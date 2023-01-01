/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "MDMI"
 * 	found in "MDMI-MIB v2.8.2.asn"
 */

#ifndef _PdschDecodingStream_H_
#define _PdschDecodingStream_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CrcResult.h"
#include <NativeInteger.h>
#include "HarqCombining.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PdschDecodingStream */
typedef struct PdschDecodingStream {
    CrcResult_t  transportBlockCrc;
    long     ndi;
    long     reTxNumber;
    long     codeBlockSizePlus;
    long     codeBlockSizeMinus;
    long     numCodeBlockPlus;
    long     numCodeBlockMinus;
    long     redundancyVersionIndex;
    long     turboDecoderMaxIterationNumber;
    HarqCombining_t  harqCombining;
    long     codewordIndex;
    long     turboDecoderIterationsNumber;
    long     codeBlockCrcBitmask;
    BOOLEAN_t    earlyTerminationAlgorithm;

    /* Context for parsing across buffer boundaries */
    asn_struct_ctx_t _asn_ctx;
} PdschDecodingStream_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PdschDecodingStream;

#ifdef __cplusplus
}
#endif

#endif  /* _PdschDecodingStream_H_ */
#include <asn_internal.h>
