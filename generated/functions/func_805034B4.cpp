#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_805034B4_ra70_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805034B4;

loc_805034B4:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = 65536;
    r3 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805034C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805034FC;
    }
}

loc_805034C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805034D8;
    }
}

loc_805034CC:
{
}

loc_805034D0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805034E4;
    }
}

loc_805034D4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return r4;
}

loc_805034D8:
{
}

loc_805034DC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_return;
    }
}

loc_805034E0:
{
    goto loc_80503514;
}

loc_805034E4:
{
    r0 = MemoryInline::FlatRead16(r4);
    r3 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r5 - r0);
    r0 = (r3 + r0);
    r3 = (r0 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return r4;
}

loc_805034FC:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r5 - r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return r4;
}

loc_80503514:
{
    r6 = (r4 + 12);
    r4 = MemoryInline::FlatRead16((r4 + 12));
    r7 = (r6 + 2);
    r0 = (r4 + -1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r6 + r0);
    r6 = (r4 + 2);
    goto loc_8050357C;
}

loc_80503534:
{
    r0 = (r6 - r7);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r0 + r4_ca_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -4);
    r4 = (r7 + r0);
    r7_addr_2 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(r7_addr_2);
}

loc_80503558:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_80503564;
    }
}

loc_8050355C:
{
    r7 = (r4 + 4);
    goto loc_8050357C;
}

loc_80503564:
{
}

loc_80503568:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_80503574;
    }
}

loc_8050356C:
{
    r6 = (r4 + -4);
    goto loc_8050357C;
}

loc_80503574:
{
    r3 = MemoryInline::FlatRead16((r4 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return r4;
}

loc_8050357C:
{
}

loc_80503580:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r6))) {
        goto loc_80503534;
    }
}

loc_80503584:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return r4;
}

}

extern "C" void func_805034B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_805034B4_ra70_0_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F1 gpr_write=0x000000D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805034B4 func_805034B4 preserves=true fpr_mask=0x00000000
