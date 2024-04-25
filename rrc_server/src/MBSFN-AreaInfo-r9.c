/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "MBSFN-AreaInfo-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_mcch_Offset_r9_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 10L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_sf_AllocInfo_r9_constraint_7(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 6UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_mbsfn_AreaId_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 255L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_notificationIndicator_r9_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0L && value <= 7L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_non_MBSFNregionLength_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mcch_RepetitionPeriod_r9_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_mcch_ModificationPeriod_r9_constr_14 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_signallingMCS_r9_constr_18 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_mcch_Offset_r9_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_sf_AllocInfo_r9_constr_17 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  6,  6 }	/* (SIZE(6..6)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_mbsfn_AreaId_r9_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_notificationIndicator_r9_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_non_MBSFNregionLength_value2enum_3[] = {
	{ 0,	2,	"s1" },
	{ 1,	2,	"s2" }
};
static const unsigned int asn_MAP_non_MBSFNregionLength_enum2value_3[] = {
	0,	/* s1(0) */
	1	/* s2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_non_MBSFNregionLength_specs_3 = {
	asn_MAP_non_MBSFNregionLength_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_non_MBSFNregionLength_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_non_MBSFNregionLength_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_non_MBSFNregionLength_3 = {
	"non-MBSFNregionLength",
	"non-MBSFNregionLength",
	&asn_OP_NativeEnumerated,
	asn_DEF_non_MBSFNregionLength_tags_3,
	sizeof(asn_DEF_non_MBSFNregionLength_tags_3)
		/sizeof(asn_DEF_non_MBSFNregionLength_tags_3[0]) - 1, /* 1 */
	asn_DEF_non_MBSFNregionLength_tags_3,	/* Same as above */
	sizeof(asn_DEF_non_MBSFNregionLength_tags_3)
		/sizeof(asn_DEF_non_MBSFNregionLength_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_non_MBSFNregionLength_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_non_MBSFNregionLength_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mcch_RepetitionPeriod_r9_value2enum_8[] = {
	{ 0,	4,	"rf32" },
	{ 1,	4,	"rf64" },
	{ 2,	5,	"rf128" },
	{ 3,	5,	"rf256" }
};
static const unsigned int asn_MAP_mcch_RepetitionPeriod_r9_enum2value_8[] = {
	2,	/* rf128(2) */
	3,	/* rf256(3) */
	0,	/* rf32(0) */
	1	/* rf64(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_mcch_RepetitionPeriod_r9_specs_8 = {
	asn_MAP_mcch_RepetitionPeriod_r9_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_mcch_RepetitionPeriod_r9_enum2value_8,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mcch_RepetitionPeriod_r9_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcch_RepetitionPeriod_r9_8 = {
	"mcch-RepetitionPeriod-r9",
	"mcch-RepetitionPeriod-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_mcch_RepetitionPeriod_r9_tags_8,
	sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8)
		/sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8[0]) - 1, /* 1 */
	asn_DEF_mcch_RepetitionPeriod_r9_tags_8,	/* Same as above */
	sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8)
		/sizeof(asn_DEF_mcch_RepetitionPeriod_r9_tags_8[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mcch_RepetitionPeriod_r9_constr_8,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mcch_RepetitionPeriod_r9_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_mcch_ModificationPeriod_r9_value2enum_14[] = {
	{ 0,	5,	"rf512" },
	{ 1,	6,	"rf1024" }
};
static const unsigned int asn_MAP_mcch_ModificationPeriod_r9_enum2value_14[] = {
	1,	/* rf1024(1) */
	0	/* rf512(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_mcch_ModificationPeriod_r9_specs_14 = {
	asn_MAP_mcch_ModificationPeriod_r9_value2enum_14,	/* "tag" => N; sorted by tag */
	asn_MAP_mcch_ModificationPeriod_r9_enum2value_14,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mcch_ModificationPeriod_r9_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcch_ModificationPeriod_r9_14 = {
	"mcch-ModificationPeriod-r9",
	"mcch-ModificationPeriod-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_mcch_ModificationPeriod_r9_tags_14,
	sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14)
		/sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14[0]) - 1, /* 1 */
	asn_DEF_mcch_ModificationPeriod_r9_tags_14,	/* Same as above */
	sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14)
		/sizeof(asn_DEF_mcch_ModificationPeriod_r9_tags_14[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mcch_ModificationPeriod_r9_constr_14,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mcch_ModificationPeriod_r9_specs_14	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_signallingMCS_r9_value2enum_18[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n7" },
	{ 2,	3,	"n13" },
	{ 3,	3,	"n19" }
};
static const unsigned int asn_MAP_signallingMCS_r9_enum2value_18[] = {
	2,	/* n13(2) */
	3,	/* n19(3) */
	0,	/* n2(0) */
	1	/* n7(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_signallingMCS_r9_specs_18 = {
	asn_MAP_signallingMCS_r9_value2enum_18,	/* "tag" => N; sorted by tag */
	asn_MAP_signallingMCS_r9_enum2value_18,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_signallingMCS_r9_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_signallingMCS_r9_18 = {
	"signallingMCS-r9",
	"signallingMCS-r9",
	&asn_OP_NativeEnumerated,
	asn_DEF_signallingMCS_r9_tags_18,
	sizeof(asn_DEF_signallingMCS_r9_tags_18)
		/sizeof(asn_DEF_signallingMCS_r9_tags_18[0]) - 1, /* 1 */
	asn_DEF_signallingMCS_r9_tags_18,	/* Same as above */
	sizeof(asn_DEF_signallingMCS_r9_tags_18)
		/sizeof(asn_DEF_signallingMCS_r9_tags_18[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_signallingMCS_r9_constr_18,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_signallingMCS_r9_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_mcch_Config_r9_7[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, mcch_RepetitionPeriod_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mcch_RepetitionPeriod_r9_8,
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
		"mcch-RepetitionPeriod-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, mcch_Offset_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_mcch_Offset_r9_constr_13,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_mcch_Offset_r9_constraint_7
		},
		0, 0, /* No default value */
		"mcch-Offset-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, mcch_ModificationPeriod_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mcch_ModificationPeriod_r9_14,
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
		"mcch-ModificationPeriod-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, sf_AllocInfo_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_sf_AllocInfo_r9_constr_17,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_sf_AllocInfo_r9_constraint_7
		},
		0, 0, /* No default value */
		"sf-AllocInfo-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, signallingMCS_r9),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_signallingMCS_r9_18,
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
		"signallingMCS-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_mcch_Config_r9_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mcch_Config_r9_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mcch-RepetitionPeriod-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mcch-Offset-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* mcch-ModificationPeriod-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* sf-AllocInfo-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* signallingMCS-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_mcch_Config_r9_specs_7 = {
	sizeof(struct MBSFN_AreaInfo_r9__mcch_Config_r9),
	offsetof(struct MBSFN_AreaInfo_r9__mcch_Config_r9, _asn_ctx),
	asn_MAP_mcch_Config_r9_tag2el_7,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mcch_Config_r9_7 = {
	"mcch-Config-r9",
	"mcch-Config-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_mcch_Config_r9_tags_7,
	sizeof(asn_DEF_mcch_Config_r9_tags_7)
		/sizeof(asn_DEF_mcch_Config_r9_tags_7[0]) - 1, /* 1 */
	asn_DEF_mcch_Config_r9_tags_7,	/* Same as above */
	sizeof(asn_DEF_mcch_Config_r9_tags_7)
		/sizeof(asn_DEF_mcch_Config_r9_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_mcch_Config_r9_7,
	5,	/* Elements count */
	&asn_SPC_mcch_Config_r9_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MBSFN_AreaInfo_r9_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, mbsfn_AreaId_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_mbsfn_AreaId_r9_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_mbsfn_AreaId_r9_constraint_1
		},
		0, 0, /* No default value */
		"mbsfn-AreaId-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, non_MBSFNregionLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_non_MBSFNregionLength_3,
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
		"non-MBSFNregionLength"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, notificationIndicator_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_notificationIndicator_r9_constr_6,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_notificationIndicator_r9_constraint_1
		},
		0, 0, /* No default value */
		"notificationIndicator-r9"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBSFN_AreaInfo_r9, mcch_Config_r9),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_mcch_Config_r9_7,
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
		"mcch-Config-r9"
		},
};
static const ber_tlv_tag_t asn_DEF_MBSFN_AreaInfo_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBSFN_AreaInfo_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbsfn-AreaId-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* non-MBSFNregionLength */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* notificationIndicator-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* mcch-Config-r9 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBSFN_AreaInfo_r9_specs_1 = {
	sizeof(struct MBSFN_AreaInfo_r9),
	offsetof(struct MBSFN_AreaInfo_r9, _asn_ctx),
	asn_MAP_MBSFN_AreaInfo_r9_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBSFN_AreaInfo_r9 = {
	"MBSFN-AreaInfo-r9",
	"MBSFN-AreaInfo-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_MBSFN_AreaInfo_r9_tags_1,
	sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1)
		/sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1[0]), /* 1 */
	asn_DEF_MBSFN_AreaInfo_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1)
		/sizeof(asn_DEF_MBSFN_AreaInfo_r9_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_MBSFN_AreaInfo_r9_1,
	4,	/* Elements count */
	&asn_SPC_MBSFN_AreaInfo_r9_specs_1	/* Additional specs */
};

