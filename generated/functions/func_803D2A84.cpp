#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803D2A84_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x803D2A84u);
    goto loc_803D2A84;

loc_803D2A84:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803D2A8C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803D2A90:
{
}

loc_803D2A94:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_803D2A9C;
    }
}

loc_803D2A98:
{
    ctx->gpr[0] = r0;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803D2A9C:
{
    r9 = (r0 * 2340);
    r0 = (r3 + 65536);
    r4 = (r0 + r9);
    r0 = MemoryInline::FlatRead32((r4 + 18516));
}

loc_803D2AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803D2AB4:
{
    r0 = MemoryInline::FlatRead32((r4 + 18480));
}

loc_803D2ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D2ADC;
    }
}

loc_803D2AC0:
{
    r0 = (r8 + -1);
}

loc_803D2AC8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803D2AD4;
    }
}

loc_803D2ACC:
{
    MemoryInline::FlatWrite32((r4 + 18480), r8);
    goto loc_803D2ADC;
}

loc_803D2AD4:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r4 + 18480), r0);
}

loc_803D2ADC:
{
    r0 = (r3 + 65536);
    r3 = (r0 + r9);
    r0 = MemoryInline::FlatRead32((r3 + 18504));
}

loc_803D2AEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803D2AF0:
{
    MemoryInline::FlatWrite32((r3 + 18504), r5);
    MemoryInline::FlatWrite32((r3 + 18508), r6);
    MemoryInline::FlatWrite32((r3 + 18512), r7);
    ctx->gpr[0] = r0;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803D2A84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D2A84_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x00000219 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803D2A84 func_803D2A84 preserves=true fpr_mask=0x00000000
