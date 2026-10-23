#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801825E0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_801825E0;

loc_801825E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_801825E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80182600;
    }
}

loc_801825EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 486));
}

loc_801825F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_80182600;
    }
}

loc_801825F8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80182600:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_801825E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801825E0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801825E0 func_801825E0 preserves=true fpr_mask=0x00000000
