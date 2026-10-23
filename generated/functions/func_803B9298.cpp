#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803B9298_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_803B9298;

loc_803B9298:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead8((r4 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B92A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803B92CC;
    }
}

loc_803B92AC:
{
    r0 = (r0 * 60);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 132));
}

loc_803B92BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803B92CC;
    }
}

loc_803B92C0:
{
    r0 = MemoryInline::FlatRead8((r4 + 140));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r4 + 140), static_cast<uint8_t>(r0));
}

loc_803B92CC:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead8((r4 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B92DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_803B9300;
    }
}

loc_803B92E0:
{
    r0 = (r0 * 60);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 132));
}

loc_803B92F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_803B9300;
    }
}

loc_803B92F4:
{
    r0 = MemoryInline::FlatRead8((r4 + 140));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r4 + 140), static_cast<uint8_t>(r0));
}

loc_803B9300:
{
    r4 = MemoryInline::FlatRead32((r13 + -22424));
    r0 = MemoryInline::FlatRead8((r4 + 14));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B9310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_return;
    }
}

loc_803B9314:
{
    r0 = (r0 * 60);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 132));
}

loc_803B9324:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_return;
    }
}

loc_803B9328:
{
    r0 = MemoryInline::FlatRead8((r4 + 140));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r4 + 140), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_803B9298(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B9298_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B9298 func_803B9298 preserves=true fpr_mask=0x00000000
