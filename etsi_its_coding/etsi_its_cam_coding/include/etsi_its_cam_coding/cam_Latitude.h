/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=cam_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cam_Latitude_H_
#define	_cam_Latitude_H_


#include <etsi_its_cam_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cam_Latitude {
	cam_Latitude_oneMicrodegreeNorth	= 10,
	cam_Latitude_oneMicrodegreeSouth	= -10,
	cam_Latitude_unavailable	= 900000001
} e_cam_Latitude;

/* cam_Latitude */
typedef long	 cam_Latitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_cam_Latitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_cam_Latitude;
asn_struct_free_f cam_Latitude_free;
asn_struct_print_f cam_Latitude_print;
asn_constr_check_f cam_Latitude_constraint;
per_type_decoder_f cam_Latitude_decode_uper;
per_type_encoder_f cam_Latitude_encode_uper;
per_type_decoder_f cam_Latitude_decode_aper;
per_type_encoder_f cam_Latitude_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cam_Latitude_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
