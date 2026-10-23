#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805579D8_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_805579D8;

loc_805579D8:
{
    r5 = MemoryInline::FlatRead8((r3 + 23));
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r5 = (r0 & 255);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_805579F4:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_805579F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
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

extern "C" void func_805579D8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_805579D8_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805579D8 func_805579D8 preserves=true fpr_mask=0x00000000
