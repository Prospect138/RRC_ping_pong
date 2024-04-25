/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_LoggingInterval_r10_H_
#define	_LoggingInterval_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LoggingInterval_r10 {
	LoggingInterval_r10_ms1280	= 0,
	LoggingInterval_r10_ms2560	= 1,
	LoggingInterval_r10_ms5120	= 2,
	LoggingInterval_r10_ms10240	= 3,
	LoggingInterval_r10_ms20480	= 4,
	LoggingInterval_r10_ms30720	= 5,
	LoggingInterval_r10_ms40960	= 6,
	LoggingInterval_r10_ms61440	= 7
} e_LoggingInterval_r10;

/* LoggingInterval-r10 */
typedef long	 LoggingInterval_r10_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LoggingInterval_r10_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LoggingInterval_r10;
extern const asn_INTEGER_specifics_t asn_SPC_LoggingInterval_r10_specs_1;
asn_struct_free_f LoggingInterval_r10_free;
asn_struct_print_f LoggingInterval_r10_print;
asn_constr_check_f LoggingInterval_r10_constraint;
ber_type_decoder_f LoggingInterval_r10_decode_ber;
der_type_encoder_f LoggingInterval_r10_encode_der;
xer_type_decoder_f LoggingInterval_r10_decode_xer;
xer_type_encoder_f LoggingInterval_r10_encode_xer;
jer_type_encoder_f LoggingInterval_r10_encode_jer;
per_type_decoder_f LoggingInterval_r10_decode_uper;
per_type_encoder_f LoggingInterval_r10_encode_uper;
per_type_decoder_f LoggingInterval_r10_decode_aper;
per_type_encoder_f LoggingInterval_r10_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LoggingInterval_r10_H_ */
#include <asn_internal.h>
