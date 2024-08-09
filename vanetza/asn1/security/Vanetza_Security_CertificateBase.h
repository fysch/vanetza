/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_CertificateBase_H_
#define	_Vanetza_Security_CertificateBase_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_Uint8.h"
#include "Vanetza_Security_CertificateType.h"
#include "Vanetza_Security_IssuerIdentifier.h"
#include "Vanetza_Security_ToBeSignedCertificate.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_Security_Signature;

/* Vanetza_Security_CertificateBase */
typedef struct Vanetza_Security_CertificateBase {
	Vanetza_Security_Uint8_t	 version;
	Vanetza_Security_CertificateType_t	 type;
	Vanetza_Security_IssuerIdentifier_t	 issuer;
	Vanetza_Security_ToBeSignedCertificate_t	 toBeSigned;
	struct Vanetza_Security_Signature	*signature;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_CertificateBase_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_CertificateBase;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_CertificateBase_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_CertificateBase_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Vanetza_Security_Signature.h"

#endif	/* _Vanetza_Security_CertificateBase_H_ */
#include "asn_internal.h"
