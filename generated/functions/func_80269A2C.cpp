#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80269A2C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80269A2Cu);
    goto loc_80269A2C;

loc_80269A2C:
{
    r10 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80269A34:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80269A38:
{
    r12 = MemoryInline::FlatRead32((r10 + 16));
    r0 = (r3 & 255);
    r0 = (r0 * 332);
    r12 = (r12 + r0);
    r11 = 0;
    r7 = r10;
    r8 = r12;
    r6 = 0;
    r5 = -1;
    r4 = r12;
    r0 = 7;
    ctr = r0;
}

loc_80269A68:
{
    r9 = MemoryInline::FlatRead8(r4);
    r0 = (r9 + -4);
}

loc_80269A74:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80269A7C;
    }
}

loc_80269A78:
{
    MemoryInline::FlatWrite32((r7 + 512), r6);
}

loc_80269A7C:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r8 + 24), r5);
    MemoryInline::FlatWrite32((r8 + 68), r5);
    MemoryInline::FlatWrite32((r8 + 112), r5);
    MemoryInline::FlatWrite32((r8 + 156), r5);
    MemoryInline::FlatWrite32((r8 + 200), r5);
    MemoryInline::FlatWrite32((r8 + 244), r5);
    r7 = (r7 + 4);
    r8 = (r8 + 4);
    r11 = (r11 + 1);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80269A68;
    }
}

loc_80269AAC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = (r10 + r0);
    r9 = (r12 + r0);
    r6 = 0;
    r5 = -1;
    r4 = (r12 + r11);
    r0 = (11 - r11);
    ctr = r0;
}

loc_80269AD0:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(11))) {
        goto loc_80269B14;
    }
}

loc_80269AD4:
{
    r7 = MemoryInline::FlatRead8(r4);
    r0 = (r7 + -4);
}

loc_80269AE0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80269AE8;
    }
}

loc_80269AE4:
{
    MemoryInline::FlatWrite32((r8 + 512), r6);
}

loc_80269AE8:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r9 + 24), r5);
    MemoryInline::FlatWrite32((r9 + 68), r5);
    MemoryInline::FlatWrite32((r9 + 112), r5);
    MemoryInline::FlatWrite32((r9 + 156), r5);
    MemoryInline::FlatWrite32((r9 + 200), r5);
    MemoryInline::FlatWrite32((r9 + 244), r5);
    r8 = (r8 + 4);
    r9 = (r9 + 4);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80269AD4;
    }
}

loc_80269B14:
{
    r4 = 0;
    r0 = (r3 & 255);
    r3 = (r10 + r0);
    MemoryInline::FlatWrite8((r3 + 560), static_cast<uint8_t>(r4));
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80269A2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80269A2C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80269A2C func_80269A2C preserves=true fpr_mask=0x00000000
