/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=denm_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_denm_PtActivationData_H_
#define	_denm_PtActivationData_H_


#include <etsi_its_denm_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_denm_coding/OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* denm_PtActivationData */
typedef OCTET_STRING_t	 denm_PtActivationData_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_denm_PtActivationData_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_denm_PtActivationData;
asn_struct_free_f denm_PtActivationData_free;
asn_struct_print_f denm_PtActivationData_print;
asn_constr_check_f denm_PtActivationData_constraint;
per_type_decoder_f denm_PtActivationData_decode_uper;
per_type_encoder_f denm_PtActivationData_encode_uper;
per_type_decoder_f denm_PtActivationData_decode_aper;
per_type_encoder_f denm_PtActivationData_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _denm_PtActivationData_H_ */
#include <etsi_its_denm_coding/asn_internal.h>
