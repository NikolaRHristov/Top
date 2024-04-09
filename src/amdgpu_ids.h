
/*
 * Copyright (C) 2023 Advanced Micro Devices, Inc. All rights reserved.
 *
 * This file is modified from libdrm. MIT License.
 *
 * URL: https://gitlab.freedesktop.org/mesa/drm/-/blob/main/data/amdgpu.ids
 * The amdgpu_ids has to be modified after new GPU release.
 *
 */

#ifndef AMDGPU_IDS_H
#define AMDGPU_IDS_H

struct amdgpu_id_struct {
  uint32_t asic_id;
  uint32_t pci_rev_id;
  const char *name;
};

static struct amdgpu_id_struct amdgpu_ids[] = {
    {0x1309, 0x00, "AMD Radeon R7 Graphics"},
    {0x130A, 0x00, "AMD Radeon R6 Graphics"},
    {0x130B, 0x00, "AMD Radeon R4 Graphics"},
    {0x130C, 0x00, "AMD Radeon R7 Graphics"},
    {0x130D, 0x00, "AMD Radeon R6 Graphics"},
    {0x130E, 0x00, "AMD Radeon R5 Graphics"},
    {0x130F, 0x00, "AMD Radeon R7 Graphics"},
    {0x130F, 0xD4, "AMD Radeon R7 Graphics"},
    {0x130F, 0xD5, "AMD Radeon R7 Graphics"},
    {0x130F, 0xD6, "AMD Radeon R7 Graphics"},
    {0x130F, 0xD7, "AMD Radeon R7 Graphics"},
    {0x1313, 0x00, "AMD Radeon R7 Graphics"},
    {0x1313, 0xD4, "AMD Radeon R7 Graphics"},
    {0x1313, 0xD5, "AMD Radeon R7 Graphics"},
    {0x1313, 0xD6, "AMD Radeon R7 Graphics"},
    {0x1315, 0x00, "AMD Radeon R5 Graphics"},
    {0x1315, 0xD4, "AMD Radeon R5 Graphics"},
    {0x1315, 0xD5, "AMD Radeon R5 Graphics"},
    {0x1315, 0xD6, "AMD Radeon R5 Graphics"},
    {0x1315, 0xD7, "AMD Radeon R5 Graphics"},
    {0x1316, 0x00, "AMD Radeon R5 Graphics"},
    {0x1318, 0x00, "AMD Radeon R5 Graphics"},
    {0x131B, 0x00, "AMD Radeon R4 Graphics"},
    {0x131C, 0x00, "AMD Radeon R7 Graphics"},
    {0x131D, 0x00, "AMD Radeon R6 Graphics"},
    {0x15D8, 0x00, "AMD Radeon RX Vega 8 Graphics WS"},
    {0x15D8, 0x91, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0x91, "AMD Ryzen Embedded R1606G with Radeon Vega Gfx"},
    {0x15D8, 0x92, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0x92, "AMD Ryzen Embedded R1505G with Radeon Vega Gfx"},
    {0x15D8, 0x93, "AMD Radeon Vega 1 Graphics"},
    {0x15D8, 0xA1, "AMD Radeon Vega 10 Graphics"},
    {0x15D8, 0xA2, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xA3, "AMD Radeon Vega 6 Graphics"},
    {0x15D8, 0xA4, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xB1, "AMD Radeon Vega 10 Graphics"},
    {0x15D8, 0xB2, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xB3, "AMD Radeon Vega 6 Graphics"},
    {0x15D8, 0xB4, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xC1, "AMD Radeon Vega 10 Graphics"},
    {0x15D8, 0xC2, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xC3, "AMD Radeon Vega 6 Graphics"},
    {0x15D8, 0xC4, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xC5, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xC8, "AMD Radeon Vega 11 Graphics"},
    {0x15D8, 0xC9, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xCA, "AMD Radeon Vega 11 Graphics"},
    {0x15D8, 0xCB, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xCC, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xCE, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xCF, "AMD Ryzen Embedded R1305G with Radeon Vega Gfx"},
    {0x15D8, 0xD1, "AMD Radeon Vega 10 Graphics"},
    {0x15D8, 0xD2, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xD3, "AMD Radeon Vega 6 Graphics"},
    {0x15D8, 0xD4, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xD8, "AMD Radeon Vega 11 Graphics"},
    {0x15D8, 0xD9, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xDA, "AMD Radeon Vega 11 Graphics"},
    {0x15D8, 0xDB, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xDB, "AMD Radeon Vega 8 Graphics"},
    {0x15D8, 0xDC, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xDD, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xDE, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xDF, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xE3, "AMD Radeon Vega 3 Graphics"},
    {0x15D8, 0xE4, "AMD Ryzen Embedded R1102G with Radeon Vega Gfx"},
    {0x15DD, 0x81, "AMD Ryzen Embedded V1807B with Radeon Vega Gfx"},
    {0x15DD, 0x82, "AMD Ryzen Embedded V1756B with Radeon Vega Gfx"},
    {0x15DD, 0x83, "AMD Ryzen Embedded V1605B with Radeon Vega Gfx"},
    {0x15DD, 0x84, "AMD Radeon Vega 6 Graphics"},
    {0x15DD, 0x85, "AMD Ryzen Embedded V1202B with Radeon Vega Gfx"},
    {0x15DD, 0x86, "AMD Radeon Vega 11 Graphics"},
    {0x15DD, 0x88, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xC1, "AMD Radeon Vega 11 Graphics"},
    {0x15DD, 0xC2, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xC3, "AMD Radeon Vega 3 / 10 Graphics"},
    {0x15DD, 0xC4, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xC5, "AMD Radeon Vega 3 Graphics"},
    {0x15DD, 0xC6, "AMD Radeon Vega 11 Graphics"},
    {0x15DD, 0xC8, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xC9, "AMD Radeon Vega 11 Graphics"},
    {0x15DD, 0xCA, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xCB, "AMD Radeon Vega 3 Graphics"},
    {0x15DD, 0xCC, "AMD Radeon Vega 6 Graphics"},
    {0x15DD, 0xCE, "AMD Radeon Vega 3 Graphics"},
    {0x15DD, 0xCF, "AMD Radeon Vega 3 Graphics"},
    {0x15DD, 0xD0, "AMD Radeon Vega 10 Graphics"},
    {0x15DD, 0xD1, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xD3, "AMD Radeon Vega 11 Graphics"},
    {0x15DD, 0xD5, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xD6, "AMD Radeon Vega 11 Graphics"},
    {0x15DD, 0xD7, "AMD Radeon Vega 8 Graphics"},
    {0x15DD, 0xD8, "AMD Radeon Vega 3 Graphics"},
    {0x15DD, 0xD9, "AMD Radeon Vega 6 Graphics"},
    {0x15DD, 0xE1, "AMD Radeon Vega 3 Graphics"},
    {0x15DD, 0xE2, "AMD Radeon Vega 3 Graphics"},
    {0x163F, 0xAE, "AMD Custom GPU 0405"},
    {0x6600, 0x00, "AMD Radeon HD 8600 / 8700M"},
    {0x6600, 0x81, "AMD Radeon R7 M370"},
    {0x6601, 0x00, "AMD Radeon HD 8500M / 8700M"},
    {0x6604, 0x00, "AMD Radeon R7 M265 Series"},
    {0x6604, 0x81, "AMD Radeon R7 M350"},
    {0x6605, 0x00, "AMD Radeon R7 M260 Series"},
    {0x6605, 0x81, "AMD Radeon R7 M340"},
    {0x6606, 0x00, "AMD Radeon HD 8790M"},
    {0x6607, 0x00, "AMD Radeon R5 M240"},
    {0x6608, 0x00, "AMD FirePro W2100"},
    {0x6610, 0x00, "AMD Radeon R7 200 Series"},
    {0x6610, 0x81, "AMD Radeon R7 350"},
    {0x6610, 0x83, "AMD Radeon R5 340"},
    {0x6610, 0x87, "AMD Radeon R7 200 Series"},
    {0x6611, 0x00, "AMD Radeon R7 200 Series"},
    {0x6611, 0x87, "AMD Radeon R7 200 Series"},
    {0x6613, 0x00, "AMD Radeon R7 200 Series"},
    {0x6617, 0x00, "AMD Radeon R7 240 Series"},
    {0x6617, 0x87, "AMD Radeon R7 200 Series"},
    {0x6617, 0xC7, "AMD Radeon R7 240 Series"},
    {0x6640, 0x00, "AMD Radeon HD 8950"},
    {0x6640, 0x80, "AMD Radeon R9 M380"},
    {0x6646, 0x00, "AMD Radeon R9 M280X"},
    {0x6646, 0x80, "AMD Radeon R9 M385"},
    {0x6646, 0x80, "AMD Radeon R9 M470X"},
    {0x6647, 0x00, "AMD Radeon R9 M200X Series"},
    {0x6647, 0x80, "AMD Radeon R9 M380"},
    {0x6649, 0x00, "AMD FirePro W5100"},
    {0x6658, 0x00, "AMD Radeon R7 200 Series"},
    {0x665C, 0x00, "AMD Radeon HD 7700 Series"},
    {0x665D, 0x00, "AMD Radeon R7 200 Series"},
    {0x665F, 0x81, "AMD Radeon R7 360 Series"},
    {0x6660, 0x00, "AMD Radeon HD 8600M Series"},
    {0x6660, 0x81, "AMD Radeon R5 M335"},
    {0x6660, 0x83, "AMD Radeon R5 M330"},
    {0x6663, 0x00, "AMD Radeon HD 8500M Series"},
    {0x6663, 0x83, "AMD Radeon R5 M320"},
    {0x6664, 0x00, "AMD Radeon R5 M200 Series"},
    {0x6665, 0x00, "AMD Radeon R5 M230 Series"},
    {0x6665, 0x83, "AMD Radeon R5 M320"},
    {0x6665, 0xC3, "AMD Radeon R5 M435"},
    {0x6666, 0x00, "AMD Radeon R5 M200 Series"},
    {0x6667, 0x00, "AMD Radeon R5 M200 Series"},
    {0x666F, 0x00, "AMD Radeon HD 8500M"},
    {0x66A1, 0x02, "AMD Instinct MI60 / MI50"},
    {0x66A1, 0x06, "AMD Radeon Pro VII"},
    {0x66AF, 0xC1, "AMD Radeon VII"},
    {0x6780, 0x00, "AMD FirePro W9000"},
    {0x6784, 0x00, "ATI FirePro V (FireGL V) Graphics Adapter"},
    {0x6788, 0x00, "ATI FirePro V (FireGL V) Graphics Adapter"},
    {0x678A, 0x00, "AMD FirePro W8000"},
    {0x6798, 0x00, "AMD Radeon R9 200 / HD 7900 Series"},
    {0x6799, 0x00, "AMD Radeon HD 7900 Series"},
    {0x679A, 0x00, "AMD Radeon HD 7900 Series"},
    {0x679B, 0x00, "AMD Radeon HD 7900 Series"},
    {0x679E, 0x00, "AMD Radeon HD 7800 Series"},
    {0x67A0, 0x00, "AMD Radeon FirePro W9100"},
    {0x67A1, 0x00, "AMD Radeon FirePro W8100"},
    {0x67B0, 0x00, "AMD Radeon R9 200 Series"},
    {0x67B0, 0x80, "AMD Radeon R9 390 Series"},
    {0x67B1, 0x00, "AMD Radeon R9 200 Series"},
    {0x67B1, 0x80, "AMD Radeon R9 390 Series"},
    {0x67B9, 0x00, "AMD Radeon R9 200 Series"},
    {0x67C0, 0x00, "AMD Radeon Pro WX 7100 Graphics"},
    {0x67C0, 0x80, "AMD Radeon E9550"},
    {0x67C2, 0x01, "AMD Radeon Pro V7350x2"},
    {0x67C2, 0x02, "AMD Radeon Pro V7300X"},
    {0x67C4, 0x00, "AMD Radeon Pro WX 7100 Graphics"},
    {0x67C4, 0x80, "AMD Radeon E9560 / E9565 Graphics"},
    {0x67C7, 0x00, "AMD Radeon Pro WX 5100 Graphics"},
    {0x67C7, 0x80, "AMD Radeon E9390 Graphics"},
    {0x67D0, 0x01, "AMD Radeon Pro V7350x2"},
    {0x67D0, 0x02, "AMD Radeon Pro V7300X"},
    {0x67DF, 0xC0, "AMD Radeon Pro 580X"},
    {0x67DF, 0xC1, "AMD Radeon RX 580 Series"},
    {0x67DF, 0xC2, "AMD Radeon RX 570 Series"},
    {0x67DF, 0xC3, "AMD Radeon RX 580 Series"},
    {0x67DF, 0xC4, "AMD Radeon RX 480 Graphics"},
    {0x67DF, 0xC5, "AMD Radeon RX 470 Graphics"},
    {0x67DF, 0xC6, "AMD Radeon RX 570 Series"},
    {0x67DF, 0xC7, "AMD Radeon RX 480 Graphics"},
    {0x67DF, 0xCF, "AMD Radeon RX 470 Graphics"},
    {0x67DF, 0xD7, "AMD Radeon RX 470 Graphics"},
    {0x67DF, 0xE0, "AMD Radeon RX 470 Series"},
    {0x67DF, 0xE1, "AMD Radeon RX 590 Series"},
    {0x67DF, 0xE3, "AMD Radeon RX Series"},
    {0x67DF, 0xE7, "AMD Radeon RX 580 Series"},
    {0x67DF, 0xEB, "AMD Radeon Pro 580X"},
    {0x67DF, 0xEF, "AMD Radeon RX 570 Series"},
    {0x67DF, 0xF7, "AMD Radeon RX P30PH"},
    {0x67DF, 0xFF, "AMD Radeon RX 470 Series"},
    {0x67E0, 0x00, "AMD Radeon Pro WX Series"},
    {0x67E3, 0x00, "AMD Radeon Pro WX 4100"},
    {0x67E8, 0x00, "AMD Radeon Pro WX Series"},
    {0x67E8, 0x01, "AMD Radeon Pro WX Series"},
    {0x67E8, 0x80, "AMD Radeon E9260 Graphics"},
    {0x67EB, 0x00, "AMD Radeon Pro V5300X"},
    {0x67EF, 0xC0, "AMD Radeon RX Graphics"},
    {0x67EF, 0xC1, "AMD Radeon RX 460 Graphics"},
    {0x67EF, 0xC2, "AMD Radeon Pro Series"},
    {0x67EF, 0xC3, "AMD Radeon RX Series"},
    {0x67EF, 0xC5, "AMD Radeon RX 460 Graphics"},
    {0x67EF, 0xC7, "AMD Radeon RX Graphics"},
    {0x67EF, 0xCF, "AMD Radeon RX 460 Graphics"},
    {0x67EF, 0xE0, "AMD Radeon RX 560 Series"},
    {0x67EF, 0xE1, "AMD Radeon RX Series"},
    {0x67EF, 0xE2, "AMD Radeon RX 560X"},
    {0x67EF, 0xE3, "AMD Radeon RX Series"},
    {0x67EF, 0xE5, "AMD Radeon RX 560 Series"},
    {0x67EF, 0xE7, "AMD Radeon RX 560 Series"},
    {0x67EF, 0xEF, "AMD Radeon 550 Series"},
    {0x67EF, 0xFF, "AMD Radeon RX 460 Graphics"},
    {0x67FF, 0xC0, "AMD Radeon Pro 465"},
    {0x67FF, 0xC1, "AMD Radeon RX 560 Series"},
    {0x67FF, 0xCF, "AMD Radeon RX 560 Series"},
    {0x67FF, 0xEF, "AMD Radeon RX 560 Series"},
    {0x67FF, 0xFF, "AMD Radeon RX 550 Series"},
    {0x6800, 0x00, "AMD Radeon HD 7970M"},
    {0x6801, 0x00, "AMD Radeon HD 8970M"},
    {0x6806, 0x00, "AMD Radeon R9 M290X"},
    {0x6808, 0x00, "AMD FirePro W7000"},
    {0x6808, 0x00, "ATI FirePro V (FireGL V) Graphics Adapter"},
    {0x6809, 0x00, "ATI FirePro W5000"},
    {0x6810, 0x00, "AMD Radeon R9 200 Series"},
    {0x6810, 0x81, "AMD Radeon R9 370 Series"},
    {0x6811, 0x00, "AMD Radeon R9 200 Series"},
    {0x6811, 0x81, "AMD Radeon R7 370 Series"},
    {0x6818, 0x00, "AMD Radeon HD 7800 Series"},
    {0x6819, 0x00, "AMD Radeon HD 7800 Series"},
    {0x6820, 0x00, "AMD Radeon R9 M275X"},
    {0x6820, 0x81, "AMD Radeon R9 M375"},
    {0x6820, 0x83, "AMD Radeon R9 M375X"},
    {0x6821, 0x00, "AMD Radeon R9 M200X Series"},
    {0x6821, 0x83, "AMD Radeon R9 M370X"},
    {0x6821, 0x87, "AMD Radeon R7 M380"},
    {0x6822, 0x00, "AMD Radeon E8860"},
    {0x6823, 0x00, "AMD Radeon R9 M200X Series"},
    {0x6825, 0x00, "AMD Radeon HD 7800M Series"},
    {0x6826, 0x00, "AMD Radeon HD 7700M Series"},
    {0x6827, 0x00, "AMD Radeon HD 7800M Series"},
    {0x6828, 0x00, "AMD FirePro W600"},
    {0x682B, 0x00, "AMD Radeon HD 8800M Series"},
    {0x682B, 0x87, "AMD Radeon R9 M360"},
    {0x682C, 0x00, "AMD FirePro W4100"},
    {0x682D, 0x00, "AMD Radeon HD 7700M Series"},
    {0x682F, 0x00, "AMD Radeon HD 7700M Series"},
    {0x6830, 0x00, "AMD Radeon 7800M Series"},
    {0x6831, 0x00, "AMD Radeon 7700M Series"},
    {0x6835, 0x00, "AMD Radeon R7 Series / HD 9000 Series"},
    {0x6837, 0x00, "AMD Radeon HD 7700 Series"},
    {0x683D, 0x00, "AMD Radeon HD 7700 Series"},
    {0x683F, 0x00, "AMD Radeon HD 7700 Series"},
    {0x684C, 0x00, "ATI FirePro V (FireGL V) Graphics Adapter"},
    {0x6860, 0x00, "AMD Radeon Instinct MI25"},
    {0x6860, 0x01, "AMD Radeon Instinct MI25"},
    {0x6860, 0x02, "AMD Radeon Instinct MI25"},
    {0x6860, 0x03, "AMD Radeon Pro V340"},
    {0x6860, 0x04, "AMD Radeon Instinct MI25x2"},
    {0x6860, 0x07, "AMD Radeon Pro V320"},
    {0x6861, 0x00, "AMD Radeon Pro WX 9100"},
    {0x6862, 0x00, "AMD Radeon Pro SSG"},
    {0x6863, 0x00, "AMD Radeon Vega Frontier Edition"},
    {0x6864, 0x03, "AMD Radeon Pro V340"},
    {0x6864, 0x04, "AMD Radeon Instinct MI25x2"},
    {0x6864, 0x05, "AMD Radeon Pro V340"},
    {0x6868, 0x00, "AMD Radeon Pro WX 8200"},
    {0x686C, 0x00, "AMD Radeon Instinct MI25 MxGPU"},
    {0x686C, 0x01, "AMD Radeon Instinct MI25 MxGPU"},
    {0x686C, 0x02, "AMD Radeon Instinct MI25 MxGPU"},
    {0x686C, 0x03, "AMD Radeon Pro V340 MxGPU"},
    {0x686C, 0x04, "AMD Radeon Instinct MI25x2 MxGPU"},
    {0x686C, 0x05, "AMD Radeon Pro V340L MxGPU"},
    {0x686C, 0x06, "AMD Radeon Instinct MI25 MxGPU"},
    {0x687F, 0x01, "AMD Radeon RX Vega"},
    {0x687F, 0xC0, "AMD Radeon RX Vega"},
    {0x687F, 0xC1, "AMD Radeon RX Vega"},
    {0x687F, 0xC3, "AMD Radeon RX Vega"},
    {0x687F, 0xC7, "AMD Radeon RX Vega"},
    {0x6900, 0x00, "AMD Radeon R7 M260"},
    {0x6900, 0x81, "AMD Radeon R7 M360"},
    {0x6900, 0x83, "AMD Radeon R7 M340"},
    {0x6900, 0xC1, "AMD Radeon R5 M465 Series"},
    {0x6900, 0xC3, "AMD Radeon R5 M445 Series"},
    {0x6900, 0xD1, "AMD Radeon 530 Series"},
    {0x6900, 0xD3, "AMD Radeon 530 Series"},
    {0x6901, 0x00, "AMD Radeon R5 M255"},
    {0x6902, 0x00, "AMD Radeon Series"},
    {0x6907, 0x00, "AMD Radeon R5 M255"},
    {0x6907, 0x87, "AMD Radeon R5 M315"},
    {0x6920, 0x00, "AMD Radeon R9 M395X"},
    {0x6920, 0x01, "AMD Radeon R9 M390X"},
    {0x6921, 0x00, "AMD Radeon R9 M390X"},
    {0x6929, 0x00, "AMD FirePro S7150"},
    {0x6929, 0x01, "AMD FirePro S7100X"},
    {0x692B, 0x00, "AMD FirePro W7100"},
    {0x6938, 0x00, "AMD Radeon R9 200 Series"},
    {0x6938, 0xF0, "AMD Radeon R9 200 Series"},
    {0x6938, 0xF1, "AMD Radeon R9 380 Series"},
    {0x6939, 0x00, "AMD Radeon R9 200 Series"},
    {0x6939, 0xF0, "AMD Radeon R9 200 Series"},
    {0x6939, 0xF1, "AMD Radeon R9 380 Series"},
    {0x694C, 0xC0, "AMD Radeon RX Vega M GH Graphics"},
    {0x694E, 0xC0, "AMD Radeon RX Vega M GL Graphics"},
    {0x6980, 0x00, "AMD Radeon Pro WX 3100"},
    {0x6981, 0x00, "AMD Radeon Pro WX 3200 Series"},
    {0x6981, 0x01, "AMD Radeon Pro WX 3200 Series"},
    {0x6981, 0x10, "AMD Radeon Pro WX 3200 Series"},
    {0x6985, 0x00, "AMD Radeon Pro WX 3100"},
    {0x6986, 0x00, "AMD Radeon Pro WX 2100"},
    {0x6987, 0x80, "AMD Embedded Radeon E9171"},
    {0x6987, 0xC0, "AMD Radeon 550X Series"},
    {0x6987, 0xC1, "AMD Radeon RX 640"},
    {0x6987, 0xC3, "AMD Radeon 540X Series"},
    {0x6987, 0xC7, "AMD Radeon 540"},
    {0x6995, 0x00, "AMD Radeon Pro WX 2100"},
    {0x6997, 0x00, "AMD Radeon Pro WX 2100"},
    {0x699F, 0x81, "AMD Embedded Radeon E9170 Series"},
    {0x699F, 0xC0, "AMD Radeon 500 Series"},
    {0x699F, 0xC1, "AMD Radeon 540 Series"},
    {0x699F, 0xC3, "AMD Radeon 500 Series"},
    {0x699F, 0xC7, "AMD Radeon RX 550 / 550 Series"},
    {0x699F, 0xC9, "AMD Radeon 540"},
    {0x6FDF, 0xE7, "AMD Radeon RX 590 GME"},
    {0x6FDF, 0xEF, "AMD Radeon RX 580 2048SP"},
    {0x7300, 0xC1, "AMD FirePro S9300 x2"},
    {0x7300, 0xC8, "AMD Radeon R9 Fury Series"},
    {0x7300, 0xC9, "AMD Radeon Pro Duo"},
    {0x7300, 0xCA, "AMD Radeon R9 Fury Series"},
    {0x7300, 0xCB, "AMD Radeon R9 Fury Series"},
    {0x7312, 0x00, "AMD Radeon Pro W5700"},
    {0x731E, 0xC6, "AMD Radeon RX 5700XTB"},
    {0x731E, 0xC7, "AMD Radeon RX 5700B"},
    {0x731F, 0xC0, "AMD Radeon RX 5700 XT 50th Anniversary"},
    {0x731F, 0xC1, "AMD Radeon RX 5700 XT"},
    {0x731F, 0xC2, "AMD Radeon RX 5600M"},
    {0x731F, 0xC3, "AMD Radeon RX 5700M"},
    {0x731F, 0xC4, "AMD Radeon RX 5700"},
    {0x731F, 0xC5, "AMD Radeon RX 5700 XT"},
    {0x731F, 0xCA, "AMD Radeon RX 5600 XT"},
    {0x731F, 0xCB, "AMD Radeon RX 5600 OEM"},
    {0x7340, 0xC1, "AMD Radeon RX 5500M"},
    {0x7340, 0xC3, "AMD Radeon RX 5300M"},
    {0x7340, 0xC5, "AMD Radeon RX 5500 XT"},
    {0x7340, 0xC7, "AMD Radeon RX 5500"},
    {0x7340, 0xC9, "AMD Radeon RX 5500XTB"},
    {0x7340, 0xCF, "AMD Radeon RX 5300"},
    {0x7341, 0x00, "AMD Radeon Pro W5500"},
    {0x7347, 0x00, "AMD Radeon Pro W5500M"},
    {0x7360, 0x41, "AMD Radeon Pro 5600M"},
    {0x7360, 0xC3, "AMD Radeon Pro V520"},
    {0x738C, 0x01, "AMD Instinct MI100"},
    {0x73A3, 0x00, "AMD Radeon Pro W6800"},
    {0x73A5, 0xC0, "AMD Radeon RX 6950 XT"},
    {0x73AF, 0xC0, "AMD Radeon RX 6900 XT"},
    {0x73BF, 0xC0, "AMD Radeon RX 6900 XT"},
    {0x73BF, 0xC1, "AMD Radeon RX 6800 XT"},
    {0x73BF, 0xC3, "AMD Radeon RX 6800"},
    {0x73DF, 0xC0, "AMD Radeon RX 6750 XT"},
    {0x73DF, 0xC1, "AMD Radeon RX 6700 XT"},
    {0x73DF, 0xC2, "AMD Radeon RX 6800M"},
    {0x73DF, 0xC3, "AMD Radeon RX 6800M"},
    {0x73DF, 0xC5, "AMD Radeon RX 6700 XT"},
    {0x73DF, 0xCF, "AMD Radeon RX 6700M"},
    {0x73DF, 0xD7, "AMD TDC-235"},
    {0x73E1, 0x00, "AMD Radeon Pro W6600M"},
    {0x73E3, 0x00, "AMD Radeon Pro W6600"},
    {0x73EF, 0xC0, "AMD Radeon RX 6800S"},
    {0x73EF, 0xC1, "AMD Radeon RX 6650 XT"},
    {0x73EF, 0xC2, "AMD Radeon RX 6700S"},
    {0x73EF, 0xC3, "AMD Radeon RX 6650M"},
    {0x73EF, 0xC4, "AMD Radeon RX 6650M XT"},
    {0x73FF, 0xC1, "AMD Radeon RX 6600 XT"},
    {0x73FF, 0xC3, "AMD Radeon RX 6600M"},
    {0x73FF, 0xC7, "AMD Radeon RX 6600"},
    {0x73FF, 0xCB, "AMD Radeon RX 6600S"},
    {0x7408, 0x00, "AMD Instinct MI250X"},
    {0x740C, 0x01, "AMD Instinct MI250X / MI250"},
    {0x740F, 0x02, "AMD Instinct MI210"},
    {0x7421, 0x00, "AMD Radeon Pro W6500M"},
    {0x7422, 0x00, "AMD Radeon Pro W6400"},
    {0x7423, 0x00, "AMD Radeon Pro W6300M"},
    {0x7423, 0x01, "AMD Radeon Pro W6300"},
    {0x7424, 0x00, "AMD Radeon RX 6300"},
    {0x743F, 0xC1, "AMD Radeon RX 6500 XT"},
    {0x743F, 0xC3, "AMD Radeon RX 6500"},
    {0x743F, 0xC3, "AMD Radeon RX 6500M"},
    {0x743F, 0xC7, "AMD Radeon RX 6400"},
    {0x743F, 0xCF, "AMD Radeon RX 6300M"},
    {0x9830, 0x00, "AMD Radeon HD 8400 / R3 Series"},
    {0x9831, 0x00, "AMD Radeon HD 8400E"},
    {0x9832, 0x00, "AMD Radeon HD 8330"},
    {0x9833, 0x00, "AMD Radeon HD 8330E"},
    {0x9834, 0x00, "AMD Radeon HD 8210"},
    {0x9835, 0x00, "AMD Radeon HD 8210E"},
    {0x9836, 0x00, "AMD Radeon HD 8200 / R3 Series"},
    {0x9837, 0x00, "AMD Radeon HD 8280E"},
    {0x9838, 0x00, "AMD Radeon HD 8200 / R3 series"},
    {0x9839, 0x00, "AMD Radeon HD 8180"},
    {0x983D, 0x00, "AMD Radeon HD 8250"},
    {0x9850, 0x00, "AMD Radeon R3 Graphics"},
    {0x9850, 0x03, "AMD Radeon R3 Graphics"},
    {0x9850, 0x40, "AMD Radeon R2 Graphics"},
    {0x9850, 0x45, "AMD Radeon R3 Graphics"},
    {0x9851, 0x00, "AMD Radeon R4 Graphics"},
    {0x9851, 0x01, "AMD Radeon R5E Graphics"},
    {0x9851, 0x05, "AMD Radeon R5 Graphics"},
    {0x9851, 0x06, "AMD Radeon R5E Graphics"},
    {0x9851, 0x40, "AMD Radeon R4 Graphics"},
    {0x9851, 0x45, "AMD Radeon R5 Graphics"},
    {0x9852, 0x00, "AMD Radeon R2 Graphics"},
    {0x9852, 0x40, "AMD Radeon E1 Graphics"},
    {0x9853, 0x00, "AMD Radeon R2 Graphics"},
    {0x9853, 0x01, "AMD Radeon R4E Graphics"},
    {0x9853, 0x03, "AMD Radeon R2 Graphics"},
    {0x9853, 0x05, "AMD Radeon R1E Graphics"},
    {0x9853, 0x06, "AMD Radeon R1E Graphics"},
    {0x9853, 0x07, "AMD Radeon R1E Graphics"},
    {0x9853, 0x08, "AMD Radeon R1E Graphics"},
    {0x9853, 0x40, "AMD Radeon R2 Graphics"},
    {0x9854, 0x00, "AMD Radeon R3 Graphics"},
    {0x9854, 0x01, "AMD Radeon R3E Graphics"},
    {0x9854, 0x02, "AMD Radeon R3 Graphics"},
    {0x9854, 0x05, "AMD Radeon R2 Graphics"},
    {0x9854, 0x06, "AMD Radeon R4 Graphics"},
    {0x9854, 0x07, "AMD Radeon R3 Graphics"},
    {0x9855, 0x02, "AMD Radeon R6 Graphics"},
    {0x9855, 0x05, "AMD Radeon R4 Graphics"},
    {0x9856, 0x00, "AMD Radeon R2 Graphics"},
    {0x9856, 0x01, "AMD Radeon R2E Graphics"},
    {0x9856, 0x02, "AMD Radeon R2 Graphics"},
    {0x9856, 0x05, "AMD Radeon R1E Graphics"},
    {0x9856, 0x06, "AMD Radeon R2 Graphics"},
    {0x9856, 0x07, "AMD Radeon R1E Graphics"},
    {0x9856, 0x08, "AMD Radeon R1E Graphics"},
    {0x9856, 0x13, "AMD Radeon R1E Graphics"},
    {0x9874, 0x81, "AMD Radeon R6 Graphics"},
    {0x9874, 0x84, "AMD Radeon R7 Graphics"},
    {0x9874, 0x85, "AMD Radeon R6 Graphics"},
    {0x9874, 0x87, "AMD Radeon R5 Graphics"},
    {0x9874, 0x88, "AMD Radeon R7E Graphics"},
    {0x9874, 0x89, "AMD Radeon R6E Graphics"},
    {0x9874, 0xC4, "AMD Radeon R7 Graphics"},
    {0x9874, 0xC5, "AMD Radeon R6 Graphics"},
    {0x9874, 0xC6, "AMD Radeon R6 Graphics"},
    {0x9874, 0xC7, "AMD Radeon R5 Graphics"},
    {0x9874, 0xC8, "AMD Radeon R7 Graphics"},
    {0x9874, 0xC9, "AMD Radeon R7 Graphics"},
    {0x9874, 0xCA, "AMD Radeon R5 Graphics"},
    {0x9874, 0xCB, "AMD Radeon R5 Graphics"},
    {0x9874, 0xCC, "AMD Radeon R7 Graphics"},
    {0x9874, 0xCD, "AMD Radeon R7 Graphics"},
    {0x9874, 0xCE, "AMD Radeon R5 Graphics"},
    {0x9874, 0xE1, "AMD Radeon R7 Graphics"},
    {0x9874, 0xE2, "AMD Radeon R7 Graphics"},
    {0x9874, 0xE3, "AMD Radeon R7 Graphics"},
    {0x9874, 0xE4, "AMD Radeon R7 Graphics"},
    {0x9874, 0xE5, "AMD Radeon R5 Graphics"},
    {0x9874, 0xE6, "AMD Radeon R5 Graphics"},
    {0x98E4, 0x80, "AMD Radeon R5E Graphics"},
    {0x98E4, 0x81, "AMD Radeon R4E Graphics"},
    {0x98E4, 0x83, "AMD Radeon R2E Graphics"},
    {0x98E4, 0x84, "AMD Radeon R2E Graphics"},
    {0x98E4, 0x86, "AMD Radeon R1E Graphics"},
    {0x98E4, 0xC0, "AMD Radeon R4 Graphics"},
    {0x98E4, 0xC1, "AMD Radeon R5 Graphics"},
    {0x98E4, 0xC2, "AMD Radeon R4 Graphics"},
    {0x98E4, 0xC4, "AMD Radeon R5 Graphics"},
    {0x98E4, 0xC6, "AMD Radeon R5 Graphics"},
    {0x98E4, 0xC8, "AMD Radeon R4 Graphics"},
    {0x98E4, 0xC9, "AMD Radeon R4 Graphics"},
    {0x98E4, 0xCA, "AMD Radeon R5 Graphics"},
    {0x98E4, 0xD0, "AMD Radeon R2 Graphics"},
    {0x98E4, 0xD1, "AMD Radeon R2 Graphics"},
    {0x98E4, 0xD2, "AMD Radeon R2 Graphics"},
    {0x98E4, 0xD4, "AMD Radeon R2 Graphics"},
    {0x98E4, 0xD9, "AMD Radeon R5 Graphics"},
    {0x98E4, 0xDA, "AMD Radeon R5 Graphics"},
    {0x98E4, 0xDB, "AMD Radeon R3 Graphics"},
    {0x98E4, 0xE1, "AMD Radeon R3 Graphics"},
    {0x98E4, 0xE2, "AMD Radeon R3 Graphics"},
    {0x98E4, 0xE9, "AMD Radeon R4 Graphics"},
    {0x98E4, 0xEA, "AMD Radeon R4 Graphics"},
    {0x98E4, 0xEB, "AMD Radeon R3 Graphics"},
    {0x98E4, 0xEC, "AMD Radeon R4 Graphics"},
};

#endif
