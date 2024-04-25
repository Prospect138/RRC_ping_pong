/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_SystemInformationBlockType5_H_
#define	_SystemInformationBlockType5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCarrierFreqList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType5 */
typedef struct SystemInformationBlockType5 {
	InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5;
extern asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType5_specs_1;
extern asn_TYPE_member_t asn_MBR_SystemInformationBlockType5_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType5_H_ */
#include <asn_internal.h>
