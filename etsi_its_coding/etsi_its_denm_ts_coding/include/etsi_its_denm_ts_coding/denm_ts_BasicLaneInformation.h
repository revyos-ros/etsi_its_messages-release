/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_BasicLaneInformation_H_
#define	_denm_ts_BasicLaneInformation_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_denm_ts_coding/denm_ts_LanePosition.h"
#include "etsi_its_denm_ts_coding/denm_ts_Direction.h"
#include "etsi_its_denm_ts_coding/denm_ts_LaneWidth.h"
#include "etsi_its_denm_ts_coding/denm_ts_RoadSectionId.h"
#include <etsi_its_denm_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* denm_ts_BasicLaneInformation */
typedef struct denm_ts_BasicLaneInformation {
	denm_ts_LanePosition_t	 laneNumber;
	denm_ts_Direction_t	 direction;
	denm_ts_LaneWidth_t	*laneWidth;	/* OPTIONAL */
	denm_ts_LanePosition_t	*connectingLane;	/* OPTIONAL */
	denm_ts_RoadSectionId_t	*connectingRoadSection;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} denm_ts_BasicLaneInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_BasicLaneInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_denm_ts_BasicLaneInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_denm_ts_BasicLaneInformation_1[5];
extern asn_per_constraints_t asn_PER_type_denm_ts_BasicLaneInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_BasicLaneInformation_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
