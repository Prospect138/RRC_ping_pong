/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "QuantityConfig.h"

#include "QuantityConfigEUTRA.h"
#include "QuantityConfigUTRA.h"
#include "QuantityConfigGERAN.h"
#include "QuantityConfigCDMA2000.h"
#include "QuantityConfigUTRA-v1020.h"
static asn_TYPE_member_t asn_MBR_ext1_7[] = {
	{ ATF_POINTER, 1, offsetof(struct QuantityConfig__ext1, quantityConfigUTRA_v1020),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigUTRA_v1020,
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
		"quantityConfigUTRA-v1020"
		},
};
static const int asn_MAP_ext1_oms_7[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* quantityConfigUTRA-v1020 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_7 = {
	sizeof(struct QuantityConfig__ext1),
	offsetof(struct QuantityConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_7,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_7,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_7 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_7,
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_7,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_7)
		/sizeof(asn_DEF_ext1_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_7,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_QuantityConfig_1[] = {
	{ ATF_POINTER, 5, offsetof(struct QuantityConfig, quantityConfigEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigEUTRA,
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
		"quantityConfigEUTRA"
		},
	{ ATF_POINTER, 4, offsetof(struct QuantityConfig, quantityConfigUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigUTRA,
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
		"quantityConfigUTRA"
		},
	{ ATF_POINTER, 3, offsetof(struct QuantityConfig, quantityConfigGERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigGERAN,
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
		"quantityConfigGERAN"
		},
	{ ATF_POINTER, 2, offsetof(struct QuantityConfig, quantityConfigCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QuantityConfigCDMA2000,
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
		"quantityConfigCDMA2000"
		},
	{ ATF_POINTER, 1, offsetof(struct QuantityConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_ext1_7,
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
		"ext1"
		},
};
static const int asn_MAP_QuantityConfig_oms_1[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_QuantityConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_QuantityConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* quantityConfigEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* quantityConfigUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* quantityConfigGERAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* quantityConfigCDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_QuantityConfig_specs_1 = {
	sizeof(struct QuantityConfig),
	offsetof(struct QuantityConfig, _asn_ctx),
	asn_MAP_QuantityConfig_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_QuantityConfig_oms_1,	/* Optional members */
	4, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_QuantityConfig = {
	"QuantityConfig",
	"QuantityConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_QuantityConfig_tags_1,
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	asn_DEF_QuantityConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_QuantityConfig_tags_1)
		/sizeof(asn_DEF_QuantityConfig_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_QuantityConfig_1,
	5,	/* Elements count */
	&asn_SPC_QuantityConfig_specs_1	/* Additional specs */
};

