/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_PrioritizationResponse_H_
#define	_mapem_ts_PrioritizationResponse_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_mapem_ts_coding/mapem_ts_StationID.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_PrioritizationResponseStatus.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_SignalGroupID.h"
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* mapem_ts_PrioritizationResponse */
typedef struct mapem_ts_PrioritizationResponse {
	mapem_ts_StationID_t	 stationID;
	mapem_ts_PrioritizationResponseStatus_t	 priorState;
	mapem_ts_SignalGroupID_t	 signalGroup;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} mapem_ts_PrioritizationResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_PrioritizationResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_mapem_ts_PrioritizationResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_mapem_ts_PrioritizationResponse_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_PrioritizationResponse_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
