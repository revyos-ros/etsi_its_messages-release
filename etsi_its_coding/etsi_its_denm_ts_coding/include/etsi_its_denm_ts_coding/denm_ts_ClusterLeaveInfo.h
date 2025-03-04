/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_ts_ClusterLeaveInfo_H_
#define	_denm_ts_ClusterLeaveInfo_H_


#include <etsi_its_denm_ts_coding/asn_application.h>

/* Including external dependencies */
#include "etsi_its_denm_ts_coding/denm_ts_Identifier1B.h"
#include "etsi_its_denm_ts_coding/denm_ts_ClusterLeaveReason.h"
#include <etsi_its_denm_ts_coding/constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* denm_ts_ClusterLeaveInfo */
typedef struct denm_ts_ClusterLeaveInfo {
	denm_ts_Identifier1B_t	 clusterId;
	denm_ts_ClusterLeaveReason_t	 clusterLeaveReason;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} denm_ts_ClusterLeaveInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_denm_ts_ClusterLeaveInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_ts_ClusterLeaveInfo_H_ */
#include <etsi_its_denm_ts_coding/asn_internal.h>
