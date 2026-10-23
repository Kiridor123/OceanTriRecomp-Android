#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469184(CpuContext* ctx);
extern "C" uint32_t func_80469184_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046A160(CpuContext* ctx);
extern "C" uint64_t func_8046A160_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046A970(CpuContext* ctx);
extern "C" uint64_t func_8046A970_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046ADA8(CpuContext* ctx);
extern "C" uint64_t func_8046ADA8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046A484_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8046A484;

loc_8046A484:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r31 = r5;
    r5 = 64;
    r30 = r6;
    r29 = r4;
    r4 = 0;
    r28 = r3;
    r3 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x80469184u>(&func_80469184)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80469184_8DB = func_80469184_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469184_8DB;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80469184u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 212;
    r0 = 64;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r3));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r31));
    ctx->lr = 0x8046A4ECu;
    if constexpr (KnownRegArgsCpuCall<0x8046A970u>(&func_8046A970)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046A970_D17 = func_8046A970_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046A970_D17);
        r4 = static_cast<uint32_t>(regargs_result_8046A970_D17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8046A970u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8046A4F0:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046A50C;
    }
}

loc_8046A4F8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 24);
    r5 = 64;
    if constexpr (KnownRegArgsCpuCall<0x8046ADA8u>(&func_8046ADA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046ADA8_13FF = func_8046ADA8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046ADA8_13FF);
        r4 = static_cast<uint32_t>(regargs_result_8046ADA8_13FF >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8046ADA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    r31 = r3;
}

loc_8046A50C:
{
}

loc_8046A510:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8046A564;
    }
}

loc_8046A514:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    r0 = -1;
    r4 = (r1 + 16);
    MemoryInline::FlatWrite32(r29, r0);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = 0x8046A530u;
    if constexpr (KnownRegArgsCpuCall<0x8046A160u>(&func_8046A160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046A160_1857 = func_8046A160_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046A160_1857);
        r4 = static_cast<uint32_t>(regargs_result_8046A160_1857 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8046A160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8046A534:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046A55C;
    }
}

loc_8046A53C:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8046AA0C (9 guest instruction(s))
}

loc_inl0_0x8046AA0C:
{
}

loc_inl0_0x8046AA10:
{
    r0 = 0;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl0_0x8046AA28;
    }
}

loc_inl0_0x8046AA18:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r3 = (r3 + 31264);
    r0 = (r3 + r0);
}

loc_inl0_0x8046AA28:
{
    r3 = r0;
}

loc_inl0_cont_8046AA0C:
{
    // end of inlined leaf 0x8046AA0C
}

loc_8046A548:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046A55C;
    }
}

loc_8046A54C:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    MemoryInline::FlatWrite32(r30, r0);
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8046A55C:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    // inline leaf 0x8046AA30 (10 guest instruction(s))
}

loc_inl1_0x8046AA30:
{
}

loc_inl1_0x8046AA34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8046AA38:
{
}

loc_inl1_0x8046AA3C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8046AA40:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r4 = 0;
    r3 = (r3 + 31264);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r4);
    goto loc_inl1_cont_8046AA30;
}

loc_inl1_return:
{
}

loc_inl1_cont_8046AA30:
{
    // end of inlined leaf 0x8046AA30
}

loc_8046A564:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    // inline leaf 0x8046AA30 (10 guest instruction(s))
}

loc_inl2_0x8046AA30:
{
}

loc_inl2_0x8046AA34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8046AA38:
{
}

loc_inl2_0x8046AA3C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8046AA40:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r4 = 0;
    r3 = (r3 + 31264);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_4, r4);
    goto loc_inl2_cont_8046AA30;
}

loc_inl2_return:
{
}

loc_inl2_cont_8046AA30:
{
    // end of inlined leaf 0x8046AA30
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046A484(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046A484_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046A484 func_8046A484 preserves=true fpr_mask=0x00000000
