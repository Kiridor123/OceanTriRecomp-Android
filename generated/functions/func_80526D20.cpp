#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80526D20_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_80526D78_loc_0 = 0;
    uint32_t addr_lhax_80526D90_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_80526D20;

loc_80526D20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80790000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r5 = (r5 + 9112);
    r6 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r6 = (static_cast<int32_t>(r6) >> 1);
}

loc_80526D48:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r6))) {
        goto loc_80526DD8;
    }
}

loc_80526D4C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r9 = (r3 + 2);
    r0 = (r0 + r6);
    r7 = MemoryInline::FlatRead32((r5 + 36));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r8 = MemoryInline::FlatRead32((r5 + 24));
    r5 = MemoryInline::FlatRead32((r5 + 44));
    ctr = r0;
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80526DA8;
    }
}

loc_80526D70:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r7 = (r7 + 1);
    addr_lhax_80526D78_loc_0 = (r5 + r0);
    r4 = MemoryInline::FlatRead16(addr_lhax_80526D78_loc_0);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    MemoryInline::FlatWrite16(r9, static_cast<uint16_t>(r4));
    r7 = (r7 + 1);
}

loc_80526D8C:
{
    r9 = (r9 + 4);
    addr_lhax_80526D90_loc_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_80526D90_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = (r3 + 4);
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r8))) {
        goto loc_80526DA4;
    }
}

loc_80526DA0:
{
    r7 = 0;
}

loc_80526DA4:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80526D70;
    }
}

loc_80526DA8:
{
    r4 = 0x80790000u;
    r4 = (r4 + 9112);
    r3 = MemoryInline::FlatRead32((r4 + 40));
    r0 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80526DBC:
{
    MemoryInline::FlatWriteRam32((r4 + 36), r7);
    r0 = (r0 - r6);
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_80526E08;
    }
}

loc_80526DCC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 40), r0);
    goto loc_80526E08;
}

loc_80526DD8:
{
    r0 = MemoryInline::FlatRead32((r5 + 40));
}

loc_80526DE0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_80526DF0;
    }
}

loc_80526DE4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r5 + 40), r0);
    goto loc_80526DFC;
}

loc_80526DF0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r5 + 52), r0);
    MemoryInline::FlatWriteRam32((r5 + 56), r0);
}

loc_80526DFC:
{
    r5 = r4;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80526E08:
{
    r3 = 0x80790000u;
    r3 = (r3 + 9112);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526D20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526D20_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80526D20 func_80526D20 preserves=true fpr_mask=0x00000000
