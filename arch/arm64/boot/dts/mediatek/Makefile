# SPDX-License-Identifier: GPL-2.0

dtb-$(CONFIG_ARCH_MEDIATEK) += mt2712-evb.dtb
dtb-$(CONFIG_ARCH_MEDIATEK) += mt6755-evb.dtb
dtb-$(CONFIG_ARCH_MEDIATEK) += mt6795-evb.dtb
dtb-$(CONFIG_ARCH_MEDIATEK) += mt6797-evb.dtb
dtb-$(CONFIG_ARCH_MEDIATEK) += mt7622-rfb1.dtb
dtb-$(CONFIG_ARCH_MEDIATEK) += mt8173-evb.dtb

ifeq ($(strip $(CONFIG_BUILD_ARM64_APPENDED_DTB_IMAGE)), y)
dtb-y += $(addsuffix .dtb, $(notdir $(subst $\",,$(CONFIG_BUILD_ARM64_APPENDED_DTB_IMAGE_NAMES))))
endif

ifeq ($(strip $(CONFIG_BUILD_ARM64_DTB_OVERLAY_IMAGE)), y)
<<<<<<< HEAD
dtbo-y += $(addsuffix .dtbo, $(notdir $(subst $\",,$(CONFIG_BUILD_ARM64_DTB_OVERLAY_IMAGE_NAMES))))
endif

always		:= $(dtb-y) $(dtbo-y)
=======
dtb-y += $(addsuffix .dtb, $(notdir $(subst $\",,$(CONFIG_BUILD_ARM64_DTB_OVERLAY_IMAGE_NAMES))))
endif

always		:= $(dtb-y)
>>>>>>> 14d1d2cf21f8479f6fd074e48490030c81715adb
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb *.dtbo
