#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801F2060_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801F2060;

loc_801F2060:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x801F2018 (18 guest instruction(s))
}

loc_inl0_0x801F2018:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl0_0x801F2020:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x801F2058;
    }
}

loc_inl0_0x801F2024:
{
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 * 42);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 13184));
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 3584));
    r0 = (r3 + -11);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    r3 = (r3 + 1);
    goto loc_inl0_cont_801F2018;
}

loc_inl0_0x801F2058:
{
    r3 = 3;
}

loc_inl0_cont_801F2018:
{
    // end of inlined leaf 0x801F2018
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 7));
}

loc_801F2084:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_801F2090;
    }
}

loc_801F2088:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
}

loc_801F2090:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F2060(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F2060_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F2060 func_801F2060 preserves=true fpr_mask=0x00000000
