/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "UEInformationRequest-v930-IEs.h"

#include "UEInformationRequest-v1020-IEs.h"
asn_TYPE_member_t asn_MBR_UEInformationRequest_v930_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UEInformationRequest_v930_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct UEInformationRequest_v930_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UEInformationRequest_v1020_IEs,
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
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UEInformationRequest_v930_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_UEInformationRequest_v930_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UEInformationRequest_v930_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UEInformationRequest_v930_IEs_specs_1 = {
	sizeof(struct UEInformationRequest_v930_IEs),
	offsetof(struct UEInformationRequest_v930_IEs, _asn_ctx),
	asn_MAP_UEInformationRequest_v930_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UEInformationRequest_v930_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UEInformationRequest_v930_IEs = {
	"UEInformationRequest-v930-IEs",
	"UEInformationRequest-v930-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UEInformationRequest_v930_IEs_tags_1,
	sizeof(asn_DEF_UEInformationRequest_v930_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationRequest_v930_IEs_tags_1[0]), /* 1 */
	asn_DEF_UEInformationRequest_v930_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UEInformationRequest_v930_IEs_tags_1)
		/sizeof(asn_DEF_UEInformationRequest_v930_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_UEInformationRequest_v930_IEs_1,
	2,	/* Elements count */
	&asn_SPC_UEInformationRequest_v930_IEs_specs_1	/* Additional specs */
};

