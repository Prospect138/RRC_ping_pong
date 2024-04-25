/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasSubframePattern_r10_H_
#define	_MeasSubframePattern_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasSubframePattern_r10_PR {
	MeasSubframePattern_r10_PR_NOTHING,	/* No components present */
	MeasSubframePattern_r10_PR_subframePatternFDD_r10,
	MeasSubframePattern_r10_PR_subframePatternTDD_r10
	/* Extensions may appear below */
	
} MeasSubframePattern_r10_PR;
typedef enum MeasSubframePattern_r10__subframePatternTDD_r10_PR {
	MeasSubframePattern_r10__subframePatternTDD_r10_PR_NOTHING,	/* No components present */
	MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig1_5_r10,
	MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig0_r10,
	MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig6_r10
	/* Extensions may appear below */
	
} MeasSubframePattern_r10__subframePatternTDD_r10_PR;

/* MeasSubframePattern-r10 */
typedef struct MeasSubframePattern_r10 {
	MeasSubframePattern_r10_PR present;
	union MeasSubframePattern_r10_u {
		BIT_STRING_t	 subframePatternFDD_r10;
		struct MeasSubframePattern_r10__subframePatternTDD_r10 {
			MeasSubframePattern_r10__subframePatternTDD_r10_PR present;
			union MeasSubframePattern_r10__subframePatternTDD_r10_u {
				BIT_STRING_t	 subframeConfig1_5_r10;
				BIT_STRING_t	 subframeConfig0_r10;
				BIT_STRING_t	 subframeConfig6_r10;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} subframePatternTDD_r10;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasSubframePattern_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasSubframePattern_r10;
extern asn_CHOICE_specifics_t asn_SPC_MeasSubframePattern_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasSubframePattern_r10_1[2];
extern asn_per_constraints_t asn_PER_type_MeasSubframePattern_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasSubframePattern_r10_H_ */
#include <asn_internal.h>
