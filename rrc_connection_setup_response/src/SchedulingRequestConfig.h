/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SchedulingRequestConfig_H_
#define	_SchedulingRequestConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SchedulingRequestConfig_PR {
	SchedulingRequestConfig_PR_NOTHING,	/* No components present */
	SchedulingRequestConfig_PR_release,
	SchedulingRequestConfig_PR_setup
} SchedulingRequestConfig_PR;
typedef enum SchedulingRequestConfig__setup__dsr_TransMax {
	SchedulingRequestConfig__setup__dsr_TransMax_n4	= 0,
	SchedulingRequestConfig__setup__dsr_TransMax_n8	= 1,
	SchedulingRequestConfig__setup__dsr_TransMax_n16	= 2,
	SchedulingRequestConfig__setup__dsr_TransMax_n32	= 3,
	SchedulingRequestConfig__setup__dsr_TransMax_n64	= 4,
	SchedulingRequestConfig__setup__dsr_TransMax_spare3	= 5,
	SchedulingRequestConfig__setup__dsr_TransMax_spare2	= 6,
	SchedulingRequestConfig__setup__dsr_TransMax_spare1	= 7
} e_SchedulingRequestConfig__setup__dsr_TransMax;

/* SchedulingRequestConfig */
typedef struct SchedulingRequestConfig {
	SchedulingRequestConfig_PR present;
	union SchedulingRequestConfig_u {
		NULL_t	 release;
		struct SchedulingRequestConfig__setup {
			long	 sr_PUCCH_ResourceIndex;
			long	 sr_ConfigIndex;
			long	 dsr_TransMax;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SchedulingRequestConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dsr_TransMax_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SchedulingRequestConfig;
extern asn_CHOICE_specifics_t asn_SPC_SchedulingRequestConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_SchedulingRequestConfig_1[2];
extern asn_per_constraints_t asn_PER_type_SchedulingRequestConfig_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SchedulingRequestConfig_H_ */
#include <asn_internal.h>
