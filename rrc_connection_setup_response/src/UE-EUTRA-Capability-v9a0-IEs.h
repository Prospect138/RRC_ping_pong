/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v9a0_IEs_H_
#define	_UE_EUTRA_Capability_v9a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_EUTRA_CapabilityAddXDD_Mode_r9;
struct UE_EUTRA_Capability_v9c0_IEs;

/* UE-EUTRA-Capability-v9a0-IEs */
typedef struct UE_EUTRA_Capability_v9a0_IEs {
	BIT_STRING_t	*featureGroupIndRel9Add_r9;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_r9	*fdd_Add_UE_EUTRA_Capabilities_r9;	/* OPTIONAL */
	struct UE_EUTRA_CapabilityAddXDD_Mode_r9	*tdd_Add_UE_EUTRA_Capabilities_r9;	/* OPTIONAL */
	struct UE_EUTRA_Capability_v9c0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v9a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v9a0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v9a0_IEs_H_ */
#include <asn_internal.h>
