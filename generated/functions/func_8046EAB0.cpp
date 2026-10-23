#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046EC40(CpuContext* ctx);
extern "C" uint64_t func_8046EC40_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8046F110(CpuContext* ctx);
extern "C" uint64_t func_8046F110_ra20_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80470390(CpuContext* ctx);
extern "C" uint64_t func_80470390_ra0_0_18_0(CpuContext*);
extern "C" void func_80470930(CpuContext* ctx);
extern "C" uint64_t func_80470930_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804718F0(CpuContext* ctx);
extern "C" uint64_t func_804718F0_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CBA00(CpuContext* ctx);
extern "C" uint64_t func_804CBA00_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8046EC40_statefree(uint32_t, uint32_t);

extern "C" void func_8046EAB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_8046EAB0;

loc_8046EAB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -16216));
}

loc_8046EACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046EAFC;
    }
}

loc_8046EAD0:
{
    r3 = MemoryInline::FlatRead32((r13 + -20744));
    ctx->lr = 0x8046EAD8u;
    if constexpr (KnownRegArgsCpuCall<0x804CBA00u>(&func_804CBA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_804CBA00_972 = func_804CBA00_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CBA00_972);
        r4 = static_cast<uint32_t>(regargs_result_804CBA00_972 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CBA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8046EC40u) && KnownTranslatedCpuCall<0x8046EC40u>::kAvailable && !KnownTranslatedCpuCall<0x8046EC40u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8046EC40u>()) {
        const auto state_free_result_8046EC40_F70 = func_8046EC40_statefree(r13, ctr);
        ctr = static_cast<uint32_t>(state_free_result_8046EC40_F70);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046EC40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    ctx->lr = 0x8046EAE0u;
    if constexpr (KnownRegArgsCpuCall<0x804718F0u>(&func_804718F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_804718F0_1351 = func_804718F0_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_804718F0_1351);
        r4 = static_cast<uint32_t>(regargs_result_804718F0_1351 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804718F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    // inline leaf 0x80470E60 (22 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16024), 0, 80u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -16024), r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -16020), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -16016), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r13 + -16012), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r13 + -16008), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r13 + -16004), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r13 + -16000), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r13 + -15996), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r13 + -15992), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r13 + -15988), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r13 + -15984), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r13 + -15980), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r13 + -15976), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r13 + -15972), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r13 + -15968), r0);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r13 + -15964), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r13 + -15960), r0);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r13 + -15956), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r13 + -15952), r0);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r13 + -15948), r0);
    }
    // end of inlined leaf 0x80470E60
    ctx->lr = 0x8046EAE8u;
    if constexpr (KnownRegArgsCpuCall<0x8046F110u>(&func_8046F110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8046F110_247C = func_8046F110_ra20_0_18_0(ctx, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046F110_247C);
        r4 = static_cast<uint32_t>(regargs_result_8046F110_247C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046F110u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    if constexpr (KnownRegArgsCpuCall<0x80470390u>(&func_80470390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80470390_2818 = func_80470390_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80470390_2818);
        r4 = static_cast<uint32_t>(regargs_result_80470390_2818 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80470390u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r31;
    ctx->lr = 0x8046EAF4u;
    if constexpr (KnownRegArgsCpuCall<0x80470930u>(&func_80470930)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80470930_2B72 = func_80470930_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80470930_2B72);
        r4 = static_cast<uint32_t>(regargs_result_80470930_2B72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80470930u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -16216), r0);
}

loc_8046EAFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027EF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046EAB0 func_8046EAB0 preserves=true fpr_mask=0x00000000
