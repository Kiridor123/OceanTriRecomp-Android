#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8056C360_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8056C360;

loc_8056C360:
{
    r3 = MemoryInline::FlatRead32((r3 + 156));
}

loc_8056C368:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8056C390;
    }
}

loc_8056C36C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8056C378:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
}

loc_8056C380:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056C38C;
    }
}

loc_8056C384:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8056C38C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8056C390:
{
}

loc_8056C394:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8056C378;
    }
}

loc_8056C398:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8056C360(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8056C360_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056C360 func_8056C360 preserves=true fpr_mask=0x00000000
