/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PDSCH_ConfigCommon_H_
#define	_PDSCH_ConfigCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PDSCH-ConfigCommon */
typedef struct PDSCH_ConfigCommon {
	long	 referenceSignalPower;
	long	 p_b;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_ConfigCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_ConfigCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_PDSCH_ConfigCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_PDSCH_ConfigCommon_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PDSCH_ConfigCommon_H_ */
#include <asn_internal.h>
