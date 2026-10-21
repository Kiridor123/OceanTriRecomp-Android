#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BDFD0(CpuContext* ctx);
extern "C" uint32_t func_804BDFD0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_804BE170_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    MKW_GUEST_ENTER(0x804BE170u);
    goto loc_804BE170;

loc_804BE170:
{
    r0 = MemoryInline::FlatRead32(r3);
    r9 = (r6 & 40959);
}

loc_804BE178:
{
}

loc_804BE17C:
{
    MemoryInline::FlatWrite32(r3, r9);
    r10 = (r0 & 65535);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_804BE1A8;
    }
}

loc_804BE188:
{
    r6 = MemoryInline::FlatRead8((r3 + 1365));
    r0 = (0 - r6);
    r0 = (r0 | r6);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r7 & ~r0);
    r0 = (r0 & 24576);
    r0 = (r9 | r0);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_804BE1A8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804BE1B0:
{
    r6 = (r0 ^ r10);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = (r6 & r10);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_804BE1D4;
    }
}

loc_804BE1C8:
{
    r0 = (r4 + -16);
}

loc_804BE1D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804BE20C;
    }
}

loc_804BE1D4:
{
    r7 = MemoryInline::FlatRead8((r3 + 1365));
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r6 = (0 - r7);
    r6 = (r6 | r7);
    r7 = (r0 & 65535);
    r0 = (static_cast<int32_t>(r6) >> 31);
    r0 = (r8 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    r6 = (r0 ^ r7);
    r0 = (r6 & r0);
    MemoryInline::FlatWrite32((r3 + 100), r0);
    r0 = (r6 & r7);
    MemoryInline::FlatWrite32((r3 + 104), r0);
}

loc_804BE20C:
{
    if constexpr (KnownRegArgsCpuCall<0x804BDFD0u>(&func_804BDFD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804BDFD0_94F = func_804BDFD0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804BDFD0_94F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804BDFD0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return r4;
}

}

extern "C" void func_804BE170(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804BE170_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BE170 func_804BE170 preserves=true fpr_mask=0x00000000
