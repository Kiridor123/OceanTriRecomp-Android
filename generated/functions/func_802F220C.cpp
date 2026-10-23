#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802F226C(CpuContext* ctx);
extern "C" uint32_t func_802F226C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_802F226C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_802F226C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_802F220C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802F220C;

loc_802F220C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = (r3 + 44);
    ctx->lr = 0x802F2230u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802F226Cu) && KnownTranslatedCpuCall<0x802F226Cu>::kAvailable && !KnownTranslatedCpuCall<0x802F226Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802F226Cu>()) {
        const auto state_free_result_802F226C_4E2 = func_802F226C_statefree_v0(r1, r3, r31, 0x802F2230u);
        r1 = static_cast<uint32_t>(state_free_result_802F226C_4E2[0]);
        r3 = static_cast<uint32_t>(state_free_result_802F226C_4E2[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802F226Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r29 + 84);
    r31 = (r29 + 132);
}

loc_802F2238:
{
    r3 = r30;
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = (r30 + 12);
}

loc_802F2248:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_802F2238;
    }
}

loc_802F224C:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802F220C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802F220C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802F220C func_802F220C preserves=true fpr_mask=0x00000000
