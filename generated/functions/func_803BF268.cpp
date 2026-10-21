#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803BF268_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x803BF268u);
    goto loc_803BF268;

loc_803BF268:
{
    r4 = 0x806C0000u;
    r5 = (r4 + 6576);
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r5 + 296));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BF280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BF2A0;
    }
}

loc_803BF284:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 0;
}

loc_803BF290:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_803BF29C;
    }
}

loc_803BF294:
{
    r3 = (r5 + 328);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803BF29C:
{
    r6 = 1;
}

loc_803BF2A0:
{
    r0 = MemoryInline::FlatRead8((r5 + 584));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BF2AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BF2C8;
    }
}

loc_803BF2B0:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_803BF2B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r6))) {
        goto loc_803BF2C4;
    }
}

loc_803BF2BC:
{
    r3 = (r5 + 616);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803BF2C4:
{
    r6 = (r6 + 1);
}

loc_803BF2C8:
{
    r0 = MemoryInline::FlatRead8((r5 + 872));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803BF2D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BF2F0;
    }
}

loc_803BF2D8:
{
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_803BF2E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_803BF2F0;
    }
}

loc_803BF2E8:
{
    r3 = (r5 + 904);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803BF2F0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BF268(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BF268_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BF268 func_803BF268 preserves=true fpr_mask=0x00000000
