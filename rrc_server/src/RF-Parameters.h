/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RF_Parameters_H_
#define	_RF_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandListEUTRA.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RF-Parameters */
typedef struct RF_Parameters {
	SupportedBandListEUTRA_t	 supportedBandListEUTRA;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RF_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RF_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_RF_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_RF_Parameters_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RF_Parameters_H_ */
#include <asn_internal.h>
