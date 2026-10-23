#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011E650(CpuContext* ctx);
extern "C" uint64_t func_8011E650_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8011E694(CpuContext* ctx);
extern "C" void func_8011E694_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D270(CpuContext* ctx);
extern "C" uint32_t func_8012D270_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012F990(CpuContext* ctx);
extern "C" uint64_t func_8012F990_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_8011E694_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_801A427C_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_801A427C;

loc_801A427C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 7;
    r5 = 6;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl0_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl0_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl0_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8012D298;
    }
}

loc_inl0_0x8012D290:
{
    r3 = 1;
    goto loc_inl0_cont_8012D270;
}

loc_inl0_0x8012D298:
{
    r3 = 0;
}

loc_inl0_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801A42A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A42F0;
    }
}

loc_801A42A4:
{
    r3 = r31;
    r4 = -1;
    // inline leaf 0x8011E694 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 2084), r0);
    // end of inlined leaf 0x8011E694
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_801A42C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_801A4344;
    }
}

loc_801A42C4:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21228));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -21864));
    ctx->lr = 0x801A42D8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012F990_CDB = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_CDB);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_CDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8012F990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801A42DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A4344;
    }
}

loc_801A42E0:
{
    r3 = r31;
    r4 = 262144;
    // inline leaf 0x8011E684 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 2084), r0);
    // end of inlined leaf 0x8011E684
    goto loc_801A4344;
}

loc_801A42F0:
{
    r3 = r31;
    r4 = 7;
    r5 = 7;
    if constexpr (KnownRegArgsCpuCall<0x8012D270u>(&func_8012D270)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D270_1335 = func_8012D270_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8012D270_1335;
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8012D270u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    }
}

loc_801A4304:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801A4324;
    }
}

loc_801A4308:
{
    r3 = r31;
    r4 = -1;
    // inline leaf 0x8011E694 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 2084), r0);
    // end of inlined leaf 0x8011E694
    r3 = r31;
    r4 = 524288;
    // inline leaf 0x8011E684 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 2084), r0);
    // end of inlined leaf 0x8011E684
    goto loc_801A4344;
}

loc_801A4324:
{
    r3 = r31;
    ctx->lr = 0x801A432Cu;
    if constexpr (KnownRegArgsCpuCall<0x8011E650u>(&func_8011E650)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8011E650_189B = func_8011E650_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8011E650_189B);
        r4 = static_cast<uint32_t>(regargs_result_8011E650_189B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8011E650u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_801A4334:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801A4344;
    }
}

loc_801A4338:
{
    r3 = r31;
    r4 = 262144;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8011E694u) && KnownTranslatedCpuCall<0x8011E694u>::kAvailable && !KnownTranslatedCpuCall<0x8011E694u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8011E694u>()) {
        const auto state_free_result_8011E694_1CFB = func_8011E694_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8011E694_1CFB);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8011E694u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801A4344:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801A427C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801A427C_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A427C func_801A427C preserves=true fpr_mask=0x00000000
