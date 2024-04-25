/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType5_v8h0_IEs_H_
#define	_SystemInformationBlockType5_v8h0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInformationBlockType5_v9e0_IEs;
struct InterFreqCarrierFreqInfo_v8h0;

/* SystemInformationBlockType5-v8h0-IEs */
typedef struct SystemInformationBlockType5_v8h0_IEs {
	struct SystemInformationBlockType5_v8h0_IEs__interFreqCarrierFreqList_v8h0 {
		A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v8h0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqCarrierFreqList_v8h0;
	struct SystemInformationBlockType5_v9e0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_v8h0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5_v8h0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType5_v8h0_IEs_H_ */
#include <asn_internal.h>
