#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051797C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r7_ca_4 = 0;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8051797Cu);
    goto loc_8051797C;

loc_8051797C:
{
    r12 = 0;
    r11 = 0;
    r9 = 48;
    r8 = 0;
    r6 = 57;
    ctr = r4;
}

loc_80517998:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805179F8;
    }
}

loc_8051799C:
{
    r0 = MemoryInline::FlatRead8(r3);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_805179A8:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(32))) {
        goto loc_805179F0;
    }
}

loc_805179AC:
{
    r5 = (static_cast<int32_t>(r10) >> 31);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r0 = (r10 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r5 + r8);
    r7 = (r7 + r7_ca_2);
    r5 = (static_cast<int32_t>(r6) >> 31);
    r0 = (r6 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r5 + r4);
    r0 = (r0 + r0_ca_2);
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805179F0;
    }
}

loc_805179D0:
{
    r0 = (r11 * 10);
    r12 = (r12 + 1);
}

loc_805179DC:
{
    r4 = (r10 + r0);
    r11 = (r4 + -48);
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(9))) {
        goto loc_805179F0;
    }
}

loc_805179E8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
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

loc_805179F0:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8051799C;
    }
}

loc_805179F8:
{
}

loc_805179FC:
{
    r3 = -1;
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80517A04:
{
    r3 = r11;
    ctx->gpr[0] = r0;
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

loc_return:
{
    ctx->gpr[0] = r0;
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

extern "C" void func_8051797C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051797C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051797C func_8051797C preserves=true fpr_mask=0x00000000
