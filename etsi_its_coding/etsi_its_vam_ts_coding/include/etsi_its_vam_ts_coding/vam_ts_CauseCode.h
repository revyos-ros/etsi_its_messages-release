/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_CauseCode_H_
#define	_vam_ts_CauseCode_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_vam_ts_coding/vam_ts_CauseCodeType.h"
#include "etsi_its_vam_ts_coding/vam_ts_SubCauseCodeType.h"
#include <etsi_its_vam_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* vam_ts_CauseCode */
typedef struct vam_ts_CauseCode {
	vam_ts_CauseCodeType_t	 causeCode;
	vam_ts_SubCauseCodeType_t	 subCauseCode;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_CauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_CauseCode;

#ifdef __cplusplus
}
#endif

#endif	/* _vam_ts_CauseCode_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>
