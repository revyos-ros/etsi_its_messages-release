/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_vam_ts_coding/vam_ts_AccelerationChangeIndication.h"

asn_TYPE_member_t asn_MBR_vam_ts_AccelerationChangeIndication_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct vam_ts_AccelerationChangeIndication, accelOrDecel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_vam_ts_AccelerationChange,
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
		"accelOrDecel"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct vam_ts_AccelerationChangeIndication, actionDeltaTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_vam_ts_DeltaTimeTenthOfSecond,
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
		"actionDeltaTime"
		},
};
static const ber_tlv_tag_t asn_DEF_vam_ts_AccelerationChangeIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_vam_ts_AccelerationChangeIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* accelOrDecel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* actionDeltaTime */
};
asn_SEQUENCE_specifics_t asn_SPC_vam_ts_AccelerationChangeIndication_specs_1 = {
	sizeof(struct vam_ts_AccelerationChangeIndication),
	offsetof(struct vam_ts_AccelerationChangeIndication, _asn_ctx),
	asn_MAP_vam_ts_AccelerationChangeIndication_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_vam_ts_AccelerationChangeIndication = {
	"AccelerationChangeIndication",
	"AccelerationChangeIndication",
	&asn_OP_SEQUENCE,
	asn_DEF_vam_ts_AccelerationChangeIndication_tags_1,
	sizeof(asn_DEF_vam_ts_AccelerationChangeIndication_tags_1)
		/sizeof(asn_DEF_vam_ts_AccelerationChangeIndication_tags_1[0]), /* 1 */
	asn_DEF_vam_ts_AccelerationChangeIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_vam_ts_AccelerationChangeIndication_tags_1)
		/sizeof(asn_DEF_vam_ts_AccelerationChangeIndication_tags_1[0]), /* 1 */
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
	asn_MBR_vam_ts_AccelerationChangeIndication_1,
	2,	/* Elements count */
	&asn_SPC_vam_ts_AccelerationChangeIndication_specs_1	/* Additional specs */
};

