/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_RRCConnectionReject_r8_IEs_H_
#define	_RRCConnectionReject_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReject_v8a0_IEs;

/* RRCConnectionReject-r8-IEs */
typedef struct RRCConnectionReject_r8_IEs {
	long	 waitTime;
	struct RRCConnectionReject_v8a0_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_r8_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReject_r8_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCConnectionReject_r8_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCConnectionReject_r8_IEs_H_ */
#include <asn_internal.h>
