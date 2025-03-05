/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/input/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fprefix=spatem_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_spatem_ts_PhoneNumber_H_
#define	_spatem_ts_PhoneNumber_H_


#include <etsi_its_spatem_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_spatem_ts_coding/NumericString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* spatem_ts_PhoneNumber */
typedef NumericString_t	 spatem_ts_PhoneNumber_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_spatem_ts_PhoneNumber_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_spatem_ts_PhoneNumber;
asn_struct_free_f spatem_ts_PhoneNumber_free;
asn_struct_print_f spatem_ts_PhoneNumber_print;
asn_constr_check_f spatem_ts_PhoneNumber_constraint;
per_type_decoder_f spatem_ts_PhoneNumber_decode_uper;
per_type_encoder_f spatem_ts_PhoneNumber_encode_uper;
per_type_decoder_f spatem_ts_PhoneNumber_decode_aper;
per_type_encoder_f spatem_ts_PhoneNumber_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _spatem_ts_PhoneNumber_H_ */
#include <etsi_its_spatem_ts_coding/asn_internal.h>
