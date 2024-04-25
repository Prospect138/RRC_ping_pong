/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_InterFreqRSTDMeasurementIndication_r10_IEs_H_
#define	_InterFreqRSTDMeasurementIndication_r10_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NULL.h>
#include "RSTD-InterFreqInfoList-r10.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR {
	InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR_NOTHING,	/* No components present */
	InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR_start,
	InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR_stop
} InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR;

/* InterFreqRSTDMeasurementIndication-r10-IEs */
typedef struct InterFreqRSTDMeasurementIndication_r10_IEs {
	struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10 {
		InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_PR present;
		union InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10_u {
			struct InterFreqRSTDMeasurementIndication_r10_IEs__rstd_InterFreqIndication_r10__start {
				RSTD_InterFreqInfoList_r10_t	 rstd_InterFreqInfoList_r10;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} start;
			NULL_t	 stop;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} rstd_InterFreqIndication_r10;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct InterFreqRSTDMeasurementIndication_r10_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqRSTDMeasurementIndication_r10_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqRSTDMeasurementIndication_r10_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_InterFreqRSTDMeasurementIndication_r10_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_InterFreqRSTDMeasurementIndication_r10_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqRSTDMeasurementIndication_r10_IEs_H_ */
#include <asn_internal.h>
