#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BE058_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x803BE058u);
    goto loc_803BE058;

loc_803BE058:
{
    r5 = MemoryInline::FlatRead32((r13 + -16840));
    r5 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r3 & 255);
    r0 = (r0 * 548);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_803BE074:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BE080;
    }
}

loc_803BE078:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE080:
{
    r3 = MemoryInline::FlatRead8((r5 + 4));
    r0 = (r4 & 255);
}

loc_803BE08C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803BE098;
    }
}

loc_803BE090:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE098:
{
    r3 = MemoryInline::FlatRead8((r5 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803BE0A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BE0BC;
    }
}

loc_803BE0A8:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_803BE0B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_803BE0BC;
    }
}

loc_803BE0B4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE0BC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803BE0C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803BE0E8;
    }
}

loc_803BE0C8:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_803BE0D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803BE0E0;
    }
}

loc_803BE0D4:
{
    r0 = MemoryInline::FlatRead8((r5 + 9));
}

loc_803BE0DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BE0E8;
    }
}

loc_803BE0E0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_803BE0E8:
{
    r3 = (r5 + 464);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_803BE058(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BE058_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BE058 func_803BE058 preserves=true fpr_mask=0x00000000
