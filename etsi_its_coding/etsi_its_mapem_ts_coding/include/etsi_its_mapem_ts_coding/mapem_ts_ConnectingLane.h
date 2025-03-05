/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_ConnectingLane_H_
#define	_mapem_ts_ConnectingLane_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_mapem_ts_coding/mapem_ts_LaneID.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_AllowedManeuvers.h"
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* mapem_ts_ConnectingLane */
typedef struct mapem_ts_ConnectingLane {
	mapem_ts_LaneID_t	 lane;
	mapem_ts_AllowedManeuvers_t	*maneuver;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} mapem_ts_ConnectingLane_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_ConnectingLane;
extern asn_SEQUENCE_specifics_t asn_SPC_mapem_ts_ConnectingLane_specs_1;
extern asn_TYPE_member_t asn_MBR_mapem_ts_ConnectingLane_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _mapem_ts_ConnectingLane_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
