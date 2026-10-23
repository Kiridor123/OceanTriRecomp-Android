#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805142B0(CpuContext* ctx);
extern "C" uint64_t func_805142B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80514500(CpuContext* ctx);
extern "C" uint64_t func_80514500_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80514880(CpuContext* ctx);
extern "C" uint64_t func_80514880_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80520C84(CpuContext* ctx);
extern "C" uint64_t func_80520C84_ra608_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80514A80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80514A80;

loc_80514A80:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r31 = r3;
    r30 = r4;
    r4 = (r13 + -19096);
    r28 = r5;
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_986 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_986);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_986 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
}

loc_80514ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80514C18;
    }
}

loc_80514AC0:
{
    r29 = MemoryInline::FlatRead8((r31 + 7));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x80514AD4u;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80520C84_E3C = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_E3C);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_E3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x80520C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead16((r28 + 2));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
}

loc_80514AE0:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(5))) {
        goto loc_80514AEC;
    }
}

loc_80514AE4:
{
}

loc_80514AE8:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(7))) {
        goto loc_80514B90;
    }
}

loc_80514AEC:
{
}

loc_80514AF0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(20))) {
        goto loc_80514C18;
    }
}

loc_80514AF4:
{
    r4 = r31;
    r3 = (r1 + 12);
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r1 + 20));
    // inline leaf 0x80520CD8 (1 guest instruction(s))
    // end of inlined leaf 0x80520CD8
    r0 = MemoryInline::FlatRead32((r13 + -13784));
    r31 = r3;
}

loc_80514B18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80514B24;
    }
}

loc_80514B1C:
{
    r3 = 0;
    goto loc_80514B60;
}

loc_80514B24:
{
    r30 = 0;
    goto loc_80514B4C;
}

loc_80514B2C:
{
    r3 = MemoryInline::FlatRead32((r13 + -13784));
    r4 = r30;
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl2_0x8050B2C0:
{
}

loc_inl2_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x8050B2D4;
    }
}

loc_inl2_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x8050B2DC;
    }
}

loc_inl2_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl2_cont_8050B2C0;
}

loc_inl2_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80514B40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r31))) {
        goto loc_80514B48;
    }
}

loc_80514B44:
{
    goto loc_80514B60;
}

loc_80514B48:
{
    r30 = (r30 + 1);
}

loc_80514B4C:
{
    r3 = MemoryInline::FlatRead32((r13 + -13784));
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
}

loc_80514B58:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r3))) {
        goto loc_80514B2C;
    }
}

loc_80514B5C:
{
    r3 = 0;
}

loc_80514B60:
{
}

loc_80514B64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80514C18;
    }
}

loc_80514B68:
{
}

loc_80514B6C:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(5))) {
        goto loc_80514B80;
    }
}

loc_80514B70:
{
    r5 = r28;
    r4 = (r1 + 12);
    ctx->lr = 0x80514B7Cu;
    if constexpr (KnownRegArgsCpuCall<0x805142B0u>(&func_805142B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_805142B0_20A5 = func_805142B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805142B0_20A5);
        r4 = static_cast<uint32_t>(regargs_result_805142B0_20A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x805142B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80514C18;
}

loc_80514B80:
{
    r5 = r28;
    r4 = (r1 + 12);
    ctx->lr = 0x80514B8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80514500u>(&func_80514500)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80514500_2746 = func_80514500_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80514500_2746);
        r4 = static_cast<uint32_t>(regargs_result_80514500_2746 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x80514500u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80514C18;
}

loc_80514B90:
{
}

loc_80514B94:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(21))) {
        goto loc_80514C18;
    }
}

loc_80514B98:
{
    r4 = r31;
    r3 = (r1 + 12);
    r5 = 21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r1 + 20));
    // inline leaf 0x80520CD8 (1 guest instruction(s))
    // end of inlined leaf 0x80520CD8
    r0 = MemoryInline::FlatRead32((r13 + -13784));
    r31 = r3;
}

loc_80514BBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80514BC8;
    }
}

loc_80514BC0:
{
    r3 = 0;
    goto loc_80514C04;
}

loc_80514BC8:
{
    r30 = 0;
    goto loc_80514BF0;
}

loc_80514BD0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13784));
    r4 = r30;
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl5_0x8050B2C0:
{
}

loc_inl5_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl5_0x8050B2D4;
    }
}

loc_inl5_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl5_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl5_0x8050B2DC;
    }
}

loc_inl5_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl5_cont_8050B2C0;
}

loc_inl5_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl5_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80514BE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r31))) {
        goto loc_80514BEC;
    }
}

loc_80514BE8:
{
    goto loc_80514C04;
}

loc_80514BEC:
{
    r30 = (r30 + 1);
}

loc_80514BF0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13784));
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
}

loc_80514BFC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r3))) {
        goto loc_80514BD0;
    }
}

loc_80514C00:
{
    r3 = 0;
}

loc_80514C04:
{
}

loc_80514C08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80514C18;
    }
}

loc_80514C0C:
{
    r5 = r28;
    r4 = (r1 + 12);
    ctx->lr = 0x80514C18u;
    if constexpr (KnownRegArgsCpuCall<0x80514880u>(&func_80514880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80514880_3777 = func_80514880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80514880_3777);
        r4 = static_cast<uint32_t>(regargs_result_80514880_3777 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        InvokeDirectCpu<0x80514880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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

loc_80514C18:
{
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

extern "C" void func_80514A80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80514A80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80514A80 func_80514A80 preserves=true fpr_mask=0x00000000
