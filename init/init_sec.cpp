#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>
#include "init_sec.h"

#ifndef BACKLIGHT_PATH
#define BACKLIGHT_PATH          "/sys/class/leds/lcd-backlight/brightness"
#endif
#define BACKLIGHT_ON_LEVEL      100

#define LOGE(x...) do { KLOG_ERROR("charger", x); } while (0)
#define LOGW(x...) do { KLOG_WARNING("charger", x); } while (0)
#define LOGV(x...) do { KLOG_DEBUG("charger", x); } while (0)

static const GRFont* gr_font = NULL;

static const GRFont* get_font()
{
    return gr_font;
}

void init_target_properties(void)
{
		
    	std::string bootloader = property_get("ro.bootloader");

    	if (bootloader.find("T530NU") == 0) {
            /* matissewifiue */
            property_set("ro.build.fingerprint", "samsung/matissewifiue/matissewifi:5.0.2/LRX22G/T530NUU1BOJ4:user/release-keys");
            property_set("ro.build.description", "matissewifiue-user 5.0.2 LRX22G T530NUU1BOJ4 release-keys");            
			property_set("ro.product.product", "matissewifi");
            property_set("ro.product.device", "matissewifi");
			property_set("ro.product.model", "SM-T530NU");
      	    property_set("ro.carrier", "wifi-only");
		    property_set("ro.radio.noril", "1");
		}
		else if (bootloader.find("T530XX") == 0) {
            /* matissewifixx */
			return;
            /*property_set("ro.build.fingerprint", "samsung/matissewifixx/matissewifi:5.0.2/LRX22G/T530XXU1BOJ4:user/release-keys");
            property_set("ro.build.description", "matissewifixx-user 5.0.2 LRX22G T530XXU1BOJ4 release-keys");
            property_set("ro.product.model", "SM-T530");
		    property_set("ro.product.name", "matissewifi");
            property_set("ro.product.device", "matissewifi");
	      	property_set("ro.carrier", "wifi-only");
            property_set("ro.radio.noril", "1");*/
		}
		else if (bootloader.find("T531XX") == 0) {
            /* matisse3gxx */
            property_set("ro.build.fingerprint", "samsung/matisse3gxx/matisse3g:5.0.2/LRX22G/T531XXU1BOE6:user/release-keys");
            property_set("ro.build.description", "matisse3gxx-user 5.0.2 LRX22G T531XXU1BOE6 release-keys");
            property_set("ro.product.model", "SM-T531");
			property_set("ro.product.name", "matisse3g");
            property_set("ro.product.device", "matisse3g");
	    	property_set("telephony.lteOnCdmaDevice", "0");
			property_set("telephony.lteOnGsmDevice", "0");
      	    property_set("ro.telephony.ril_class", "SamsungMSM8226RIL");
		}
		else if (bootloader.find("T535XX") == 0) {
            /* matisseltexx */
            property_set("ro.build.fingerprint", "samsung/matisseltexx/matisselte:5.0.2/LRX22G/T535XXU1BOL1:user/release-keys");
            property_set("ro.build.description", "matisseltexx-user 5.0.2 LRX22G T535XXU1BOL1 release-keys");
            property_set("ro.product.model", "SM-T535");
			property_set("ro.product.name", "matisselte");
            property_set("ro.product.device", "matisselte");
	    	property_set("telephony.lteOnGsmDevice", "1");
      	    property_set("ro.telephony.default_network", "10");
      	    property_set("ro.telephony.ril_class", "SamsungMSM8226RIL");
		}
		else {
            /* matissewifi */
			return;
            /*property_set("ro.product.model", "SM-T5XX");
            property_set("ro.product.name", "matissexx");
			property_set("ro.product.device", "matisse");
		    property_set("ro.carrier", "wifi-only");
	    	property_set("ro.radio.noril", "1");*/
        }

    std::string device = property_get("ro.product.device");
    INFO("Found bootloader id %s setting build properties for %s device\n", bootloader.c_str(), device.c_str());
}

void healthd_board_init(struct healthd_config *config)
{
    config->batteryCapacityPath    = "/sys/class/power_supply/battery/capacity";
    config->batteryStatusPath      = "/sys/class/power_supply/battery/status";
    config->batteryVoltagePath     = "/sys/class/power_supply/battery/voltage_now";
    config->batteryPresentPath     = "/sys/class/power_supply/battery/present";
    config->batteryHealthPath      = "/sys/class/power_supply/battery/health";
    config->batteryTemperaturePath = "/sys/class/power_supply/battery/temp";
    config->batteryTechnologyPath  = "/sys/class/power_supply/battery/technology";
}

#define STR_LEN 8
void healthd_board_mode_charger_draw_battery(
                struct android::BatteryProperties *batt_prop)
{
    char cap_str[STR_LEN];
    int x, y;
    int str_len_px;
    static int char_height = -1, char_width = -1;

    if (char_height == -1 && char_width == -1)
        gr_font_size(get_font(), &char_width, &char_height);
    snprintf(cap_str, (STR_LEN - 1), "%d%%", batt_prop->batteryLevel);
    str_len_px = gr_measure(get_font(), cap_str);
    x = (gr_fb_width() - str_len_px) / 2;
    y = (gr_fb_height() + char_height) / 2;
    gr_color(0xa4, 0xc6, 0x39, 255);
    gr_text(get_font(), x, y, cap_str, 0);
}

int healthd_board_battery_update(__attribute__((unused)) struct android::BatteryProperties *props)
{
    // return 0 to log periodic polled battery status to kernel log
    return 0;
}

void healthd_board_mode_charger_battery_update(struct android::BatteryProperties*)
{

}

void healthd_board_mode_charger_set_backlight(bool on)
{
    int fd;
    char buffer[10];

    if (access(BACKLIGHT_PATH, R_OK | W_OK) != 0)
    {
        LOGW("Backlight control not support\n");
        return;
    }

    memset(buffer, '\0', sizeof(buffer));
    fd = open(BACKLIGHT_PATH, O_RDWR);
    if (fd < 0) {
        LOGE("Could not open backlight node : %s\n", strerror(errno));
        return;
    }
    LOGV("Enabling backlight\n");
    snprintf(buffer, sizeof(buffer), "%d\n", on ? BACKLIGHT_ON_LEVEL : 0);
    if (write(fd, buffer,strlen(buffer)) < 0) {
        LOGE("Could not write to backlight node : %s\n", strerror(errno));
    }
    close(fd);
}

void healthd_board_mode_charger_init()
{
    GRFont* tmp_font;
    int res = gr_init_font("font_log", &tmp_font);
    if (res == 0) {
        gr_font = tmp_font;
    } else {
        LOGW("Couldn't open font, falling back to default!\n");
        gr_font = gr_sys_font();
    }
}

void vendor_load_properties(void)
{
	/* set the device properties */
	init_target_properties();
}