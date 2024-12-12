/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_TrafficParticipantType_H_
#define	_cpm_ts_TrafficParticipantType_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_TrafficParticipantType {
	cpm_ts_TrafficParticipantType_unknown	= 0,
	cpm_ts_TrafficParticipantType_pedestrian	= 1,
	cpm_ts_TrafficParticipantType_cyclist	= 2,
	cpm_ts_TrafficParticipantType_moped	= 3,
	cpm_ts_TrafficParticipantType_motorcycle	= 4,
	cpm_ts_TrafficParticipantType_passengerCar	= 5,
	cpm_ts_TrafficParticipantType_bus	= 6,
	cpm_ts_TrafficParticipantType_lightTruck	= 7,
	cpm_ts_TrafficParticipantType_heavyTruck	= 8,
	cpm_ts_TrafficParticipantType_trailer	= 9,
	cpm_ts_TrafficParticipantType_specialVehicle	= 10,
	cpm_ts_TrafficParticipantType_tram	= 11,
	cpm_ts_TrafficParticipantType_lightVruVehicle	= 12,
	cpm_ts_TrafficParticipantType_animal	= 13,
	cpm_ts_TrafficParticipantType_agricultural	= 14,
	cpm_ts_TrafficParticipantType_roadSideUnit	= 15
} e_cpm_ts_TrafficParticipantType;

/* cpm_ts_TrafficParticipantType */
typedef long	 cpm_ts_TrafficParticipantType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ts_TrafficParticipantType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_TrafficParticipantType;
asn_struct_free_f cpm_ts_TrafficParticipantType_free;
asn_struct_print_f cpm_ts_TrafficParticipantType_print;
asn_constr_check_f cpm_ts_TrafficParticipantType_constraint;
per_type_decoder_f cpm_ts_TrafficParticipantType_decode_uper;
per_type_encoder_f cpm_ts_TrafficParticipantType_encode_uper;
per_type_decoder_f cpm_ts_TrafficParticipantType_decode_aper;
per_type_encoder_f cpm_ts_TrafficParticipantType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_TrafficParticipantType_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
