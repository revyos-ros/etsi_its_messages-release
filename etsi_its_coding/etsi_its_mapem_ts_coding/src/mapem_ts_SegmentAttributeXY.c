/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_mapem_ts_coding/mapem_ts_SegmentAttributeXY.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_mapem_ts_SegmentAttributeXY_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  6,  6,  0,  37 }	/* (0..37,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_mapem_ts_SegmentAttributeXY_value2enum_1[] = {
	{ 0,	8,	"reserved" },
	{ 1,	10,	"doNotBlock" },
	{ 2,	9,	"whiteLine" },
	{ 3,	15,	"mergingLaneLeft" },
	{ 4,	16,	"mergingLaneRight" },
	{ 5,	10,	"curbOnLeft" },
	{ 6,	11,	"curbOnRight" },
	{ 7,	17,	"loadingzoneOnLeft" },
	{ 8,	18,	"loadingzoneOnRight" },
	{ 9,	18,	"turnOutPointOnLeft" },
	{ 10,	19,	"turnOutPointOnRight" },
	{ 11,	21,	"adjacentParkingOnLeft" },
	{ 12,	22,	"adjacentParkingOnRight" },
	{ 13,	22,	"adjacentBikeLaneOnLeft" },
	{ 14,	23,	"adjacentBikeLaneOnRight" },
	{ 15,	14,	"sharedBikeLane" },
	{ 16,	14,	"bikeBoxInFront" },
	{ 17,	17,	"transitStopOnLeft" },
	{ 18,	18,	"transitStopOnRight" },
	{ 19,	17,	"transitStopInLane" },
	{ 20,	24,	"sharedWithTrackedVehicle" },
	{ 21,	10,	"safeIsland" },
	{ 22,	15,	"lowCurbsPresent" },
	{ 23,	18,	"rumbleStripPresent" },
	{ 24,	23,	"audibleSignalingPresent" },
	{ 25,	21,	"adaptiveTimingPresent" },
	{ 26,	22,	"rfSignalRequestPresent" },
	{ 27,	20,	"partialCurbIntrusion" },
	{ 28,	11,	"taperToLeft" },
	{ 29,	12,	"taperToRight" },
	{ 30,	17,	"taperToCenterLine" },
	{ 31,	15,	"parallelParking" },
	{ 32,	13,	"headInParking" },
	{ 33,	11,	"freeParking" },
	{ 34,	25,	"timeRestrictionsOnParking" },
	{ 35,	10,	"costToPark" },
	{ 36,	19,	"midBlockCurbPresent" },
	{ 37,	21,	"unEvenPavementPresent" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_mapem_ts_SegmentAttributeXY_enum2value_1[] = {
	25,	/* adaptiveTimingPresent(25) */
	13,	/* adjacentBikeLaneOnLeft(13) */
	14,	/* adjacentBikeLaneOnRight(14) */
	11,	/* adjacentParkingOnLeft(11) */
	12,	/* adjacentParkingOnRight(12) */
	24,	/* audibleSignalingPresent(24) */
	16,	/* bikeBoxInFront(16) */
	35,	/* costToPark(35) */
	5,	/* curbOnLeft(5) */
	6,	/* curbOnRight(6) */
	1,	/* doNotBlock(1) */
	33,	/* freeParking(33) */
	32,	/* headInParking(32) */
	7,	/* loadingzoneOnLeft(7) */
	8,	/* loadingzoneOnRight(8) */
	22,	/* lowCurbsPresent(22) */
	3,	/* mergingLaneLeft(3) */
	4,	/* mergingLaneRight(4) */
	36,	/* midBlockCurbPresent(36) */
	31,	/* parallelParking(31) */
	27,	/* partialCurbIntrusion(27) */
	0,	/* reserved(0) */
	26,	/* rfSignalRequestPresent(26) */
	23,	/* rumbleStripPresent(23) */
	21,	/* safeIsland(21) */
	15,	/* sharedBikeLane(15) */
	20,	/* sharedWithTrackedVehicle(20) */
	30,	/* taperToCenterLine(30) */
	28,	/* taperToLeft(28) */
	29,	/* taperToRight(29) */
	34,	/* timeRestrictionsOnParking(34) */
	19,	/* transitStopInLane(19) */
	17,	/* transitStopOnLeft(17) */
	18,	/* transitStopOnRight(18) */
	9,	/* turnOutPointOnLeft(9) */
	10,	/* turnOutPointOnRight(10) */
	37,	/* unEvenPavementPresent(37) */
	2	/* whiteLine(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_mapem_ts_SegmentAttributeXY_specs_1 = {
	asn_MAP_mapem_ts_SegmentAttributeXY_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_mapem_ts_SegmentAttributeXY_enum2value_1,	/* N => "tag"; sorted by N */
	38,	/* Number of elements in the maps */
	39,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_mapem_ts_SegmentAttributeXY_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_mapem_ts_SegmentAttributeXY = {
	"SegmentAttributeXY",
	"SegmentAttributeXY",
	&asn_OP_NativeEnumerated,
	asn_DEF_mapem_ts_SegmentAttributeXY_tags_1,
	sizeof(asn_DEF_mapem_ts_SegmentAttributeXY_tags_1)
		/sizeof(asn_DEF_mapem_ts_SegmentAttributeXY_tags_1[0]), /* 1 */
	asn_DEF_mapem_ts_SegmentAttributeXY_tags_1,	/* Same as above */
	sizeof(asn_DEF_mapem_ts_SegmentAttributeXY_tags_1)
		/sizeof(asn_DEF_mapem_ts_SegmentAttributeXY_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_mapem_ts_SegmentAttributeXY_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_mapem_ts_SegmentAttributeXY_specs_1	/* Additional specs */
};

