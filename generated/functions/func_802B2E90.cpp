#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007A21C(CpuContext* ctx);
extern "C" uint64_t func_8007A21C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80082CE4(CpuContext* ctx);
extern "C" uint64_t func_80082CE4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AE240(CpuContext* ctx);
extern "C" uint64_t func_802AE240_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AE2B4(CpuContext* ctx);
extern "C" uint32_t func_802AE2B4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B2FA0(CpuContext* ctx);
extern "C" void func_802B2FA0_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802BE0EC(CpuContext* ctx);
extern "C" uint32_t func_802BE0EC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" MkwStateFreeResult2 func_802AE2B4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_802B2FA0_statefree(uint32_t, uint32_t, PPC_FPR);

extern "C" uint64_t func_802B2E90_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x802B2E90u);
    goto loc_802B2E90;

loc_802B2E90:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r3 = 0x806C0000u;
    r31 = (r3 + -21440);
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    r4 = 0;
    ctx->lr = 0x802B2EB4u;
    if constexpr (KnownRegArgsCpuCall<0x80082CE4u>(&func_80082CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80082CE4_8B8 = func_80082CE4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80082CE4_8B8);
        r4 = static_cast<uint32_t>(regargs_result_80082CE4_8B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80082CE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x802B2EC4u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AE2B4u) && KnownTranslatedCpuCall<0x802AE2B4u>::kAvailable && !KnownTranslatedCpuCall<0x802AE2B4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AE2B4u>()) {
        const auto state_free_result_802AE2B4_C95 = func_802AE2B4_statefree(r1, r3, r4, 0x802B2EC4u);
        r0 = static_cast<uint32_t>(state_free_result_802AE2B4_C95[0]);
        r1 = static_cast<uint32_t>(state_free_result_802AE2B4_C95[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AE2B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 12);
    r4 = 0;
    r5 = (r1 + 24);
    r6 = (r1 + 20);
    r7 = 0;
    r8 = 0;
    r9 = (r1 + 16);
    ctx->lr = 0x802B2EE4u;
    if constexpr (KnownRegArgsCpuCall<0x8007A21Cu>(&func_8007A21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        const auto regargs_result_8007A21C_11AA = func_8007A21C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007A21C_11AA);
        r4 = static_cast<uint32_t>(regargs_result_8007A21C_11AA >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8007A21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802B2EF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B2F38;
    }
}

loc_802B2EF4:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B2EFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B2F1C;
    }
}

loc_802B2F00:
{
    r3 = (r1 + 32);
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r4 = (r31 + r0);
    r4 = (r4 + 3548);
    // inline leaf 0x802B2FA0 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x802B2FA0
    goto loc_802B2F84;
}

loc_802B2F1C:
{
    r3 = (r1 + 32);
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r4 = (r31 + r0);
    r4 = (r4 + 3564);
    // inline leaf 0x802B2FA0 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x802B2FA0
    goto loc_802B2F84;
}

loc_802B2F38:
{
    // inline leaf 0x802AFF9C (8 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 3092));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802AFF9C
}

loc_802B2F40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B2F8C;
    }
}

loc_802B2F44:
{
    ctx->lr = 0x802B2F48u;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE0EC_1F45 = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_1F45;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
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
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_802B2F4C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B2F6C;
    }
}

loc_802B2F50:
{
    r3 = (r1 + 32);
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r4 = (r31 + r0);
    r4 = (r4 + 3564);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802B2FA0u) && KnownTranslatedCpuCall<0x802B2FA0u>::kAvailable && !KnownTranslatedCpuCall<0x802B2FA0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802B2FA0u>()) {
        const auto state_free_result_802B2FA0_2419 = func_802B2FA0_statefree(r3, r4, f0);
        r0 = static_cast<uint32_t>(state_free_result_802B2FA0_2419[0]);
        f0.raw = static_cast<uint64_t>(state_free_result_802B2FA0_2419[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802B2FA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_802B2F84;
}

loc_802B2F6C:
{
    r3 = (r1 + 32);
    r0 = MemoryInline::FlatRead8((r31 + 3014));
    r0 = (r0 * 476);
    r4 = (r31 + r0);
    r4 = (r4 + 3548);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802B2FA0u) && KnownTranslatedCpuCall<0x802B2FA0u>::kAvailable && !KnownTranslatedCpuCall<0x802B2FA0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802B2FA0u>()) {
        const auto state_free_result_802B2FA0_2941 = func_802B2FA0_statefree(r3, r4, f0);
        r0 = static_cast<uint32_t>(state_free_result_802B2FA0_2941[0]);
        f0.raw = static_cast<uint64_t>(state_free_result_802B2FA0_2941[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802B2FA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_802B2F84:
{
    r3 = (r1 + 32);
    ctx->lr = 0x802B2F8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AE240u>(&func_802AE240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_802AE240_2D9B = func_802AE240_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AE240_2D9B);
        r4 = static_cast<uint32_t>(regargs_result_802AE240_2D9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AE240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_802B2F8C:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B2E90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B2E90_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0xC0000003 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B2E90 func_802B2E90 preserves=true fpr_mask=0x00000000
