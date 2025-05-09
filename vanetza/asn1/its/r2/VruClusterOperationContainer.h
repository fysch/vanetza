/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VAM-PDU-Descriptions"
 * 	found in "asn1/release2/TS103300v221/VAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_VruClusterOperationContainer_H_
#define	_Vanetza_ITS2_VruClusterOperationContainer_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DeltaTimeQuarterSecond.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Vanetza_ITS2_ClusterJoinInfo;
struct Vanetza_ITS2_ClusterLeaveInfo;
struct Vanetza_ITS2_ClusterBreakupInfo;

/* Vanetza_ITS2_VruClusterOperationContainer */
typedef struct Vanetza_ITS2_VruClusterOperationContainer {
	struct Vanetza_ITS2_ClusterJoinInfo	*clusterJoinInfo;	/* OPTIONAL */
	struct Vanetza_ITS2_ClusterLeaveInfo	*clusterLeaveInfo;	/* OPTIONAL */
	struct Vanetza_ITS2_ClusterBreakupInfo	*clusterBreakupInfo;	/* OPTIONAL */
	Vanetza_ITS2_DeltaTimeQuarterSecond_t	*clusterIdChangeTimeInfo;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Vanetza_ITS2_VruClusterOperationContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_VruClusterOperationContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_VruClusterOperationContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_Vanetza_ITS2_VruClusterOperationContainer_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ClusterJoinInfo.h"
#include "ClusterLeaveInfo.h"
#include "ClusterBreakupInfo.h"

#endif	/* _Vanetza_ITS2_VruClusterOperationContainer_H_ */
#include "asn_internal.h"
