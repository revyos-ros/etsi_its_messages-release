/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_TransitVehicleStatus_H_
#define	_spatem_ts_TransitVehicleStatus_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_TransitVehicleStatus {
	spatem_ts_TransitVehicleStatus_loading	= 0,
	spatem_ts_TransitVehicleStatus_anADAuse	= 1,
	spatem_ts_TransitVehicleStatus_aBikeLoad	= 2,
	spatem_ts_TransitVehicleStatus_doorOpen	= 3,
	spatem_ts_TransitVehicleStatus_charging	= 4,
	spatem_ts_TransitVehicleStatus_atStopLine	= 5
} e_spatem_ts_TransitVehicleStatus;

/* spatem_ts_TransitVehicleStatus */
typedef BIT_STRING_t	 spatem_ts_TransitVehicleStatus_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_TransitVehicleStatus_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_TransitVehicleStatus;
asn_struct_free_f spatem_ts_TransitVehicleStatus_free;
asn_struct_print_f spatem_ts_TransitVehicleStatus_print;
asn_constr_check_f spatem_ts_TransitVehicleStatus_constraint;
per_type_decoder_f spatem_ts_TransitVehicleStatus_decode_uper;
per_type_encoder_f spatem_ts_TransitVehicleStatus_encode_uper;
per_type_decoder_f spatem_ts_TransitVehicleStatus_decode_aper;
per_type_encoder_f spatem_ts_TransitVehicleStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_TransitVehicleStatus_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>