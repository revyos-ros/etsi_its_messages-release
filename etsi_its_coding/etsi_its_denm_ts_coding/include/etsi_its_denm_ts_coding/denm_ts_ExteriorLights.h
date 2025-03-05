/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_ExteriorLights_H_
#define	_denm_ts_ExteriorLights_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum denm_ts_ExteriorLights {
	denm_ts_ExteriorLights_lowBeamHeadlightsOn	= 0,
	denm_ts_ExteriorLights_highBeamHeadlightsOn	= 1,
	denm_ts_ExteriorLights_leftTurnSignalOn	= 2,
	denm_ts_ExteriorLights_rightTurnSignalOn	= 3,
	denm_ts_ExteriorLights_daytimeRunningLightsOn	= 4,
	denm_ts_ExteriorLights_reverseLightOn	= 5,
	denm_ts_ExteriorLights_fogLightOn	= 6,
	denm_ts_ExteriorLights_parkingLightsOn	= 7
} e_denm_ts_ExteriorLights;

/* denm_ts_ExteriorLights */
typedef BIT_STRING_t	 denm_ts_ExteriorLights_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_ts_ExteriorLights_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_ExteriorLights;
asn_struct_free_f denm_ts_ExteriorLights_free;
asn_struct_print_f denm_ts_ExteriorLights_print;
asn_constr_check_f denm_ts_ExteriorLights_constraint;
per_type_decoder_f denm_ts_ExteriorLights_decode_uper;
per_type_encoder_f denm_ts_ExteriorLights_encode_uper;
per_type_decoder_f denm_ts_ExteriorLights_decode_aper;
per_type_encoder_f denm_ts_ExteriorLights_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_ExteriorLights_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
