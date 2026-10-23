#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80081550_ra28_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;

    goto loc_80081550;

loc_80081550:
{
    r4 = 16;
    // inline leaf 0x8007BA38 (11 guest instruction(s))
}

loc_inl0_0x8007BA38:
{
}

loc_inl0_0x8007BA3C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8007BA50;
    }
}

loc_inl0_0x8007BA40:
{
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    goto loc_inl0_cont_8007BA38;
}

loc_inl0_0x8007BA50:
{
    r5 = MemoryInline::FlatRead32((r3 + 204));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 204), r0);
}

loc_inl0_cont_8007BA38:
{
    // end of inlined leaf 0x8007BA38
}

loc_800815C4:
{
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80081550(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80081550_ra28_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000002A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80081550 func_80081550 preserves=true fpr_mask=0x00000000
