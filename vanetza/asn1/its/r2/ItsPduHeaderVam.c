/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VAM-PDU-Descriptions"
 * 	found in "asn1/release2/TS103300v221/VAM-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "ItsPduHeaderVam.h"

int
Vanetza_ITS2_ItsPduHeaderVam_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using Vanetza_ITS2_ItsPduHeader,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Vanetza_ITS2_ItsPduHeaderVam_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Vanetza_ITS2_ItsPduHeaderVam_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_ItsPduHeaderVam_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_ItsPduHeaderVam = {
	"ItsPduHeaderVam",
	"ItsPduHeaderVam",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_ITS2_ItsPduHeaderVam_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_ItsPduHeaderVam_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_ItsPduHeaderVam_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_ItsPduHeaderVam_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_ItsPduHeaderVam_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_ItsPduHeaderVam_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Vanetza_ITS2_ItsPduHeaderVam_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Vanetza_ITS2_ItsPduHeaderVam_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		Vanetza_ITS2_ItsPduHeaderVam_constraint
	},
	asn_MBR_Vanetza_ITS2_ItsPduHeader_1,
	3,	/* Elements count */
	&asn_SPC_Vanetza_ITS2_ItsPduHeader_specs_1	/* Additional specs */
};

