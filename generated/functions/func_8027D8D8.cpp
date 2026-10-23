#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027D8D8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8027D8D8;

loc_8027D8D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8027D8E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027D8FC;
    }
}

loc_8027D8E4:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -84);
}

loc_8027D8F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8027D8FC;
    }
}

loc_8027D8F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027D8FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8027D8D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027D8D8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027D8D8 func_8027D8D8 preserves=true fpr_mask=0x00000000
