#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t ctr = ctx->ctr;

    goto loc_800D8EBC;

loc_800D8EBC:
{
    r3 = (r3 + 60);
    r0 = 32;
    ctr = r0;
}

loc_800D8EC8:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_800D8ED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D8EFC;
    }
}

loc_800D8ED4:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite8((r3 + 74), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 75), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

loc_800D8EFC:
{
    r3 = (r3 + 80);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D8EC8;
    }
}

loc_800D8F04:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_800D8EBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800D8EBC_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D8EBC func_800D8EBC preserves=true fpr_mask=0x00000000
