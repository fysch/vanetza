/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_EcdsaP384Signature_H_
#define	_Vanetza_Security_EcdsaP384Signature_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_EccP384CurvePoint.h"
#include "OCTET_STRING.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security_EcdsaP384Signature */
typedef struct Vanetza_Security_EcdsaP384Signature {
	Vanetza_Security_EccP384CurvePoint_t	 rSig;
	OCTET_STRING_t	 sSig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_EcdsaP384Signature_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_EcdsaP384Signature;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_EcdsaP384Signature_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_EcdsaP384Signature_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_EcdsaP384Signature_H_ */
#include "asn_internal.h"
