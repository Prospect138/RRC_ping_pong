/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_LogMeasReport_r10_H_
#define	_LogMeasReport_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AbsoluteTimeInfo-r10.h"
#include "TraceReference-r10.h"
#include <OCTET_STRING.h>
#include "LogMeasInfoList-r10.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LogMeasReport_r10__logMeasAvailable_r10 {
	LogMeasReport_r10__logMeasAvailable_r10_true	= 0
} e_LogMeasReport_r10__logMeasAvailable_r10;

/* LogMeasReport-r10 */
typedef struct LogMeasReport_r10 {
	AbsoluteTimeInfo_r10_t	 absoluteTimeStamp_r10;
	TraceReference_r10_t	 traceReference_r10;
	OCTET_STRING_t	 traceRecordingSessionRef_r10;
	OCTET_STRING_t	 tce_Id_r10;
	LogMeasInfoList_r10_t	 logMeasInfoList_r10;
	long	*logMeasAvailable_r10;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LogMeasReport_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_logMeasAvailable_r10_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_LogMeasReport_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_LogMeasReport_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_LogMeasReport_r10_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _LogMeasReport_r10_H_ */
#include <asn_internal.h>
