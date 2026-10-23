#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80515524_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    goto loc_80515524;

loc_80515524:
{
    // inline leaf 0x805150E4 (18 guest instruction(s))
}

loc_inl0_0x805150E4:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x805150EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80515124;
    }
}

loc_inl0_0x805150F0:
{
    r4 = MemoryInline::FlatRead32(r5);
}

loc_inl0_0x805150F8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r4))) {
        goto loc_inl0_0x8051511C;
    }
}

loc_inl0_0x805150FC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_inl0_0x80515124;
}

loc_inl0_0x8051511C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_inl0_0x80515124:
{
    r3 = r5;
}

loc_inl0_cont_805150E4:
{
    // end of inlined leaf 0x805150E4
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80515524(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80515524_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80515524 func_80515524 preserves=true fpr_mask=0x00000000
