/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "asn1/release2/TS102894-2v221-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_ITS2_ -R`
 */

#include "CauseCode.h"

static asn_TYPE_member_t asn_MBR_Vanetza_ITS2_CauseCode_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_CauseCode, causeCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_CauseCodeType,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"causeCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_ITS2_CauseCode, subCauseCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_ITS2_SubCauseCodeType,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"subCauseCode"
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_ITS2_CauseCode_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_ITS2_CauseCode_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* causeCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* subCauseCode */
};
static asn_SEQUENCE_specifics_t asn_SPC_Vanetza_ITS2_CauseCode_specs_1 = {
	sizeof(struct Vanetza_ITS2_CauseCode),
	offsetof(struct Vanetza_ITS2_CauseCode, _asn_ctx),
	asn_MAP_Vanetza_ITS2_CauseCode_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_ITS2_CauseCode = {
	"CauseCode",
	"CauseCode",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_ITS2_CauseCode_tags_1,
	sizeof(asn_DEF_Vanetza_ITS2_CauseCode_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_CauseCode_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_ITS2_CauseCode_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_ITS2_CauseCode_tags_1)
		/sizeof(asn_DEF_Vanetza_ITS2_CauseCode_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
#if !defined(ASN_DISABLE_JER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_JER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Vanetza_ITS2_CauseCode_1,
	2,	/* Elements count */
	&asn_SPC_Vanetza_ITS2_CauseCode_specs_1	/* Additional specs */
};

