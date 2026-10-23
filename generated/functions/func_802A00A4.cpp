#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802A00A4_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_802A00A4;

loc_802A00A4:
{
    r4 = 0x806B0000u;
    r7 = (r4 + -4792);
    r8 = 0;
    r6 = r7;
    r4 = 0;
    r5 = 1;
    goto loc_802A00DC;
}

loc_802A00C0:
{
}

loc_802A00C4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r3))) {
        goto loc_802A00D0;
    }
}

loc_802A00C8:
{
    MemoryInline::FlatWrite8((r6 + 301), static_cast<uint8_t>(r5));
    goto loc_802A00D4;
}

loc_802A00D0:
{
    MemoryInline::FlatWrite8((r6 + 301), static_cast<uint8_t>(r4));
}

loc_802A00D4:
{
    r6 = (r6 + 24);
    r8 = (r8 + 1);
}

loc_802A00DC:
{
    r0 = MemoryInline::FlatRead8((r7 + 24));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A00E8:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_802A00C0;
    }
}

loc_802A00EC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r4;
}

}

extern "C" void func_802A00A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802A00A4_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000179 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A00A4 func_802A00A4 preserves=true fpr_mask=0x00000000
