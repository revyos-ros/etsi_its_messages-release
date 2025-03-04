/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_LaneAttributes_Parking_H_
#define	_spatem_ts_LaneAttributes_Parking_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum spatem_ts_LaneAttributes_Parking {
	spatem_ts_LaneAttributes_Parking_parkingRevocableLane	= 0,
	spatem_ts_LaneAttributes_Parking_parallelParkingInUse	= 1,
	spatem_ts_LaneAttributes_Parking_headInParkingInUse	= 2,
	spatem_ts_LaneAttributes_Parking_doNotParkZone	= 3,
	spatem_ts_LaneAttributes_Parking_parkingForBusUse	= 4,
	spatem_ts_LaneAttributes_Parking_parkingForTaxiUse	= 5,
	spatem_ts_LaneAttributes_Parking_noPublicParkingUse	= 6
} e_spatem_ts_LaneAttributes_Parking;

/* spatem_ts_LaneAttributes-Parking */
typedef BIT_STRING_t	 spatem_ts_LaneAttributes_Parking_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_LaneAttributes_Parking_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_LaneAttributes_Parking;
asn_struct_free_f spatem_ts_LaneAttributes_Parking_free;
asn_struct_print_f spatem_ts_LaneAttributes_Parking_print;
asn_constr_check_f spatem_ts_LaneAttributes_Parking_constraint;
per_type_decoder_f spatem_ts_LaneAttributes_Parking_decode_uper;
per_type_encoder_f spatem_ts_LaneAttributes_Parking_encode_uper;
per_type_decoder_f spatem_ts_LaneAttributes_Parking_decode_aper;
per_type_encoder_f spatem_ts_LaneAttributes_Parking_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_LaneAttributes_Parking_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
