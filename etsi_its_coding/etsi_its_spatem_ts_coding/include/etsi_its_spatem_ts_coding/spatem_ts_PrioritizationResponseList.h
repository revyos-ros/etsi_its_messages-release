/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/input/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_PrioritizationResponseList_H_
#define	_spatem_ts_PrioritizationResponseList_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_spatem_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct spatem_ts_PrioritizationResponse;

/* spatem_ts_PrioritizationResponseList */
typedef struct spatem_ts_PrioritizationResponseList {
	A_SEQUENCE_OF(struct spatem_ts_PrioritizationResponse) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} spatem_ts_PrioritizationResponseList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_PrioritizationResponseList;
extern asn_SET_OF_specifics_t asn_SPC_spatem_ts_PrioritizationResponseList_specs_1;
extern asn_TYPE_member_t asn_MBR_spatem_ts_PrioritizationResponseList_1[1];
extern asn_per_constraints_t asn_PER_type_spatem_ts_PrioritizationResponseList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_spatem_ts_coding/spatem_ts_PrioritizationResponse.h"

#endif	/* _spatem_ts_PrioritizationResponseList_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
