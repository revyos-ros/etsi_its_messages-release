/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_ts_RestrictedTypes_H_
#define	_cam_ts_RestrictedTypes_H_


#include <etsi_its_cam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_cam_ts_coding/cam_ts_StationType.h"
#include <etsi_its_cam_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_cam_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* cam_ts_RestrictedTypes */
typedef struct cam_ts_RestrictedTypes {
	A_SEQUENCE_OF(cam_ts_StationType_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} cam_ts_RestrictedTypes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_ts_RestrictedTypes;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_ts_RestrictedTypes_H_ */
#include <etsi_its_cam_ts_coding/asn_internal.h>
