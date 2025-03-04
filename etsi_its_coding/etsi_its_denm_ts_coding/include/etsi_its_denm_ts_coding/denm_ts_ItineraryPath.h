/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_ItineraryPath_H_
#define	_denm_ts_ItineraryPath_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_denm_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct denm_ts_ReferencePosition;

/* denm_ts_ItineraryPath */
typedef struct denm_ts_ItineraryPath {
	A_SEQUENCE_OF(struct denm_ts_ReferencePosition) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} denm_ts_ItineraryPath_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_ItineraryPath;
extern asn_SET_OF_specifics_t asn_SPC_denm_ts_ItineraryPath_specs_1;
extern asn_TYPE_member_t asn_MBR_denm_ts_ItineraryPath_1[1];
extern asn_per_constraints_t asn_PER_type_denm_ts_ItineraryPath_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_denm_ts_coding/denm_ts_ReferencePosition.h"

#endif	/* _denm_ts_ItineraryPath_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
