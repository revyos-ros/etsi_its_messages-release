/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_mapem_ts_coding/mapem_ts_PathPoint.h"

asn_TYPE_member_t asn_MBR_mapem_ts_PathPoint_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct mapem_ts_PathPoint, pathPosition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mapem_ts_DeltaReferencePosition,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"pathPosition"
		},
	{ ATF_POINTER, 1, offsetof(struct mapem_ts_PathPoint, pathDeltaTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_mapem_ts_PathDeltaTime,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"pathDeltaTime"
		},
};
static const int asn_MAP_mapem_ts_PathPoint_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_mapem_ts_PathPoint_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_mapem_ts_PathPoint_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pathPosition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* pathDeltaTime */
};
asn_SEQUENCE_specifics_t asn_SPC_mapem_ts_PathPoint_specs_1 = {
	sizeof(struct mapem_ts_PathPoint),
	offsetof(struct mapem_ts_PathPoint, _asn_ctx),
	asn_MAP_mapem_ts_PathPoint_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_mapem_ts_PathPoint_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_mapem_ts_PathPoint = {
	"PathPoint",
	"PathPoint",
	&asn_OP_SEQUENCE,
	asn_DEF_mapem_ts_PathPoint_tags_1,
	sizeof(asn_DEF_mapem_ts_PathPoint_tags_1)
		/sizeof(asn_DEF_mapem_ts_PathPoint_tags_1[0]), /* 1 */
	asn_DEF_mapem_ts_PathPoint_tags_1,	/* Same as above */
	sizeof(asn_DEF_mapem_ts_PathPoint_tags_1)
		/sizeof(asn_DEF_mapem_ts_PathPoint_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_mapem_ts_PathPoint_1,
	2,	/* Elements count */
	&asn_SPC_mapem_ts_PathPoint_specs_1	/* Additional specs */
};

