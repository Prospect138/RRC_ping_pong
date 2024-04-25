/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType1_v1130_IEs_H_
#define	_SystemInformationBlockType1_v1130_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TDD_Config_v1130;
struct CellSelectionInfo_v1130;

/* SystemInformationBlockType1-v1130-IEs */
typedef struct SystemInformationBlockType1_v1130_IEs {
	struct TDD_Config_v1130	*tdd_Config_v1130;	/* OPTIONAL */
	struct CellSelectionInfo_v1130	*cellSelectionInfo_v1130;	/* OPTIONAL */
	struct SystemInformationBlockType1_v1130_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType1_v1130_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType1_v1130_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType1_v1130_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType1_v1130_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType1_v1130_IEs_H_ */
#include <asn_internal.h>
