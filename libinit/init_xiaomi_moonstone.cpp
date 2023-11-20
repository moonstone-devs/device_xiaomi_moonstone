/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t moonstone_global_info = {
    .hwc_value = "Global",
    .model_value = "S88006AA1",

    .brand = "POCO",
    .device = "moonstone",
    .marketname = "POCO X5 5G",
    .model = "22111317PG",
    .name = "moonstone_p_global",
    .build_fingerprint = "POCO/moonstone/moonstone:12/SKQ1.220303.001/V13.0.4.0.SMPIDXM:user/release-keys",

    .nfc = true,
};

static const variant_info_t moonstone_in_info = {
    .hwc_value = "India",
    .model_value = "S88006AA1",

    .brand = "POCO",
    .device = "moonstone",
    .marketname = "POCO X5 5G",
    .model = "22111317PI",
    .name = "moonstone_p_in",
    .build_fingerprint = "POCO/moonstone/moonstone:12/SKQ1.220303.001/V13.0.4.0.SMPIDXM:user/release-keys",
};

static const std::vector<variant_info_t> variants = {
    moonstone_global_info,
    moonstone_in_info
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
