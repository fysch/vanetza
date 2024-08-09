/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2BaseTypes"
 * 	found in "asn1/IEEE1609dot2BaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_PublicVerificationKey_H_
#define	_Vanetza_Security_PublicVerificationKey_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_EccP256CurvePoint.h"
#include "Vanetza_Security_EccP384CurvePoint.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security_PublicVerificationKey_PR {
	Vanetza_Security_PublicVerificationKey_PR_NOTHING,	/* No components present */
	Vanetza_Security_PublicVerificationKey_PR_ecdsaNistP256,
	Vanetza_Security_PublicVerificationKey_PR_ecdsaBrainpoolP256r1,
	/* Extensions may appear below */
	Vanetza_Security_PublicVerificationKey_PR_ecdsaBrainpoolP384r1
} Vanetza_Security_PublicVerificationKey_PR;

/* Vanetza_Security_PublicVerificationKey */
typedef struct Vanetza_Security_PublicVerificationKey {
	Vanetza_Security_PublicVerificationKey_PR present;
	union Vanetza_Security_PublicVerificationKey_u {
		Vanetza_Security_EccP256CurvePoint_t	 ecdsaNistP256;
		Vanetza_Security_EccP256CurvePoint_t	 ecdsaBrainpoolP256r1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		Vanetza_Security_EccP384CurvePoint_t	 ecdsaBrainpoolP384r1;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_PublicVerificationKey_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_PublicVerificationKey;
extern asn_CHOICE_specifics_t asn_SPC_Vanetza_Security_PublicVerificationKey_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_PublicVerificationKey_1[3];
extern asn_per_constraints_t asn_PER_type_Vanetza_Security_PublicVerificationKey_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_PublicVerificationKey_H_ */
#include "asn_internal.h"
