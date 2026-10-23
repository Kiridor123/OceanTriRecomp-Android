#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8055FECC_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8055FECC;

loc_8055FECC:
{
    r3 = 0x80650000u;
    r6 = (r13 + -13224);
    r8 = (r3 + 18872);
    r9 = MemoryInline::FlatRead32((r3 + 18872));
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r4 = (r13 + -13216);
    r5 = MemoryInline::FlatRead32((r8 + 8));
    r3 = (r13 + -13208);
    r0 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r13 + -13224), r9);
    MemoryInline::FlatWrite32((r6 + 4), r7);
    MemoryInline::FlatWrite32((r13 + -13216), r9);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    MemoryInline::FlatWrite32((r13 + -13208), r9);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055FECC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055FECC_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055FECC func_8055FECC preserves=true fpr_mask=0x00000000
