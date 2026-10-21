#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD630_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x804CD630u);
    goto loc_804CD630;

loc_804CD630:
{
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryInline::FlatRead32((r4 + 216));
}

loc_804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_804CD668;
    }
}

loc_804CD64C:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_804CD668:
{
    r6 = MemoryInline::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryInline::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_804CD630(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804CD630_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000070 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CD630 func_804CD630 preserves=true fpr_mask=0x00000000
