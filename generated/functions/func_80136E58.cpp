#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80136E58_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80136E58u);
    goto loc_80136E58;

loc_80136E58:
{
    r0 = MemoryInline::FlatRead8((r3 + 572));
}

loc_80136E60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80136E6C;
    }
}

loc_80136E64:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return r3;
}

loc_80136E6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 576));
    MemoryInline::FlatWriteFloat32((r3 + 396), f0.d);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_80136E58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80136E58_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80136E58 func_80136E58 preserves=true fpr_mask=0x00000000
