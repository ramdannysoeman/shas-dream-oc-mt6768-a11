#
# Copyright (C) 2015 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#


obj-$(CONFIG_MACH_MT6768) += drcc_v1/

obj-$(CONFIG_MTK_CPU_KORO) += koro/
obj-$(CONFIG_MACH_MT6768) += spm/
obj-$(CONFIG_MACH_MT6768) += power_gs_v1/
obj-$(CONFIG_MTK_STATIC_POWER) += leakage_table_v2/
obj-$(CONFIG_MTK_CPU_FREQ) += cpufreq_v1/
obj-$(CONFIG_MACH_MT6739) += cpufreq_v2/
obj-$(CONFIG_MTK_PTPOD) += eem_v2/
obj-$(CONFIG_MTK_PTPOD_GPU) += eemgpu_v2/
obj-$(CONFIG_MTK_CPU_MSSV) += cpumssv_v1/
ifneq ($(CONFIG_FPGA_EARLY_PORTING), y)
obj-$(CONFIG_MACH_MT6768) += pbm_v4/
obj-$(CONFIG_MACH_MT6768) += mdpm_v1/
obj-$(CONFIG_MACH_MT6785) += mdpm_v2/
obj-$(CONFIG_MACH_MT6768) += $(subst ",,$(CONFIG_MTK_PLATFORM))/
obj-$(CONFIG_MACH_MT6768) += clkbuf_v1/
endif

obj-$(CONFIG_MACH_MT6768) += mcdi/
obj-$(CONFIG_MACH_MT6785) += mcdi/
obj-$(CONFIG_MACH_MT6771) += cpuhotplug/
obj-$(CONFIG_MACH_MT6739) += cpuhotplug/
obj-$(CONFIG_MACH_MT6885) += cpuhotplug/
obj-$(CONFIG_MACH_MT6893) += cpuhotplug/
obj-$(CONFIG_MACH_MT6873) += cpuhotplug/
obj-$(CONFIG_MACH_MT6853) += cpuhotplug/
obj-$(CONFIG_MACH_MT6833) += cpuhotplug/
obj-$(CONFIG_MACH_MT6771) += ppm_v3/
obj-$(CONFIG_MACH_MT6739) += ppm_v3/
obj-$(CONFIG_MACH_MT6768) += ppm_v3/
obj-$(CONFIG_MACH_MT6768) += cpuhotplug/
obj-$(CONFIG_MACH_MT6768) += cpuidle_v3/
obj-$(CONFIG_MACH_MT6768) += udi_v2/
obj-$(CONFIG_MACH_MT6785) += udi_v2/
obj-$(CONFIG_MACH_MT6885) += udi_v2/
obj-$(CONFIG_MACH_MT6893) += udi_v2/
obj-$(CONFIG_MACH_MT6873) += udi_v2/
obj-$(CONFIG_MACH_MT6785) += cpuhotplug/
obj-$(CONFIG_MACH_MT6885) += ppm_v3/
obj-$(CONFIG_MACH_MT6893) += ppm_v3/
obj-$(CONFIG_MACH_MT6873) += ppm_v3/
obj-$(CONFIG_MACH_MT6853) += ppm_v3/
obj-$(CONFIG_MACH_MT6833) += ppm_v3/
obj-$(CONFIG_MACH_MT6771) += spm_v4/
obj-$(CONFIG_MACH_MT6739) += spm_v4/
obj-$(CONFIG_MACH_MT6771) += clkbuf_v1/
obj-$(CONFIG_MACH_MT6739) += clkbuf_v1/
obj-$(CONFIG_MACH_MT6765) += clkbuf_v1/
obj-$(CONFIG_MACH_MT6739) += dcm_v1/
obj-$(CONFIG_MACH_MT6885) += dcm_v1/
obj-$(CONFIG_MACH_MT6893) += dcm_v1/
obj-$(CONFIG_MACH_MT6873) += dcm_v1/
obj-$(CONFIG_MACH_MT6853) += dcm_v1/
obj-$(CONFIG_MACH_MT6765) += dcm_v1/
obj-$(CONFIG_MACH_MT8168) += dcm_v1/
obj-$(CONFIG_MACH_MT6833) += dcm_v1/
obj-$(CONFIG_MACH_MT6771) += mcdi/
obj-$(CONFIG_MACH_MT6739) += mcdi/
obj-$(CONFIG_MACH_MT6785) += cpuidle_v3/
obj-$(CONFIG_MACH_MT6785) += ppm_v3/
obj-$(CONFIG_MTK_SLBC) += slbc/
obj-$(CONFIG_MTK_SWPM) += swpm_v1/
obj-$(CONFIG_MTK_QOS_V2) += qos/
obj-$(CONFIG_MTK_CM_MGR) += cm_mgr_v1/
ifeq ($(CONFIG_MTK_UNIFY_POWER), y)
obj-$(CONFIG_MTK_UNIFY_POWER) += upower_v2/
endif
obj-y += dvfsrc/
ifeq ($(CONFIG_MTK_GPU_SUPPORT), y)
endif
