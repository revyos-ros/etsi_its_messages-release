/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_HeadingValue_H_
#define	_denm_ts_HeadingValue_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_ts_HeadingValue {
	denm_ts_HeadingValue_wgs84North	= 0,
	denm_ts_HeadingValue_wgs84East	= 900,
	denm_ts_HeadingValue_wgs84South	= 1800,
	denm_ts_HeadingValue_wgs84West	= 2700,
	denm_ts_HeadingValue_doNotUse	= 3600,
	denm_ts_HeadingValue_unavailable	= 3601
} e_denm_ts_HeadingValue;

/* denm_ts_HeadingValue */
typedef long	 denm_ts_HeadingValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_ts_HeadingValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_HeadingValue;
asn_struct_free_f denm_ts_HeadingValue_free;
asn_struct_print_f denm_ts_HeadingValue_print;
asn_constr_check_f denm_ts_HeadingValue_constraint;
per_type_decoder_f denm_ts_HeadingValue_decode_uper;
per_type_encoder_f denm_ts_HeadingValue_encode_uper;
per_type_decoder_f denm_ts_HeadingValue_decode_aper;
per_type_encoder_f denm_ts_HeadingValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_HeadingValue_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
