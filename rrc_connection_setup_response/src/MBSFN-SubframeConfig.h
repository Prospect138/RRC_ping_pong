/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MBSFN_SubframeConfig_H_
#define	_MBSFN_SubframeConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MBSFN_SubframeConfig__radioframeAllocationPeriod {
	MBSFN_SubframeConfig__radioframeAllocationPeriod_n1	= 0,
	MBSFN_SubframeConfig__radioframeAllocationPeriod_n2	= 1,
	MBSFN_SubframeConfig__radioframeAllocationPeriod_n4	= 2,
	MBSFN_SubframeConfig__radioframeAllocationPeriod_n8	= 3,
	MBSFN_SubframeConfig__radioframeAllocationPeriod_n16	= 4,
	MBSFN_SubframeConfig__radioframeAllocationPeriod_n32	= 5
} e_MBSFN_SubframeConfig__radioframeAllocationPeriod;
typedef enum MBSFN_SubframeConfig__subframeAllocation_PR {
	MBSFN_SubframeConfig__subframeAllocation_PR_NOTHING,	/* No components present */
	MBSFN_SubframeConfig__subframeAllocation_PR_oneFrame,
	MBSFN_SubframeConfig__subframeAllocation_PR_fourFrames
} MBSFN_SubframeConfig__subframeAllocation_PR;

/* MBSFN-SubframeConfig */
typedef struct MBSFN_SubframeConfig {
	long	 radioframeAllocationPeriod;
	long	 radioframeAllocationOffset;
	struct MBSFN_SubframeConfig__subframeAllocation {
		MBSFN_SubframeConfig__subframeAllocation_PR present;
		union MBSFN_SubframeConfig__subframeAllocation_u {
			BIT_STRING_t	 oneFrame;
			BIT_STRING_t	 fourFrames;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subframeAllocation;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBSFN_SubframeConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_radioframeAllocationPeriod_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MBSFN_SubframeConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_MBSFN_SubframeConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_MBSFN_SubframeConfig_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _MBSFN_SubframeConfig_H_ */
#include <asn_internal.h>
