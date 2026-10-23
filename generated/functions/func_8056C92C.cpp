#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056C92C_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8056C92C;

loc_8056C92C:
{
}

loc_8056C930:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8056C940;
    }
}

loc_8056C934:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    ctx->gpr[0] = r0;
    return;
}

loc_8056C940:
{
    MemoryInline::FlatWrite32(r4, r3);
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8056C92C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8056C92C_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C92C func_8056C92C preserves=true fpr_mask=0x00000000
