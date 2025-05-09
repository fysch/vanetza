/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2CrlBaseTypes"
 * 	found in "build.asn1/ieee/IEEE1609dot2crlBaseTypes.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example -fprefix=Vanetza_Security2_ -R`
 */

#include "GroupSingleSeedCrlEntry.h"

asn_TYPE_member_t asn_MBR_Vanetza_Security2_GroupSingleSeedCrlEntry_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_GroupSingleSeedCrlEntry, iMax),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_Uint16,
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
		"iMax"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_GroupSingleSeedCrlEntry, laId),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_LaId,
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
		"laId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Vanetza_Security2_GroupSingleSeedCrlEntry, linkageSeed),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Vanetza_Security2_LinkageSeed,
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
		"linkageSeed"
		},
};
static const ber_tlv_tag_t asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Vanetza_Security2_GroupSingleSeedCrlEntry_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* iMax */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* laId */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* linkageSeed */
};
asn_SEQUENCE_specifics_t asn_SPC_Vanetza_Security2_GroupSingleSeedCrlEntry_specs_1 = {
	sizeof(struct Vanetza_Security2_GroupSingleSeedCrlEntry),
	offsetof(struct Vanetza_Security2_GroupSingleSeedCrlEntry, _asn_ctx),
	asn_MAP_Vanetza_Security2_GroupSingleSeedCrlEntry_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry = {
	"GroupSingleSeedCrlEntry",
	"GroupSingleSeedCrlEntry",
	&asn_OP_SEQUENCE,
	asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry_tags_1,
	sizeof(asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry_tags_1[0]), /* 1 */
	asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry_tags_1,	/* Same as above */
	sizeof(asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry_tags_1)
		/sizeof(asn_DEF_Vanetza_Security2_GroupSingleSeedCrlEntry_tags_1[0]), /* 1 */
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
	asn_MBR_Vanetza_Security2_GroupSingleSeedCrlEntry_1,
	3,	/* Elements count */
	&asn_SPC_Vanetza_Security2_GroupSingleSeedCrlEntry_specs_1	/* Additional specs */
};

