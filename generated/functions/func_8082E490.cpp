#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082E490(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];

    goto loc_8082E490;

loc_8082E490:
{
    r9 = MemoryInline::FlatRead32((r3 + 76));
    r11 = MemoryInline::FlatRead32((r3 + 88));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 15);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(28));
    r8 = (r8_rot_0 & 4);
    r3 = (r0 * 20);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(26));
    r6 = (r6_rot_0 & 4);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r7 = (r7_rot_0 & 4);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(27));
    r5 = (r5_rot_0 & 4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(14));
    r4 = (r4_rot_0 & 60);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(9));
    r0 = (r0_rot_1 & 480);
    r0 = (r4 + r0);
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(19));
    r10 = (r10_rot_0 & 28);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_0 & 4);
    r5 = (r7 + r5);
    r4 = (r8 + r6);
    r3 = (r3 + r0);
    r4 = (r5 + r4);
    r0 = (r10 + r9);
    r3 = (r4 + r3);
    r0 = (r11 + r0);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082E490 func_8082E490 preserves=true fpr_mask=0x00000000
