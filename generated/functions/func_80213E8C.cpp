#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80213E8C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[3] = arg_r3;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80213E8C;

loc_80213E8C:
{
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r8 = (r5 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 28));
    r8 = (r8 & 240);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r8) >> 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(7));
}

loc_80213EA4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80213FC4;
    }
}

loc_80213EA8:
{
    r9 = (r10 + -24540);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & -4);
    r9_addr_0 = (r9 + r8);
    r9 = MemoryInline::FlatRead32(r9_addr_0);
    ctr = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectJump(ctr, ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}

loc_80213FC4:
{
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
}

loc_80213FCC:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(3))) {
        goto loc_80213FE8;
    }
}

loc_80213FD0:
{
    r8 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16((r4 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r8));
    r31 = (r31 + 4);
    r7 = (r7 + 1);
}

loc_80213FE8:
{
    r4 = (r4 + 4);
    r6 = (r6 + 1);
}

loc_80213FF4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(6))) {
        goto loc_80213E8C;
    }
}

loc_80213FF8:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | ctx->gpr[3];
}

}

extern "C" void func_80213E8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80213E8C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x80003DFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80213E8C func_80213E8C preserves=true fpr_mask=0x00000000
