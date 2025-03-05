/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=mapem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_mapem_ts_AdvisorySpeed_H_
#define	_mapem_ts_AdvisorySpeed_H_


#include <etsi_its_mapem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_mapem_ts_coding/mapem_ts_AdvisorySpeedType.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_SpeedAdvice.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_SpeedConfidenceDSRC.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_ZoneLength.h"
#include "etsi_its_mapem_ts_coding/mapem_ts_RestrictionClassID.h"
#include <etsi_its_mapem_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE_OF.h>
#include <etsi_its_mapem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct mapem_ts_Reg_AdvisorySpeed;

/* mapem_ts_AdvisorySpeed */
typedef struct mapem_ts_AdvisorySpeed {
	mapem_ts_AdvisorySpeedType_t	 type;
	mapem_ts_SpeedAdvice_t	*speed;	/* OPTIONAL */
	mapem_ts_SpeedConfidenceDSRC_t	*confidence;	/* OPTIONAL */
	mapem_ts_ZoneLength_t	*distance;	/* OPTIONAL */
	mapem_ts_RestrictionClassID_t	*Class;	/* OPTIONAL */
	struct mapem_ts_AdvisorySpeed__regional {
		A_SEQUENCE_OF(struct mapem_ts_Reg_AdvisorySpeed) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *regional;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} mapem_ts_AdvisorySpeed_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_mapem_ts_AdvisorySpeed;
extern asn_SEQUENCE_specifics_t asn_SPC_mapem_ts_AdvisorySpeed_specs_1;
extern asn_TYPE_member_t asn_MBR_mapem_ts_AdvisorySpeed_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_mapem_ts_coding/mapem_ts_RegionalExtension.h"

#endif	/* _mapem_ts_AdvisorySpeed_H_ */
#include <etsi_its_mapem_ts_coding/asn_internal.h>
