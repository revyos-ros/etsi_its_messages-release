/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_mapem_ts_coding/mapem_ts_VehicleType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_mapem_ts_VehicleType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_mapem_ts_VehicleType_value2enum_1[] = {
	{ 0,	4,	"none" },
	{ 1,	7,	"unknown" },
	{ 2,	7,	"special" },
	{ 3,	4,	"moto" },
	{ 4,	3,	"car" },
	{ 5,	8,	"carOther" },
	{ 6,	3,	"bus" },
	{ 7,	8,	"axleCnt2" },
	{ 8,	8,	"axleCnt3" },
	{ 9,	8,	"axleCnt4" },
	{ 10,	15,	"axleCnt4Trailer" },
	{ 11,	15,	"axleCnt5Trailer" },
	{ 12,	15,	"axleCnt6Trailer" },
	{ 13,	20,	"axleCnt5MultiTrailer" },
	{ 14,	20,	"axleCnt6MultiTrailer" },
	{ 15,	20,	"axleCnt7MultiTrailer" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_mapem_ts_VehicleType_enum2value_1[] = {
	7,	/* axleCnt2(7) */
	8,	/* axleCnt3(8) */
	9,	/* axleCnt4(9) */
	10,	/* axleCnt4Trailer(10) */
	13,	/* axleCnt5MultiTrailer(13) */
	11,	/* axleCnt5Trailer(11) */
	14,	/* axleCnt6MultiTrailer(14) */
	12,	/* axleCnt6Trailer(12) */
	15,	/* axleCnt7MultiTrailer(15) */
	6,	/* bus(6) */
	4,	/* car(4) */
	5,	/* carOther(5) */
	3,	/* moto(3) */
	0,	/* none(0) */
	2,	/* special(2) */
	1	/* unknown(1) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_mapem_ts_VehicleType_specs_1 = {
	asn_MAP_mapem_ts_VehicleType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_mapem_ts_VehicleType_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mapem_ts_VehicleType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_mapem_ts_VehicleType = {
	"VehicleType",
	"VehicleType",
	&asn_OP_NativeEnumerated,
	asn_DEF_mapem_ts_VehicleType_tags_1,
	sizeof(asn_DEF_mapem_ts_VehicleType_tags_1)
		/sizeof(asn_DEF_mapem_ts_VehicleType_tags_1[0]), /* 1 */
	asn_DEF_mapem_ts_VehicleType_tags_1,	/* Same as above */
	sizeof(asn_DEF_mapem_ts_VehicleType_tags_1)
		/sizeof(asn_DEF_mapem_ts_VehicleType_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mapem_ts_VehicleType_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mapem_ts_VehicleType_specs_1	/* Additional specs */
};

