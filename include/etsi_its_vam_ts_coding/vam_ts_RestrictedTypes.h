/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_RestrictedTypes_H_
#define	_vam_ts_RestrictedTypes_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_vam_ts_coding/vam_ts_StationType.h"
#include <etsi_its_vam_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_vam_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* vam_ts_RestrictedTypes */
typedef struct vam_ts_RestrictedTypes {
	A_SEQUENCE_OF(vam_ts_StationType_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_RestrictedTypes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_RestrictedTypes;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_RestrictedTypes_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>