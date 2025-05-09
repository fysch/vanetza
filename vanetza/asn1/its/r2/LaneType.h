/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#ifndef	_Vanetza_ITS2_LaneType_H_
#define	_Vanetza_ITS2_LaneType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Vanetza_ITS2_LaneType {
	Vanetza_ITS2_LaneType_traffic	= 0,
	Vanetza_ITS2_LaneType_through	= 1,
	Vanetza_ITS2_LaneType_reversible	= 2,
	Vanetza_ITS2_LaneType_acceleration	= 3,
	Vanetza_ITS2_LaneType_deceleration	= 4,
	Vanetza_ITS2_LaneType_leftHandTurning	= 5,
	Vanetza_ITS2_LaneType_rightHandTurning	= 6,
	Vanetza_ITS2_LaneType_dedicatedVehicle	= 7,
	Vanetza_ITS2_LaneType_bus	= 8,
	Vanetza_ITS2_LaneType_taxi	= 9,
	Vanetza_ITS2_LaneType_hov	= 10,
	Vanetza_ITS2_LaneType_hot	= 11,
	Vanetza_ITS2_LaneType_pedestrian	= 12,
	Vanetza_ITS2_LaneType_cycleLane	= 13,
	Vanetza_ITS2_LaneType_median	= 14,
	Vanetza_ITS2_LaneType_striping	= 15,
	Vanetza_ITS2_LaneType_trackedVehicle	= 16,
	Vanetza_ITS2_LaneType_parking	= 17,
	Vanetza_ITS2_LaneType_emergency	= 18,
	Vanetza_ITS2_LaneType_verge	= 19,
	Vanetza_ITS2_LaneType_minimumRiskManoeuvre	= 20,
	Vanetza_ITS2_LaneType_exclusiveCycleLane	= 21,
	Vanetza_ITS2_LaneType_unknown	= 31
} e_Vanetza_ITS2_LaneType;

/* Vanetza_ITS2_LaneType */
typedef long	 Vanetza_ITS2_LaneType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Vanetza_ITS2_LaneType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_LaneType;
asn_struct_free_f Vanetza_ITS2_LaneType_free;
asn_struct_print_f Vanetza_ITS2_LaneType_print;
asn_constr_check_f Vanetza_ITS2_LaneType_constraint;
ber_type_decoder_f Vanetza_ITS2_LaneType_decode_ber;
der_type_encoder_f Vanetza_ITS2_LaneType_encode_der;
xer_type_decoder_f Vanetza_ITS2_LaneType_decode_xer;
xer_type_encoder_f Vanetza_ITS2_LaneType_encode_xer;
jer_type_encoder_f Vanetza_ITS2_LaneType_encode_jer;
oer_type_decoder_f Vanetza_ITS2_LaneType_decode_oer;
oer_type_encoder_f Vanetza_ITS2_LaneType_encode_oer;
per_type_decoder_f Vanetza_ITS2_LaneType_decode_uper;
per_type_encoder_f Vanetza_ITS2_LaneType_encode_uper;
per_type_decoder_f Vanetza_ITS2_LaneType_decode_aper;
per_type_encoder_f Vanetza_ITS2_LaneType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Vanetza_ITS2_LaneType_H_ */
#include "asn_internal.h"
