#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007499C(CpuContext* ctx);
extern "C" uint64_t func_8007499C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074BC8(CpuContext* ctx);
extern "C" uint64_t func_80074BC8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80074ED0(CpuContext* ctx);
extern "C" uint64_t func_80074ED0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8097DC7C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8097DCC0_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8097DC7C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_8097DB98(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    goto loc_8097DB98;

loc_8097DB98:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r3 = 0x80790000u;
    r3 = MemoryInline::FlatRead32((r3 + 28212));
    r4 = 0;
    ctx->lr = 0x8097DBB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80082BD4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x8097DBC4u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8097DCC0u) && KnownTranslatedCpuCall<0x8097DCC0u>::kAvailable && !KnownTranslatedCpuCall<0x8097DCC0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8097DCC0u>()) {
        const auto state_free_result_8097DCC0_98A = func_8097DCC0_statefree(r1, r3, r4, 0x8097DBC4u);
        r1 = static_cast<uint32_t>(state_free_result_8097DCC0_98A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8097DCC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 40);
    ctx->lr = 0x8097DBCCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8097DC7Cu) && KnownTranslatedCpuCall<0x8097DC7Cu>::kAvailable && !KnownTranslatedCpuCall<0x8097DC7Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8097DC7Cu>()) {
        const auto state_free_result_8097DC7C_DBC = func_8097DC7C_statefree_v0(r1, r3, r31, 0x8097DBCCu);
        r1 = static_cast<uint32_t>(state_free_result_8097DC7C_DBC);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8097DC7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 28);
    // inline leaf 0x8097DC78 (1 guest instruction(s))
    // end of inlined leaf 0x8097DC78
    r3 = (r1 + 16);
    // inline leaf 0x8097DC78 (1 guest instruction(s))
    // end of inlined leaf 0x8097DC78
    r0 = 2;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 40), r0);
    r5 = 0x809A0000u;
    r4 = (r5 + -712);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r1 + 64), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 14644));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r1 + 80), f0.d);
    r3 = (r1 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r5 + -712));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 12);
    r4 = (r1 + 28);
    ctx->lr = 0x8097DC30u;
    if constexpr (KnownRegArgsCpuCall<0x8007499Cu>(&func_8007499C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8007499C_1859 = func_8007499C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007499C_1859);
        r4 = static_cast<uint32_t>(regargs_result_8007499C_1859 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8007499Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    r3 = (r1 + 12);
    r4 = (r1 + 40);
    ctx->lr = 0x8097DC3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80074BC8u>(&func_80074BC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80074BC8_1C13 = func_80074BC8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80074BC8_1C13);
        r4 = static_cast<uint32_t>(regargs_result_80074BC8_1C13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80074BC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 12);
    r4 = 0x80990000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 14664));
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    r4 = 0x80990000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 14656));
    r4 = 0x80990000u;
    f4.d = MemoryInline::FlatReadFloat32((r4 + 14668));
    ctx->lr = 0x8097DC68u;
    if constexpr (KnownRegArgsCpuCall<0x80074ED0u>(&func_80074ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80074ED0_214A = func_80074ED0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80074ED0_214A);
        r4 = static_cast<uint32_t>(regargs_result_80074ED0_214A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80074ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FE6 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8097DB98 func_8097DB98 preserves=true fpr_mask=0x00000000
