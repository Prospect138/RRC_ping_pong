/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CSFB-RegistrationParam1XRTT-v920.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_powerDownReg_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_powerDownReg_r9_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_powerDownReg_r9_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_powerDownReg_r9_specs_2 = {
	asn_MAP_powerDownReg_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_powerDownReg_r9_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_powerDownReg_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_powerDownReg_r9_2 = {
	"powerDownReg-r9",
	"powerDownReg-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_powerDownReg_r9_tags_2,
	sizeof(asn_DEF_powerDownReg_r9_tags_2)
		/sizeof(asn_DEF_powerDownReg_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_powerDownReg_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_powerDownReg_r9_tags_2)
		/sizeof(asn_DEF_powerDownReg_r9_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_powerDownReg_r9_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_powerDownReg_r9_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CSFB_RegistrationParam1XRTT_v920_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CSFB_RegistrationParam1XRTT_v920, powerDownReg_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_powerDownReg_r9_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"powerDownReg-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_CSFB_RegistrationParam1XRTT_v920_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CSFB_RegistrationParam1XRTT_v920_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* powerDownReg-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_CSFB_RegistrationParam1XRTT_v920_specs_1 = {
	sizeof(struct CSFB_RegistrationParam1XRTT_v920),
	offsetof(struct CSFB_RegistrationParam1XRTT_v920, _asn_ctx),
	asn_MAP_CSFB_RegistrationParam1XRTT_v920_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CSFB_RegistrationParam1XRTT_v920 = {
	"CSFB-RegistrationParam1XRTT-v920",
	"CSFB-RegistrationParam1XRTT-v920",
	&asn_OP_SEQUENCE,
	asn_DEF_CSFB_RegistrationParam1XRTT_v920_tags_1,
	sizeof(asn_DEF_CSFB_RegistrationParam1XRTT_v920_tags_1)
		/sizeof(asn_DEF_CSFB_RegistrationParam1XRTT_v920_tags_1[0]), /* 1 */
	asn_DEF_CSFB_RegistrationParam1XRTT_v920_tags_1,	/* Same as above */
	sizeof(asn_DEF_CSFB_RegistrationParam1XRTT_v920_tags_1)
		/sizeof(asn_DEF_CSFB_RegistrationParam1XRTT_v920_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CSFB_RegistrationParam1XRTT_v920_1,
	1,	/* Elements count */
	&asn_SPC_CSFB_RegistrationParam1XRTT_v920_specs_1	/* Additional specs */
};

