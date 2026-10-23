#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041EF0(CpuContext* ctx);
extern "C" void func_80041EF0_ra8_e_0_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_800514F4(CpuContext* ctx);
extern "C" void func_800514F4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80041EF0_statefree(uint32_t, PPC_FPR, PPC_FPR, PPC_FPR);
extern "C" uint64_t func_800514F4_statefree(uint32_t, uint32_t);
extern "C" void func_800514F4_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_801D701C_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_801D701C;

loc_801D701C:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r3 = (r1 + 164);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -18560), 0, 672u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r2 + -18416));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r31 = 0x806B0000u;
    r3 = (r31 + -24656);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 152);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 664u, (r2 + -17896));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r31 + -24656);
    r3 = (r3 + 12);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 140);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r2 + -18416));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r31 = 0x806B0000u;
    r3 = (r31 + -24632);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 128);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 664u, (r2 + -17896));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r31 + -24632);
    r3 = (r3 + 12);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 116);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 212u, (r2 + -18348));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r31 = 0x806B0000u;
    r3 = (r31 + -24608);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 104);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 668u, (r2 + -17892));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r31 + -24608);
    r3 = (r3 + 12);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 92);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r2 + -18416));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r31 = 0x806B0000u;
    r3 = (r31 + -24584);
    // inline leaf 0x800514F4 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800514F4
    r3 = (r1 + 80);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -18560));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 664u, (r2 + -17896));
    f3.d = f1.d;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80041EF0u) && KnownTranslatedCpuCall<0x80041EF0u>::kAvailable && !KnownTranslatedCpuCall<0x80041EF0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80041EF0u>()) {
        func_80041EF0_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80041EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = r3;
    r3 = (r31 + -24584);
    r3 = (r3 + 12);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        func_800514F4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17888));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18560));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17884));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80041EF0u) && KnownTranslatedCpuCall<0x80041EF0u>::kAvailable && !KnownTranslatedCpuCall<0x80041EF0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80041EF0u>()) {
        func_80041EF0_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80041EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = r3;
    r31 = 0x805B0000u;
    r3 = (r31 + 28944);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        func_800514F4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17880));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17876));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17872));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80041EF0u) && KnownTranslatedCpuCall<0x80041EF0u>::kAvailable && !KnownTranslatedCpuCall<0x80041EF0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80041EF0u>()) {
        func_80041EF0_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80041EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = r3;
    r31 = (r31 + 28944);
    r3 = (r31 + 12);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        func_800514F4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17868));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18560));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17864));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80041EF0u) && KnownTranslatedCpuCall<0x80041EF0u>::kAvailable && !KnownTranslatedCpuCall<0x80041EF0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80041EF0u>()) {
        func_80041EF0_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80041EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = r3;
    r3 = (r31 + 28);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        func_800514F4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17860));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18560));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17856));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80041EF0u) && KnownTranslatedCpuCall<0x80041EF0u>::kAvailable && !KnownTranslatedCpuCall<0x80041EF0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80041EF0u>()) {
        func_80041EF0_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80041EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = r3;
    r3 = (r31 + 40);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        func_800514F4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17852));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18560));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17848));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80041EF0u) && KnownTranslatedCpuCall<0x80041EF0u>::kAvailable && !KnownTranslatedCpuCall<0x80041EF0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80041EF0u>()) {
        func_80041EF0_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80041EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = r3;
    r3 = (r31 + 56);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        func_800514F4_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17844));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18560));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -17840));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80041EF0u) && KnownTranslatedCpuCall<0x80041EF0u>::kAvailable && !KnownTranslatedCpuCall<0x80041EF0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80041EF0u>()) {
        func_80041EF0_statefree(r3, f1, f2, f3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80041EF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r4 = r3;
    r3 = (r31 + 68);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800514F4u) && KnownTranslatedCpuCall<0x800514F4u>::kAvailable && !KnownTranslatedCpuCall<0x800514F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800514F4u>()) {
        const auto state_free_result_800514F4_4ECA = func_800514F4_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_800514F4_4ECA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800514F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801D701C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801D701C_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000006 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D701C func_801D701C preserves=true fpr_mask=0x00000000
