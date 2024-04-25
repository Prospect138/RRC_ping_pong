/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ReportConfigEUTRA_H_
#define	_ReportConfigEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include "ReportInterval.h"
#include "Hysteresis.h"
#include "TimeToTrigger.h"
#include "ThresholdEUTRA.h"
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportConfigEUTRA__triggerType_PR {
	ReportConfigEUTRA__triggerType_PR_NOTHING,	/* No components present */
	ReportConfigEUTRA__triggerType_PR_event,
	ReportConfigEUTRA__triggerType_PR_periodical
} ReportConfigEUTRA__triggerType_PR;
typedef enum ReportConfigEUTRA__triggerType__event__eventId_PR {
	ReportConfigEUTRA__triggerType__event__eventId_PR_NOTHING,	/* No components present */
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA1,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA2,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA3,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA4,
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA5,
	/* Extensions may appear below */
	ReportConfigEUTRA__triggerType__event__eventId_PR_eventA6_r10
} ReportConfigEUTRA__triggerType__event__eventId_PR;
typedef enum ReportConfigEUTRA__triggerType__periodical__purpose {
	ReportConfigEUTRA__triggerType__periodical__purpose_reportStrongestCells	= 0,
	ReportConfigEUTRA__triggerType__periodical__purpose_reportCGI	= 1
} e_ReportConfigEUTRA__triggerType__periodical__purpose;
typedef enum ReportConfigEUTRA__triggerQuantity {
	ReportConfigEUTRA__triggerQuantity_rsrp	= 0,
	ReportConfigEUTRA__triggerQuantity_rsrq	= 1
} e_ReportConfigEUTRA__triggerQuantity;
typedef enum ReportConfigEUTRA__reportQuantity {
	ReportConfigEUTRA__reportQuantity_sameAsTriggerQuantity	= 0,
	ReportConfigEUTRA__reportQuantity_both	= 1
} e_ReportConfigEUTRA__reportQuantity;
typedef enum ReportConfigEUTRA__reportAmount {
	ReportConfigEUTRA__reportAmount_r1	= 0,
	ReportConfigEUTRA__reportAmount_r2	= 1,
	ReportConfigEUTRA__reportAmount_r4	= 2,
	ReportConfigEUTRA__reportAmount_r8	= 3,
	ReportConfigEUTRA__reportAmount_r16	= 4,
	ReportConfigEUTRA__reportAmount_r32	= 5,
	ReportConfigEUTRA__reportAmount_r64	= 6,
	ReportConfigEUTRA__reportAmount_infinity	= 7
} e_ReportConfigEUTRA__reportAmount;
typedef enum ReportConfigEUTRA__ext1__si_RequestForHO_r9 {
	ReportConfigEUTRA__ext1__si_RequestForHO_r9_setup	= 0
} e_ReportConfigEUTRA__ext1__si_RequestForHO_r9;
typedef enum ReportConfigEUTRA__ext1__ue_RxTxTimeDiffPeriodical_r9 {
	ReportConfigEUTRA__ext1__ue_RxTxTimeDiffPeriodical_r9_setup	= 0
} e_ReportConfigEUTRA__ext1__ue_RxTxTimeDiffPeriodical_r9;
typedef enum ReportConfigEUTRA__ext2__includeLocationInfo_r10 {
	ReportConfigEUTRA__ext2__includeLocationInfo_r10_true	= 0
} e_ReportConfigEUTRA__ext2__includeLocationInfo_r10;
typedef enum ReportConfigEUTRA__ext2__reportAddNeighMeas_r10 {
	ReportConfigEUTRA__ext2__reportAddNeighMeas_r10_setup	= 0
} e_ReportConfigEUTRA__ext2__reportAddNeighMeas_r10;

/* ReportConfigEUTRA */
typedef struct ReportConfigEUTRA {
	struct ReportConfigEUTRA__triggerType {
		ReportConfigEUTRA__triggerType_PR present;
		union ReportConfigEUTRA__triggerType_u {
			struct ReportConfigEUTRA__triggerType__event {
				struct ReportConfigEUTRA__triggerType__event__eventId {
					ReportConfigEUTRA__triggerType__event__eventId_PR present;
					union ReportConfigEUTRA__triggerType__event__eventId_u {
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA1 {
							ThresholdEUTRA_t	 a1_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA1;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA2 {
							ThresholdEUTRA_t	 a2_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA2;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA3 {
							long	 a3_Offset;
							BOOLEAN_t	 reportOnLeave;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA3;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA4 {
							ThresholdEUTRA_t	 a4_Threshold;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA4;
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA5 {
							ThresholdEUTRA_t	 a5_Threshold1;
							ThresholdEUTRA_t	 a5_Threshold2;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA5;
						/*
						 * This type is extensible,
						 * possible extensions are below.
						 */
						struct ReportConfigEUTRA__triggerType__event__eventId__eventA6_r10 {
							long	 a6_Offset_r10;
							BOOLEAN_t	 a6_ReportOnLeave_r10;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} eventA6_r10;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} eventId;
				Hysteresis_t	 hysteresis;
				TimeToTrigger_t	 timeToTrigger;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} event;
			struct ReportConfigEUTRA__triggerType__periodical {
				long	 purpose;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} periodical;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} triggerType;
	long	 triggerQuantity;
	long	 reportQuantity;
	long	 maxReportCells;
	ReportInterval_t	 reportInterval;
	long	 reportAmount;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct ReportConfigEUTRA__ext1 {
		long	*si_RequestForHO_r9;	/* OPTIONAL */
		long	*ue_RxTxTimeDiffPeriodical_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct ReportConfigEUTRA__ext2 {
		long	*includeLocationInfo_r10;	/* OPTIONAL */
		long	*reportAddNeighMeas_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReportConfigEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_purpose_24;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_triggerQuantity_27;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportQuantity_30;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAmount_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_si_RequestForHO_r9_46;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ue_RxTxTimeDiffPeriodical_r9_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_includeLocationInfo_r10_51;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_reportAddNeighMeas_r10_53;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ReportConfigEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_ReportConfigEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ReportConfigEUTRA_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _ReportConfigEUTRA_H_ */
#include <asn_internal.h>
