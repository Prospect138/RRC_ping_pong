/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "EUTRA-RRC-Definitions.asn"
 * 	`asn1c -D src -pdu=RRCConnectionRequest -no-gen-OER -fcompound-names -no-gen-example -fno-include-deps`
 */

#include "PhysicalConfigDedicatedSCell-r10.h"

#include "AntennaInfoDedicated-r10.h"
#include "CrossCarrierSchedulingConfig-r10.h"
#include "CSI-RS-Config-r10.h"
#include "PDSCH-ConfigDedicated.h"
#include "AntennaInfoUL-r10.h"
#include "PUSCH-ConfigDedicatedSCell-r10.h"
#include "UplinkPowerControlDedicatedSCell-r10.h"
#include "CQI-ReportConfigSCell-r10.h"
#include "SoundingRS-UL-ConfigDedicated.h"
#include "SoundingRS-UL-ConfigDedicated-v1020.h"
#include "SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"
#include "CSI-RS-ConfigNZPToReleaseList-r11.h"
#include "CSI-RS-ConfigNZPToAddModList-r11.h"
#include "CSI-RS-ConfigZPToReleaseList-r11.h"
#include "CSI-RS-ConfigZPToAddModList-r11.h"
#include "EPDCCH-Config-r11.h"
#include "PDSCH-ConfigDedicated-v1130.h"
#include "CQI-ReportConfig-v1130.h"
#include "PUSCH-ConfigDedicated-v1130.h"
#include "UplinkPowerControlDedicated-v1130.h"
static asn_TYPE_member_t asn_MBR_nonUL_Configuration_r10_2[] = {
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, antennaInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoDedicated_r10,
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
		"antennaInfo-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, crossCarrierSchedulingConfig_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CrossCarrierSchedulingConfig_r10,
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
		"crossCarrierSchedulingConfig-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, csi_RS_Config_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_Config_r10,
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
		"csi-RS-Config-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, pdsch_ConfigDedicated_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated,
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
		"pdsch-ConfigDedicated-r10"
		},
};
static const int asn_MAP_nonUL_Configuration_r10_oms_2[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_nonUL_Configuration_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_nonUL_Configuration_r10_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antennaInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* crossCarrierSchedulingConfig-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-RS-Config-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pdsch-ConfigDedicated-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_nonUL_Configuration_r10_specs_2 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10, _asn_ctx),
	asn_MAP_nonUL_Configuration_r10_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_nonUL_Configuration_r10_oms_2,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonUL_Configuration_r10_2 = {
	"nonUL-Configuration-r10",
	"nonUL-Configuration-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_nonUL_Configuration_r10_tags_2,
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_nonUL_Configuration_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_nonUL_Configuration_r10_tags_2)
		/sizeof(asn_DEF_nonUL_Configuration_r10_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_nonUL_Configuration_r10_2,
	4,	/* Elements count */
	&asn_SPC_nonUL_Configuration_r10_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_Configuration_r10_7[] = {
	{ ATF_POINTER, 7, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, antennaInfoUL_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AntennaInfoUL_r10,
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
		"antennaInfoUL-r10"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, pusch_ConfigDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicatedSCell_r10,
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
		"pusch-ConfigDedicatedSCell-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, uplinkPowerControlDedicatedSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicatedSCell_r10,
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
		"uplinkPowerControlDedicatedSCell-r10"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, cqi_ReportConfigSCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfigSCell_r10,
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
		"cqi-ReportConfigSCell-r10"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigDedicated_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicated,
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
		"soundingRS-UL-ConfigDedicated-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigDedicated_v1020),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicated_v1020,
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
		"soundingRS-UL-ConfigDedicated-v1020"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, soundingRS_UL_ConfigDedicatedAperiodic_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SoundingRS_UL_ConfigDedicatedAperiodic_r10,
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
		"soundingRS-UL-ConfigDedicatedAperiodic-r10"
		},
};
static const int asn_MAP_ul_Configuration_r10_oms_7[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_ul_Configuration_r10_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_Configuration_r10_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* antennaInfoUL-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pusch-ConfigDedicatedSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uplinkPowerControlDedicatedSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* cqi-ReportConfigSCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* soundingRS-UL-ConfigDedicated-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* soundingRS-UL-ConfigDedicated-v1020 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* soundingRS-UL-ConfigDedicatedAperiodic-r10 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_Configuration_r10_specs_7 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10, _asn_ctx),
	asn_MAP_ul_Configuration_r10_tag2el_7,
	7,	/* Count of tags in the map */
	asn_MAP_ul_Configuration_r10_oms_7,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Configuration_r10_7 = {
	"ul-Configuration-r10",
	"ul-Configuration-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_Configuration_r10_tags_7,
	sizeof(asn_DEF_ul_Configuration_r10_tags_7)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_7[0]) - 1, /* 1 */
	asn_DEF_ul_Configuration_r10_tags_7,	/* Same as above */
	sizeof(asn_DEF_ul_Configuration_r10_tags_7)
		/sizeof(asn_DEF_ul_Configuration_r10_tags_7[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ul_Configuration_r10_7,
	7,	/* Elements count */
	&asn_SPC_ul_Configuration_r10_specs_7	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_16[] = {
	{ ATF_POINTER, 9, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, csi_RS_ConfigNZPToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToReleaseList_r11,
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
		"csi-RS-ConfigNZPToReleaseList-r11"
		},
	{ ATF_POINTER, 8, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, csi_RS_ConfigNZPToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigNZPToAddModList_r11,
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
		"csi-RS-ConfigNZPToAddModList-r11"
		},
	{ ATF_POINTER, 7, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, csi_RS_ConfigZPToReleaseList_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPToReleaseList_r11,
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
		"csi-RS-ConfigZPToReleaseList-r11"
		},
	{ ATF_POINTER, 6, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, csi_RS_ConfigZPToAddModList_r11),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CSI_RS_ConfigZPToAddModList_r11,
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
		"csi-RS-ConfigZPToAddModList-r11"
		},
	{ ATF_POINTER, 5, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, epdcch_Config_r11),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPDCCH_Config_r11,
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
		"epdcch-Config-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, pdsch_ConfigDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_ConfigDedicated_v1130,
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
		"pdsch-ConfigDedicated-v1130"
		},
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, cqi_ReportConfig_v1130),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportConfig_v1130,
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
		"cqi-ReportConfig-v1130"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, pusch_ConfigDedicated_v1130),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PUSCH_ConfigDedicated_v1130,
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
		"pusch-ConfigDedicated-v1130"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, uplinkPowerControlDedicatedSCell_v1130),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UplinkPowerControlDedicated_v1130,
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
		"uplinkPowerControlDedicatedSCell-v1130"
		},
};
static const int asn_MAP_ext1_oms_16[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* csi-RS-ConfigNZPToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* csi-RS-ConfigNZPToAddModList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* csi-RS-ConfigZPToReleaseList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* csi-RS-ConfigZPToAddModList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* epdcch-Config-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* pdsch-ConfigDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* cqi-ReportConfig-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* pusch-ConfigDedicated-v1130 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* uplinkPowerControlDedicatedSCell-v1130 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_16 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10__ext1),
	offsetof(struct PhysicalConfigDedicatedSCell_r10__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_16,
	9,	/* Count of tags in the map */
	asn_MAP_ext1_oms_16,	/* Optional members */
	9, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_16 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_16,
	sizeof(asn_DEF_ext1_tags_16)
		/sizeof(asn_DEF_ext1_tags_16[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_16,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_16)
		/sizeof(asn_DEF_ext1_tags_16[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_ext1_16,
	9,	/* Elements count */
	&asn_SPC_ext1_specs_16	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhysicalConfigDedicatedSCell_r10_1[] = {
	{ ATF_POINTER, 3, offsetof(struct PhysicalConfigDedicatedSCell_r10, nonUL_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_nonUL_Configuration_r10_2,
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
		"nonUL-Configuration-r10"
		},
	{ ATF_POINTER, 2, offsetof(struct PhysicalConfigDedicatedSCell_r10, ul_Configuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ul_Configuration_r10_7,
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
		"ul-Configuration-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct PhysicalConfigDedicatedSCell_r10, ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext1_16,
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
static const int asn_MAP_PhysicalConfigDedicatedSCell_r10_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhysicalConfigDedicatedSCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonUL-Configuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Configuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicatedSCell_r10_specs_1 = {
	sizeof(struct PhysicalConfigDedicatedSCell_r10),
	offsetof(struct PhysicalConfigDedicatedSCell_r10, _asn_ctx),
	asn_MAP_PhysicalConfigDedicatedSCell_r10_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_PhysicalConfigDedicatedSCell_r10_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicatedSCell_r10 = {
	"PhysicalConfigDedicatedSCell-r10",
	"PhysicalConfigDedicatedSCell-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1,
	sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1)
		/sizeof(asn_DEF_PhysicalConfigDedicatedSCell_r10_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PhysicalConfigDedicatedSCell_r10_1,
	3,	/* Elements count */
	&asn_SPC_PhysicalConfigDedicatedSCell_r10_specs_1	/* Additional specs */
};

