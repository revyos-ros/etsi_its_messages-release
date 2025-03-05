/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_LateralAccelerationValue_H_
#define	_mapem_ts_LateralAccelerationValue_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_mapem_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum mapem_ts_LateralAccelerationValue {
	mapem_ts_LateralAccelerationValue_pointOneMeterPerSecSquaredToRight	= -1,
	mapem_ts_LateralAccelerationValue_pointOneMeterPerSecSquaredToLeft	= 1,
	mapem_ts_LateralAccelerationValue_unavailable	= 161
} e_mapem_ts_LateralAccelerationValue;

/* mapem_ts_LateralAccelerationValue */
typedef long	 mapem_ts_LateralAccelerationValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_mapem_ts_LateralAccelerationValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_LateralAccelerationValue;
asn_struct_free_f mapem_ts_LateralAccelerationValue_free;
asn_struct_print_f mapem_ts_LateralAccelerationValue_print;
asn_constr_check_f mapem_ts_LateralAccelerationValue_constraint;
per_type_decoder_f mapem_ts_LateralAccelerationValue_decode_uper;
per_type_encoder_f mapem_ts_LateralAccelerationValue_encode_uper;
per_type_decoder_f mapem_ts_LateralAccelerationValue_decode_aper;
per_type_encoder_f mapem_ts_LateralAccelerationValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_LateralAccelerationValue_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
