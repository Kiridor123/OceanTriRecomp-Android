#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021F2AC_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8021F2ACu);
    goto loc_8021F2AC;

loc_8021F2AC:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -12536);
    r5 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam32((r4 + 56), r0);
}

loc_8021F2C4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_8021F2D4;
    }
}

loc_8021F2C8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_8021F2D4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r4 + 60), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_8021F2AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021F2AC_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021F2AC func_8021F2AC preserves=true fpr_mask=0x00000000
