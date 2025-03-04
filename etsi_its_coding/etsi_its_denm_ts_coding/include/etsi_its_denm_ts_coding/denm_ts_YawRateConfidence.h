/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_YawRateConfidence_H_
#define	_denm_ts_YawRateConfidence_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_ts_YawRateConfidence {
	denm_ts_YawRateConfidence_degSec_000_01	= 0,
	denm_ts_YawRateConfidence_degSec_000_05	= 1,
	denm_ts_YawRateConfidence_degSec_000_10	= 2,
	denm_ts_YawRateConfidence_degSec_001_00	= 3,
	denm_ts_YawRateConfidence_degSec_005_00	= 4,
	denm_ts_YawRateConfidence_degSec_010_00	= 5,
	denm_ts_YawRateConfidence_degSec_100_00	= 6,
	denm_ts_YawRateConfidence_outOfRange	= 7,
	denm_ts_YawRateConfidence_unavailable	= 8
} e_denm_ts_YawRateConfidence;

/* denm_ts_YawRateConfidence */
typedef long	 denm_ts_YawRateConfidence_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_ts_YawRateConfidence_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_YawRateConfidence;
extern const asn_INTEGER_specifics_t asn_SPC_denm_ts_YawRateConfidence_specs_1;
asn_struct_free_f denm_ts_YawRateConfidence_free;
asn_struct_print_f denm_ts_YawRateConfidence_print;
asn_constr_check_f denm_ts_YawRateConfidence_constraint;
per_type_decoder_f denm_ts_YawRateConfidence_decode_uper;
per_type_encoder_f denm_ts_YawRateConfidence_encode_uper;
per_type_decoder_f denm_ts_YawRateConfidence_decode_aper;
per_type_encoder_f denm_ts_YawRateConfidence_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_YawRateConfidence_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
