/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CarrierFreqInfoUTRA_FDD_v8h0_H_
#define	_CarrierFreqInfoUTRA_FDD_v8h0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FreqBandIndicator-UTRA-FDD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqInfoUTRA-FDD-v8h0 */
typedef struct CarrierFreqInfoUTRA_FDD_v8h0 {
	struct CarrierFreqInfoUTRA_FDD_v8h0__multiBandInfoList {
		A_SEQUENCE_OF(FreqBandIndicator_UTRA_FDD_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *multiBandInfoList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqInfoUTRA_FDD_v8h0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqInfoUTRA_FDD_v8h0;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqInfoUTRA_FDD_v8h0_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqInfoUTRA_FDD_v8h0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqInfoUTRA_FDD_v8h0_H_ */
#include <asn_internal.h>
