/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_ULHandoverPreparationTransfer_r8_IEs_H_
#define	_ULHandoverPreparationTransfer_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CDMA2000-Type.h"
#include <BIT_STRING.h>
#include "DedicatedInfoCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ULHandoverPreparationTransfer_v8a0_IEs;

/* ULHandoverPreparationTransfer-r8-IEs */
typedef struct ULHandoverPreparationTransfer_r8_IEs {
	CDMA2000_Type_t	 cdma2000_Type;
	BIT_STRING_t	*meid;	/* OPTIONAL */
	DedicatedInfoCDMA2000_t	 dedicatedInfo;
	struct ULHandoverPreparationTransfer_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULHandoverPreparationTransfer_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULHandoverPreparationTransfer_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_ULHandoverPreparationTransfer_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_ULHandoverPreparationTransfer_r8_IEs_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _ULHandoverPreparationTransfer_r8_IEs_H_ */
#include <asn_internal.h>
