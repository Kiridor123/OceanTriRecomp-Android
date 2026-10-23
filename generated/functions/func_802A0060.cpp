#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A0060_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_802A0060;

loc_802A0060:
{
    r8 = 0;
    r7 = r3;
    r5 = 0;
    r6 = 1;
    goto loc_802A0090;
}

loc_802A0074:
{
}

loc_802A0078:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r4))) {
        goto loc_802A0084;
    }
}

loc_802A007C:
{
    MemoryInline::FlatWrite8((r7 + 109), static_cast<uint8_t>(r6));
    goto loc_802A0088;
}

loc_802A0084:
{
    MemoryInline::FlatWrite8((r7 + 109), static_cast<uint8_t>(r5));
}

loc_802A0088:
{
    r7 = (r7 + 24);
    r8 = (r8 + 1);
}

loc_802A0090:
{
    r0 = MemoryInline::FlatRead8((r3 + 23));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A009C:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_802A0074;
    }
}

loc_802A00A0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

extern "C" void func_802A0060(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802A0060_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A0060 func_802A0060 preserves=true fpr_mask=0x00000000
