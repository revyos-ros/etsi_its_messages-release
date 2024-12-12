/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_LaneType_H_
#define	_cam_ts_LaneType_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_ts_LaneType {
	cam_ts_LaneType_traffic	= 0,
	cam_ts_LaneType_through	= 1,
	cam_ts_LaneType_reversible	= 2,
	cam_ts_LaneType_acceleration	= 3,
	cam_ts_LaneType_deceleration	= 4,
	cam_ts_LaneType_leftHandTurning	= 5,
	cam_ts_LaneType_rightHandTurning	= 6,
	cam_ts_LaneType_dedicatedVehicle	= 7,
	cam_ts_LaneType_bus	= 8,
	cam_ts_LaneType_taxi	= 9,
	cam_ts_LaneType_hov	= 10,
	cam_ts_LaneType_hot	= 11,
	cam_ts_LaneType_pedestrian	= 12,
	cam_ts_LaneType_cycleLane	= 13,
	cam_ts_LaneType_median	= 14,
	cam_ts_LaneType_striping	= 15,
	cam_ts_LaneType_trackedVehicle	= 16,
	cam_ts_LaneType_parking	= 17,
	cam_ts_LaneType_emergency	= 18,
	cam_ts_LaneType_verge	= 19,
	cam_ts_LaneType_minimumRiskManoeuvre	= 20,
	cam_ts_LaneType_exclusiveCycleLane	= 21,
	cam_ts_LaneType_unknown	= 31
} e_cam_ts_LaneType;

/* cam_ts_LaneType */
typedef long	 cam_ts_LaneType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_ts_LaneType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_LaneType;
asn_struct_free_f cam_ts_LaneType_free;
asn_struct_print_f cam_ts_LaneType_print;
asn_constr_check_f cam_ts_LaneType_constraint;
per_type_decoder_f cam_ts_LaneType_decode_uper;
per_type_encoder_f cam_ts_LaneType_encode_uper;
per_type_decoder_f cam_ts_LaneType_decode_aper;
per_type_encoder_f cam_ts_LaneType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_LaneType_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>