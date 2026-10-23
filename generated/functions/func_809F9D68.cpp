#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005101C(CpuContext* ctx);
extern "C" uint64_t func_8005101C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_8027CCA8(CpuContext* ctx);
extern "C" uint64_t func_8027CCA8_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8027CE54(CpuContext* ctx);
extern "C" double func_8027CE54_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8027CE54_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_809F9D68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_809F9D68;

loc_809F9D68:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = r29;
    r4 = r30;
    r5 = 0;
    ctx->lr = 0x809F9DA4u;
    if constexpr (KnownRegArgsCpuCall<0x8027CCA8u>(&func_8027CCA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8027CCA8_6B7 = func_8027CCA8_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8027CCA8_6B7);
        r4 = static_cast<uint32_t>(regargs_result_8027CCA8_6B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8027CCA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r29;
    r4 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027CE54u) && KnownTranslatedCpuCall<0x8027CE54u>::kAvailable && !KnownTranslatedCpuCall<0x8027CE54u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027CE54u>()) {
        const auto state_free_result_8027CE54_B40 = func_8027CE54_statefree(r1, r2, r3, r4);
        r1 = static_cast<uint32_t>(state_free_result_8027CE54_B40[0]);
        r5 = static_cast<uint32_t>(state_free_result_8027CE54_B40[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8027CE54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6120));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6116));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6112));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x809F9DE0u;
    if constexpr (KnownRegArgsCpuCall<0x8005101Cu>(&func_8005101C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8005101C_10E0 = func_8005101C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005101C_10E0);
        r4 = static_cast<uint32_t>(regargs_result_8005101C_10E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8005101Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    ctx->lr = 0x809F9DECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFB fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809F9D68 func_809F9D68 preserves=true fpr_mask=0x00000000
