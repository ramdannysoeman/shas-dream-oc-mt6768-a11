!/bin/bash

echo "Hi merlin user just wait and watch "

mkdir outM
export ARCH=arm64
export SUBARCH=arm64
export DTC_EXT=dtc
make O=outM ARCH=arm64 merlin_defconfig
export PATH="${PWD}/clang-13/aaa/bin:${PATH}"
make -j$(nproc --all) O=outM \
                      ARCH=arm64 \
                      LD=ld.lld \
		       OBJCOPY=llvm-objcopy \
		       AR=llvm-ar \
		       NM=llvm-nm \
		       STRIP=llvm-strip \
		       OBJDUMP=llvm-objdump \
		       READELF=llvm-readelf \
		       HOSTCC=clang \
		       HOSTCXX=clang++ \
		       HOSTAR=llvm-ar \
		       HOSTLD=ld.lld \
                      CC=clang \
                      CROSS_COMPILE=aarch64-linux-gnu- \
                      CROSS_COMPILE_ARM32=arm-linux-gnueabi- 
bp=${PWD}/outM
DATE=$(date "+%Y%m%d-%H%M")
ZIPNAME="Shas-Dream-Merlin-R-vendor"
cd ${PWD}/AnyKernel3-master
rm *.zip *-dtb 
cp $bp/arch/arm64/boot/Image.gz-dtb .
zip -r9 "$ZIPNAME"-"${DATE}".zip *
cd - || exit
