/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_AffectedCarrierFreq_r11_H_
#define	_AffectedCarrierFreq_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasObjectId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AffectedCarrierFreq_r11__interferenceDirection_r11 {
	AffectedCarrierFreq_r11__interferenceDirection_r11_eutra	= 0,
	AffectedCarrierFreq_r11__interferenceDirection_r11_other	= 1,
	AffectedCarrierFreq_r11__interferenceDirection_r11_both	= 2,
	AffectedCarrierFreq_r11__interferenceDirection_r11_spare	= 3
} e_AffectedCarrierFreq_r11__interferenceDirection_r11;

/* AffectedCarrierFreq-r11 */
typedef struct AffectedCarrierFreq_r11 {
	MeasObjectId_t	 carrierFreq_r11;
	long	 interferenceDirection_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AffectedCarrierFreq_r11_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_interferenceDirection_r11_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AffectedCarrierFreq_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_AffectedCarrierFreq_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_AffectedCarrierFreq_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _AffectedCarrierFreq_r11_H_ */
#include <asn_internal.h>
