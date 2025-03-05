/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_EuVehicleCategoryCode_H_
#define	_vam_ts_EuVehicleCategoryCode_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_vam_ts_coding/vam_ts_EuVehicleCategoryL.h"
#include "etsi_its_vam_ts_coding/vam_ts_EuVehicleCategoryM.h"
#include "etsi_its_vam_ts_coding/vam_ts_EuVehicleCategoryN.h"
#include "etsi_its_vam_ts_coding/vam_ts_EuVehicleCategoryO.h"
#include <etsi_its_vam_ts_coding/NULL.h>
#include <etsi_its_vam_ts_coding/constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum vam_ts_EuVehicleCategoryCode_PR {
	vam_ts_EuVehicleCategoryCode_PR_NOTHING,	/* No components present */
	vam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryL,
	vam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryM,
	vam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryN,
	vam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryO,
	vam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryT,
	vam_ts_EuVehicleCategoryCode_PR_euVehicleCategoryG
} vam_ts_EuVehicleCategoryCode_PR;

/* vam_ts_EuVehicleCategoryCode */
typedef struct vam_ts_EuVehicleCategoryCode {
	vam_ts_EuVehicleCategoryCode_PR present;
	union vam_ts_EuVehicleCategoryCode_u {
		vam_ts_EuVehicleCategoryL_t	 euVehicleCategoryL;
		vam_ts_EuVehicleCategoryM_t	 euVehicleCategoryM;
		vam_ts_EuVehicleCategoryN_t	 euVehicleCategoryN;
		vam_ts_EuVehicleCategoryO_t	 euVehicleCategoryO;
		NULL_t	 euVehicleCategoryT;
		NULL_t	 euVehicleCategoryG;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_EuVehicleCategoryCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_EuVehicleCategoryCode;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_EuVehicleCategoryCode_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>
