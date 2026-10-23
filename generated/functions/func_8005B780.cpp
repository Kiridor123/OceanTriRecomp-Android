#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8005B780_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_8005B780;

loc_8005B780:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8005B78C:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20588), r4);
    ctx->gpr[5] = r5;
    return r3;
}

loc_return:
{
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_8005B780(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8005B780_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000028 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005B780 func_8005B780 preserves=true fpr_mask=0x00000000
