#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EB4D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_803EB4D0;

loc_803EB4D0:
{
}

loc_803EB4D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EB4E8;
    }
}

loc_803EB4D8:
{
}

loc_803EB4DC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_803EB4E8;
    }
}

loc_803EB4E0:
{
}

loc_803EB4E4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_803EB4F0;
    }
}

loc_803EB4E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803EB4F0:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead32(r6);
}

loc_803EB4FC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_803EB508;
    }
}

loc_803EB500:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_803EB508:
{
    r9 = 0;
    r8 = (r6 + 4);
    r7 = 1;
    goto loc_803EB554;
}

loc_803EB518:
{
    r0 = (r9 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r8);
}

loc_803EB52C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803EB54C;
    }
}

loc_803EB530:
{
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = (r4 + 8);
    r3 = (r3 + 1);
}

loc_803EB548:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r5))) {
        goto loc_return;
    }
}

loc_803EB54C:
{
    r8 = (r8 + 8);
    r9 = (r9 + 1);
}

loc_803EB554:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_803EB55C:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r0))) {
        goto loc_803EB518;
    }
}

loc_803EB560:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EB4D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EB4D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000399 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EB4D0 func_803EB4D0 preserves=true fpr_mask=0x00000000
