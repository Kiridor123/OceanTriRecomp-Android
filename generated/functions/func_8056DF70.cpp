#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056C874(CpuContext* ctx);
extern "C" uint32_t func_8056C874_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8056C874_statefree(uint32_t);

extern "C" uint64_t func_8056DF70_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8056DF70;

loc_8056DF70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80790000u;
    r3 = (r31 + 12836);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8056C874u) && KnownTranslatedCpuCall<0x8056C874u>::kAvailable && !KnownTranslatedCpuCall<0x8056C874u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8056C874u>()) {
        const auto state_free_result_8056C874_469 = func_8056C874_statefree(r3);
        r6 = static_cast<uint32_t>(state_free_result_8056C874_469);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8056C874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
    }
    r4 = 0x80570000u;
    r5 = 0x80790000u;
    r3 = (r31 + 12836);
    r4 = (r4 + -8264);
    r5 = (r5 + 12824);
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056DF70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056DF70_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056DF70 func_8056DF70 preserves=true fpr_mask=0x00000000
