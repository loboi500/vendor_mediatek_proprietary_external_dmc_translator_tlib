/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MTK-EM"
 * 	found in "D:\Module\NA\feature\MAPI\decode\MAPI-MIB_v3.1.asn"
 * 	`asn1c -fnative-types -fskeletons-copy -S`
 */

#ifndef	_MAPICallEvent_H_
#define	_MAPICallEvent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "MAPICallStatus.h"
#include "MAPICallType.h"
#include "MAPICallRat.h"
#include "MAPICallDirection.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAPICallEvent */
typedef struct MAPICallEvent {
	long	*callId	/* OPTIONAL */;
	MAPICallStatus_t	*callStatus	/* OPTIONAL */;
	MAPICallType_t	*callType	/* OPTIONAL */;
	MAPICallRat_t	*callRat	/* OPTIONAL */;
	MAPICallDirection_t	*callDirection	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAPICallEvent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAPICallEvent;

#ifdef __cplusplus
}
#endif

#endif	/* _MAPICallEvent_H_ */
#include <asn_internal.h>
