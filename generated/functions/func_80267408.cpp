#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80267408_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80267408;

loc_80267408:
{
    r4 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80267410:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80267414:
{
    MemoryInline::FlatWrite32((r4 + 4), r3);
    return r4;
}

loc_return:
{
    return r4;
}

}

extern "C" void func_80267408(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80267408_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80267408 func_80267408 preserves=true fpr_mask=0x00000000
