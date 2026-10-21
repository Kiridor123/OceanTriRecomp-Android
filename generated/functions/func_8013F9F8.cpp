#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013F9F8_ra28_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x8013F9F8u);
    goto loc_8013F9F8;

loc_8013F9F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 2560));
}

loc_8013FA00:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8013FA04:
{
    r0 = MemoryInline::FlatRead8((r3 + 2558));
}

loc_8013FA0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_8013FA10:
{
    r4 = MemoryInline::FlatRead8((r3 + 2556));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 2556), static_cast<uint8_t>(r0));
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8013FA28:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8013FA30;
    }
}

loc_8013FA2C:
{
    // inline leaf 0x8013AA64 (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2555), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2556), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2558), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2557), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 2560), r0);
    // end of inlined leaf 0x8013AA64
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_8013FA30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2558), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

extern "C" void func_8013F9F8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8013F9F8_ra28_0_0_0(ctx, ctx->gpr[3], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013F9F8 func_8013F9F8 preserves=true fpr_mask=0x00000000
