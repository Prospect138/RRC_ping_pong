/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PhyLayerParameters_v1020_H_
#define	_PhyLayerParameters_v1020_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1020__twoAntennaPortsForPUCCH_r10 {
	PhyLayerParameters_v1020__twoAntennaPortsForPUCCH_r10_supported	= 0
} e_PhyLayerParameters_v1020__twoAntennaPortsForPUCCH_r10;
typedef enum PhyLayerParameters_v1020__tm9_With_8Tx_FDD_r10 {
	PhyLayerParameters_v1020__tm9_With_8Tx_FDD_r10_supported	= 0
} e_PhyLayerParameters_v1020__tm9_With_8Tx_FDD_r10;
typedef enum PhyLayerParameters_v1020__pmi_Disabling_r10 {
	PhyLayerParameters_v1020__pmi_Disabling_r10_supported	= 0
} e_PhyLayerParameters_v1020__pmi_Disabling_r10;
typedef enum PhyLayerParameters_v1020__crossCarrierScheduling_r10 {
	PhyLayerParameters_v1020__crossCarrierScheduling_r10_supported	= 0
} e_PhyLayerParameters_v1020__crossCarrierScheduling_r10;
typedef enum PhyLayerParameters_v1020__simultaneousPUCCH_PUSCH_r10 {
	PhyLayerParameters_v1020__simultaneousPUCCH_PUSCH_r10_supported	= 0
} e_PhyLayerParameters_v1020__simultaneousPUCCH_PUSCH_r10;
typedef enum PhyLayerParameters_v1020__multiClusterPUSCH_WithinCC_r10 {
	PhyLayerParameters_v1020__multiClusterPUSCH_WithinCC_r10_supported	= 0
} e_PhyLayerParameters_v1020__multiClusterPUSCH_WithinCC_r10;

/* Forward declarations */
struct NonContiguousUL_RA_WithinCC_List_r10;

/* PhyLayerParameters-v1020 */
typedef struct PhyLayerParameters_v1020 {
	long	*twoAntennaPortsForPUCCH_r10;	/* OPTIONAL */
	long	*tm9_With_8Tx_FDD_r10;	/* OPTIONAL */
	long	*pmi_Disabling_r10;	/* OPTIONAL */
	long	*crossCarrierScheduling_r10;	/* OPTIONAL */
	long	*simultaneousPUCCH_PUSCH_r10;	/* OPTIONAL */
	long	*multiClusterPUSCH_WithinCC_r10;	/* OPTIONAL */
	struct NonContiguousUL_RA_WithinCC_List_r10	*nonContiguousUL_RA_WithinCC_List_r10;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1020_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_twoAntennaPortsForPUCCH_r10_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tm9_With_8Tx_FDD_r10_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pmi_Disabling_r10_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_crossCarrierScheduling_r10_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_simultaneousPUCCH_PUSCH_r10_10;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_multiClusterPUSCH_WithinCC_r10_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1020;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1020_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1020_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _PhyLayerParameters_v1020_H_ */
#include <asn_internal.h>
