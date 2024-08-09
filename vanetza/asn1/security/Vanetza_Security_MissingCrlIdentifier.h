/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IEEE1609dot2"
 * 	found in "asn1/IEEE1609dot2.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_MissingCrlIdentifier_H_
#define	_Vanetza_Security_MissingCrlIdentifier_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_HashedId3.h"
#include "Vanetza_Security_CrlSeries.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security_MissingCrlIdentifier */
typedef struct Vanetza_Security_MissingCrlIdentifier {
	Vanetza_Security_HashedId3_t	 cracaId;
	Vanetza_Security_CrlSeries_t	 crlSeries;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_MissingCrlIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_MissingCrlIdentifier;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_MissingCrlIdentifier_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_MissingCrlIdentifier_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_MissingCrlIdentifier_H_ */
#include "asn_internal.h"
