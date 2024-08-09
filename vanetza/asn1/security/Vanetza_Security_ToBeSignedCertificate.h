/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_ToBeSignedCertificate_H_
#define	_Vanetza_Security_ToBeSignedCertificate_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_CertificateId.h"
#include "Vanetza_Security_HashedId3.h"
#include "Vanetza_Security_CrlSeries.h"
#include "Vanetza_Security_ValidityPeriod.h"
#include "Vanetza_Security_SubjectAssurance.h"
#include "NULL.h"
#include "Vanetza_Security_VerificationKeyIndicator.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_Security_GeographicRegion;
struct Vanetza_Security_SequenceOfPsidSsp;
struct Vanetza_Security_SequenceOfPsidGroupPermissions;
struct Vanetza_Security_PublicEncryptionKey;

/* Vanetza_Security_ToBeSignedCertificate */
typedef struct Vanetza_Security_ToBeSignedCertificate {
	Vanetza_Security_CertificateId_t	 id;
	Vanetza_Security_HashedId3_t	 cracaId;
	Vanetza_Security_CrlSeries_t	 crlSeries;
	Vanetza_Security_ValidityPeriod_t	 validityPeriod;
	struct Vanetza_Security_GeographicRegion	*region;	/* OPTIONAL */
	Vanetza_Security_SubjectAssurance_t	*assuranceLevel;	/* OPTIONAL */
	struct Vanetza_Security_SequenceOfPsidSsp	*appPermissions;	/* OPTIONAL */
	struct Vanetza_Security_SequenceOfPsidGroupPermissions	*certIssuePermissions;	/* OPTIONAL */
	struct Vanetza_Security_SequenceOfPsidGroupPermissions	*certRequestPermissions;	/* OPTIONAL */
	NULL_t	*canRequestRollover;	/* OPTIONAL */
	struct Vanetza_Security_PublicEncryptionKey	*encryptionKey;	/* OPTIONAL */
	Vanetza_Security_VerificationKeyIndicator_t	 verifyKeyIndicator;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_ToBeSignedCertificate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_ToBeSignedCertificate;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_ToBeSignedCertificate_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_ToBeSignedCertificate_1[12];
extern asn_per_constraints_t asn_PER_type_Vanetza_Security_ToBeSignedCertificate_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "Vanetza_Security_GeographicRegion.h"
#include "Vanetza_Security_SequenceOfPsidSsp.h"
#include "Vanetza_Security_SequenceOfPsidGroupPermissions.h"
#include "Vanetza_Security_PublicEncryptionKey.h"

#endif	/* _Vanetza_Security_ToBeSignedCertificate_H_ */
#include "asn_internal.h"
