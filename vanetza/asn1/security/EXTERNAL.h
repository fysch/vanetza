/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ASN1C-UsefulInformationObjectClasses"
 * 	found in "/home/raphael/opt/asn1c-18e56503/share/asn1c/standard-modules/ASN1C-UsefulInformationObjectClasses.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_EXTERNAL_H_
#define	_Vanetza_Security_EXTERNAL_H_


#include "asn_application.h"

/* Including external dependencies */
#include "OBJECT_IDENTIFIER.h"
#include "NativeInteger.h"
#include "ObjectDescriptor.h"
#include "ANY.h"
#include "OCTET_STRING.h"
#include "BIT_STRING.h"
#include "constr_CHOICE.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_Security_EXTERNAL__encoding_PR {
	Vanetza_Security_EXTERNAL__encoding_PR_NOTHING,	/* No components present */
	Vanetza_Security_EXTERNAL__encoding_PR_single_ASN1_type,
	Vanetza_Security_EXTERNAL__encoding_PR_octet_aligned,
	Vanetza_Security_EXTERNAL__encoding_PR_arbitrary
} Vanetza_Security_EXTERNAL__encoding_PR;

/* Vanetza_Security_EXTERNAL */
typedef struct Vanetza_Security_EXTERNAL {
	OBJECT_IDENTIFIER_t	*direct_reference;	/* OPTIONAL */
	long	*indirect_reference;	/* OPTIONAL */
	ObjectDescriptor_t	*data_value_descriptor;	/* OPTIONAL */
	struct Vanetza_Security_EXTERNAL__encoding {
		Vanetza_Security_EXTERNAL__encoding_PR present;
		union Vanetza_Security_EXTERNAL__Vanetza_Security_encoding_u {
			ANY_t	 single_ASN1_type;
			OCTET_STRING_t	 octet_aligned;
			BIT_STRING_t	 arbitrary;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} encoding;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_EXTERNAL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_EXTERNAL;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_EXTERNAL_H_ */
#include "asn_internal.h"
