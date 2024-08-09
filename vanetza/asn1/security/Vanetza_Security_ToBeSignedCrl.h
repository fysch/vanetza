/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EtsiTs102941TrustLists"
 * 	found in "asn1/TS102941v131-TrustLists.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security_ -R`
 */

#ifndef	_Vanetza_Security_ToBeSignedCrl_H_
#define	_Vanetza_Security_ToBeSignedCrl_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Vanetza_Security_Version.h"
#include "Vanetza_Security_Time32.h"
#include "Vanetza_Security_CrlEntry.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Vanetza_Security_ToBeSignedCrl */
typedef struct Vanetza_Security_ToBeSignedCrl {
	Vanetza_Security_Version_t	 version;
	Vanetza_Security_Time32_t	 thisUpdate;
	Vanetza_Security_Time32_t	 nextUpdate;
	struct Vanetza_Security_ToBeSignedCrl__entries {
		A_SEQUENCE_OF(Vanetza_Security_CrlEntry_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} entries;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_Security_ToBeSignedCrl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_Security_ToBeSignedCrl;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security_ToBeSignedCrl_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_Security_ToBeSignedCrl_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_Security_ToBeSignedCrl_H_ */
#include "asn_internal.h"
