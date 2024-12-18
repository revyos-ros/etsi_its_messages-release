/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_CollisionRiskSubCauseCode_H_
#define	_cam_CollisionRiskSubCauseCode_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_CollisionRiskSubCauseCode {
	cam_CollisionRiskSubCauseCode_unavailable	= 0,
	cam_CollisionRiskSubCauseCode_longitudinalCollisionRisk	= 1,
	cam_CollisionRiskSubCauseCode_crossingCollisionRisk	= 2,
	cam_CollisionRiskSubCauseCode_lateralCollisionRisk	= 3,
	cam_CollisionRiskSubCauseCode_vulnerableRoadUser	= 4
} e_cam_CollisionRiskSubCauseCode;

/* cam_CollisionRiskSubCauseCode */
typedef long	 cam_CollisionRiskSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cam_CollisionRiskSubCauseCode;
asn_struct_free_f cam_CollisionRiskSubCauseCode_free;
asn_struct_print_f cam_CollisionRiskSubCauseCode_print;
asn_constr_check_f cam_CollisionRiskSubCauseCode_constraint;
per_type_decoder_f cam_CollisionRiskSubCauseCode_decode_uper;
per_type_encoder_f cam_CollisionRiskSubCauseCode_encode_uper;
per_type_decoder_f cam_CollisionRiskSubCauseCode_decode_aper;
per_type_encoder_f cam_CollisionRiskSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_CollisionRiskSubCauseCode_H_ */
#include <etsi_its_cam_coding/asn_internal.h>