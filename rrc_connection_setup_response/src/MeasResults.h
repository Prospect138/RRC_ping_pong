/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResults_H_
#define	_MeasResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasId.h"
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_SEQUENCE.h>
#include "MeasResultListEUTRA.h"
#include "MeasResultListUTRA.h"
#include "MeasResultListGERAN.h"
#include "MeasResultsCDMA2000.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasResults__measResultNeighCells_PR {
	MeasResults__measResultNeighCells_PR_NOTHING,	/* No components present */
	MeasResults__measResultNeighCells_PR_measResultListEUTRA,
	MeasResults__measResultNeighCells_PR_measResultListUTRA,
	MeasResults__measResultNeighCells_PR_measResultListGERAN,
	MeasResults__measResultNeighCells_PR_measResultsCDMA2000
	/* Extensions may appear below */
	
} MeasResults__measResultNeighCells_PR;

/* Forward declarations */
struct MeasResultForECID_r9;
struct LocationInfo_r10;
struct MeasResultServFreqList_r10;

/* MeasResults */
typedef struct MeasResults {
	MeasId_t	 measId;
	struct MeasResults__measResultPCell {
		RSRP_Range_t	 rsrpResult;
		RSRQ_Range_t	 rsrqResult;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} measResultPCell;
	struct MeasResults__measResultNeighCells {
		MeasResults__measResultNeighCells_PR present;
		union MeasResults__measResultNeighCells_u {
			MeasResultListEUTRA_t	 measResultListEUTRA;
			MeasResultListUTRA_t	 measResultListUTRA;
			MeasResultListGERAN_t	 measResultListGERAN;
			MeasResultsCDMA2000_t	 measResultsCDMA2000;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultNeighCells;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasResults__ext1 {
		struct MeasResultForECID_r9	*measResultForECID_r9;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MeasResults__ext2 {
		struct LocationInfo_r10	*locationInfo_r10;	/* OPTIONAL */
		struct MeasResultServFreqList_r10	*measResultServFreqList_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResults;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasResults_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResults_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResults_H_ */
#include <asn_internal.h>
