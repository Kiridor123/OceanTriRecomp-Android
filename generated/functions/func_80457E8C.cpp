#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80457E8C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80457E8C;

loc_80457E8C:
{
    r0 = (r4 + 8);
    MemoryInline::FlatWrite32((r31 + 8), r0);
}

loc_80457F38:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r0 & 127);
}

loc_80457F48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80457F64;
    }
}

loc_80457F4C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r0 & 127);
}

loc_80457F64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80457E8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80457E8C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457E8C func_80457E8C preserves=true fpr_mask=0x00000000
