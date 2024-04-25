/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "BandCombinationParameters-v1130.h"

#include "BandParameters-v1130.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_bandParameterList_r11_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1UL && size <= 64UL)) {
		/* Perform validation of the inner elements */
		return SEQUENCE_OF_constraint(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_multipleTimingAdvance_r11_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_simultaneousRx_Tx_r11_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_bandParameterList_r11_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_bandParameterList_r11_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_multipleTimingAdvance_r11_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multipleTimingAdvance_r11_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multipleTimingAdvance_r11_specs_2 = {
	asn_MAP_multipleTimingAdvance_r11_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_multipleTimingAdvance_r11_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multipleTimingAdvance_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multipleTimingAdvance_r11_2 = {
	"multipleTimingAdvance-r11",
	"multipleTimingAdvance-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_multipleTimingAdvance_r11_tags_2,
	sizeof(asn_DEF_multipleTimingAdvance_r11_tags_2)
		/sizeof(asn_DEF_multipleTimingAdvance_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_multipleTimingAdvance_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_multipleTimingAdvance_r11_tags_2)
		/sizeof(asn_DEF_multipleTimingAdvance_r11_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_multipleTimingAdvance_r11_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multipleTimingAdvance_r11_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_simultaneousRx_Tx_r11_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_simultaneousRx_Tx_r11_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_simultaneousRx_Tx_r11_specs_4 = {
	asn_MAP_simultaneousRx_Tx_r11_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_simultaneousRx_Tx_r11_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_simultaneousRx_Tx_r11_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_simultaneousRx_Tx_r11_4 = {
	"simultaneousRx-Tx-r11",
	"simultaneousRx-Tx-r11",
	&asn_OP_NativeEnumerated,
	asn_DEF_simultaneousRx_Tx_r11_tags_4,
	sizeof(asn_DEF_simultaneousRx_Tx_r11_tags_4)
		/sizeof(asn_DEF_simultaneousRx_Tx_r11_tags_4[0]) - 1, /* 1 */
	asn_DEF_simultaneousRx_Tx_r11_tags_4,	/* Same as above */
	sizeof(asn_DEF_simultaneousRx_Tx_r11_tags_4)
		/sizeof(asn_DEF_simultaneousRx_Tx_r11_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_simultaneousRx_Tx_r11_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_simultaneousRx_Tx_r11_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_bandParameterList_r11_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_BandParameters_v1130,
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
		""
		},
};
static const ber_tlv_tag_t asn_DEF_bandParameterList_r11_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_bandParameterList_r11_specs_6 = {
	sizeof(struct BandCombinationParameters_v1130__bandParameterList_r11),
	offsetof(struct BandCombinationParameters_v1130__bandParameterList_r11, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bandParameterList_r11_6 = {
	"bandParameterList-r11",
	"bandParameterList-r11",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_bandParameterList_r11_tags_6,
	sizeof(asn_DEF_bandParameterList_r11_tags_6)
		/sizeof(asn_DEF_bandParameterList_r11_tags_6[0]) - 1, /* 1 */
	asn_DEF_bandParameterList_r11_tags_6,	/* Same as above */
	sizeof(asn_DEF_bandParameterList_r11_tags_6)
		/sizeof(asn_DEF_bandParameterList_r11_tags_6[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_bandParameterList_r11_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_OF_constraint
	},
	asn_MBR_bandParameterList_r11_6,
	1,	/* Single element */
	&asn_SPC_bandParameterList_r11_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_BandCombinationParameters_v1130_1[] = {
	{ ATF_POINTER, 3, offsetof(struct BandCombinationParameters_v1130, multipleTimingAdvance_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multipleTimingAdvance_r11_2,
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
		"multipleTimingAdvance-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct BandCombinationParameters_v1130, simultaneousRx_Tx_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_simultaneousRx_Tx_r11_4,
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
		"simultaneousRx-Tx-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct BandCombinationParameters_v1130, bandParameterList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_bandParameterList_r11_6,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_bandParameterList_r11_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_bandParameterList_r11_constraint_1
		},
		0, 0, /* No default value */
		"bandParameterList-r11"
		},
};
static const int asn_MAP_BandCombinationParameters_v1130_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_BandCombinationParameters_v1130_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombinationParameters_v1130_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* multipleTimingAdvance-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* simultaneousRx-Tx-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* bandParameterList-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombinationParameters_v1130_specs_1 = {
	sizeof(struct BandCombinationParameters_v1130),
	offsetof(struct BandCombinationParameters_v1130, _asn_ctx),
	asn_MAP_BandCombinationParameters_v1130_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_BandCombinationParameters_v1130_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombinationParameters_v1130 = {
	"BandCombinationParameters-v1130",
	"BandCombinationParameters-v1130",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombinationParameters_v1130_tags_1,
	sizeof(asn_DEF_BandCombinationParameters_v1130_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1130_tags_1[0]), /* 1 */
	asn_DEF_BandCombinationParameters_v1130_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombinationParameters_v1130_tags_1)
		/sizeof(asn_DEF_BandCombinationParameters_v1130_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_BandCombinationParameters_v1130_1,
	3,	/* Elements count */
	&asn_SPC_BandCombinationParameters_v1130_specs_1	/* Additional specs */
};

