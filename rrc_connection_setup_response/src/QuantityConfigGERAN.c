/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "QuantityConfigGERAN.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_measQuantityGERAN_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_measQuantityGERAN_value2enum_2[] = {
	{ 0,	4,	"rssi" }
};
static const unsigned int asn_MAP_measQuantityGERAN_enum2value_2[] = {
	0	/* rssi(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_measQuantityGERAN_specs_2 = {
	asn_MAP_measQuantityGERAN_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_measQuantityGERAN_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_measQuantityGERAN_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measQuantityGERAN_2 = {
	"measQuantityGERAN",
	"measQuantityGERAN",
	&asn_OP_NativeEnumerated,
	asn_DEF_measQuantityGERAN_tags_2,
	sizeof(asn_DEF_measQuantityGERAN_tags_2)
		/sizeof(asn_DEF_measQuantityGERAN_tags_2[0]) - 1, /* 1 */
	asn_DEF_measQuantityGERAN_tags_2,	/* Same as above */
	sizeof(asn_DEF_measQuantityGERAN_tags_2)
		/sizeof(asn_DEF_measQuantityGERAN_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_measQuantityGERAN_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_measQuantityGERAN_specs_2	/* Additional specs */
};

static int asn_DFL_4_cmp_2(const void *sptr) {
	const FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 2 */
	return (*st != 2);
}
static int asn_DFL_4_set_2(void **sptr) {
	FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 2 */
	*st = 2;
	return 0;
}
asn_TYPE_member_t asn_MBR_QuantityConfigGERAN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct QuantityConfigGERAN, measQuantityGERAN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_measQuantityGERAN_2,
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
		"measQuantityGERAN"
		},
	{ ATF_POINTER, 1, offsetof(struct QuantityConfigGERAN, filterCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
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
		&asn_DFL_4_cmp_2,	/* Compare DEFAULT 2 */
		&asn_DFL_4_set_2,	/* Set DEFAULT 2 */
		"filterCoefficient"
		},
};
static const int asn_MAP_QuantityConfigGERAN_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_QuantityConfigGERAN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QuantityConfigGERAN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measQuantityGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* filterCoefficient */
};
asn_SEQUENCE_specifics_t asn_SPC_QuantityConfigGERAN_specs_1 = {
	sizeof(struct QuantityConfigGERAN),
	offsetof(struct QuantityConfigGERAN, _asn_ctx),
	asn_MAP_QuantityConfigGERAN_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_QuantityConfigGERAN_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfigGERAN = {
	"QuantityConfigGERAN",
	"QuantityConfigGERAN",
	&asn_OP_SEQUENCE,
	asn_DEF_QuantityConfigGERAN_tags_1,
	sizeof(asn_DEF_QuantityConfigGERAN_tags_1)
		/sizeof(asn_DEF_QuantityConfigGERAN_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfigGERAN_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfigGERAN_tags_1)
		/sizeof(asn_DEF_QuantityConfigGERAN_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_QuantityConfigGERAN_1,
	2,	/* Elements count */
	&asn_SPC_QuantityConfigGERAN_specs_1	/* Additional specs */
};

