#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80457ADC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80457ADC;

loc_80457ADC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -20816));
}

loc_80457AF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-2))) {
        goto loc_80457B00;
    }
}

loc_80457AF4:
{
    // inline leaf 0x80457B5C (10 guest instruction(s))
}

loc_inl0_0x80457B5C:
{
}

loc_inl0_0x80457B60:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(31))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80457B64:
{
    r4 = (r3 * 12);
    r3 = 0x806F0000u;
    r0 = 0;
    r3 = (r3 + 28632);
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_1, r0);
    r3 = r3_addr_1;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_inl0_cont_80457B5C;
}

loc_inl0_return:
{
}

loc_inl0_cont_80457B5C:
{
    // end of inlined leaf 0x80457B5C
    r0 = -2;
    MemoryInline::FlatWrite32((r13 + -20816), r0);
}

loc_80457B00:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80457ADC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80457ADC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457ADC func_80457ADC preserves=true fpr_mask=0x00000000
