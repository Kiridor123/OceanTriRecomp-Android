#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80447E60_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_80447E60;

loc_80447E60:
{
    r0 = MemoryInline::FlatRead8((r3 + 13));
}

loc_80447E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80447E6C:
{
    r4 = 1;
    MemoryInline::FlatWrite32((r3 + 216), r4);
    MemoryInline::FlatWrite32((r3 + 220), r4);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 224), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

extern "C" void func_80447E60(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80447E60_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80447E60 func_80447E60 preserves=true fpr_mask=0x00000000
