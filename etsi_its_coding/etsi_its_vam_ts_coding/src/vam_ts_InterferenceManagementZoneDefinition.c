/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_vam_ts_coding/vam_ts_InterferenceManagementZoneDefinition.h"

static int
memb_vam_ts_interferenceManagementZoneShape_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_vam_ts_interferenceManagementZoneShape_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_vam_ts_InterferenceManagementZoneDefinition_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct vam_ts_InterferenceManagementZoneDefinition, interferenceManagementZoneLatitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_vam_ts_Latitude,
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
		"interferenceManagementZoneLatitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct vam_ts_InterferenceManagementZoneDefinition, interferenceManagementZoneLongitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_vam_ts_Longitude,
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
		"interferenceManagementZoneLongitude"
		},
	{ ATF_POINTER, 2, offsetof(struct vam_ts_InterferenceManagementZoneDefinition, interferenceManagementZoneId),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_vam_ts_ProtectedZoneId,
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
		"interferenceManagementZoneId"
		},
	{ ATF_POINTER, 1, offsetof(struct vam_ts_InterferenceManagementZoneDefinition, interferenceManagementZoneShape),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_vam_ts_Shape,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_vam_ts_interferenceManagementZoneShape_constr_5,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			memb_vam_ts_interferenceManagementZoneShape_constraint_1
		},
		0, 0, /* No default value */
		"interferenceManagementZoneShape"
		},
};
static const int asn_MAP_vam_ts_InterferenceManagementZoneDefinition_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_vam_ts_InterferenceManagementZoneDefinition_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_vam_ts_InterferenceManagementZoneDefinition_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interferenceManagementZoneLatitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interferenceManagementZoneLongitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interferenceManagementZoneId */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* interferenceManagementZoneShape */
};
asn_SEQUENCE_specifics_t asn_SPC_vam_ts_InterferenceManagementZoneDefinition_specs_1 = {
	sizeof(struct vam_ts_InterferenceManagementZoneDefinition),
	offsetof(struct vam_ts_InterferenceManagementZoneDefinition, _asn_ctx),
	asn_MAP_vam_ts_InterferenceManagementZoneDefinition_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_vam_ts_InterferenceManagementZoneDefinition_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_vam_ts_InterferenceManagementZoneDefinition = {
	"InterferenceManagementZoneDefinition",
	"InterferenceManagementZoneDefinition",
	&asn_OP_SEQUENCE,
	asn_DEF_vam_ts_InterferenceManagementZoneDefinition_tags_1,
	sizeof(asn_DEF_vam_ts_InterferenceManagementZoneDefinition_tags_1)
		/sizeof(asn_DEF_vam_ts_InterferenceManagementZoneDefinition_tags_1[0]), /* 1 */
	asn_DEF_vam_ts_InterferenceManagementZoneDefinition_tags_1,	/* Same as above */
	sizeof(asn_DEF_vam_ts_InterferenceManagementZoneDefinition_tags_1)
		/sizeof(asn_DEF_vam_ts_InterferenceManagementZoneDefinition_tags_1[0]), /* 1 */
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
	asn_MBR_vam_ts_InterferenceManagementZoneDefinition_1,
	4,	/* Elements count */
	&asn_SPC_vam_ts_InterferenceManagementZoneDefinition_specs_1	/* Additional specs */
};

