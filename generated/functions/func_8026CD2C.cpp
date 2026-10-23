#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A67C(CpuContext* ctx);
extern "C" uint32_t func_8026A67C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026A6A8(CpuContext* ctx);
extern "C" uint32_t func_8026A6A8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026A6DC(CpuContext* ctx);
extern "C" uint32_t func_8026A6DC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026BA00(CpuContext* ctx);
extern "C" uint32_t func_8026BA00_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026CC48(CpuContext* ctx);
extern "C" uint32_t func_8026CC48_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FA08(CpuContext* ctx);
extern "C" uint64_t func_8026FA08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FCA4(CpuContext* ctx);
extern "C" uint64_t func_8026FCA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8026CD2C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_10 = 0;
    uint32_t r0_addze_src_11 = 0;
    uint32_t r0_addze_src_12 = 0;
    uint32_t r0_addze_src_13 = 0;
    uint32_t r0_addze_src_14 = 0;
    uint32_t r0_addze_src_15 = 0;
    uint32_t r0_addze_src_16 = 0;
    uint32_t r0_addze_src_17 = 0;
    uint32_t r0_addze_src_18 = 0;
    uint32_t r0_addze_src_19 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_addze_src_20 = 0;
    uint32_t r0_addze_src_21 = 0;
    uint32_t r0_addze_src_22 = 0;
    uint32_t r0_addze_src_23 = 0;
    uint32_t r0_addze_src_3 = 0;
    uint32_t r0_addze_src_4 = 0;
    uint32_t r0_addze_src_5 = 0;
    uint32_t r0_addze_src_6 = 0;
    uint32_t r0_addze_src_7 = 0;
    uint32_t r0_addze_src_8 = 0;
    uint32_t r0_addze_src_9 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_10 = 0;
    uint32_t r0_ca_11 = 0;
    uint32_t r0_ca_12 = 0;
    uint32_t r0_ca_13 = 0;
    uint32_t r0_ca_14 = 0;
    uint32_t r0_ca_15 = 0;
    uint32_t r0_ca_16 = 0;
    uint32_t r0_ca_17 = 0;
    uint32_t r0_ca_18 = 0;
    uint32_t r0_ca_19 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_20 = 0;
    uint32_t r0_ca_21 = 0;
    uint32_t r0_ca_22 = 0;
    uint32_t r0_ca_23 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8026CD2C;

loc_8026CD2C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 127u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 112u, (r31 + 112));
}

loc_8026CD34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8026CD44;
    }
}

loc_8026CD38:
{
}

loc_8026CD3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8026D060;
    }
}

loc_8026CD40:
{
    goto loc_8026F7FC;
}

loc_8026CD44:
{
    r0 = MemoryInline::FlatRead8((r30 + 1477));
}

loc_8026CD4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CEB4;
    }
}

loc_8026CD50:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 126u, (r31 + 126));
    r0 = (r0 & 11);
}

loc_8026CD58:
{
}

loc_8026CD5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CD6C;
    }
}

loc_8026CD60:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CD6C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 126u, (r31 + 126));
    r0 = (r0 & 8);
}

loc_8026CD78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CDC0;
    }
}

loc_8026CD7C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 & 128);
}

loc_8026CD88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CD9C;
    }
}

loc_8026CD8C:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_3 = r0;
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_3 + r0_ca_3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026CDA8;
}

loc_8026CD9C:
{
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_4 = r0;
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_4 + r0_ca_4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026CDA8:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_6 = r0;
    r0_ca_6 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_6 + r0_ca_6);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 8;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_7 = r0;
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_7 + r0_ca_7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CDC0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 126u, (r31 + 126));
    r0 = (r0 & 1);
}

loc_8026CDCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CE60;
    }
}

loc_8026CDD0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r0 = (r0 & 128);
}

loc_8026CDDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CDF0;
    }
}

loc_8026CDE0:
{
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_9 = r0;
    r0_ca_9 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_9 + r0_ca_9);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
    goto loc_8026CDFC;
}

loc_8026CDF0:
{
    r3 = r30;
    r4 = 24;
    // inline leaf 0x8026A67C (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_10 = r0;
    r0_ca_10 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_10 + r0_ca_10);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 224));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 224), r0);
    // end of inlined leaf 0x8026A67C
}

loc_8026CDFC:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_12 = r0;
    r0_ca_12 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_12 + r0_ca_12);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 6;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_13 = r0;
    r0_ca_13 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_13 + r0_ca_13);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 12;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_14 = r0;
    r0_ca_14 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_14 + r0_ca_14);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026F96C_451D = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_451D);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_451D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026CE34:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_8026CE48;
    }
}

loc_8026CE38:
{
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_15 = r0;
    r0_ca_15 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_15 + r0_ca_15);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    goto loc_8026CE60;
}

loc_8026CE48:
{
    r3 = r30;
    r4 = 18;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_16 = r0;
    r0_ca_16 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_16 + r0_ca_16);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 19;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_17 = r0;
    r0_ca_17 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_17 + r0_ca_17);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CE60:
{
    r0 = MemoryInline::FlatRead8((r31 + 126));
    r0 = (r0 & 2);
}

loc_8026CE6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026CE88;
    }
}

loc_8026CE70:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_19 = r0;
    r0_ca_19 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_19 + r0_ca_19);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 9;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_20 = r0;
    r0_ca_20 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_20 + r0_ca_20);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_20 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
}

loc_8026CE88:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 256);
}

loc_8026CE94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026CE98:
{
    r3 = r30;
    r4 = 5;
    // inline leaf 0x8026A6DC (11 guest instruction(s))
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_22 = r0;
    r0_ca_22 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_22 + r0_ca_22);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_22 & -4);
    r6 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 240));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r6 + 240), r0);
    // end of inlined leaf 0x8026A6DC
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_665D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_665D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026CEB4:
{
    r3 = r30;
    r4 = 1;
    r5 = 8192;
    r6 = 24576;
    ctx->lr = 0x8026CEC8u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_6A1E = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_6A1E);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_6A1E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CECC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CF1C;
    }
}

loc_8026CED0:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_6ED5 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_6ED5;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_722E = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_722E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7588 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7588;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_78E2 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_78E2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7C3C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7C3C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_7F96 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_7F96;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026CFE8;
}

loc_8026CF1C:
{
    r3 = r30;
    r4 = 1;
    r29 = 65536;
    r5 = (r29 + -8192);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026CF38u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_8389 = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_8389);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_8389 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CF3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CF5C;
    }
}

loc_8026CF40:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8840 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8840;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_8B99 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_8B99;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026CFE8;
}

loc_8026CF5C:
{
    r3 = r30;
    r4 = 1;
    r5 = 24576;
    r6 = (r29 + -24576);
    r6 = (r6 & 65535);
    ctx->lr = 0x8026CF74u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_8F7C = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_8F7C);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_8F7C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CF78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CF98;
    }
}

loc_8026CF7C:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_9433 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_9433;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_978C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_978C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026CFE8;
}

loc_8026CF98:
{
    r3 = r30;
    r4 = 1;
    r5 = (r29 + -24576);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026CFB0u;
    if constexpr (KnownRegArgsCpuCall<0x8026FA08u>(&func_8026FA08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FA08_9B6E = func_8026FA08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FA08_9B6E);
        r4 = static_cast<uint32_t>(regargs_result_8026FA08_9B6E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FA08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026CFB4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026CFE8;
    }
}

loc_8026CFB8:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_A025 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_A025;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_A37F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_A37F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_A6D8 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_A6D8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_AA32 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_AA32;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026CFE8:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    r0 = (r0 & 60);
}

loc_8026CFF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D004;
    }
}

loc_8026CFF8:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_AE7B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_AE7B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D004:
{
    r3 = r30;
    r4 = 1;
    r5 = 65536;
    r5 = (r5 + -24576);
    r5 = (r5 & 65535);
    r6 = 8192;
    ctx->lr = 0x8026D020u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_B255 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_B255);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_B255 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026D024:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D034;
    }
}

loc_8026D028:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_B70C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_B70C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D034:
{
    r3 = r30;
    r4 = 1;
    r5 = 8192;
    r6 = 24576;
    ctx->lr = 0x8026D048u;
    if constexpr (KnownRegArgsCpuCall<0x8026FCA4u>(&func_8026FCA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026FCA4_BAB5 = func_8026FCA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FCA4_BAB5);
        r4 = static_cast<uint32_t>(regargs_result_8026FCA4_BAB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026FCA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8026D04C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026F7FC;
    }
}

loc_8026D050:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_BF6D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_BF6D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026F7FC;
}

loc_8026D060:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D06C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D0E0;
    }
}

loc_8026D070:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r31 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14976));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D07C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D0E0;
    }
}

loc_8026D084:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_C59C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_C59C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_C8F6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_C8F6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_CC4F = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_CC4F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_CFA9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_CFA9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_D2E7 = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_D2E7;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8026D0C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026D0E0;
    }
}

loc_8026D0C8:
{
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_D683 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_D683;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 24;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_D9DD = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_D9DD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D0E0:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_DD48 = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_DD48;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026D0F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D120;
    }
}

loc_8026D0FC:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_E0A8 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_E0A8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_E402 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_E402;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 28;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_E75C = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_E75C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D120:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026CC48u>(&func_8026CC48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026CC48_EAC7 = func_8026CC48_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026CC48_EAC7;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026CC48u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8026D138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D148;
    }
}

loc_8026D13C:
{
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A67Cu>(&func_8026A67C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A67C_EE27 = func_8026A67C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A67C_EE27;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A67Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D148:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 & 512);
}

loc_8026D154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D170;
    }
}

loc_8026D158:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_F269 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_F269;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 17;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_F5C3 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_F5C3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D170:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D17C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D1A4;
    }
}

loc_8026D180:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_FA0B = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_FA0B;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_FD65 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_FD65;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_100BF = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_100BF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D1A4:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D1B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D21C;
    }
}

loc_8026D1B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D1C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D1D8;
    }
}

loc_8026D1C8:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_106A9 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_106A9;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026D21C;
}

loc_8026D1D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D1E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D1F8;
    }
}

loc_8026D1E8:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_10B9C = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_10B9C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026D21C;
}

loc_8026D1F8:
{
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_10F26 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_10F26;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 11;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_11282 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_11282;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_115DE = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_115DE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D21C:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 & 512);
}

loc_8026D228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026D28C;
    }
}

loc_8026D22C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14972));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D238:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D250;
    }
}

loc_8026D240:
{
    r3 = r30;
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_11BC8 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_11BC8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026D2F0;
}

loc_8026D250:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14968));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8026D258:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8026D270;
    }
}

loc_8026D260:
{
    r3 = r30;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_120BB = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_120BB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026D2F0;
}

loc_8026D270:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_12445 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_12445;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_127A1 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_127A1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_8026D2F0;
}

loc_8026D28C:
{
    r3 = r30;
    ctx->lr = 0x8026D294u;
    if constexpr (KnownRegArgsCpuCall<0x8026BA00u>(&func_8026BA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8026BA00_12B51 = func_8026BA00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026BA00_12B51;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026BA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8026D298:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026D2F0;
    }
}

loc_8026D29C:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_12F6A = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_12F6A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 12;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_132C6 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_132C6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_13621 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_13621;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_1397D = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_1397D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_13CD8 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_13CD8;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_14034 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_14034;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_14390 = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_14390;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026D2F0:
{
    r0 = MemoryInline::FlatRead8((r31 + 124));
    r0 = (r0 & 1);
}

loc_8026D2FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026F7FC;
    }
}

loc_8026D300:
{
    r3 = r30;
    r4 = 13;
    if constexpr (KnownRegArgsCpuCall<0x8026A6DCu>(&func_8026A6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        const auto regargs_result_8026A6DC_147DA = func_8026A6DC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6DC_147DA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8026F7FC:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026CD2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026CD2C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE000007F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8026CD2C func_8026CD2C preserves=true fpr_mask=0x00000000
