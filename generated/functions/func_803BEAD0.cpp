#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BE9F8(CpuContext* ctx);
extern "C" uint64_t func_803BE9F8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803BEAD0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x803BEAD0u);
    goto loc_803BEAD0;

loc_803BEAD0:
{
    r5 = 0x80660000u;
    r5 = (r5 + -21920);
    r0 = MemoryInline::FlatRead8((r5 + 2224));
}

loc_803BEAE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BEAEC;
    }
}

loc_803BEAE4:
{
    r3 = (r4 & 255);
    // inline leaf 0x803BEA8C (17 guest instruction(s))
}

loc_inl0_0x803BEA8C:
{
    r0 = (r3 & 255);
    r4 = 0x80660000u;
    r4 = (r4 + -19184);
    r4_addr_0 = (r4 + r0);
    r5 = MemoryInline::FlatRead8(r4_addr_0);
    r4 = 0x80600000u;
    r4 = (r4 + -29464);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl0_0x803BEAAC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x803BEAB4;
    }
}

loc_inl0_0x803BEAB0:
{
    r5 = r0;
}

loc_inl0_0x803BEAB4:
{
    r0 = (r3 & 255);
}

loc_inl0_0x803BEABC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl0_0x803BEAC8;
    }
}

loc_inl0_0x803BEAC0:
{
    r0 = (r5 ^ 1);
    r5 = (r0 & 255);
}

loc_inl0_0x803BEAC8:
{
    r3 = r5;
}

loc_inl0_cont_803BEA8C:
{
    // end of inlined leaf 0x803BEA8C
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803BEAEC:
{
    r3 = (r3 & 255);
    r4 = (r4 & 255);
    if constexpr (KnownRegArgsCpuCall<0x803BE9F8u>(&func_803BE9F8)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_803BE9F8_7CE = func_803BE9F8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803BE9F8_7CE);
        r4 = static_cast<uint32_t>(regargs_result_803BE9F8_7CE >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BE9F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BEAD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BEAD0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BEAD0 func_803BEAD0 preserves=true fpr_mask=0x00000000
