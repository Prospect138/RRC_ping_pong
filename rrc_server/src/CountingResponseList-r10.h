/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_CountingResponseList_r10_H_
#define	_CountingResponseList_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CountingResponseInfo_r10;

/* CountingResponseList-r10 */
typedef struct CountingResponseList_r10 {
	A_SEQUENCE_OF(struct CountingResponseInfo_r10) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CountingResponseList_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CountingResponseList_r10;
extern asn_SET_OF_specifics_t asn_SPC_CountingResponseList_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_CountingResponseList_r10_1[1];
extern asn_per_constraints_t asn_PER_type_CountingResponseList_r10_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CountingResponseList_r10_H_ */
#include <asn_internal.h>
