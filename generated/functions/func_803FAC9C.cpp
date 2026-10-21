#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803FAC9C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x803FAC9Cu);
    goto loc_803FAC9C;

loc_803FAC9C:
{
    r4 = (r4 & 65535);
    r5 = (r5 & 65535);
    r0 = (r5 + 65536);
    r3 = (r0 - r4);
    r0 = (r4 - r5);
}

loc_803FACB4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803FACC0;
    }
}

loc_803FACB8:
{
    r5 = (r5 + 65536);
    goto loc_803FACD8;
}

loc_803FACC0:
{
    r0 = (r4 + 65536);
    r3 = (r0 - r5);
    r0 = (r5 - r4);
}

loc_803FACD0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803FACD8;
    }
}

loc_803FACD4:
{
    r4 = (r4 + 65536);
}

loc_803FACD8:
{
    MemoryInline::FlatWrite32(r6, r4);
    MemoryInline::FlatWrite32(r7, r5);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FAC9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FAC9C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FAC9C func_803FAC9C preserves=true fpr_mask=0x00000000
