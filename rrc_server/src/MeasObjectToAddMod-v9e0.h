/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasObjectToAddMod_v9e0_H_
#define	_MeasObjectToAddMod_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasObjectEUTRA_v9e0;

/* MeasObjectToAddMod-v9e0 */
typedef struct MeasObjectToAddMod_v9e0 {
	struct MeasObjectEUTRA_v9e0	*measObjectEUTRA_v9e0;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasObjectToAddMod_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasObjectToAddMod_v9e0;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasObjectToAddMod_v9e0_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasObjectToAddMod_v9e0_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasObjectToAddMod_v9e0_H_ */
#include <asn_internal.h>
