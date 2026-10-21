#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800E8A5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r10_addze_src_0 = 0;
    uint32_t r10_addze_src_1 = 0;
    uint32_t r10_addze_src_2 = 0;
    uint32_t r10_addze_src_3 = 0;
    uint32_t r10_addze_src_4 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r10_ca_1 = 0;
    uint32_t r10_ca_2 = 0;
    uint32_t r10_ca_3 = 0;
    uint32_t r10_ca_4 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r4_rot_0 = 0;

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

    MKW_GUEST_ENTER(0x800E8A5Cu);
    goto loc_800E8A5C;

loc_800E8A5C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r4 = (r4 + r6);
    r6 = (static_cast<int32_t>(r4) >> 1);
    r8 = 0;
    r12 = MemoryInline::FlatRead16(r5);
    r12 = (r12 << 16);
    r12 = (static_cast<int32_t>(r12) >> 16);
    r9 = 0;
    r4 = 0x90010000u;
    r4 = (r4 + -16544);
    goto loc_800E8B18;
}

loc_800E8A8C:
{
    r7 = MemoryInline::FlatRead16(r5);
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r11 = (r12 * 6);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & -2);
    r10 = (r11 + r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r10);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r10) >> 3);
    r10_addze_src_2 = r10;
    r10_ca_2 = (xer >> 29) & 1u;
    r10 = (r10_addze_src_2 + r10_ca_2);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r10));
    r10 = (r12 + r7);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r10 = (r10_rot_3 & -4);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r10);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r10) >> 3);
    r10_addze_src_3 = r10;
    r10_ca_3 = (xer >> 29) & 1u;
    r10 = (r10_addze_src_3 + r10_ca_3);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r10));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(1));
    r11 = (r11_rot_2 & -2);
    r10 = (r7 * 6);
    r10 = (r11 + r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r10);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r10) >> 3);
    r10_addze_src_4 = r10;
    r10_ca_4 = (xer >> 29) & 1u;
    r10 = (r10_addze_src_4 + r10_ca_4);
    r10 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r10));
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r7));
    r10 = MemoryInline::FlatRead16(r4);
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r10));
    r10 = MemoryInline::FlatRead16((r4 + 4));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r10));
    r10 = MemoryInline::FlatRead16((r4 + 8));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r10));
    r10 = MemoryInline::FlatRead16((r4 + 12));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r10));
    r12 = r7;
    r5 = (r5 + 2);
    r9 = (r9 + 1);
    r4 = (r4 + 16);
    r8 = (r8 + 8);
}

loc_800E8B18:
{
}

loc_800E8B1C:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r6))) {
        goto loc_800E8A8C;
    }
}

loc_800E8B20:
{
    r7 = (r8 + 7);
}

loc_800E8B28:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_800E8A8C;
    }
}

loc_800E8B2C:
{
    r4 = 0x90010000u;
    r5 = (r4 + -16544);
    ctr = r8;
}

loc_800E8B3C:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_800E8B78;
    }
}

loc_800E8B40:
{
    r4 = MemoryInline::FlatRead16(r3);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
}

loc_800E8B50:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(32767))) {
        goto loc_800E8B58;
    }
}

loc_800E8B54:
{
    r0 = 32767;
}

loc_800E8B58:
{
}

loc_800E8B5C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-32768))) {
        goto loc_800E8B64;
    }
}

loc_800E8B60:
{
    r0 = -32768;
}

loc_800E8B64:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 2);
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800E8B40;
    }
}

loc_800E8B78:
{
    r3 = r8;
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

extern "C" void func_800E8A5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E8A5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E8A5C func_800E8A5C preserves=true fpr_mask=0x00000000
