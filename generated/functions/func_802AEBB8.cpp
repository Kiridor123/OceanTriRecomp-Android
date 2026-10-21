#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AE240(CpuContext* ctx);
extern "C" uint64_t func_802AE240_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AEC64(CpuContext* ctx);
extern "C" uint64_t func_802AEC64_ra0_0_18_0(CpuContext*);
extern "C" void func_802C1DCC(CpuContext* ctx);
extern "C" uint32_t func_802C1DCC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802C1F04(CpuContext* ctx);
extern "C" uint64_t func_802C1F04_ra38_180_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" MkwStateFreeResult2 func_802C1DCC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802AEBB8_ra38_180_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x802AEBB8u);
    goto loc_802AEBB8;

loc_802AEBB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r30 + 3014));
    r0 = (r0 * 476);
    r3 = (r30 + r0);
    r31 = (r3 + 3104);
    r3 = (r31 + 444);
    ctx->lr = 0x802AEBF0u;
    if constexpr (KnownRegArgsCpuCall<0x802AE240u>(&func_802AE240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AE240_7B7 = func_802AE240_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AE240_7B7);
        r4 = static_cast<uint32_t>(regargs_result_802AE240_7B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AE240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x802AEBF4u;
    if constexpr (KnownRegArgsCpuCall<0x802AEC64u>(&func_802AEC64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AEC64_ABD = func_802AEC64_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_802AEC64_ABD);
        r4 = static_cast<uint32_t>(regargs_result_802AEC64_ABD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AEC64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = 0;
}

loc_802AEBF8:
{
    r3 = (r30 & 255);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 1);
    r0 = (0 - r0);
    r4 = (r3 & ~r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r4 & 255);
    ctx->lr = 0x802AEC24u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802C1DCCu) && KnownTranslatedCpuCall<0x802C1DCCu>::kAvailable && !KnownTranslatedCpuCall<0x802C1DCCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802C1DCCu>()) {
        const auto state_free_result_802C1DCC_FE1 = func_802C1DCC_statefree(r1, r3, r13, 0x802AEC24u);
        r1 = static_cast<uint32_t>(state_free_result_802C1DCC_FE1[0]);
        r3 = static_cast<uint32_t>(state_free_result_802C1DCC_FE1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802C1DCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r13 = ctx->gpr[13];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r30 & 255);
    r0 = (r0 * 12);
    r4 = (r31 + r0);
    r4 = (r4 + 16);
    r5 = (r1 + 8);
    r6 = 0;
    ctx->lr = 0x802AEC40u;
    if constexpr (KnownRegArgsCpuCall<0x802C1F04u>(&func_802C1F04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802C1F04_13F1 = func_802C1F04_ra38_180_18_0(ctx, r3, r4, r5, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C1F04_13F1);
        r4 = static_cast<uint32_t>(regargs_result_802C1F04_13F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802C1F04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r30 = (r30 + 1);
}

loc_802AEC48:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(3))) {
        goto loc_802AEBF8;
    }
}

loc_802AEC4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AEBB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AEBB8_ra38_180_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF800381 fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AEBB8 func_802AEBB8 preserves=true fpr_mask=0x00000000
