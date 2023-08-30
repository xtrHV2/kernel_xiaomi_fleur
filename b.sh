#!/bin/bash

function compile() 
{

source ~/.bashrc && source ~/.profile
export ARCH=arm64
export KBUILD_BUILD_HOST="gitpodkesayanganku"
export KBUILD_BUILD_USER="fjrXTR"
git clone --depth=1 https://github.com/NusantaraDevs/clang clang -b dev/12.0
git clone --depth=1 https://github.com/ghostrider-reborn/prebuilts_gcc_linux-x86_aarch64_aarch64-linaro-7 los-4.9-64
git clone --depth=1 https://github.com/MayuriLabs/linaro_arm-linux-gnueabihf-7.5 los-4.9-32

rm -rf AnyKernel
make O=out ARCH=arm64 fleur_defconfig

PATH="${PWD}/clang/bin:${PATH}:${PWD}/los-4.9-32/bin:${PATH}:${PWD}/los-4.9-64/bin:${PATH}" \
make -j$(nproc --all) O=out \
                      ARCH=arm64 \
                      CC="clang" \
                      CLANG_TRIPLE=aarch64-linux-gnu- \
                      CROSS_COMPILE="${PWD}/los-4.9-64/bin/aarch64-linux-gnu-" \
                      CROSS_COMPILE_ARM32="${PWD}/los-4.9-32/bin/arm-linux-gnueabihf-" \
                      LD=ld.lld \
                      AS=llvm-as \
		              AR=llvm-ar \
			          NM=llvm-nm \
			          OBJCOPY=llvm-objcopy \
                      CONFIG_SECTION_MISMATCH_WARN_ONLY=y
}

function zupload()
{
git clone --depth=1 https://github.com/xtrHV2/AnyKernel3.git -b master AnyKernel
cp out/arch/arm64/boot/Image.gz AnyKernel
cd AnyKernel
zip -r9 SphinX-Kernel-fleur.zip *
curl -T SphinX-Kernel-fleur.zip temp.sh
}

compile
zupload