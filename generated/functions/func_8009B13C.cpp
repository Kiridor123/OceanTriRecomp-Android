#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009ACA8(CpuContext* ctx);
extern "C" uint32_t func_8009ACA8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8009ACFC(CpuContext* ctx);
extern "C" uint64_t func_8009ACFC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8009ACA8_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8009ACFC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009B13C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8009B13Cu);
    goto loc_8009B13C;

loc_8009B13C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 48;
    r30 = 1022623744;
    r4 = (r30 + -12544);
    ctx->lr = 0x8009B160u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8009ACFCu) && KnownTranslatedCpuCall<0x8009ACFCu>::kAvailable && !KnownTranslatedCpuCall<0x8009ACFCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8009ACFCu>()) {
        const auto state_free_result_8009ACFC_541 = func_8009ACFC_statefree(r1, r3, r4, 0x8009B160u);
        r1 = static_cast<uint32_t>(state_free_result_8009ACFC_541);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8009ACFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 64;
    r31 = 15990784;
    r4 = (r31 + -12484);
    ctx->lr = 0x8009B170u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8009ACFCu) && KnownTranslatedCpuCall<0x8009ACFCu>::kAvailable && !KnownTranslatedCpuCall<0x8009ACFCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8009ACFCu>()) {
        const auto state_free_result_8009ACFC_844 = func_8009ACFC_statefree(r1, r3, r4, 0x8009B170u);
        r1 = static_cast<uint32_t>(state_free_result_8009ACFC_844);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8009ACFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 4120;
    r4 = 2;
    ctx->lr = 0x8009B17Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8009ACA8u) && KnownTranslatedCpuCall<0x8009ACA8u>::kAvailable && !KnownTranslatedCpuCall<0x8009ACA8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8009ACA8u>()) {
        const auto state_free_result_8009ACA8_B28 = func_8009ACA8_statefree(r1, r3, r4, 0x8009B17Cu);
        r1 = static_cast<uint32_t>(state_free_result_8009ACA8_B28);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8009ACA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r30 + -12544);
    // inline leaf 0x8009AB80 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x8009AB80
    r3 = (r31 + -12484);
    // inline leaf 0x8009AB80 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x8009AB80
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

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009B13C func_8009B13C preserves=true fpr_mask=0x00000000
