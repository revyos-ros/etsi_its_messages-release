/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/input/ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fprefix=cpm_ts_ -no-gen-BER -no-gen-XER -no-gen-JER -no-gen-OER -no-gen-example -gen-UPER`
 */

#ifndef	_cpm_ts_EnergyStorageType_H_
#define	_cpm_ts_EnergyStorageType_H_


#include <etsi_its_cpm_ts_coding/asn_application.h>

/* Including external dependencies */
#include <etsi_its_cpm_ts_coding/BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cpm_ts_EnergyStorageType {
	cpm_ts_EnergyStorageType_hydrogenStorage	= 0,
	cpm_ts_EnergyStorageType_electricEnergyStorage	= 1,
	cpm_ts_EnergyStorageType_liquidPropaneGas	= 2,
	cpm_ts_EnergyStorageType_compressedNaturalGas	= 3,
	cpm_ts_EnergyStorageType_diesel	= 4,
	cpm_ts_EnergyStorageType_gasoline	= 5,
	cpm_ts_EnergyStorageType_ammonia	= 6
} e_cpm_ts_EnergyStorageType;

/* cpm_ts_EnergyStorageType */
typedef BIT_STRING_t	 cpm_ts_EnergyStorageType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_cpm_ts_EnergyStorageType;
asn_struct_free_f cpm_ts_EnergyStorageType_free;
asn_struct_print_f cpm_ts_EnergyStorageType_print;
asn_constr_check_f cpm_ts_EnergyStorageType_constraint;
per_type_decoder_f cpm_ts_EnergyStorageType_decode_uper;
per_type_encoder_f cpm_ts_EnergyStorageType_encode_uper;
per_type_decoder_f cpm_ts_EnergyStorageType_decode_aper;
per_type_encoder_f cpm_ts_EnergyStorageType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _cpm_ts_EnergyStorageType_H_ */
#include <etsi_its_cpm_ts_coding/asn_internal.h>
