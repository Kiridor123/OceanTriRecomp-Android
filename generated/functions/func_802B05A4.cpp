#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802B05A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;

    MKW_GUEST_ENTER(0x802B05A4u);
    goto loc_802B05A4;

loc_802B05A4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80070124u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r3;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 72));
    // inline leaf 0x802B05E0 (7 guest instruction(s))
}

loc_inl0_0x802B05E0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x802B05E8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x802B05F4;
    }
}

loc_inl0_0x802B05EC:
{
    r3 = (r0 + r4);
    goto loc_inl0_cont_802B05E0;
}

loc_inl0_0x802B05F4:
{
    r3 = 0;
}

loc_inl0_cont_802B05E0:
{
    // end of inlined leaf 0x802B05E0
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B05A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B05A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B05A4 func_802B05A4 preserves=true fpr_mask=0x00000000
