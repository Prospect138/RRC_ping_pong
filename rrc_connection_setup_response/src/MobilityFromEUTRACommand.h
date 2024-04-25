/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MobilityFromEUTRACommand_H_
#define	_MobilityFromEUTRACommand_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "MobilityFromEUTRACommand-r8-IEs.h"
#include "MobilityFromEUTRACommand-r9-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MobilityFromEUTRACommand__criticalExtensions_PR {
	MobilityFromEUTRACommand__criticalExtensions_PR_NOTHING,	/* No components present */
	MobilityFromEUTRACommand__criticalExtensions_PR_c1,
	MobilityFromEUTRACommand__criticalExtensions_PR_criticalExtensionsFuture
} MobilityFromEUTRACommand__criticalExtensions_PR;
typedef enum MobilityFromEUTRACommand__criticalExtensions__c1_PR {
	MobilityFromEUTRACommand__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	MobilityFromEUTRACommand__criticalExtensions__c1_PR_mobilityFromEUTRACommand_r8,
	MobilityFromEUTRACommand__criticalExtensions__c1_PR_mobilityFromEUTRACommand_r9,
	MobilityFromEUTRACommand__criticalExtensions__c1_PR_spare2,
	MobilityFromEUTRACommand__criticalExtensions__c1_PR_spare1
} MobilityFromEUTRACommand__criticalExtensions__c1_PR;

/* MobilityFromEUTRACommand */
typedef struct MobilityFromEUTRACommand {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct MobilityFromEUTRACommand__criticalExtensions {
		MobilityFromEUTRACommand__criticalExtensions_PR present;
		union MobilityFromEUTRACommand__criticalExtensions_u {
			struct MobilityFromEUTRACommand__criticalExtensions__c1 {
				MobilityFromEUTRACommand__criticalExtensions__c1_PR present;
				union MobilityFromEUTRACommand__criticalExtensions__c1_u {
					MobilityFromEUTRACommand_r8_IEs_t	 mobilityFromEUTRACommand_r8;
					MobilityFromEUTRACommand_r9_IEs_t	 mobilityFromEUTRACommand_r9;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct MobilityFromEUTRACommand__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MobilityFromEUTRACommand_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MobilityFromEUTRACommand;
extern asn_SEQUENCE_specifics_t asn_SPC_MobilityFromEUTRACommand_specs_1;
extern asn_TYPE_member_t asn_MBR_MobilityFromEUTRACommand_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MobilityFromEUTRACommand_H_ */
#include <asn_internal.h>
