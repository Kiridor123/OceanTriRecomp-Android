#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FA37C_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800FA37Cu);
    goto loc_800FA37C;

loc_800FA37C:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_800FA37C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800FA37C_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800FA37C func_800FA37C preserves=true fpr_mask=0x00000000
