/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PUSCH_ConfigDedicatedSCell_r10_H_
#define	_PUSCH_ConfigDedicatedSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_ConfigDedicatedSCell_r10__groupHoppingDisabled_r10 {
	PUSCH_ConfigDedicatedSCell_r10__groupHoppingDisabled_r10_true	= 0
} e_PUSCH_ConfigDedicatedSCell_r10__groupHoppingDisabled_r10;
typedef enum PUSCH_ConfigDedicatedSCell_r10__dmrs_WithOCC_Activated_r10 {
	PUSCH_ConfigDedicatedSCell_r10__dmrs_WithOCC_Activated_r10_true	= 0
} e_PUSCH_ConfigDedicatedSCell_r10__dmrs_WithOCC_Activated_r10;

/* PUSCH-ConfigDedicatedSCell-r10 */
typedef struct PUSCH_ConfigDedicatedSCell_r10 {
	long	*groupHoppingDisabled_r10;	/* OPTIONAL */
	long	*dmrs_WithOCC_Activated_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_ConfigDedicatedSCell_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_groupHoppingDisabled_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_WithOCC_Activated_r10_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_ConfigDedicatedSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_ConfigDedicatedSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_ConfigDedicatedSCell_r10_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PUSCH_ConfigDedicatedSCell_r10_H_ */
#include <asn_internal.h>
