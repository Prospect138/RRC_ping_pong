/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CarrierFreqEUTRA.h"

asn_TYPE_member_t asn_MBR_CarrierFreqEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierFreqEUTRA, dl_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
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
		"dl-CarrierFreq"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierFreqEUTRA, ul_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
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
		"ul-CarrierFreq"
		},
};
static const int asn_MAP_CarrierFreqEUTRA_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CarrierFreqEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierFreqEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-CarrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-CarrierFreq */
};
asn_SEQUENCE_specifics_t asn_SPC_CarrierFreqEUTRA_specs_1 = {
	sizeof(struct CarrierFreqEUTRA),
	offsetof(struct CarrierFreqEUTRA, _asn_ctx),
	asn_MAP_CarrierFreqEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CarrierFreqEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CarrierFreqEUTRA = {
	"CarrierFreqEUTRA",
	"CarrierFreqEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_CarrierFreqEUTRA_tags_1,
	sizeof(asn_DEF_CarrierFreqEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierFreqEUTRA_tags_1[0]), /* 1 */
	asn_DEF_CarrierFreqEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierFreqEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierFreqEUTRA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CarrierFreqEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_CarrierFreqEUTRA_specs_1	/* Additional specs */
};

