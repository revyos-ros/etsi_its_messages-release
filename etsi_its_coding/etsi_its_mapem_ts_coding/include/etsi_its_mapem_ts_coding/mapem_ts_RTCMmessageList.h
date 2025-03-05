/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_RTCMmessageList_H_
#define	_mapem_ts_RTCMmessageList_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_mapem_ts_coding/mapem_ts_RTCMmessage.h"
#include <etsi_its_mapem_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* mapem_ts_RTCMmessageList */
typedef struct mapem_ts_RTCMmessageList {
	A_SEQUENCE_OF(mapem_ts_RTCMmessage_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} mapem_ts_RTCMmessageList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_RTCMmessageList;
extern asn_SET_OF_specifics_t asn_SPC_mapem_ts_RTCMmessageList_specs_1;
extern asn_TYPE_member_t asn_MBR_mapem_ts_RTCMmessageList_1[1];
extern asn_per_constraints_t asn_PER_type_mapem_ts_RTCMmessageList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_RTCMmessageList_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
