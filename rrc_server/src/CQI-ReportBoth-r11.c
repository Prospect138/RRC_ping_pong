/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CQI-ReportBoth-r11.h"

#include "CSI-IM-ConfigToReleaseList-r11.h"
#include "CSI-IM-ConfigToAddModList-r11.h"
#include "CSI-ProcessToReleaseList-r11.h"
#include "CSI-ProcessToAddModList-r11.h"
asn_TYPE_member_t asn_MBR_CQI_ReportBoth_r11_1[] = {
	{ ATF_POINTER, 4, offsetof(struct CQI_ReportBoth_r11, csi_IM_ConfigToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_IM_ConfigToReleaseList_r11,
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
		"csi-IM-ConfigToReleaseList-r11"
		},
	{ ATF_POINTER, 3, offsetof(struct CQI_ReportBoth_r11, csi_IM_ConfigToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_IM_ConfigToAddModList_r11,
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
		"csi-IM-ConfigToAddModList-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct CQI_ReportBoth_r11, csi_ProcessToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_ProcessToReleaseList_r11,
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
		"csi-ProcessToReleaseList-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportBoth_r11, csi_ProcessToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_ProcessToAddModList_r11,
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
		"csi-ProcessToAddModList-r11"
		},
};
static const int asn_MAP_CQI_ReportBoth_r11_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_CQI_ReportBoth_r11_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportBoth_r11_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-IM-ConfigToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-IM-ConfigToAddModList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-ProcessToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* csi-ProcessToAddModList-r11 */
};
asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportBoth_r11_specs_1 = {
	sizeof(struct CQI_ReportBoth_r11),
	offsetof(struct CQI_ReportBoth_r11, _asn_ctx),
	asn_MAP_CQI_ReportBoth_r11_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CQI_ReportBoth_r11_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportBoth_r11 = {
	"CQI-ReportBoth-r11",
	"CQI-ReportBoth-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_CQI_ReportBoth_r11_tags_1,
	sizeof(asn_DEF_CQI_ReportBoth_r11_tags_1)
		/sizeof(asn_DEF_CQI_ReportBoth_r11_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportBoth_r11_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportBoth_r11_tags_1)
		/sizeof(asn_DEF_CQI_ReportBoth_r11_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CQI_ReportBoth_r11_1,
	4,	/* Elements count */
	&asn_SPC_CQI_ReportBoth_r11_specs_1	/* Additional specs */
};

