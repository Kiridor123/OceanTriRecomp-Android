#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DC038_ra60_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;

    goto loc_803DC038;

loc_803DC038:
{
}

loc_803DC03C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803DC040:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_803DC038(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803DC038_ra60_0_0_0(ctx, ctx->gpr[5], ctx->gpr[6]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000060 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803DC038 func_803DC038 preserves=true fpr_mask=0x00000000
