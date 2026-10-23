#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034C3B4(CpuContext* ctx);
extern "C" uint32_t func_8034C3B4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8034C3B4_statefree(uint32_t);

extern "C" uint64_t func_802DE560_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    goto loc_802DE560;

loc_802DE560:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r3 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8034C3B4u) && KnownTranslatedCpuCall<0x8034C3B4u>::kAvailable && !KnownTranslatedCpuCall<0x8034C3B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8034C3B4u>()) {
        const auto state_free_result_8034C3B4_435 = func_8034C3B4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8034C3B4_435);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8034C3B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
    }
    r4 = 1;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r5 & 7);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (static_cast<int32_t>(r5) >> 3);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 14770));
    r3 = (r4 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DE560(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DE560_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802DE560 func_802DE560 preserves=true fpr_mask=0x00000000
