/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_DeltaAltitude_H_
#define	_denm_ts_DeltaAltitude_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_ts_DeltaAltitude {
	denm_ts_DeltaAltitude_negativeOutOfRange	= -12700,
	denm_ts_DeltaAltitude_positiveOutOfRange	= 12799,
	denm_ts_DeltaAltitude_unavailable	= 12800
} e_denm_ts_DeltaAltitude;

/* denm_ts_DeltaAltitude */
typedef long	 denm_ts_DeltaAltitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_ts_DeltaAltitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_DeltaAltitude;
asn_struct_free_f denm_ts_DeltaAltitude_free;
asn_struct_print_f denm_ts_DeltaAltitude_print;
asn_constr_check_f denm_ts_DeltaAltitude_constraint;
per_type_decoder_f denm_ts_DeltaAltitude_decode_uper;
per_type_encoder_f denm_ts_DeltaAltitude_encode_uper;
per_type_decoder_f denm_ts_DeltaAltitude_decode_aper;
per_type_encoder_f denm_ts_DeltaAltitude_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_DeltaAltitude_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
