/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_HandoverFromEUTRAPreparationRequest_v920_IEs_H_
#define	_HandoverFromEUTRAPreparationRequest_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HandoverFromEUTRAPreparationRequest_v1020_IEs;

/* HandoverFromEUTRAPreparationRequest-v920-IEs */
typedef struct HandoverFromEUTRAPreparationRequest_v920_IEs {
	BOOLEAN_t	*concurrPrepCDMA2000_HRPD_r9;	/* OPTIONAL */
	struct HandoverFromEUTRAPreparationRequest_v1020_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverFromEUTRAPreparationRequest_v920_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverFromEUTRAPreparationRequest_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverFromEUTRAPreparationRequest_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverFromEUTRAPreparationRequest_v920_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverFromEUTRAPreparationRequest_v920_IEs_H_ */
#include <asn_internal.h>
