#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803B32F4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x803B32F4u);
    goto loc_803B32F4;

loc_803B32F4:
{
    r5 = 0;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r0 = MemoryInline::FlatRead8((r3 + 724));
}

loc_803B3308:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803B3310;
    }
}

loc_803B330C:
{
    r5 = 1;
}

loc_803B3310:
{
}

loc_803B3314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B331C;
    }
}

loc_803B3318:
{
    r4 = 1;
}

loc_803B331C:
{
    r0 = MemoryInline::FlatRead8((r3 + 725));
}

loc_803B3324:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803B332C;
    }
}

loc_803B3328:
{
    r5 = 1;
}

loc_803B332C:
{
}

loc_803B3330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B3338;
    }
}

loc_803B3334:
{
    r4 = (r4 + 1);
}

loc_803B3338:
{
    r0 = MemoryInline::FlatRead8((r3 + 726));
}

loc_803B3340:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803B3348;
    }
}

loc_803B3344:
{
    r5 = 1;
}

loc_803B3348:
{
}

loc_803B334C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B3354;
    }
}

loc_803B3350:
{
    r4 = (r4 + 1);
}

loc_803B3354:
{
}

loc_803B3358:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_803B336C;
    }
}

loc_803B335C:
{
}

loc_803B3360:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(1))) {
        goto loc_803B336C;
    }
}

loc_803B3364:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803B336C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B32F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B32F4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B32F4 func_803B32F4 preserves=true fpr_mask=0x00000000
