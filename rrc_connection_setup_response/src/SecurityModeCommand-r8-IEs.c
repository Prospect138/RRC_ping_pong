/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SecurityModeCommand-r8-IEs.h"

#include "SecurityModeCommand-v8a0-IEs.h"
asn_TYPE_member_t asn_MBR_SecurityModeCommand_r8_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SecurityModeCommand_r8_IEs, securityConfigSMC),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityConfigSMC,
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
		"securityConfigSMC"
		},
	{ ATF_POINTER, 1, offsetof(struct SecurityModeCommand_r8_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityModeCommand_v8a0_IEs,
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
static const int asn_MAP_SecurityModeCommand_r8_IEs_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_SecurityModeCommand_r8_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecurityModeCommand_r8_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* securityConfigSMC */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_SecurityModeCommand_r8_IEs_specs_1 = {
	sizeof(struct SecurityModeCommand_r8_IEs),
	offsetof(struct SecurityModeCommand_r8_IEs, _asn_ctx),
	asn_MAP_SecurityModeCommand_r8_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SecurityModeCommand_r8_IEs_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SecurityModeCommand_r8_IEs = {
	"SecurityModeCommand-r8-IEs",
	"SecurityModeCommand-r8-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_SecurityModeCommand_r8_IEs_tags_1,
	sizeof(asn_DEF_SecurityModeCommand_r8_IEs_tags_1)
		/sizeof(asn_DEF_SecurityModeCommand_r8_IEs_tags_1[0]), /* 1 */
	asn_DEF_SecurityModeCommand_r8_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecurityModeCommand_r8_IEs_tags_1)
		/sizeof(asn_DEF_SecurityModeCommand_r8_IEs_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SecurityModeCommand_r8_IEs_1,
	2,	/* Elements count */
	&asn_SPC_SecurityModeCommand_r8_IEs_specs_1	/* Additional specs */
};

