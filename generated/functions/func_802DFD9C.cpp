#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DFD9C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802DFD9Cu);
    goto loc_802DFD9C;

loc_802DFD9C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + 312);
    r0 = MemoryInline::FlatRead8((r3 + 312));
    r0 = (r0 & 8);
}

loc_802DFDC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DFDC8;
    }
}

loc_802DFDC4:
{
    // inline leaf 0x802DFCE8 (20 guest instruction(s))
}

loc_inl0_0x802DFCE8:
{
    r3 = 3;
}

loc_inl0_0x802DFCF0:
{
    r0 = 1;
    r6 = (r3 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r4 = ~(r0 | r0);
    r3 = 0x806C0000u;
    r5 = (r3 + 312);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r3 = (r4 & 255);
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam8((r5 + 2), static_cast<uint8_t>(r0));
    r4 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r5 + r0);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r4));
}

loc_inl0_cont_802DFCE8:
{
    // end of inlined leaf 0x802DFCE8
}

loc_802DFDC8:
{
    r6 = 0;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead8((r31 + 1));
}

loc_802DFDD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DFF0C;
    }
}

loc_802DFDDC:
{
    r10 = 0;
    r7 = r31;
    r8 = 0;
    r3 = 20;
    r5 = 1;
    r0 = 2;
    ctr = r0;
}

loc_802DFDF8:
{
    r9 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r10));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r0 & r9);
}

loc_802DFE08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DFE74;
    }
}

loc_802DFE0C:
{
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (r4 & r9);
}

loc_802DFE18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DFE50;
    }
}

loc_802DFE1C:
{
    r4 = MemoryInline::FlatRead16((r7 + 4));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 2);
    MemoryInline::FlatWrite16((r7 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802DFE30:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(121))) {
        goto loc_802DFE70;
    }
}

loc_802DFE34:
{
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r0 = ~(r9 | r9);
    r0 = (r0 & 255);
    r0 = (r4 & r0);
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r31 + 12), static_cast<uint16_t>(r6));
    goto loc_802DFE70;
}

loc_802DFE50:
{
}

loc_802DFE54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802DFE60;
    }
}

loc_802DFE58:
{
    MemoryInline::FlatWrite16((r7 + 4), static_cast<uint16_t>(r3));
    goto loc_802DFE70;
}

loc_802DFE60:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r7 + 4), static_cast<uint16_t>(r0));
}

loc_802DFE70:
{
    r8 = (r8 + 10);
}

loc_802DFE74:
{
    r10 = (r10 + 1);
    r9 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r10));
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r0 = (r0 & r9);
}

loc_802DFE88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DFEF4;
    }
}

loc_802DFE8C:
{
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (r4 & r9);
}

loc_802DFE98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DFED0;
    }
}

loc_802DFE9C:
{
    r4 = MemoryInline::FlatRead16((r7 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 2);
    MemoryInline::FlatWrite16((r7 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r7 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802DFEB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(121))) {
        goto loc_802DFEF0;
    }
}

loc_802DFEB4:
{
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r0 = ~(r9 | r9);
    r0 = (r0 & 255);
    r0 = (r4 & r0);
    MemoryInline::FlatWriteRam8((r31 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r31 + 12), static_cast<uint16_t>(r6));
    goto loc_802DFEF0;
}

loc_802DFED0:
{
}

loc_802DFED4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802DFEE0;
    }
}

loc_802DFED8:
{
    MemoryInline::FlatWrite16((r7 + 6), static_cast<uint16_t>(r3));
    goto loc_802DFEF0;
}

loc_802DFEE0:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r7 + 6), static_cast<uint16_t>(r0));
}

loc_802DFEF0:
{
    r8 = (r8 + 10);
}

loc_802DFEF4:
{
    r7 = (r7 + 4);
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802DFDF8;
    }
}

loc_802DFF00:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_802DFF0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DFD9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DFD9C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DFD9C func_802DFD9C preserves=true fpr_mask=0x00000000
