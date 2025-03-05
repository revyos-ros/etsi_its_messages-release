/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/input/CPM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_CpmContainerId_H_
#define	_cpm_ts_CpmContainerId_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cpm_ts_CpmContainerId */
typedef long	 cpm_ts_CpmContainerId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cpm_ts_CpmContainerId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_CpmContainerId;
asn_struct_free_f cpm_ts_CpmContainerId_free;
asn_struct_print_f cpm_ts_CpmContainerId_print;
asn_constr_check_f cpm_ts_CpmContainerId_constraint;
per_type_decoder_f cpm_ts_CpmContainerId_decode_uper;
per_type_encoder_f cpm_ts_CpmContainerId_encode_uper;
per_type_decoder_f cpm_ts_CpmContainerId_decode_aper;
per_type_encoder_f cpm_ts_CpmContainerId_encode_aper;
#define cpm_ts_CpmContainerId_originatingVehicleContainer	((cpm_ts_CpmContainerId_t)1)
#define cpm_ts_CpmContainerId_originatingRsuContainer	((cpm_ts_CpmContainerId_t)2)
#define cpm_ts_CpmContainerId_sensorInformationContainer	((cpm_ts_CpmContainerId_t)3)
#define cpm_ts_CpmContainerId_perceptionRegionContainer	((cpm_ts_CpmContainerId_t)4)
#define cpm_ts_CpmContainerId_perceivedObjectContainer	((cpm_ts_CpmContainerId_t)5)

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_CpmContainerId_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
