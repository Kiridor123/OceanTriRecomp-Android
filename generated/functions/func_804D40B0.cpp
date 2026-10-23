#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804D40B0_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804D40B0;

loc_804D40B0:
{
    r5 = MemoryInline::FlatRead32((r3 + 736));
    r4 = MemoryInline::FlatRead32((r3 + 732));
}

loc_804D40BC:
{
    r6 = MemoryInline::FlatRead32((r3 + 740));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D40CC;
    }
}

loc_804D40C4:
{
    MemoryInline::FlatWrite32((r4 + 4), r6);
    goto loc_804D40D0;
}

loc_804D40CC:
{
    MemoryInline::FlatWrite32((r5 + 740), r6);
}

loc_804D40D0:
{
}

loc_804D40D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804D40E0;
    }
}

loc_804D40D8:
{
    MemoryInline::FlatWrite32(r4, r5);
    goto loc_804D40E4;
}

loc_804D40E0:
{
    MemoryInline::FlatWrite32((r6 + 736), r5);
}

loc_804D40E4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_804D40EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D410C;
    }
}

loc_804D40F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
    r4 = 1;
    r5 = MemoryInline::FlatRead32((r13 + -14984));
    r0_subfic_ra_1 = r0;
    r0 = (31 - r0_subfic_ra_1);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & ~r0);
    MemoryInline::FlatWrite32((r13 + -14984), r0);
}

loc_804D410C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 732), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_804D40B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804D40B0_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D40B0 func_804D40B0 preserves=true fpr_mask=0x00000000
