/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType6_H_
#define	_SystemInformationBlockType6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-Reselection.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqListUTRA_FDD;
struct CarrierFreqListUTRA_TDD;
struct SpeedStateScaleFactors;

/* SystemInformationBlockType6 */
typedef struct SystemInformationBlockType6 {
	struct CarrierFreqListUTRA_FDD	*carrierFreqListUTRA_FDD;	/* OPTIONAL */
	struct CarrierFreqListUTRA_TDD	*carrierFreqListUTRA_TDD;	/* OPTIONAL */
	T_Reselection_t	 t_ReselectionUTRA;
	struct SpeedStateScaleFactors	*t_ReselectionUTRA_SF;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType6;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType6_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType6_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType6_H_ */
#include <asn_internal.h>
