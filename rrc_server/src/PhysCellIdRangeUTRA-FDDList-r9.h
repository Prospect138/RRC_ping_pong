/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_PhysCellIdRangeUTRA_FDDList_r9_H_
#define	_PhysCellIdRangeUTRA_FDDList_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysCellIdRangeUTRA_FDD_r9;

/* PhysCellIdRangeUTRA-FDDList-r9 */
typedef struct PhysCellIdRangeUTRA_FDDList_r9 {
	A_SEQUENCE_OF(struct PhysCellIdRangeUTRA_FDD_r9) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysCellIdRangeUTRA_FDDList_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysCellIdRangeUTRA_FDDList_r9;
extern asn_SET_OF_specifics_t asn_SPC_PhysCellIdRangeUTRA_FDDList_r9_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysCellIdRangeUTRA_FDDList_r9_1[1];
extern asn_per_constraints_t asn_PER_type_PhysCellIdRangeUTRA_FDDList_r9_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysCellIdRangeUTRA_FDDList_r9_H_ */
#include <asn_internal.h>
