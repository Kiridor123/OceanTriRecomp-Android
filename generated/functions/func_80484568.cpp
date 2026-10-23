#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80484568_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;

    goto loc_80484568;

loc_80484568:
{
    r5 = 0x80740000u;
    r5 = (r5 + -17608);
    r0 = MemoryInline::FlatRead8((r5 + 1614));
}

loc_80484578:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_80484584;
    }
}

loc_8048457C:
{
    r3 = 12;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80484584:
{
    r4 = MemoryInline::FlatRead16((r5 + 1590));
    r0 = MemoryInline::FlatRead16((r5 + 1592));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r5 + 1594));
    r0 = MemoryInline::FlatRead16((r5 + 1596));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 1598));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80484568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80484568_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000028 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80484568 func_80484568 preserves=true fpr_mask=0x00000000
