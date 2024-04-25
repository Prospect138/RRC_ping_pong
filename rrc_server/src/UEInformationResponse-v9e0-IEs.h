/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_UEInformationResponse_v9e0_IEs_H_
#define	_UEInformationResponse_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RLF_Report_v9e0;

/* UEInformationResponse-v9e0-IEs */
typedef struct UEInformationResponse_v9e0_IEs {
	struct RLF_Report_v9e0	*rlf_Report_v9e0;	/* OPTIONAL */
	struct UEInformationResponse_v9e0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEInformationResponse_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEInformationResponse_v9e0_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UEInformationResponse_v9e0_IEs_H_ */
#include <asn_internal.h>
