/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultGERAN_H_
#define	_MeasResultGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CarrierFreqGERAN.h"
#include "PhysCellIdGERAN.h"
#include "CellGlobalIdGERAN.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultGERAN */
typedef struct MeasResultGERAN {
	CarrierFreqGERAN_t	 carrierFreq;
	PhysCellIdGERAN_t	 physCellId;
	struct MeasResultGERAN__cgi_Info {
		CellGlobalIdGERAN_t	 cellGlobalId;
		BIT_STRING_t	*routingAreaCode;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_Info;
	struct MeasResultGERAN__measResult {
		long	 rssi;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResult;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultGERAN;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResultGERAN_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultGERAN_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultGERAN_H_ */
#include <asn_internal.h>
