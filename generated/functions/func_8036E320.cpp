#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BF878(CpuContext* ctx);
extern "C" uint64_t func_802BF878_ra0_0_18_0(CpuContext*);
extern "C" void func_80372E10(CpuContext* ctx);
extern "C" uint64_t func_80372E10_ra38_3a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8036E320_ra8_3a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;

    goto loc_8036E320;

loc_8036E320:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r31));
    if constexpr (KnownRegArgsCpuCall<0x802BF878u>(&func_802BF878)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BF878_554 = func_802BF878_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_802BF878_554);
        r4 = static_cast<uint32_t>(regargs_result_802BF878_554 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BF878u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r30 + 822), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 824), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 828), static_cast<uint8_t>(r31));
    r3 = r30;
    r4 = (r30 + 825);
    r5 = (r30 + 826);
    r6 = (r30 + 827);
    ctx->lr = 0x8036E364u;
    if constexpr (KnownRegArgsCpuCall<0x80372E10u>(&func_80372E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80372E10_926 = func_80372E10_ra38_3a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80372E10_926);
        r4 = static_cast<uint32_t>(regargs_result_80372E10_926 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x80372E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r0 = 900;
    MemoryInline::FlatWrite16((r30 + 830), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8036E320(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8036E320_ra8_3a_18_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x8000003B fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0xFE cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8036E320 func_8036E320 preserves=true fpr_mask=0x00000000
