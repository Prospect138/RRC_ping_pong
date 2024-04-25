/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MBMS_SAI_InterFreqList_r11_H_
#define	_MBMS_SAI_InterFreqList_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MBMS_SAI_InterFreq_r11;

/* MBMS-SAI-InterFreqList-r11 */
typedef struct MBMS_SAI_InterFreqList_r11 {
	A_SEQUENCE_OF(struct MBMS_SAI_InterFreq_r11) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_SAI_InterFreqList_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_SAI_InterFreqList_r11;
extern asn_SET_OF_specifics_t asn_SPC_MBMS_SAI_InterFreqList_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_MBMS_SAI_InterFreqList_r11_1[1];
extern asn_per_constraints_t asn_PER_type_MBMS_SAI_InterFreqList_r11_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_SAI_InterFreqList_r11_H_ */
#include <asn_internal.h>
