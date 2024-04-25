/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_EstablishmentCause_H_
#define	_EstablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EstablishmentCause {
	EstablishmentCause_emergency	= 0,
	EstablishmentCause_highPriorityAccess	= 1,
	EstablishmentCause_mt_Access	= 2,
	EstablishmentCause_mo_Signalling	= 3,
	EstablishmentCause_mo_Data	= 4,
	EstablishmentCause_delayTolerantAccess_v1020	= 5,
	EstablishmentCause_spare2	= 6,
	EstablishmentCause_spare1	= 7
} e_EstablishmentCause;

/* EstablishmentCause */
typedef long	 EstablishmentCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EstablishmentCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EstablishmentCause;
extern const asn_INTEGER_specifics_t asn_SPC_EstablishmentCause_specs_1;
asn_struct_free_f EstablishmentCause_free;
asn_struct_print_f EstablishmentCause_print;
asn_constr_check_f EstablishmentCause_constraint;
ber_type_decoder_f EstablishmentCause_decode_ber;
der_type_encoder_f EstablishmentCause_encode_der;
xer_type_decoder_f EstablishmentCause_decode_xer;
xer_type_encoder_f EstablishmentCause_encode_xer;
jer_type_encoder_f EstablishmentCause_encode_jer;
per_type_decoder_f EstablishmentCause_decode_uper;
per_type_encoder_f EstablishmentCause_encode_uper;
per_type_decoder_f EstablishmentCause_decode_aper;
per_type_encoder_f EstablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EstablishmentCause_H_ */
#include <asn_internal.h>
