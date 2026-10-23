#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8056C440_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_8056C440;

loc_8056C440:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8056C448:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_return;
    }
}

loc_8056C44C:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = 0x80790000u;
    r3 = (r3 + 12836);
    r4 = 1;
    r0 = (r0 * 108);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8056C440(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8056C440_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C440 func_8056C440 preserves=true fpr_mask=0x00000000
