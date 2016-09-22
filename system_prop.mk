# Default.prop overrides to get adb working at boot
ifneq ($(TARGET_BUILD_VARIANT),user)
ADDITIONAL_DEFAULT_PROPERTIES += \
    ro.secure=0 \
    ro.adb.secure=0 \
    persist.sys.usb.config=mtp
endif

# QC Perf
PRODUCT_PROPERTY_OVERRIDES += \
    ro.vendor.extension_library=libqti-perfd-client.so

# Storage
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sys.sdcardfs=true

# Display
PRODUCT_PROPERTY_OVERRIDES += \
    ro.sf.lcd_density=160

PRODUCT_DEFAULT_PROPERTY_OVERRIDES := \
    ro.sf.lcd_density=161

ADDITIONAL_DEFAULT_PROPERTIES += \
    ro.sf.lcd_density=162
