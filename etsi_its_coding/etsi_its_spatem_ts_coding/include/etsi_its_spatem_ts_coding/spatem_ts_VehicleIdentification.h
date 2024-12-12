/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_VehicleIdentification_H_
#define	_spatem_ts_VehicleIdentification_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_spatem_ts_coding/spatem_ts_WMInumber.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_VDS.h"
#include <etsi_its_spatem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* spatem_ts_VehicleIdentification */
typedef struct spatem_ts_VehicleIdentification {
	spatem_ts_WMInumber_t	*wMInumber;	/* OPTIONAL */
	spatem_ts_VDS_t	*vDS;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} spatem_ts_VehicleIdentification_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_VehicleIdentification;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_VehicleIdentification_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
