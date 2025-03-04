/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_H_
#define	_mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode {
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_unavailable	= 0,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_heavyFrostOnRoad	= 1,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_fuelOnRoad	= 2,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_mudOnRoad	= 3,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_snowOnRoad	= 4,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_iceOnRoad	= 5,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_blackIceOnRoad	= 6,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_oilOnRoad	= 7,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_looseChippings	= 8,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_instantBlackIce	= 9,
	mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_roadsSalted	= 10
} e_mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode;

/* mapem_ts_AdverseWeatherCondition-AdhesionSubCauseCode */
typedef long	 mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode;
asn_struct_free_f mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_free;
asn_struct_print_f mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_print;
asn_constr_check_f mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_constraint;
per_type_decoder_f mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_decode_uper;
per_type_encoder_f mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_encode_uper;
per_type_decoder_f mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_decode_aper;
per_type_encoder_f mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_AdverseWeatherCondition_AdhesionSubCauseCode_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
