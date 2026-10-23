#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80111D38_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_80111D38;

loc_80111D38:
{
    r0 = (r3 & 255);
}

loc_80111D40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80111D50;
    }
}

loc_80111D44:
{
}

loc_80111D48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80111DD8;
    }
}

loc_80111D4C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80111D50:
{
    r3 = 0x805A0000u;
    r0 = MemoryInline::FlatRead8((r3 + -656));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r9 = (r3 + -656);
    r0 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    r3 = 0x805A0000u;
    r0 = MemoryInline::FlatRead8((r3 + -632));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r5 = (r3 + -632);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    r3 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r0 - r3);
    r9_addr_3 = (r9 + r3);
    r0 = MemoryInline::FlatRead8(r9_addr_3);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r4 = (r3 + 1);
    r9_addr_4 = (r9 + r4);
    r0 = MemoryInline::FlatRead8(r9_addr_4);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    r6 = (r3 + 2);
    r9_addr_5 = (r9 + r6);
    r0 = MemoryInline::FlatRead8(r9_addr_5);
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r0));
    r5_addr_0 = (r5 + r3);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r5_addr_1 = (r5 + r4);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r5_addr_2 = (r5 + r6);
    r0 = MemoryInline::FlatRead8(r5_addr_2);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80111DD8:
{
    r3 = 0x805A0000u;
    r0 = MemoryInline::FlatRead8((r3 + -656));
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r9 = (r3 + -656);
    r0 = MemoryInline::FlatRead8((r9 + 1));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r9 + 2));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r0));
    r3 = 0x805A0000u;
    r0 = MemoryInline::FlatRead8((r3 + -632));
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r7 = (r3 + -632);
    r0 = MemoryInline::FlatRead8((r7 + 1));
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r0));
    r3 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r0 - r3);
    r9_addr_0 = (r9 + r3);
    r0 = MemoryInline::FlatRead8(r9_addr_0);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r4 = (r3 + 1);
    r9_addr_1 = (r9 + r4);
    r0 = MemoryInline::FlatRead8(r9_addr_1);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r8 = (r3 + 2);
    r9_addr_2 = (r9 + r8);
    r0 = MemoryInline::FlatRead8(r9_addr_2);
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r0));
    r7_addr_0 = (r7 + r3);
    r0 = MemoryInline::FlatRead8(r7_addr_0);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r7_addr_1 = (r7 + r4);
    r0 = MemoryInline::FlatRead8(r7_addr_1);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    r7_addr_2 = (r7 + r8);
    r0 = MemoryInline::FlatRead8(r7_addr_2);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80111D38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80111D38_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80111D38 func_80111D38 preserves=true fpr_mask=0x00000000
