/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_spatem_ts_coding/spatem_ts_LayerType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_spatem_ts_LayerType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_spatem_ts_LayerType_value2enum_1[] = {
	{ 0,	4,	"none" },
	{ 1,	12,	"mixedContent" },
	{ 2,	14,	"generalMapData" },
	{ 3,	16,	"intersectionData" },
	{ 4,	9,	"curveData" },
	{ 5,	18,	"roadwaySectionData" },
	{ 6,	15,	"parkingAreaData" },
	{ 7,	14,	"sharedLaneData" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_spatem_ts_LayerType_enum2value_1[] = {
	4,	/* curveData(4) */
	2,	/* generalMapData(2) */
	3,	/* intersectionData(3) */
	1,	/* mixedContent(1) */
	0,	/* none(0) */
	6,	/* parkingAreaData(6) */
	5,	/* roadwaySectionData(5) */
	7	/* sharedLaneData(7) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_spatem_ts_LayerType_specs_1 = {
	asn_MAP_spatem_ts_LayerType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_spatem_ts_LayerType_enum2value_1,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	9,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_spatem_ts_LayerType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_spatem_ts_LayerType = {
	"LayerType",
	"LayerType",
	&asn_OP_NativeEnumerated,
	asn_DEF_spatem_ts_LayerType_tags_1,
	sizeof(asn_DEF_spatem_ts_LayerType_tags_1)
		/sizeof(asn_DEF_spatem_ts_LayerType_tags_1[0]), /* 1 */
	asn_DEF_spatem_ts_LayerType_tags_1,	/* Same as above */
	sizeof(asn_DEF_spatem_ts_LayerType_tags_1)
		/sizeof(asn_DEF_spatem_ts_LayerType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_spatem_ts_LayerType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_spatem_ts_LayerType_specs_1	/* Additional specs */
};

