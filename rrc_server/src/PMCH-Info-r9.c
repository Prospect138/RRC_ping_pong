/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PMCH-Info-r9.h"

asn_TYPE_member_t asn_MBR_PMCH_Info_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_Info_r9, pmch_Config_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PMCH_Config_r9,
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
		"pmch-Config-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PMCH_Info_r9, mbms_SessionInfoList_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_SessionInfoList_r9,
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
		"mbms-SessionInfoList-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_PMCH_Info_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PMCH_Info_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pmch-Config-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mbms-SessionInfoList-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_PMCH_Info_r9_specs_1 = {
	sizeof(struct PMCH_Info_r9),
	offsetof(struct PMCH_Info_r9, _asn_ctx),
	asn_MAP_PMCH_Info_r9_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PMCH_Info_r9 = {
	"PMCH-Info-r9",
	"PMCH-Info-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_PMCH_Info_r9_tags_1,
	sizeof(asn_DEF_PMCH_Info_r9_tags_1)
		/sizeof(asn_DEF_PMCH_Info_r9_tags_1[0]), /* 1 */
	asn_DEF_PMCH_Info_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_PMCH_Info_r9_tags_1)
		/sizeof(asn_DEF_PMCH_Info_r9_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PMCH_Info_r9_1,
	2,	/* Elements count */
	&asn_SPC_PMCH_Info_r9_specs_1	/* Additional specs */
};

