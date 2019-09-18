/*
 * Copyright (C) 2014 The CyanogenMod Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define CAMERA_PARAMETERS_EXTRA_C \
const char android::CameraParameters::KEY_SUPPORTED_ISO_MODES[] = "iso-values"; \
const char android::CameraParameters::KEY_DIS[] = "dis"; \
const char android::CameraParameters::DIS_DISABLE[] = "disable"; \
const char android::CameraParameters::KEY_FACE_DETECTION[] = "face-detection"; \
const char android::CameraParameters::KEY_SUPPORTED_FACE_DETECTION[] = "face-detection-values"; \
const char android::CameraParameters::FACE_DETECTION_OFF[] = "off"; \
const char android::CameraParameters::FACE_DETECTION_ON[] = "on"; \
const char android::CameraParameters::KEY_ZSL[] = "zsl"; \
const char android::CameraParameters::KEY_SUPPORTED_ZSL_MODES[] = "zsl-values"; \
const char android::CameraParameters::ZSL_OFF[] = "off"; \
const char android::CameraParameters::ZSL_ON[] = "on"; \
const char android::CameraParameters::KEY_ISO_MODE[] = "iso"; \
const char android::CameraParameters::KEY_CAMERA_MODE[] = "camera-mode"; \
const char android::CameraParameters::KEY_SAMSUNG_CAMERA_MODE[] = "cam_mode"; \
const char android::CameraParameters::KEY_SELECTABLE_ZONE_AF[] = "selectable-zone-af"; \
const char android::CameraParameters::KEY_SUPPORTED_SELECTABLE_ZONE_AF[] = "selectable-zone-af-values"; \
const char android::CameraParameters::SELECTABLE_ZONE_AF_AUTO[] = "auto"; \
const char android::CameraParameters::SELECTABLE_ZONE_AF_SPOT_METERING[] = "spot-metering"; \
const char android::CameraParameters::SELECTABLE_ZONE_AF_CENTER_WEIGHTED[] = "center-weighted"; \
const char android::CameraParameters::SELECTABLE_ZONE_AF_FRAME_AVERAGE[] = "frame-average"; \
const char android::CameraParameters::KEY_PREVIEW_FRAME_RATE_MODE[] = "preview-frame-rate-mode"; \
const char android::CameraParameters::KEY_SUPPORTED_PREVIEW_FRAME_RATE_MODES[] = "preview-frame-rate-modes"; \
const char android::CameraParameters::KEY_PREVIEW_FRAME_RATE_AUTO_MODE[] = "frame-rate-auto"; \
const char android::CameraParameters::KEY_PREVIEW_FRAME_RATE_FIXED_MODE[] = "frame-rate-fixed"; \
const char android::CameraParameters::KEY_SHARPNESS[] = "sharpness"; \
const char android::CameraParameters::KEY_SATURATION[] = "saturation"; \
const char android::CameraParameters::KEY_CONTRAST[] = "contrast"; \
const char android::CameraParameters::KEY_SCENE_DETECT[] = "scene-detect"; \
const char android::CameraParameters::KEY_SUPPORTED_SCENE_DETECT[] = "scene-detect-values"; \
const char android::CameraParameters::SCENE_DETECT_OFF[] = "off"; \
const char android::CameraParameters::SCENE_DETECT_ON[] = "on"; \
const char android::CameraParameters::KEY_WEATHER[] = "weather"; \
const char android::CameraParameters::KEY_CITYID[] = "contextualtag-cityid"; \
const char android::CameraParameters::KEY_TOUCH_AF_AEC[] = "touch-af-aec"; \
const char android::CameraParameters::KEY_SUPPORTED_TOUCH_AF_AEC[] = "touch-af-aec-values"; \
const char android::CameraParameters::TOUCH_AF_AEC_OFF[] = "touch-off"; \
const char android::CameraParameters::TOUCH_AF_AEC_ON[] = "touch-on"; \
const char android::CameraParameters::KEY_MEMORY_COLOR_ENHANCEMENT[] = "mce"; \
const char android::CameraParameters::KEY_LENSSHADE[] = "lensshade"; \
const char android::CameraParameters::KEY_REDEYE_REDUCTION[] = "redeye-reduction"; \
const char android::CameraParameters::KEY_SUPPORTED_REDEYE_REDUCTION[] = "redeye-reduction-values"; \
const char android::CameraParameters::REDEYE_REDUCTION_ENABLE[] = "enable"; \
const char android::CameraParameters::REDEYE_REDUCTION_DISABLE[] = "disable"; \
const char android::CameraParameters::KEY_GPS_LATITUDE_REF[] = "gps-latitude-ref"; \
const char android::CameraParameters::KEY_GPS_LONGITUDE_REF[] = "gps-longitude-ref"; \
const char android::CameraParameters::KEY_GPS_ALTITUDE_REF[] = "gps-altitude-ref"; \
const char android::CameraParameters::KEY_GPS_STATUS[] = "gps-status"; \
const char android::CameraParameters::KEY_EXIF_DATETIME[] = "exif-datetime"; \
const char android::CameraParameters::KEY_AUTO_EXPOSURE[] = "auto-exposure"; \
const char android::CameraParameters::KEY_SUPPORTED_AUTO_EXPOSURE[] = "auto-exposure-values"; \
const char android::CameraParameters::KEY_SUPPORTED_LENSSHADE_MODES[] = "lensshade-values"; \
const char android::CameraParameters::LENSSHADE_ENABLE[] = "enable"; \
const char android::CameraParameters::LENSSHADE_DISABLE[] = "disable"; \
const char android::CameraParameters::MCE_ENABLE[] = "enable"; \
const char android::CameraParameters::MCE_DISABLE[] = "disable"; \
const char android::CameraParameters::ISO_AUTO[] = "auto"; \
const char android::CameraParameters::ISO_HJR[] = "ISO_HJR"; \
const char android::CameraParameters::ISO_100[] = "ISO100"; \
const char android::CameraParameters::ISO_200[] = "ISO200"; \
const char android::CameraParameters::ISO_400[] = "ISO400"; \
const char android::CameraParameters::ISO_800[] = "ISO800"; \
const char android::CameraParameters::ISO_1600[] = "ISO1600"; \
const char android::CameraParameters::ISO_3200[] = "ISO3200"; \
const char android::CameraParameters::ISO_6400[] = "ISO6400"; \
const char android::CameraParameters::KEY_SUPPORTED_HFR_SIZES[] = "hfr-size-values"; \
const char android::CameraParameters::KEY_SUPPORTED_MEM_COLOR_ENHANCE_MODES[] = "mce-values"; \
const char android::CameraParameters::VIDEO_HFR_OFF[] = "off"; \
const char android::CameraParameters::VIDEO_HFR_2X[] = "60"; \
const char android::CameraParameters::VIDEO_HFR_3X[] = "90"; \
const char android::CameraParameters::VIDEO_HFR_4X[] = "120"; \
const char android::CameraParameters::KEY_VIDEO_HIGH_FRAME_RATE[] = "video-hfr"; \
const char android::CameraParameters::KEY_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[] = "video-hfr-values"; \
const char android::CameraParameters::KEY_HISTOGRAM[] = "histogram"; \
const char android::CameraParameters::KEY_SUPPORTED_HISTOGRAM_MODES[] = "histogram-values"; \
const char android::CameraParameters::HISTOGRAM_ENABLE[] = "enable"; \
const char android::CameraParameters::HISTOGRAM_DISABLE[] = "disable"; \
const char android::CameraParameters::SKIN_TONE_ENHANCEMENT_ENABLE[] = "enable"; \
const char android::CameraParameters::SKIN_TONE_ENHANCEMENT_DISABLE[] = "disable"; \
const char android::CameraParameters::KEY_SKIN_TONE_ENHANCEMENT[] = "skinToneEnhancement"; \
const char android::CameraParameters::KEY_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODES[] = "skinToneEnhancement-values"; \
const char android::CameraParameters::DENOISE_OFF[] = "denoise-off"; \
const char android::CameraParameters::DENOISE_ON[] = "denoise-on"; \
const char android::CameraParameters::KEY_DENOISE[] = "denoise"; \
const char android::CameraParameters::KEY_SUPPORTED_DENOISE[] = "denoise-values"; \
const char android::CameraParameters::EFFECT_EMBOSS[] = "emboss"; \
const char android::CameraParameters::EFFECT_SKETCH[] = "sketch"; \
const char android::CameraParameters::EFFECT_NEON[] = "neon"; \
const char android::CameraParameters::SCENE_MODE_FLOWERS[] = "flowers"; \
const char android::CameraParameters::SCENE_MODE_AR[] = "AR"; \
const char android::CameraParameters::PIXEL_FORMAT_YUV420SP_ADRENO[] = "yuv420sp-adreno"; \
const char android::CameraParameters::PIXEL_FORMAT_RAW[] = "raw"; \
const char android::CameraParameters::PIXEL_FORMAT_YV12[] = "yuv420p"; \
const char android::CameraParameters::PIXEL_FORMAT_NV12[] = "nv12"; \
const char android::CameraParameters::EFFECT_CARTOONIZE[] = "cartoonize"; \
const char android::CameraParameters::EFFECT_POINT_RED_YELLOW[] = "point-red-yellow"; \
const char android::CameraParameters::EFFECT_POINT_GREEN[] = "point-green"; \
const char android::CameraParameters::EFFECT_POINT_BLUE[] = "point-blue"; \
const char android::CameraParameters::EFFECT_VINTAGE_COLD[] = "vintage-cold"; \
const char android::CameraParameters::EFFECT_VINTAGE_WARM[] = "vintage-warm"; \
const char android::CameraParameters::EFFECT_WASHED[] = "washed"; \
const char android::CameraParameters::SCENE_MODE_BACKLIGHT[] = "backlight"; \
const char android::CameraParameters::SCENE_MODE_ASD[] = "asd"; \
int android::CameraParameters::getInt64(__attribute__((__unused__)) const char *key) const { return -1; } \
const char *android::CameraParameters::getPreviewFrameRateMode() const { return get(KEY_PREVIEW_FRAME_RATE_MODE); }; \
void android::CameraParameters::setPreviewFrameRateMode(const char *mode) { set(KEY_PREVIEW_FRAME_RATE_MODE, mode); }; \
void android::CameraParameters::getMeteringAreaCenter(int *x, int *y) const { }; \
void android::CameraParameters::setTouchIndexAec(int x, int y) { }; \
void android::CameraParameters::setTouchIndexAf(int x, int y) { }; \
void android::CameraParameters::setPreviewFpsRange(int minFPS, int maxFPS) { };

#define CAMERA_PARAMETERS_EXTRA_H \
    static const char KEY_SUPPORTED_ISO_MODES[]; \
    static const char KEY_DIS[]; \
    static const char DIS_DISABLE[]; \
    static const char KEY_FACE_DETECTION[]; \
    static const char KEY_SUPPORTED_FACE_DETECTION[]; \
    static const char FACE_DETECTION_OFF[]; \
    static const char FACE_DETECTION_ON[]; \
    static const char KEY_ZSL[]; \
    static const char KEY_SUPPORTED_ZSL_MODES[]; \
    static const char ZSL_OFF[]; \
    static const char ZSL_ON[]; \
    static const char KEY_ISO_MODE[]; \
    static const char KEY_CAMERA_MODE[]; \
    static const char KEY_SAMSUNG_CAMERA_MODE[]; \
    static const char KEY_SELECTABLE_ZONE_AF[]; \
    static const char KEY_SUPPORTED_SELECTABLE_ZONE_AF[]; \
    static const char SELECTABLE_ZONE_AF_AUTO[]; \
    static const char SELECTABLE_ZONE_AF_SPOT_METERING[]; \
    static const char SELECTABLE_ZONE_AF_CENTER_WEIGHTED[]; \
    static const char SELECTABLE_ZONE_AF_FRAME_AVERAGE[]; \
    static const char KEY_PREVIEW_FRAME_RATE_MODE[]; \
    static const char KEY_SUPPORTED_PREVIEW_FRAME_RATE_MODES[]; \
    static const char KEY_PREVIEW_FRAME_RATE_AUTO_MODE[]; \
    static const char KEY_PREVIEW_FRAME_RATE_FIXED_MODE[]; \
    static const char KEY_SHARPNESS[]; \
    static const char KEY_SATURATION[]; \
    static const char KEY_CONTRAST[]; \
    static const char KEY_SCENE_DETECT[]; \
    static const char KEY_SUPPORTED_SCENE_DETECT[]; \
    static const char SCENE_DETECT_OFF[]; \
    static const char SCENE_DETECT_ON[]; \
    static const char KEY_WEATHER[]; \
    static const char KEY_CITYID[]; \
    static const char KEY_TOUCH_AF_AEC[]; \
    static const char KEY_SUPPORTED_TOUCH_AF_AEC[]; \
    static const char TOUCH_AF_AEC_OFF[]; \
    static const char TOUCH_AF_AEC_ON[]; \
    static const char KEY_MEMORY_COLOR_ENHANCEMENT[]; \
    static const char KEY_LENSSHADE[]; \
    static const char KEY_REDEYE_REDUCTION[]; \
    static const char KEY_SUPPORTED_REDEYE_REDUCTION[]; \
    static const char REDEYE_REDUCTION_ENABLE[]; \
    static const char REDEYE_REDUCTION_DISABLE[]; \
    static const char KEY_GPS_LATITUDE_REF[]; \
    static const char KEY_GPS_LONGITUDE_REF[]; \
    static const char KEY_GPS_ALTITUDE_REF[]; \
    static const char KEY_GPS_STATUS[]; \
    static const char KEY_EXIF_DATETIME[]; \
    static const char KEY_AUTO_EXPOSURE[]; \
    static const char KEY_SUPPORTED_AUTO_EXPOSURE[]; \
    static const char KEY_SUPPORTED_LENSSHADE_MODES[]; \
    static const char LENSSHADE_ENABLE[]; \
    static const char LENSSHADE_DISABLE[]; \
    static const char MCE_ENABLE[]; \
    static const char MCE_DISABLE[]; \
    static const char ISO_AUTO[]; \
    static const char ISO_HJR[]; \
    static const char ISO_100[]; \
    static const char ISO_200[]; \
    static const char ISO_400[]; \
    static const char ISO_800[]; \
    static const char ISO_1600[]; \
    static const char ISO_3200[]; \
    static const char ISO_6400[]; \
    static const char KEY_SUPPORTED_HFR_SIZES[]; \
    static const char KEY_SUPPORTED_MEM_COLOR_ENHANCE_MODES[]; \
    static const char VIDEO_HFR_OFF[]; \
    static const char VIDEO_HFR_2X[]; \
    static const char VIDEO_HFR_3X[]; \
    static const char VIDEO_HFR_4X[]; \
    static const char KEY_VIDEO_HIGH_FRAME_RATE[]; \
    static const char KEY_SUPPORTED_VIDEO_HIGH_FRAME_RATE_MODES[]; \
    static const char KEY_HISTOGRAM[]; \
    static const char KEY_SUPPORTED_HISTOGRAM_MODES[]; \
    static const char HISTOGRAM_ENABLE[]; \
    static const char HISTOGRAM_DISABLE[]; \
    static const char SKIN_TONE_ENHANCEMENT_ENABLE[]; \
    static const char SKIN_TONE_ENHANCEMENT_DISABLE[]; \
    static const char KEY_SKIN_TONE_ENHANCEMENT[]; \
    static const char KEY_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODES[]; \
    static const char DENOISE_OFF[]; \
    static const char DENOISE_ON[]; \
    static const char KEY_DENOISE[]; \
    static const char KEY_SUPPORTED_DENOISE[]; \
    static const char EFFECT_EMBOSS[]; \
    static const char EFFECT_SKETCH[]; \
    static const char EFFECT_NEON[]; \
    static const char SCENE_MODE_FLOWERS[]; \
    static const char SCENE_MODE_AR[]; \
    static const char PIXEL_FORMAT_YUV420SP_ADRENO[]; \
    static const char PIXEL_FORMAT_RAW[]; \
    static const char PIXEL_FORMAT_YV12[]; \
    static const char PIXEL_FORMAT_NV12[]; \
    static const char EFFECT_CARTOONIZE[]; \
    static const char EFFECT_POINT_RED_YELLOW[]; \
    static const char EFFECT_POINT_GREEN[]; \
    static const char EFFECT_POINT_BLUE[]; \
    static const char EFFECT_VINTAGE_COLD[]; \
    static const char EFFECT_VINTAGE_WARM[]; \
    static const char EFFECT_WASHED[]; \
    static const char SCENE_MODE_BACKLIGHT[]; \
    static const char SCENE_MODE_ASD[]; \
    int getInt64(const char *key) const; \
    const char *getPreviewFrameRateMode() const; \
    void setPreviewFrameRateMode(const char *mode); \
    void getMeteringAreaCenter(int *x, int *y) const; \
    void setTouchIndexAec(int x, int y); \
    void setTouchIndexAf(int x, int y); \
    void setPreviewFpsRange(int minFPS, int maxFPS);

