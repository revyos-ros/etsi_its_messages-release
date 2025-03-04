/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_spatem_ts_coding/spatem_ts_IntersectionReferenceID.h"

asn_TYPE_member_t asn_MBR_spatem_ts_IntersectionReferenceID_1[] = {
	{ ATF_POINTER, 1, offsetof(struct spatem_ts_IntersectionReferenceID, region),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_spatem_ts_RoadRegulatorID,
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
		"region"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct spatem_ts_IntersectionReferenceID, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_spatem_ts_IntersectionID,
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
		"id"
		},
};
static const int asn_MAP_spatem_ts_IntersectionReferenceID_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_spatem_ts_IntersectionReferenceID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_spatem_ts_IntersectionReferenceID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* region */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* id */
};
asn_SEQUENCE_specifics_t asn_SPC_spatem_ts_IntersectionReferenceID_specs_1 = {
	sizeof(struct spatem_ts_IntersectionReferenceID),
	offsetof(struct spatem_ts_IntersectionReferenceID, _asn_ctx),
	asn_MAP_spatem_ts_IntersectionReferenceID_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_spatem_ts_IntersectionReferenceID_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_spatem_ts_IntersectionReferenceID = {
	"IntersectionReferenceID",
	"IntersectionReferenceID",
	&asn_OP_SEQUENCE,
	asn_DEF_spatem_ts_IntersectionReferenceID_tags_1,
	sizeof(asn_DEF_spatem_ts_IntersectionReferenceID_tags_1)
		/sizeof(asn_DEF_spatem_ts_IntersectionReferenceID_tags_1[0]), /* 1 */
	asn_DEF_spatem_ts_IntersectionReferenceID_tags_1,	/* Same as above */
	sizeof(asn_DEF_spatem_ts_IntersectionReferenceID_tags_1)
		/sizeof(asn_DEF_spatem_ts_IntersectionReferenceID_tags_1[0]), /* 1 */
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
	asn_MBR_spatem_ts_IntersectionReferenceID_1,
	2,	/* Elements count */
	&asn_SPC_spatem_ts_IntersectionReferenceID_specs_1	/* Additional specs */
};

