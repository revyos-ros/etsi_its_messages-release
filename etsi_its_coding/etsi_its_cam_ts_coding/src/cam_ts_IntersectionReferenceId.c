/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_cam_ts_coding/cam_ts_IntersectionReferenceId.h"

asn_TYPE_member_t asn_MBR_cam_ts_IntersectionReferenceId_1[] = {
	{ ATF_POINTER, 1, offsetof(struct cam_ts_IntersectionReferenceId, region),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cam_ts_Identifier2B,
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
	{ ATF_NOFLAGS, 0, offsetof(struct cam_ts_IntersectionReferenceId, id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cam_ts_Identifier2B,
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
static const int asn_MAP_cam_ts_IntersectionReferenceId_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_cam_ts_IntersectionReferenceId_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_cam_ts_IntersectionReferenceId_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* region */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* id */
};
asn_SEQUENCE_specifics_t asn_SPC_cam_ts_IntersectionReferenceId_specs_1 = {
	sizeof(struct cam_ts_IntersectionReferenceId),
	offsetof(struct cam_ts_IntersectionReferenceId, _asn_ctx),
	asn_MAP_cam_ts_IntersectionReferenceId_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_cam_ts_IntersectionReferenceId_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_cam_ts_IntersectionReferenceId = {
	"IntersectionReferenceId",
	"IntersectionReferenceId",
	&asn_OP_SEQUENCE,
	asn_DEF_cam_ts_IntersectionReferenceId_tags_1,
	sizeof(asn_DEF_cam_ts_IntersectionReferenceId_tags_1)
		/sizeof(asn_DEF_cam_ts_IntersectionReferenceId_tags_1[0]), /* 1 */
	asn_DEF_cam_ts_IntersectionReferenceId_tags_1,	/* Same as above */
	sizeof(asn_DEF_cam_ts_IntersectionReferenceId_tags_1)
		/sizeof(asn_DEF_cam_ts_IntersectionReferenceId_tags_1[0]), /* 1 */
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
	asn_MBR_cam_ts_IntersectionReferenceId_1,
	2,	/* Elements count */
	&asn_SPC_cam_ts_IntersectionReferenceId_specs_1	/* Additional specs */
};

