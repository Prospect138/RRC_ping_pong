/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TMGI_r9_H_
#define	_TMGI_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeInteger.h>
#include "PLMN-Identity.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TMGI_r9__plmn_Id_r9_PR {
	TMGI_r9__plmn_Id_r9_PR_NOTHING,	/* No components present */
	TMGI_r9__plmn_Id_r9_PR_plmn_Index_r9,
	TMGI_r9__plmn_Id_r9_PR_explicitValue_r9
} TMGI_r9__plmn_Id_r9_PR;

/* TMGI-r9 */
typedef struct TMGI_r9 {
	struct TMGI_r9__plmn_Id_r9 {
		TMGI_r9__plmn_Id_r9_PR present;
		union TMGI_r9__plmn_Id_r9_u {
			long	 plmn_Index_r9;
			PLMN_Identity_t	 explicitValue_r9;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} plmn_Id_r9;
	OCTET_STRING_t	 serviceId_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TMGI_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TMGI_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_TMGI_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_TMGI_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TMGI_r9_H_ */
#include <asn_internal.h>
