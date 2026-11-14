/*
 * Copyright (C) 2024 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_dalvik_heap.h>
#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t soda_cn_info = {
    .hwc_value = "",
    .sku_value = "",
    .project_name = "20021",

    .brand = "OPPO",
    .device = "OP4E35",
    .marketname = "OPPO A32",
    .model = "PDVM00",
    .build_fingerprint = "OPPO/PDVM00/OP4E35:11/RKQ1.201217.002/1716954220938:user/release-keys",

    .nfc = false,
};

static const variant_info_t soda_in_info = {
    .hwc_value = "",
    .sku_value = "",
    .project_name = "20221",

    .brand = "OPPO",
    .device = "OP4EFDL1",
    .marketname = "OPPO A53",
    .model = "CPH2127",
    .build_fingerprint = "OPPO/CPH2127/OP4EFDL1:12/RKQ1.211119.001/Q.202510132233:user/release-keys",

    .nfc = false,
};

// PDVT00: same FA218 board as PDVM00, stock prop ships no market name
static const variant_info_t soda_t_info = {
    .hwc_value = "",
    .sku_value = "",
    .project_name = "20022",

    .brand = "OPPO",
    .device = "OP4E36",
    .marketname = "PDVT00",
    .model = "PDVT00",
    .build_fingerprint = "OPPO/PDVT00/OP4E36:11/RKQ1.201217.002/1716954220938:user/release-keys",

    .nfc = false,
};

static const std::vector<variant_info_t> variants = {
    soda_cn_info,
    soda_in_info,
    soda_t_info,
};

void vendor_load_properties() {
    search_variant(variants);
    set_dalvik_heap();
}
