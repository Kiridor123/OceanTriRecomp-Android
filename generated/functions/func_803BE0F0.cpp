#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BE0F0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x803BE0F0u);
    goto loc_803BE0F0;

loc_803BE0F0:
{
    r5 = MemoryInline::FlatRead32((r13 + -16840));
    r5 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r3 & 255);
    r0 = (r0 * 548);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_803BE10C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BE118;
    }
}

loc_803BE110:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE118:
{
    r3 = MemoryInline::FlatRead8((r5 + 4));
    r0 = (r4 & 255);
}

loc_803BE124:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803BE130;
    }
}

loc_803BE128:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE130:
{
    r3 = MemoryInline::FlatRead8((r5 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803BE13C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BE154;
    }
}

loc_803BE140:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_803BE148:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_803BE154;
    }
}

loc_803BE14C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE154:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803BE15C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803BE180;
    }
}

loc_803BE160:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_803BE168:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803BE178;
    }
}

loc_803BE16C:
{
    r0 = MemoryInline::FlatRead8((r5 + 9));
}

loc_803BE174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BE180;
    }
}

loc_803BE178:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE180:
{
    r0 = MemoryInline::FlatRead8((r5 + 5));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_803BE0F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BE0F0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BE0F0 func_803BE0F0 preserves=true fpr_mask=0x00000000
