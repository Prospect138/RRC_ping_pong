/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_IntraFreqNeighCellInfo_H_
#define	_IntraFreqNeighCellInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PhysCellId.h"
#include "Q-OffsetRange.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntraFreqNeighCellInfo */
typedef struct IntraFreqNeighCellInfo {
	PhysCellId_t	 physCellId;
	Q_OffsetRange_t	 q_OffsetCell;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqNeighCellInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqNeighCellInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_IntraFreqNeighCellInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_IntraFreqNeighCellInfo_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqNeighCellInfo_H_ */
#include <asn_internal.h>
