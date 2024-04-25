/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MobilityFromEUTRACommand_r8_IEs_H_
#define	_MobilityFromEUTRACommand_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "Handover.h"
#include "CellChangeOrder.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityFromEUTRACommand_r8_IEs__purpose_PR {
	MobilityFromEUTRACommand_r8_IEs__purpose_PR_NOTHING,	/* No components present */
	MobilityFromEUTRACommand_r8_IEs__purpose_PR_handover,
	MobilityFromEUTRACommand_r8_IEs__purpose_PR_cellChangeOrder
} MobilityFromEUTRACommand_r8_IEs__purpose_PR;

/* Forward declarations */
struct MobilityFromEUTRACommand_v8a0_IEs;

/* MobilityFromEUTRACommand-r8-IEs */
typedef struct MobilityFromEUTRACommand_r8_IEs {
	BOOLEAN_t	 cs_FallbackIndicator;
	struct MobilityFromEUTRACommand_r8_IEs__purpose {
		MobilityFromEUTRACommand_r8_IEs__purpose_PR present;
		union MobilityFromEUTRACommand_r8_IEs__purpose_u {
			Handover_t	 handover;
			CellChangeOrder_t	 cellChangeOrder;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} purpose;
	struct MobilityFromEUTRACommand_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityFromEUTRACommand_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromEUTRACommand_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityFromEUTRACommand_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityFromEUTRACommand_r8_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityFromEUTRACommand_r8_IEs_H_ */
#include <asn_internal.h>
