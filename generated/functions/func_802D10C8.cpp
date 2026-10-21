#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D0D00(CpuContext* ctx);
extern "C" uint64_t func_802D0D00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802D4244(CpuContext* ctx);
extern "C" void func_802D4244_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" double func_802D10C8_ra1c0_1fe_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;

    MKW_GUEST_ENTER(0x802D10C8u);
    goto loc_802D10C8;

loc_802D10C8:
{
    r0 = MemoryInline::FlatRead8((r30 + 852));
}

loc_802D10D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D10F0;
    }
}

loc_802D10D4:
{
    r3 = r30;
    r4 = 2;
    r5 = 0;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl0_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl0_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_802D4244;
}

loc_inl0_return:
{
}

loc_inl0_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 852), static_cast<uint8_t>(r0));
    goto loc_802D1618;
}

loc_802D10F0:
{
}

loc_802D10F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802D110C;
    }
}

loc_802D10F8:
{
    r3 = r30;
    r4 = 51;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl1_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl1_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_802D4244;
}

loc_inl1_return:
{
}

loc_inl1_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D110C:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D1114:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D11AC;
    }
}

loc_802D1118:
{
    r0 = MemoryInline::FlatRead8((r30 + 1120));
}

loc_802D1120:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1138;
    }
}

loc_802D1124:
{
    r3 = r30;
    r4 = 41;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl2_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl2_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_802D4244;
}

loc_inl2_return:
{
}

loc_inl2_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1138:
{
    r0 = MemoryInline::FlatRead8((r30 + 1121));
}

loc_802D1140:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1158;
    }
}

loc_802D1144:
{
    r3 = r30;
    r4 = 42;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl3_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl3_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_802D4244;
}

loc_inl3_return:
{
}

loc_inl3_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1158:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802D1160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D1178;
    }
}

loc_802D1164:
{
    r3 = r30;
    r4 = 44;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl4_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl4_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_802D4244;
}

loc_inl4_return:
{
}

loc_inl4_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1178:
{
    r0 = MemoryInline::FlatRead8((r30 + 845));
}

loc_802D1180:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1198;
    }
}

loc_802D1184:
{
    r3 = r30;
    r4 = 5;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl5_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl5_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl5_cont_802D4244;
}

loc_inl5_return:
{
}

loc_inl5_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1198:
{
    r3 = r30;
    r4 = 10;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D11AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1120));
}

loc_802D11B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D11CC;
    }
}

loc_802D11B8:
{
    r3 = r30;
    r4 = 39;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D11CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1121));
}

loc_802D11D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D11EC;
    }
}

loc_802D11D8:
{
    r3 = r30;
    r4 = 40;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D11EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802D11F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D120C;
    }
}

loc_802D11F8:
{
    r3 = r30;
    r4 = 43;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D120C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1088));
}

loc_802D1214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D122C;
    }
}

loc_802D1218:
{
    r3 = r30;
    r4 = 19;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D122C:
{
    r0 = MemoryInline::FlatRead8((r30 + 845));
}

loc_802D1234:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D124C;
    }
}

loc_802D1238:
{
    r3 = r30;
    r4 = 4;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D124C:
{
    r3 = r30;
    r4 = 3;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
}

loc_802D1618:
{
    r3 = r30;
    ctx->lr = 0x802D1620u;
    if constexpr (KnownRegArgsCpuCall<0x802D0D00u>(&func_802D0D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D0D00_2C17 = func_802D0D00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D0D00_2C17);
        r4 = static_cast<uint32_t>(regargs_result_802D0D00_2C17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x802D0D00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r30;
    // inline leaf 0x802D4238 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 461), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D4238
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return f1.d;
}

}

extern "C" void func_802D10C8(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_802D10C8_ra1c0_1fe_0_2(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x40003FC7 gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D10C8 func_802D10C8 preserves=true fpr_mask=0x00000000
