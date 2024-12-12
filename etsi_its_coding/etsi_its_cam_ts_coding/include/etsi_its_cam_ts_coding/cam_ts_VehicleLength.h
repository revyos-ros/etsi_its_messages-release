/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_VehicleLength_H_
#define	_cam_ts_VehicleLength_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_ts_coding/cam_ts_VehicleLengthValue.h"
#include "etsi_its_cam_ts_coding/cam_ts_VehicleLengthConfidenceIndication.h"
#include <etsi_its_cam_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cam_ts_VehicleLength */
typedef struct cam_ts_VehicleLength {
	cam_ts_VehicleLengthValue_t	 vehicleLengthValue;
	cam_ts_VehicleLengthConfidenceIndication_t	 vehicleLengthConfidenceIndication;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cam_ts_VehicleLength_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_VehicleLength;
extern asn_SEQUENCE_specifics_t asn_SPC_cam_ts_VehicleLength_specs_1;
extern asn_TYPE_member_t asn_MBR_cam_ts_VehicleLength_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_VehicleLength_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>