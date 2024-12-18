/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=vam_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_vam_ts_SequenceOfTrajectoryInterceptionIndication_H_
#define	_vam_ts_SequenceOfTrajectoryInterceptionIndication_H_


#include <etsi_its_vam_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_vam_ts_coding/asn_SEQUENCE_OF.h>
#include <etsi_its_vam_ts_coding/constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct vam_ts_TrajectoryInterceptionIndication;

/* vam_ts_SequenceOfTrajectoryInterceptionIndication */
typedef struct vam_ts_SequenceOfTrajectoryInterceptionIndication {
	A_SEQUENCE_OF(struct vam_ts_TrajectoryInterceptionIndication) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} vam_ts_SequenceOfTrajectoryInterceptionIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_vam_ts_SequenceOfTrajectoryInterceptionIndication;
extern asn_SET_OF_specifics_t asn_SPC_vam_ts_SequenceOfTrajectoryInterceptionIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_vam_ts_SequenceOfTrajectoryInterceptionIndication_1[1];
extern asn_per_constraints_t asn_PER_type_vam_ts_SequenceOfTrajectoryInterceptionIndication_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "etsi_its_vam_ts_coding/vam_ts_TrajectoryInterceptionIndication.h"

#endif	/* _vam_ts_SequenceOfTrajectoryInterceptionIndication_H_ */
#include <etsi_its_vam_ts_coding/asn_internal.h>
