/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_OtherConfig_r9_H_
#define	_OtherConfig_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ReportProximityConfig_r9;
struct IDC_Config_r11;
struct PowerPrefIndicationConfig_r11;
struct ObtainLocationConfig_r11;

/* OtherConfig-r9 */
typedef struct OtherConfig_r9 {
	struct ReportProximityConfig_r9	*reportProximityConfig_r9;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct OtherConfig_r9__ext1 {
		struct IDC_Config_r11	*idc_Config_r11;	/* OPTIONAL */
		struct PowerPrefIndicationConfig_r11	*powerPrefIndicationConfig_r11;	/* OPTIONAL */
		struct ObtainLocationConfig_r11	*obtainLocationConfig_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OtherConfig_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OtherConfig_r9;
extern asn_SEQUENCE_specifics_t asn_SPC_OtherConfig_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_OtherConfig_r9_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _OtherConfig_r9_H_ */
#include <asn_internal.h>
