/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CountingRequestInfo-r10.h"

asn_TYPE_member_t asn_MBR_CountingRequestInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CountingRequestInfo_r10, tmgi_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TMGI_r9,
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
		"tmgi-r10"
		},
};
static const ber_tlv_tag_t asn_DEF_CountingRequestInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CountingRequestInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tmgi-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_CountingRequestInfo_r10_specs_1 = {
	sizeof(struct CountingRequestInfo_r10),
	offsetof(struct CountingRequestInfo_r10, _asn_ctx),
	asn_MAP_CountingRequestInfo_r10_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CountingRequestInfo_r10 = {
	"CountingRequestInfo-r10",
	"CountingRequestInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_CountingRequestInfo_r10_tags_1,
	sizeof(asn_DEF_CountingRequestInfo_r10_tags_1)
		/sizeof(asn_DEF_CountingRequestInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_CountingRequestInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_CountingRequestInfo_r10_tags_1)
		/sizeof(asn_DEF_CountingRequestInfo_r10_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CountingRequestInfo_r10_1,
	1,	/* Elements count */
	&asn_SPC_CountingRequestInfo_r10_specs_1	/* Additional specs */
};

