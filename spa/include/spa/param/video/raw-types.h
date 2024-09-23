/* Simple Plugin API */
/* SPDX-FileCopyrightText: Copyright © 2018 Wim Taymans */
/* SPDX-License-Identifier: MIT */

#ifndef SPA_VIDEO_RAW_TYPES_H
#define SPA_VIDEO_RAW_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \addtogroup spa_param
 * \{
 */
#include <spa/utils/type.h>
#include <spa/param/video/raw.h>

#define SPA_TYPE_INFO_VideoFormat		SPA_TYPE_INFO_ENUM_BASE "VideoFormat"
#define SPA_TYPE_INFO_VIDEO_FORMAT_BASE		SPA_TYPE_INFO_VideoFormat ":"

static const struct spa_type_info spa_type_video_format[] = {
	{ SPA_VIDEO_FORMAT_UNKNOWN,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "UNKNOWN", NULL },
	{ SPA_VIDEO_FORMAT_ENCODED,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ENCODED", NULL },
	{ SPA_VIDEO_FORMAT_I420,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420", NULL },
	{ SPA_VIDEO_FORMAT_YV12,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YV12", NULL },
	{ SPA_VIDEO_FORMAT_YUY2,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YUY2", NULL },
	{ SPA_VIDEO_FORMAT_UYVY,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "UYVY", NULL },
	{ SPA_VIDEO_FORMAT_AYUV,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "AYUV", NULL },
	{ SPA_VIDEO_FORMAT_RGBx,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBx", NULL },
	{ SPA_VIDEO_FORMAT_BGRx,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGRx", NULL },
	{ SPA_VIDEO_FORMAT_xRGB,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "xRGB", NULL },
	{ SPA_VIDEO_FORMAT_xBGR,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "xBGR", NULL },
	{ SPA_VIDEO_FORMAT_RGBA,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBA", NULL },
	{ SPA_VIDEO_FORMAT_BGRA,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGRA", NULL },
	{ SPA_VIDEO_FORMAT_ARGB,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ARGB", NULL },
	{ SPA_VIDEO_FORMAT_ABGR,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ABGR", NULL },
	{ SPA_VIDEO_FORMAT_RGB,		SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB", NULL },
	{ SPA_VIDEO_FORMAT_BGR,		SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGR", NULL },
	{ SPA_VIDEO_FORMAT_Y41B,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y41B", NULL },
	{ SPA_VIDEO_FORMAT_Y42B,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y42B", NULL },
	{ SPA_VIDEO_FORMAT_YVYU,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YVYU", NULL },
	{ SPA_VIDEO_FORMAT_Y444,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444", NULL },
	{ SPA_VIDEO_FORMAT_v210,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "v210", NULL },
	{ SPA_VIDEO_FORMAT_v216,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "v216", NULL },
	{ SPA_VIDEO_FORMAT_NV12,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV12", NULL },
	{ SPA_VIDEO_FORMAT_NV21,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV21", NULL },
	{ SPA_VIDEO_FORMAT_GRAY8,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GRAY8", NULL },
	{ SPA_VIDEO_FORMAT_GRAY16_BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GRAY16_BE", NULL },
	{ SPA_VIDEO_FORMAT_GRAY16_LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GRAY16_LE", NULL },
	{ SPA_VIDEO_FORMAT_v308,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "v308", NULL },
	{ SPA_VIDEO_FORMAT_RGB16,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB16", NULL },
	{ SPA_VIDEO_FORMAT_BGR16,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGR16", NULL },
	{ SPA_VIDEO_FORMAT_RGB15,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB15", NULL },
	{ SPA_VIDEO_FORMAT_BGR15,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGR15", NULL },
	{ SPA_VIDEO_FORMAT_UYVP,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "UYVP", NULL },
	{ SPA_VIDEO_FORMAT_A420,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A420", NULL },
	{ SPA_VIDEO_FORMAT_RGB8P,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGB8P", NULL },
	{ SPA_VIDEO_FORMAT_YUV9,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YUV9", NULL },
	{ SPA_VIDEO_FORMAT_YVU9,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "YVU9", NULL },
	{ SPA_VIDEO_FORMAT_IYU1,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "IYU1", NULL },
	{ SPA_VIDEO_FORMAT_ARGB64,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ARGB64", NULL },
	{ SPA_VIDEO_FORMAT_AYUV64,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "AYUV64", NULL },
	{ SPA_VIDEO_FORMAT_r210,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "r210", NULL },
	{ SPA_VIDEO_FORMAT_I420_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_10BE", NULL },
	{ SPA_VIDEO_FORMAT_I420_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_10LE", NULL },
	{ SPA_VIDEO_FORMAT_I422_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_10BE", NULL },
	{ SPA_VIDEO_FORMAT_I422_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_10LE", NULL },
	{ SPA_VIDEO_FORMAT_Y444_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_10BE", NULL },
	{ SPA_VIDEO_FORMAT_Y444_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_10LE", NULL },
	{ SPA_VIDEO_FORMAT_GBR,		SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR", NULL },
	{ SPA_VIDEO_FORMAT_GBR_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_10BE", NULL },
	{ SPA_VIDEO_FORMAT_GBR_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_10LE", NULL },
	{ SPA_VIDEO_FORMAT_NV16,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV16", NULL },
	{ SPA_VIDEO_FORMAT_NV24,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV24", NULL },
	{ SPA_VIDEO_FORMAT_NV12_64Z32,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV12_64Z32", NULL },
	{ SPA_VIDEO_FORMAT_A420_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A420_10BE", NULL },
	{ SPA_VIDEO_FORMAT_A420_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A420_10LE", NULL },
	{ SPA_VIDEO_FORMAT_A422_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A422_10BE", NULL },
	{ SPA_VIDEO_FORMAT_A422_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A422_10LE", NULL },
	{ SPA_VIDEO_FORMAT_A444_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A444_10BE", NULL },
	{ SPA_VIDEO_FORMAT_A444_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "A444_10LE", NULL },
	{ SPA_VIDEO_FORMAT_NV61,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "NV61", NULL },
	{ SPA_VIDEO_FORMAT_P010_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "P010_10BE", NULL },
	{ SPA_VIDEO_FORMAT_P010_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "P010_10LE", NULL },
	{ SPA_VIDEO_FORMAT_IYU2,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "IYU2", NULL },
	{ SPA_VIDEO_FORMAT_VYUY,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "VYUY", NULL },
	{ SPA_VIDEO_FORMAT_GBRA,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA", NULL },
	{ SPA_VIDEO_FORMAT_GBRA_10BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_10BE", NULL },
	{ SPA_VIDEO_FORMAT_GBRA_10LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_10LE", NULL },
	{ SPA_VIDEO_FORMAT_GBR_12BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_12BE", NULL },
	{ SPA_VIDEO_FORMAT_GBR_12LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBR_12LE", NULL },
	{ SPA_VIDEO_FORMAT_GBRA_12BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_12BE", NULL },
	{ SPA_VIDEO_FORMAT_GBRA_12LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "GBRA_12LE", NULL },
	{ SPA_VIDEO_FORMAT_I420_12BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_12BE", NULL },
	{ SPA_VIDEO_FORMAT_I420_12LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I420_12LE", NULL },
	{ SPA_VIDEO_FORMAT_I422_12BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_12BE", NULL },
	{ SPA_VIDEO_FORMAT_I422_12LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "I422_12LE", NULL },
	{ SPA_VIDEO_FORMAT_Y444_12BE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_12BE", NULL },
	{ SPA_VIDEO_FORMAT_Y444_12LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "Y444_12LE", NULL },
	{ SPA_VIDEO_FORMAT_RGBA_F16,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBA_F16", NULL },
	{ SPA_VIDEO_FORMAT_RGBA_F32,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBA_F32", NULL },
	{ SPA_VIDEO_FORMAT_xRGB_210LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "xRGB_210LE", NULL },
	{ SPA_VIDEO_FORMAT_xBGR_210LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "xBGR_210LE", NULL },
	{ SPA_VIDEO_FORMAT_RGBx_102LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBx_102LE", NULL },
	{ SPA_VIDEO_FORMAT_BGRx_102LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGRx_102LE", NULL },
	{ SPA_VIDEO_FORMAT_ARGB_210LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ARGB_210LE", NULL },
	{ SPA_VIDEO_FORMAT_ABGR_210LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "ABGR_210LE", NULL },
	{ SPA_VIDEO_FORMAT_RGBA_102LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "RGBA_102LE", NULL },
	{ SPA_VIDEO_FORMAT_BGRA_102LE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FORMAT_BASE "BGRA_102LE", NULL },
	{ 0, 0, NULL, NULL },
};

static inline uint32_t spa_type_video_format_from_short_name(const char *name)
{
	return spa_type_from_short_name(name, spa_type_video_format, SPA_VIDEO_FORMAT_UNKNOWN);
}
static inline const char * spa_type_video_format_to_short_name(uint32_t type)
{
	return spa_type_to_short_name(type, spa_type_video_format, "UNKNOWN");
}

#define SPA_TYPE_INFO_VideoFlags	SPA_TYPE_INFO_FLAGS_BASE "VideoFlags"
#define SPA_TYPE_INFO_VIDEO_FLAGS_BASE	SPA_TYPE_INFO_VideoFlags ":"

static const struct spa_type_info spa_type_video_flags[] = {

	{ SPA_VIDEO_FLAG_NONE, SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FLAGS_BASE "none", NULL },
	{ SPA_VIDEO_FLAG_VARIABLE_FPS, SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FLAGS_BASE "variable-fps", NULL },
	{ SPA_VIDEO_FLAG_PREMULTIPLIED_ALPHA, SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FLAGS_BASE "premultiplied-alpha", NULL },
	{ SPA_VIDEO_FLAG_MODIFIER, SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_FLAGS_BASE "modifier", NULL },
	{ 0, 0, NULL, NULL },
};

#define SPA_TYPE_INFO_VideoInterlaceMode		SPA_TYPE_INFO_ENUM_BASE "VideoInterlaceMode"
#define SPA_TYPE_INFO_VIDEO_INTERLACE_MODE_BASE		SPA_TYPE_INFO_VideoInterlaceMode ":"

static const struct spa_type_info spa_type_video_interlace_mode[] = {
	{ SPA_VIDEO_INTERLACE_MODE_PROGRESSIVE,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_INTERLACE_MODE_BASE "progressive", NULL },
	{ SPA_VIDEO_INTERLACE_MODE_INTERLEAVED,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_INTERLACE_MODE_BASE "interleaved", NULL },
	{ SPA_VIDEO_INTERLACE_MODE_MIXED,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_INTERLACE_MODE_BASE "mixed", NULL },
	{ SPA_VIDEO_INTERLACE_MODE_FIELDS,	SPA_TYPE_Int, SPA_TYPE_INFO_VIDEO_INTERLACE_MODE_BASE "fields", NULL },
	{ 0, 0, NULL, NULL },
};

/**
 * \}
 */

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif /* SPA_VIDEO_RAW_TYPES_H */
