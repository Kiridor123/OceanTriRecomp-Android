#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80517338_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r8_ca_3 = 0;
    uint32_t r8_ca_4 = 0;

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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80517338u);
    goto loc_80517338;

loc_80517338:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r11 = 65;
    r10 = 0;
    r9 = 90;
    ctr = r5;
}

loc_80517354:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_805173F4;
    }
}

loc_80517358:
{
    r6 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r12 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8051737C;
    }
}

loc_80517374:
{
}

loc_80517378:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80517394;
    }
}

loc_8051737C:
{
}

loc_80517380:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80517394;
    }
}

loc_80517384:
{
}

loc_80517388:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80517394;
    }
}

loc_8051738C:
{
    r5 = 0;
    goto loc_805173F4;
}

loc_80517394:
{
    r7 = (static_cast<int32_t>(r31) >> 31);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & 1);
    r0 = (r31 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    r8_ca_2 = (xer >> 29) & 1u;
    r8 = (r7 + r10);
    r8 = (r8 + r8_ca_2);
    r7 = (static_cast<int32_t>(r9) >> 31);
    r0 = (r9 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r7 + r6);
    r0 = (r0 + r0_ca_2);
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805173BC;
    }
}

loc_805173B8:
{
    r31 = (r31 + 32);
}

loc_805173BC:
{
    r7 = (static_cast<int32_t>(r12) >> 31);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & 1);
    r0 = (r12 - r11);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r11) ? 1u : 0u) << 29);
    r8_ca_3 = (xer >> 29) & 1u;
    r8 = (r7 + r10);
    r8 = (r8 + r8_ca_3);
    r7 = (static_cast<int32_t>(r9) >> 31);
    r0 = (r9 - r12);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r9) >= static_cast<uint32_t>(r12) ? 1u : 0u) << 29);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r7 + r6);
    r0 = (r0 + r0_ca_3);
    r0 = (r8 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805173E4;
    }
}

loc_805173E0:
{
    r12 = (r12 + 32);
}

loc_805173E4:
{
}

loc_805173E8:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r31))) {
        goto loc_805173F4;
    }
}

loc_805173EC:
{
    r5 = (r5 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80517358;
    }
}

loc_805173F4:
{
    r3 = r5;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80517338(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80517338_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80517338 func_80517338 preserves=true fpr_mask=0x00000000
