/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_InitialUE_Identity_H_
#define	_InitialUE_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S-TMSI.h"
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitialUE_Identity_PR {
	InitialUE_Identity_PR_NOTHING,	/* No components present */
	InitialUE_Identity_PR_s_TMSI,
	InitialUE_Identity_PR_randomValue
} InitialUE_Identity_PR;

/* InitialUE-Identity */
typedef struct InitialUE_Identity {
	InitialUE_Identity_PR present;
	union InitialUE_Identity_u {
		S_TMSI_t	 s_TMSI;
		BIT_STRING_t	 randomValue;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitialUE_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitialUE_Identity;
extern asn_CHOICE_specifics_t asn_SPC_InitialUE_Identity_specs_1;
extern asn_TYPE_member_t asn_MBR_InitialUE_Identity_1[2];
extern asn_per_constraints_t asn_PER_type_InitialUE_Identity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _InitialUE_Identity_H_ */
#include <asn_internal.h>
