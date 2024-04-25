/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionSetup -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "SPS-ConfigUL.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_p0_NominalPUSCH_Persistent_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -126L && value <= 24L)) {
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
memb_p0_UE_PUSCH_Persistent_constraint_26(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8L && value <= 7L)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_semiPersistSchedIntervalUL_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_implicitReleaseAfter_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_p0_NominalPUSCH_Persistent_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -126,  24 }	/* (-126..24) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_p0_UE_PUSCH_Persistent_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_twoIntervalsConfig_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_SPS_ConfigUL_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_semiPersistSchedIntervalUL_value2enum_4[] = {
	{ 0,	4,	"sf10" },
	{ 1,	4,	"sf20" },
	{ 2,	4,	"sf32" },
	{ 3,	4,	"sf40" },
	{ 4,	4,	"sf64" },
	{ 5,	4,	"sf80" },
	{ 6,	5,	"sf128" },
	{ 7,	5,	"sf160" },
	{ 8,	5,	"sf320" },
	{ 9,	5,	"sf640" },
	{ 10,	6,	"spare6" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_semiPersistSchedIntervalUL_enum2value_4[] = {
	0,	/* sf10(0) */
	6,	/* sf128(6) */
	7,	/* sf160(7) */
	1,	/* sf20(1) */
	2,	/* sf32(2) */
	8,	/* sf320(8) */
	3,	/* sf40(3) */
	4,	/* sf64(4) */
	9,	/* sf640(9) */
	5,	/* sf80(5) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11,	/* spare5(11) */
	10	/* spare6(10) */
};
static const asn_INTEGER_specifics_t asn_SPC_semiPersistSchedIntervalUL_specs_4 = {
	asn_MAP_semiPersistSchedIntervalUL_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_semiPersistSchedIntervalUL_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_semiPersistSchedIntervalUL_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_semiPersistSchedIntervalUL_4 = {
	"semiPersistSchedIntervalUL",
	"semiPersistSchedIntervalUL",
	&asn_OP_NativeEnumerated,
	asn_DEF_semiPersistSchedIntervalUL_tags_4,
	sizeof(asn_DEF_semiPersistSchedIntervalUL_tags_4)
		/sizeof(asn_DEF_semiPersistSchedIntervalUL_tags_4[0]) - 1, /* 1 */
	asn_DEF_semiPersistSchedIntervalUL_tags_4,	/* Same as above */
	sizeof(asn_DEF_semiPersistSchedIntervalUL_tags_4)
		/sizeof(asn_DEF_semiPersistSchedIntervalUL_tags_4[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_semiPersistSchedIntervalUL_constr_4,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_semiPersistSchedIntervalUL_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_implicitReleaseAfter_value2enum_21[] = {
	{ 0,	2,	"e2" },
	{ 1,	2,	"e3" },
	{ 2,	2,	"e4" },
	{ 3,	2,	"e8" }
};
static const unsigned int asn_MAP_implicitReleaseAfter_enum2value_21[] = {
	0,	/* e2(0) */
	1,	/* e3(1) */
	2,	/* e4(2) */
	3	/* e8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_implicitReleaseAfter_specs_21 = {
	asn_MAP_implicitReleaseAfter_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_implicitReleaseAfter_enum2value_21,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_implicitReleaseAfter_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_implicitReleaseAfter_21 = {
	"implicitReleaseAfter",
	"implicitReleaseAfter",
	&asn_OP_NativeEnumerated,
	asn_DEF_implicitReleaseAfter_tags_21,
	sizeof(asn_DEF_implicitReleaseAfter_tags_21)
		/sizeof(asn_DEF_implicitReleaseAfter_tags_21[0]) - 1, /* 1 */
	asn_DEF_implicitReleaseAfter_tags_21,	/* Same as above */
	sizeof(asn_DEF_implicitReleaseAfter_tags_21)
		/sizeof(asn_DEF_implicitReleaseAfter_tags_21[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_implicitReleaseAfter_constr_21,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_implicitReleaseAfter_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_p0_Persistent_26[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigUL__setup__p0_Persistent, p0_NominalPUSCH_Persistent),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_p0_NominalPUSCH_Persistent_constr_27,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_p0_NominalPUSCH_Persistent_constraint_26
		},
		0, 0, /* No default value */
		"p0-NominalPUSCH-Persistent"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigUL__setup__p0_Persistent, p0_UE_PUSCH_Persistent),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_p0_UE_PUSCH_Persistent_constr_28,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_p0_UE_PUSCH_Persistent_constraint_26
		},
		0, 0, /* No default value */
		"p0-UE-PUSCH-Persistent"
		},
};
static const ber_tlv_tag_t asn_DEF_p0_Persistent_tags_26[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_p0_Persistent_tag2el_26[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-NominalPUSCH-Persistent */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* p0-UE-PUSCH-Persistent */
};
static asn_SEQUENCE_specifics_t asn_SPC_p0_Persistent_specs_26 = {
	sizeof(struct SPS_ConfigUL__setup__p0_Persistent),
	offsetof(struct SPS_ConfigUL__setup__p0_Persistent, _asn_ctx),
	asn_MAP_p0_Persistent_tag2el_26,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_p0_Persistent_26 = {
	"p0-Persistent",
	"p0-Persistent",
	&asn_OP_SEQUENCE,
	asn_DEF_p0_Persistent_tags_26,
	sizeof(asn_DEF_p0_Persistent_tags_26)
		/sizeof(asn_DEF_p0_Persistent_tags_26[0]) - 1, /* 1 */
	asn_DEF_p0_Persistent_tags_26,	/* Same as above */
	sizeof(asn_DEF_p0_Persistent_tags_26)
		/sizeof(asn_DEF_p0_Persistent_tags_26[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_p0_Persistent_26,
	2,	/* Elements count */
	&asn_SPC_p0_Persistent_specs_26	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_twoIntervalsConfig_value2enum_29[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_twoIntervalsConfig_enum2value_29[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_twoIntervalsConfig_specs_29 = {
	asn_MAP_twoIntervalsConfig_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_twoIntervalsConfig_enum2value_29,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_twoIntervalsConfig_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_twoIntervalsConfig_29 = {
	"twoIntervalsConfig",
	"twoIntervalsConfig",
	&asn_OP_NativeEnumerated,
	asn_DEF_twoIntervalsConfig_tags_29,
	sizeof(asn_DEF_twoIntervalsConfig_tags_29)
		/sizeof(asn_DEF_twoIntervalsConfig_tags_29[0]) - 1, /* 1 */
	asn_DEF_twoIntervalsConfig_tags_29,	/* Same as above */
	sizeof(asn_DEF_twoIntervalsConfig_tags_29)
		/sizeof(asn_DEF_twoIntervalsConfig_tags_29[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_twoIntervalsConfig_constr_29,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_twoIntervalsConfig_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigUL__setup, semiPersistSchedIntervalUL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_semiPersistSchedIntervalUL_4,
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
		"semiPersistSchedIntervalUL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigUL__setup, implicitReleaseAfter),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_implicitReleaseAfter_21,
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
		"implicitReleaseAfter"
		},
	{ ATF_POINTER, 2, offsetof(struct SPS_ConfigUL__setup, p0_Persistent),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_p0_Persistent_26,
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
		"p0-Persistent"
		},
	{ ATF_POINTER, 1, offsetof(struct SPS_ConfigUL__setup, twoIntervalsConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_twoIntervalsConfig_29,
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
		"twoIntervalsConfig"
		},
};
static const int asn_MAP_setup_oms_3[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_setup_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* semiPersistSchedIntervalUL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* implicitReleaseAfter */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* p0-Persistent */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* twoIntervalsConfig */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_3 = {
	sizeof(struct SPS_ConfigUL__setup),
	offsetof(struct SPS_ConfigUL__setup, _asn_ctx),
	asn_MAP_setup_tag2el_3,
	4,	/* Count of tags in the map */
	asn_MAP_setup_oms_3,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_3 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_3,
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]) - 1, /* 1 */
	asn_DEF_setup_tags_3,	/* Same as above */
	sizeof(asn_DEF_setup_tags_3)
		/sizeof(asn_DEF_setup_tags_3[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_setup_3,
	4,	/* Elements count */
	&asn_SPC_setup_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SPS_ConfigUL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigUL, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
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
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SPS_ConfigUL, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_3,
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
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_SPS_ConfigUL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_SPS_ConfigUL_specs_1 = {
	sizeof(struct SPS_ConfigUL),
	offsetof(struct SPS_ConfigUL, _asn_ctx),
	offsetof(struct SPS_ConfigUL, present),
	sizeof(((struct SPS_ConfigUL *)0)->present),
	asn_MAP_SPS_ConfigUL_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_SPS_ConfigUL = {
	"SPS-ConfigUL",
	"SPS-ConfigUL",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_SPS_ConfigUL_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_SPS_ConfigUL_1,
	2,	/* Elements count */
	&asn_SPC_SPS_ConfigUL_specs_1	/* Additional specs */
};

