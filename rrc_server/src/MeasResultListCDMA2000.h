/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_MeasResultListCDMA2000_H_
#define	_MeasResultListCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultCDMA2000;

/* MeasResultListCDMA2000 */
typedef struct MeasResultListCDMA2000 {
	A_SEQUENCE_OF(struct MeasResultCDMA2000) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultListCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultListCDMA2000;
extern asn_SET_OF_specifics_t asn_SPC_MeasResultListCDMA2000_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasResultListCDMA2000_1[1];
extern asn_per_constraints_t asn_PER_type_MeasResultListCDMA2000_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultListCDMA2000_H_ */
#include <asn_internal.h>
