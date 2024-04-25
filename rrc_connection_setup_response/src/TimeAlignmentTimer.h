/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#ifndef	_TimeAlignmentTimer_H_
#define	_TimeAlignmentTimer_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TimeAlignmentTimer {
	TimeAlignmentTimer_sf500	= 0,
	TimeAlignmentTimer_sf750	= 1,
	TimeAlignmentTimer_sf1280	= 2,
	TimeAlignmentTimer_sf1920	= 3,
	TimeAlignmentTimer_sf2560	= 4,
	TimeAlignmentTimer_sf5120	= 5,
	TimeAlignmentTimer_sf10240	= 6,
	TimeAlignmentTimer_infinity	= 7
} e_TimeAlignmentTimer;

/* TimeAlignmentTimer */
typedef long	 TimeAlignmentTimer_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_TimeAlignmentTimer_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_TimeAlignmentTimer;
extern const asn_INTEGER_specifics_t asn_SPC_TimeAlignmentTimer_specs_1;
asn_struct_free_f TimeAlignmentTimer_free;
asn_struct_print_f TimeAlignmentTimer_print;
asn_constr_check_f TimeAlignmentTimer_constraint;
ber_type_decoder_f TimeAlignmentTimer_decode_ber;
der_type_encoder_f TimeAlignmentTimer_encode_der;
xer_type_decoder_f TimeAlignmentTimer_decode_xer;
xer_type_encoder_f TimeAlignmentTimer_encode_xer;
jer_type_encoder_f TimeAlignmentTimer_encode_jer;
per_type_decoder_f TimeAlignmentTimer_decode_uper;
per_type_encoder_f TimeAlignmentTimer_encode_uper;
per_type_decoder_f TimeAlignmentTimer_decode_aper;
per_type_encoder_f TimeAlignmentTimer_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeAlignmentTimer_H_ */
#include <asn_internal.h>
