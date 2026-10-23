#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802ABB18(CpuContext* ctx);
extern "C" uint64_t func_802ABB18_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809F1614(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809F1614;

loc_809F1614:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r3 + -7);
}

loc_809F163C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_809F1648;
    }
}

loc_809F1640:
{
}

loc_809F1644:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809F1654;
    }
}

loc_809F1648:
{
    r3 = r31;
    r4 = 5;
    ctx->lr = 0x809F1654u;
    if constexpr (KnownRegArgsCpuCall<0x802ABB18u>(&func_802ABB18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802ABB18_539 = func_802ABB18_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802ABB18_539);
        r4 = static_cast<uint32_t>(regargs_result_802ABB18_539 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802ABB18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809F1654:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r3 = r31;
    // inline leaf 0x802AB264 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 189), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB264
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F1614 func_809F1614 preserves=true fpr_mask=0x00000000
