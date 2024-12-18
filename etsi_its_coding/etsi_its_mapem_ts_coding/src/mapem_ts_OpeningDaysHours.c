/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#include "etsi_its_mapem_ts_coding/mapem_ts_OpeningDaysHours.h"

/*
 * This type is implemented using UTF8String,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_mapem_ts_OpeningDaysHours_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (12 << 2))
};
asn_TYPE_descriptor_t asn_DEF_mapem_ts_OpeningDaysHours = {
	"OpeningDaysHours",
	"OpeningDaysHours",
	&asn_OP_UTF8String,
	asn_DEF_mapem_ts_OpeningDaysHours_tags_1,
	sizeof(asn_DEF_mapem_ts_OpeningDaysHours_tags_1)
		/sizeof(asn_DEF_mapem_ts_OpeningDaysHours_tags_1[0]), /* 1 */
	asn_DEF_mapem_ts_OpeningDaysHours_tags_1,	/* Same as above */
	sizeof(asn_DEF_mapem_ts_OpeningDaysHours_tags_1)
		/sizeof(asn_DEF_mapem_ts_OpeningDaysHours_tags_1[0]), /* 1 */
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
		UTF8String_constraint
	},
	0, 0,	/* No members */
	0	/* No specifics */
};

