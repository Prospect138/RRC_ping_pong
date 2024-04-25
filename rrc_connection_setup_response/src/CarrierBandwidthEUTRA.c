/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "CarrierBandwidthEUTRA.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_dl_Bandwidth_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_ul_Bandwidth_constr_19 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_dl_Bandwidth_value2enum_2[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" },
	{ 6,	7,	"spare10" },
	{ 7,	6,	"spare9" },
	{ 8,	6,	"spare8" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_dl_Bandwidth_enum2value_2[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4,	/* n75(4) */
	15,	/* spare1(15) */
	6,	/* spare10(6) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9,	/* spare7(9) */
	8,	/* spare8(8) */
	7	/* spare9(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_dl_Bandwidth_specs_2 = {
	asn_MAP_dl_Bandwidth_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_dl_Bandwidth_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dl_Bandwidth_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dl_Bandwidth_2 = {
	"dl-Bandwidth",
	"dl-Bandwidth",
	&asn_OP_NativeEnumerated,
	asn_DEF_dl_Bandwidth_tags_2,
	sizeof(asn_DEF_dl_Bandwidth_tags_2)
		/sizeof(asn_DEF_dl_Bandwidth_tags_2[0]) - 1, /* 1 */
	asn_DEF_dl_Bandwidth_tags_2,	/* Same as above */
	sizeof(asn_DEF_dl_Bandwidth_tags_2)
		/sizeof(asn_DEF_dl_Bandwidth_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_dl_Bandwidth_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dl_Bandwidth_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_Bandwidth_value2enum_19[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" },
	{ 6,	7,	"spare10" },
	{ 7,	6,	"spare9" },
	{ 8,	6,	"spare8" },
	{ 9,	6,	"spare7" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_ul_Bandwidth_enum2value_19[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4,	/* n75(4) */
	15,	/* spare1(15) */
	6,	/* spare10(6) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10,	/* spare6(10) */
	9,	/* spare7(9) */
	8,	/* spare8(8) */
	7	/* spare9(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_Bandwidth_specs_19 = {
	asn_MAP_ul_Bandwidth_value2enum_19,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_Bandwidth_enum2value_19,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_Bandwidth_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_19 = {
	"ul-Bandwidth",
	"ul-Bandwidth",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_Bandwidth_tags_19,
	sizeof(asn_DEF_ul_Bandwidth_tags_19)
		/sizeof(asn_DEF_ul_Bandwidth_tags_19[0]) - 1, /* 1 */
	asn_DEF_ul_Bandwidth_tags_19,	/* Same as above */
	sizeof(asn_DEF_ul_Bandwidth_tags_19)
		/sizeof(asn_DEF_ul_Bandwidth_tags_19[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_ul_Bandwidth_constr_19,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_Bandwidth_specs_19	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_CarrierBandwidthEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CarrierBandwidthEUTRA, dl_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dl_Bandwidth_2,
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
		"dl-Bandwidth"
		},
	{ ATF_POINTER, 1, offsetof(struct CarrierBandwidthEUTRA, ul_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_Bandwidth_19,
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
		"ul-Bandwidth"
		},
};
static const int asn_MAP_CarrierBandwidthEUTRA_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_CarrierBandwidthEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CarrierBandwidthEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dl-Bandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-Bandwidth */
};
asn_SEQUENCE_specifics_t asn_SPC_CarrierBandwidthEUTRA_specs_1 = {
	sizeof(struct CarrierBandwidthEUTRA),
	offsetof(struct CarrierBandwidthEUTRA, _asn_ctx),
	asn_MAP_CarrierBandwidthEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_CarrierBandwidthEUTRA_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CarrierBandwidthEUTRA = {
	"CarrierBandwidthEUTRA",
	"CarrierBandwidthEUTRA",
	&asn_OP_SEQUENCE,
	asn_DEF_CarrierBandwidthEUTRA_tags_1,
	sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1[0]), /* 1 */
	asn_DEF_CarrierBandwidthEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1)
		/sizeof(asn_DEF_CarrierBandwidthEUTRA_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_CarrierBandwidthEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_CarrierBandwidthEUTRA_specs_1	/* Additional specs */
};

