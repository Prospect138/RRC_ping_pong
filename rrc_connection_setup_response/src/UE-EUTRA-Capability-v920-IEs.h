/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UE_EUTRA_Capability_v920_IEs_H_
#define	_UE_EUTRA_Capability_v920_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhyLayerParameters-v920.h"
#include "IRAT-ParametersGERAN-v920.h"
#include <NativeEnumerated.h>
#include "CSG-ProximityIndicationParameters-r9.h"
#include "NeighCellSI-AcquisitionParameters-r9.h"
#include "SON-Parameters-r9.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UE_EUTRA_Capability_v920_IEs__deviceType_r9 {
	UE_EUTRA_Capability_v920_IEs__deviceType_r9_noBenFromBatConsumpOpt	= 0
} e_UE_EUTRA_Capability_v920_IEs__deviceType_r9;

/* Forward declarations */
struct IRAT_ParametersUTRA_v920;
struct IRAT_ParametersCDMA2000_1XRTT_v920;
struct UE_EUTRA_Capability_v940_IEs;

/* UE-EUTRA-Capability-v920-IEs */
typedef struct UE_EUTRA_Capability_v920_IEs {
	PhyLayerParameters_v920_t	 phyLayerParameters_v920;
	IRAT_ParametersGERAN_v920_t	 interRAT_ParametersGERAN_v920;
	struct IRAT_ParametersUTRA_v920	*interRAT_ParametersUTRA_v920;	/* OPTIONAL */
	struct IRAT_ParametersCDMA2000_1XRTT_v920	*interRAT_ParametersCDMA2000_v920;	/* OPTIONAL */
	long	*deviceType_r9;	/* OPTIONAL */
	CSG_ProximityIndicationParameters_r9_t	 csg_ProximityIndicationParameters_r9;
	NeighCellSI_AcquisitionParameters_r9_t	 neighCellSI_AcquisitionParameters_r9;
	SON_Parameters_r9_t	 son_Parameters_r9;
	struct UE_EUTRA_Capability_v940_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v920_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_deviceType_r9_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v920_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v920_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v920_IEs_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v920_IEs_H_ */
#include <asn_internal.h>
