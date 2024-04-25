/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasObjectEUTRA_H_
#define	_MeasObjectEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "AllowedMeasBandwidth.h"
#include "PresenceAntennaPort1.h"
#include "NeighCellConfig.h"
#include "Q-OffsetRange.h"
#include "PhysCellId.h"
#include "MeasCycleSCell-r10.h"
#include <constr_SEQUENCE.h>
#include <BOOLEAN.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CellIndexList;
struct CellsToAddModList;
struct BlackCellsToAddModList;
struct MeasSubframePatternConfigNeigh_r10;

/* MeasObjectEUTRA */
typedef struct MeasObjectEUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	AllowedMeasBandwidth_t	 allowedMeasBandwidth;
	PresenceAntennaPort1_t	 presenceAntennaPort1;
	NeighCellConfig_t	 neighCellConfig;
	Q_OffsetRange_t	*offsetFreq;	/* DEFAULT 15 */
	struct CellIndexList	*cellsToRemoveList;	/* OPTIONAL */
	struct CellsToAddModList	*cellsToAddModList;	/* OPTIONAL */
	struct CellIndexList	*blackCellsToRemoveList;	/* OPTIONAL */
	struct BlackCellsToAddModList	*blackCellsToAddModList;	/* OPTIONAL */
	PhysCellId_t	*cellForWhichToReportCGI;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct MeasObjectEUTRA__ext1 {
		MeasCycleSCell_r10_t	*measCycleSCell_r10;	/* OPTIONAL */
		struct MeasSubframePatternConfigNeigh_r10	*measSubframePatternConfigNeigh_r10;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct MeasObjectEUTRA__ext2 {
		BOOLEAN_t	*widebandRSRQ_Meas_r11;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectEUTRA_1[12];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectEUTRA_H_ */
#include <asn_internal.h>
