/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_WheelBaseVehicle_H_
#define	_mapem_ts_WheelBaseVehicle_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_WheelBaseVehicle {
	mapem_ts_WheelBaseVehicle_tenCentimeters	= 1,
	mapem_ts_WheelBaseVehicle_unavailable	= 127
} e_mapem_ts_WheelBaseVehicle;

/* mapem_ts_WheelBaseVehicle */
typedef long	 mapem_ts_WheelBaseVehicle_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_WheelBaseVehicle;
asn_struct_free_f mapem_ts_WheelBaseVehicle_free;
asn_struct_print_f mapem_ts_WheelBaseVehicle_print;
asn_constr_check_f mapem_ts_WheelBaseVehicle_constraint;
per_type_decoder_f mapem_ts_WheelBaseVehicle_decode_uper;
per_type_encoder_f mapem_ts_WheelBaseVehicle_encode_uper;
per_type_decoder_f mapem_ts_WheelBaseVehicle_decode_aper;
per_type_encoder_f mapem_ts_WheelBaseVehicle_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_WheelBaseVehicle_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
