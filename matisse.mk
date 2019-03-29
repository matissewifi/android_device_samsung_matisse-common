#
# Copyright (C) 2014 The CyanogenMod Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# inherit from common msm8226
-include device/samsung/msm8226-common/msm8226.mk

LOCAL_PATH := device/samsung/matisse-common

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

# A list of dpis to select prebuilt apk, in precedence order.
PRODUCT_AAPT_PREBUILT_DPI := hdpi mdpi

$(call inherit-product, frameworks/native/build/tablet-10in-xhdpi-2048-dalvik-heap.mk)

$(call inherit-product-if-exists, frameworks/native/build/tablet-10in-xhdpi-2048-hwui-memory.mk)

# Audio
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/audio/mixer_paths.xml:$(TARGET_OUT_ETC)/system/etc/mixer_paths.xml

# Bluetooth
BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := $(LOCAL_PATH)/bluetooth

# Boot animation
TARGET_SCREEN_HEIGHT := 800
TARGET_SCREEN_WIDTH := 1280

# Camera
PRODUCT_PACKAGES += \
    libmmcamera_sr130pc20_shim

# Charger
PRODUCT_PACKAGES += \
    charger_res_images

# Display
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sf.lcd_density=160

# Graphics
PRODUCT_AAPT_CONFIG := xlarge
PRODUCT_AAPT_PREF_CONFIG := xhdpi

# Gello
PRODUCT_PACKAGES += \
    Gello

# IPv6 tethering
PRODUCT_PACKAGES += \
    ebtables \
    ethertypes

# Keylayouts
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/keylayout/sec_touchscreen.kl:system/usr/keylayout/sec_touchscreen.kl \
    $(LOCAL_PATH)/keylayout/atmel_mxt_ts.kl:system/usr/keylayout/atmel_mxt_ts.kl \
	$(LOCAL_PATH)/keylayout/cyttsp-i2c.kl:system/usr/keylayout/cyttsp-i2c.kl \
    $(LOCAL_PATH)/keylayout/keypad_8960.kl:system/usr/keylayout/keypad_8960.kl \
    $(LOCAL_PATH)/keylayout/Vendor_04e8_Product_7021.kl:system/usr/keylayout/Vendor_04e8_Product_7021.kl

# Lights
PRODUCT_PACKAGES += \
    lights.msm8226

# Launcher
PRODUCT_PACKAGES += \
    Launcher3

# Overlays
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay
PRODUCT_CHARACTERISTICS := tablet

# Camera
PRODUCT_PACKAGES += \
    camera.msm8226 \
    libboringssl-compat \
    libstlport \
    libxml2 \
    Camera2

# Input device
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/idc/sec_e-pen.idc:$(TARGET_OUT_ETC)/system/usr/idc/sec_e-pen.idc \
    $(LOCAL_PATH)/idc/sec_touchscreen.idc:$(TARGET_OUT_ETC)/system/usr/idc/sec_touchscreen.idc \
    $(LOCAL_PATH)/idc/Synaptics_HID_TouchPad.idc:$(TARGET_OUT_ETC)/system/usr/idc/Synaptics_HID_TouchPad.idc \
    $(LOCAL_PATH)/idc/Synaptics_RMI4_TouchPad_Sensor.idc:$(TARGET_OUT_ETC)/system/usr/idc/Synaptics_RMI4_TouchPad_Sensor.idc

# matisse Permissions 
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/android.hardware.camera.xml:$(TARGET_OUT_ETC)/system/etc/permissions/android.hardware.camera.xml \
    frameworks/native/data/etc/android.hardware.ethernet.xml:$(TARGET_OUT_ETC)/system/etc/permissions/android.hardware.ethernet.xml \
    frameworks/native/data/etc/android.hardware.sensor.gyroscope.xml:$(TARGET_OUT_ETC)/system/etc/permissions/android.hardware.sensor.gyroscope.xml \
    frameworks/native/data/etc/android.software.midi.xml:$(TARGET_OUT_ETC)/system/etc/permissions/android.software.midi.xml \
    frameworks/native/data/etc/android.hardware.hdmi.cec.xml:$(TARGET_OUT_ETC)/system/etc/permissions/android.hardware.hdmi.cec.xml \
    frameworks/native/data/etc/com.nxp.mifare.xml:$(TARGET_OUT_ETC)/system/etc/permissions/com.nxp.mifare.xml \
    frameworks/native/data/etc/tablet_core_hardware.xml:$(TARGET_OUT_ETC)/system/etc/permissions/tablet_core_hardware.xml

# Radio
PRODUCT_PACKAGES += \
    libshim_ril \
    libprotobuf-cpp-full

# Ramdisk
PRODUCT_PACKAGES += \
    fstab.qcom \
    init.qcom.bt.sh \
    init.qcom.power.rc \
    init.qcom.rc \
    init.qcom.usb.rc \
    init.sec.boot.sh \
    init.target.rc \
    ueventd.qcom.rc

# WCNSS
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/wifi/WCNSS_qcom_cfg.ini:system/etc/wifi/WCNSS_qcom_cfg.ini \
    $(LOCAL_PATH)/wifi/WCNSS_cfg.dat:system/etc/firmware/wlan/prima/WCNSS_cfg.dat \
    $(LOCAL_PATH)/wifi/WCNSS_qcom_wlan_nv.bin:system/etc/firmware/wlan/prima/WCNSS_qcom_wlan_nv.bin

# Wifi
PRODUCT_PACKAGES += \
    hostapd \
    libqsap_sdk \
    libQWiFiSoftApCfg \
    libwcnss_qmi \
    libwpa_client \
    wcnss_service \
    wpa_supplicant

PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/wifi/hostapd_default.conf:system/etc/hostapd/hostapd_default.conf \
    $(LOCAL_PATH)/wifi/p2p_supplicant_overlay.conf:system/etc/wifi/p2p_supplicant_overlay.conf \
    $(LOCAL_PATH)/wifi/wpa_supplicant_overlay.conf:system/etc/wifi/wpa_supplicant_overlay.conf \
	$(LOCAL_PATH)/wifi/wpa_supplicant.conf:system/etc/wifi/wpa_supplicant.conf

# Get non-open-source specific aspects
$(call inherit-product-if-exists, vendor/samsung/matisse-common/matisse-common-vendor.mk)
