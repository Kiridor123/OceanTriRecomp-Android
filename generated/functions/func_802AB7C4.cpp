#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AB7C4_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_802AB7C4;

loc_802AB7C4:
{
}

loc_802AB7C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802AB7CC:
{
    r6 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (r4 & 255);
}

loc_802AB7D8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_802AB7DC:
{
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return;
}

}

extern "C" void func_802AB7C4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802AB7C4_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000041 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AB7C4 func_802AB7C4 preserves=true fpr_mask=0x00000000
