#include "minui/minui.h"
#include <cutils/klog.h>
#include <fcntl.h>
#include "healthd.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "log.h"
#include "util.h"
#include "vendor_init.h"
#include "property_service.h"

void init_target_properties();
enum device_variant {
    T530,
    T530NU,
    T530XX,
    T531XX,
    T535XX,
};

device_variant match(std::string bl)
{
    if (bl.find("T530NU") != std::string::npos) {
        return T530NU;
    } else if (bl.find("T530XX") != std::string::npos) {
        return T530XX;
    } else if (bl.find("T531XX") != std::string::npos) {
        return T531XX;
    } else if (bl.find("T535XX") != std::string::npos) {
        return T535XX;
    } else {
        return T530;
    }
}
