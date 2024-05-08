/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -no-gen-example -gen-UPER`
 */


/* Including external dependencies */
#include <etsi_its_cam_coding/NativeInteger.h>
#ifndef	_WrongWayDrivingSubCauseCode_H_
#define	_WrongWayDrivingSubCauseCode_H_


#include <etsi_its_cam_coding/asn_application.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WrongWayDrivingSubCauseCode {
	WrongWayDrivingSubCauseCode_unavailable	= 0,
	WrongWayDrivingSubCauseCode_wrongLane	= 1,
	WrongWayDrivingSubCauseCode_wrongDirection	= 2
} e_WrongWayDrivingSubCauseCode;

/* WrongWayDrivingSubCauseCode */
typedef long	 WrongWayDrivingSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WrongWayDrivingSubCauseCode;
asn_struct_free_f WrongWayDrivingSubCauseCode_free;
asn_struct_print_f WrongWayDrivingSubCauseCode_print;
asn_constr_check_f WrongWayDrivingSubCauseCode_constraint;
ber_type_decoder_f WrongWayDrivingSubCauseCode_decode_ber;
der_type_encoder_f WrongWayDrivingSubCauseCode_encode_der;
xer_type_decoder_f WrongWayDrivingSubCauseCode_decode_xer;
xer_type_encoder_f WrongWayDrivingSubCauseCode_encode_xer;
jer_type_encoder_f WrongWayDrivingSubCauseCode_encode_jer;
oer_type_decoder_f WrongWayDrivingSubCauseCode_decode_oer;
oer_type_encoder_f WrongWayDrivingSubCauseCode_encode_oer;
per_type_decoder_f WrongWayDrivingSubCauseCode_decode_uper;
per_type_encoder_f WrongWayDrivingSubCauseCode_encode_uper;
per_type_decoder_f WrongWayDrivingSubCauseCode_decode_aper;
per_type_encoder_f WrongWayDrivingSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _WrongWayDrivingSubCauseCode_H_ */
#include <etsi_its_cam_coding/asn_internal.h>
