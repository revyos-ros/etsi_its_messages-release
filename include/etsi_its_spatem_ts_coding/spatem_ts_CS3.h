/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/input/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_CS3_H_
#define	_spatem_ts_CS3_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_spatem_ts_coding/spatem_ts_StartTime.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_StopTime.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_GeoGraphicalLimit.h"
#include "etsi_its_spatem_ts_coding/spatem_ts_ServiceApplicationLimit.h"
#include <etsi_its_spatem_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* spatem_ts_CS3 */
typedef struct spatem_ts_CS3 {
	spatem_ts_StartTime_t	 startTime;
	spatem_ts_StopTime_t	 stopTime;
	spatem_ts_GeoGraphicalLimit_t	 geographLimit;
	spatem_ts_ServiceApplicationLimit_t	 serviceAppLimit;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} spatem_ts_CS3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_CS3;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_CS3_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>