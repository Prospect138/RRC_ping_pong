/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportPeriodic_H_
#define	_CQI_ReportPeriodic_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CQI_ReportPeriodic_PR {
	CQI_ReportPeriodic_PR_NOTHING,	/* No components present */
	CQI_ReportPeriodic_PR_release,
	CQI_ReportPeriodic_PR_setup
} CQI_ReportPeriodic_PR;
typedef enum CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR {
	CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR_NOTHING,	/* No components present */
	CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR_widebandCQI,
	CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR_subbandCQI
} CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR;

/* CQI-ReportPeriodic */
typedef struct CQI_ReportPeriodic {
	CQI_ReportPeriodic_PR present;
	union CQI_ReportPeriodic_u {
		NULL_t	 release;
		struct CQI_ReportPeriodic__setup {
			long	 cqi_PUCCH_ResourceIndex;
			long	 cqi_pmi_ConfigIndex;
			struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic {
				CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_PR present;
				union CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic_u {
					NULL_t	 widebandCQI;
					struct CQI_ReportPeriodic__setup__cqi_FormatIndicatorPeriodic__subbandCQI {
						long	 k;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} subbandCQI;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} cqi_FormatIndicatorPeriodic;
			long	*ri_ConfigIndex;	/* OPTIONAL */
			BOOLEAN_t	 simultaneousAckNackAndCQI;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportPeriodic_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportPeriodic;
extern asn_CHOICE_specifics_t asn_SPC_CQI_ReportPeriodic_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportPeriodic_1[2];
extern asn_per_constraints_t asn_PER_type_CQI_ReportPeriodic_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportPeriodic_H_ */
#include <asn_internal.h>
