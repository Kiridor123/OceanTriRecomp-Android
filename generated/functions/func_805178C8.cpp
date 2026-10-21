#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805178C8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r8_ca_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x805178C8u);
    goto loc_805178C8;

loc_805178C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r10 = 65;
    r9 = 0;
    r7 = 90;
    goto loc_80517900;
}

loc_805178E0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805178F0;
    }
}

loc_805178E8:
{
}

loc_805178EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_805178F8;
    }
}

loc_805178F0:
{
    r3 = 0;
    goto loc_80517970;
}

loc_805178F8:
{
    r3 = (r3 + 1);
    r4 = (r4 + 1);
}

loc_80517900:
{
    r0 = MemoryInline::FlatRead8(r4);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r6 = (static_cast<int32_t>(r11) >> 31);
    r0 = (r11 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r8_ca_2 = (xer >> 29) & 1u;
    r8 = (r6 + r9);
    r8 = (r8 + r8_ca_2);
    r12 = (r11 + 32);
    r6 = (static_cast<int32_t>(r7) >> 31);
    r0 = (r7 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r6 + r5);
    r0 = (r0 + r0_ca_2);
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80517934;
    }
}

loc_80517930:
{
    r12 = r11;
}

loc_80517934:
{
    r31 = MemoryInline::FlatRead8(r3);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r6 = (static_cast<int32_t>(r11) >> 31);
    r0 = (r11 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r11) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r8_ca_3 = (xer >> 29) & 1u;
    r8 = (r6 + r9);
    r8 = (r8 + r8_ca_3);
    r6 = (static_cast<int32_t>(r7) >> 31);
    r0 = (r7 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r6 + r5);
    r0 = (r0 + r0_ca_3);
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80517964;
    }
}

loc_80517960:
{
    r11 = (r11 + 32);
}

loc_80517964:
{
}

loc_80517968:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(r12))) {
        goto loc_805178E0;
    }
}

loc_8051796C:
{
    r3 = -1;
}

loc_80517970:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805178C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805178C8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000197B gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805178C8 func_805178C8 preserves=true fpr_mask=0x00000000
