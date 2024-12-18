/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_SensorType_H_
#define	_vam_ts_SensorType_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_vam_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum vam_ts_SensorType {
	vam_ts_SensorType_undefined	= 0,
	vam_ts_SensorType_radar	= 1,
	vam_ts_SensorType_lidar	= 2,
	vam_ts_SensorType_monovideo	= 3,
	vam_ts_SensorType_stereovision	= 4,
	vam_ts_SensorType_nightvision	= 5,
	vam_ts_SensorType_ultrasonic	= 6,
	vam_ts_SensorType_pmd	= 7,
	vam_ts_SensorType_inductionLoop	= 8,
	vam_ts_SensorType_sphericalCamera	= 9,
	vam_ts_SensorType_uwb	= 10,
	vam_ts_SensorType_acoustic	= 11,
	vam_ts_SensorType_localAggregation	= 12,
	vam_ts_SensorType_itsAggregation	= 13
} e_vam_ts_SensorType;

/* vam_ts_SensorType */
typedef long	 vam_ts_SensorType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_SensorType;
asn_struct_free_f vam_ts_SensorType_free;
asn_struct_print_f vam_ts_SensorType_print;
asn_constr_check_f vam_ts_SensorType_constraint;
per_type_decoder_f vam_ts_SensorType_decode_uper;
per_type_encoder_f vam_ts_SensorType_encode_uper;
per_type_decoder_f vam_ts_SensorType_decode_aper;
per_type_encoder_f vam_ts_SensorType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_SensorType_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>