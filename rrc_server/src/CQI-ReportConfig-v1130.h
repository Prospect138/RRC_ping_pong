/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CQI_ReportConfig_v1130_H_
#define	_CQI_ReportConfig_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CQI-ReportPeriodic-v1130.h"
#include "CQI-ReportBoth-r11.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CQI-ReportConfig-v1130 */
typedef struct CQI_ReportConfig_v1130 {
	CQI_ReportPeriodic_v1130_t	 cqi_ReportPeriodic_v1130;
	CQI_ReportBoth_r11_t	 cqi_ReportBoth_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CQI_ReportConfig_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_CQI_ReportConfig_v1130_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CQI_ReportConfig_v1130_H_ */
#include <asn_internal.h>
