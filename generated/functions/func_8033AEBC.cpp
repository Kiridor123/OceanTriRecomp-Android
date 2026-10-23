#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033AEBC_ra10_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    goto loc_8033AEBC;

loc_8033AEBC:
{
}

loc_8033AEC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8033AEDC;
    }
}

loc_8033AEC4:
{
    r0 = MemoryInline::FlatRead8((r4 + 7));
    r0 = (r0 & 1);
}

loc_8033AED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8033AEDC;
    }
}

loc_8033AED4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8033AEDC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}

extern "C" void func_8033AEBC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8033AEBC_ra10_0_0_0(ctx, ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033AEBC func_8033AEBC preserves=true fpr_mask=0x00000000
