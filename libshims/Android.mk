LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := ril_shim.c
LOCAL_SHARED_LIBRARIES := liblog libcutils libbinder libutils
LOCAL_MODULE := libril_shim
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := libmmcamera_sr130pc20_shim.cpp
LOCAL_MODULE := libmmcamera_sr130pc20_shim
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)
