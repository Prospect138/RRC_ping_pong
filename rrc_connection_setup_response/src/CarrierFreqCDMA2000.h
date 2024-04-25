/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CarrierFreqCDMA2000_H_
#define	_CarrierFreqCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandclassCDMA2000.h"
#include "ARFCN-ValueCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CarrierFreqCDMA2000 */
typedef struct CarrierFreqCDMA2000 {
	BandclassCDMA2000_t	 bandClass;
	ARFCN_ValueCDMA2000_t	 arfcn;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CarrierFreqCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CarrierFreqCDMA2000;
extern asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_CarrierFreqCDMA2000_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _CarrierFreqCDMA2000_H_ */
#include <asn_internal.h>
