#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8049FF04_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8049FF04;

loc_8049FF04:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8049FF1C;
}

loc_8049FF0C:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_8049FF14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_8049FF18:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8049FF1C:
{
}

loc_8049FF20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8049FF0C;
    }
}

loc_8049FF24:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8049FF04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8049FF04_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8049FF04 func_8049FF04 preserves=true fpr_mask=0x00000000
