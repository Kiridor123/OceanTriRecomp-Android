#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114D2C(CpuContext* ctx);
extern "C" uint64_t func_80114D2C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D2968(CpuContext* ctx);
extern "C" uint64_t func_802D2968_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802D29E8(CpuContext* ctx);
extern "C" uint64_t func_802D29E8_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802D29F4(CpuContext* ctx);
extern "C" uint64_t func_802D29F4_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802D2B20(CpuContext* ctx);
extern "C" uint64_t func_802D2B20_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802D2B38(CpuContext* ctx);
extern "C" uint64_t func_802D2B38_ra98_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802D3618(CpuContext* ctx);
extern "C" uint32_t func_802D3618_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D3A98(CpuContext* ctx);
extern "C" uint64_t func_802D3A98_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D6B90(CpuContext* ctx);
extern "C" uint32_t func_802D6B90_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D6BD0(CpuContext* ctx);
extern "C" void func_802D6BD0_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D76A4(CpuContext* ctx);
extern "C" uint64_t func_802D76A4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D9CE8(CpuContext* ctx);
extern "C" uint32_t func_802D9CE8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D9D94(CpuContext* ctx);
extern "C" uint64_t func_802D9D94_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802C423C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_802C423C;

loc_802C423C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1047), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 4));
}

loc_802C4268:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802C4280;
    }
}

loc_802C426C:
{
}

loc_802C4270:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802C42A8;
    }
}

loc_802C4274:
{
}

loc_802C4278:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_802C4480;
    }
}

loc_802C427C:
{
    goto loc_802C467C;
}

loc_802C4280:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r4 = 0;
    // inline leaf 0x802D2A5C (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 368), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802D2A5C
    r3 = r31;
    r4 = 7;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x802C42A4u;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_1178 = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_1178);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_1178 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
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
    }
    goto loc_802C467C;
}

loc_802C42A8:
{
    ctx->lr = 0x802C42ACu;
    if constexpr (KnownRegArgsCpuCall<0x802D29E8u>(&func_802D29E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_802D29E8_1836 = func_802D29E8_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D29E8_1836);
        r4 = static_cast<uint32_t>(regargs_result_802D29E8_1836 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D29E8u>(ctx);
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
    }
}

loc_802C42B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C467C;
    }
}

loc_802C42B4:
{
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 836));
}

loc_802C42C8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_802C42EC;
    }
}

loc_802C42CC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r31 + 1154));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 2;
    r6 = 0;
    r7 = 2;
    ctx->lr = 0x802C42E8u;
    if constexpr (KnownRegArgsCpuCall<0x802D9D94u>(&func_802D9D94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802D9D94_2170 = func_802D9D94_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9D94_2170);
        r4 = static_cast<uint32_t>(regargs_result_802D9D94_2170 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D9D94u>(ctx);
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
    }
    r30 = 1;
}

loc_802C42EC:
{
    r3 = MemoryInline::FlatRead16((r31 + 962));
    r0 = (r3 + -30);
}

loc_802C42F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_802C4384;
    }
}

loc_802C42FC:
{
}

loc_802C4300:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(27))) {
        goto loc_802C4348;
    }
}

loc_802C4304:
{
}

loc_802C4308:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(28))) {
        goto loc_802C4384;
    }
}

loc_802C430C:
{
    r3 = r31;
    r4 = 28;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x802C4320u;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_2ABC = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_2ABC);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_2ABC >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
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
    }
}

loc_802C4324:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_802C467C;
    }
}

loc_802C4328:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r31 + 1154));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 21;
    r6 = 0;
    r7 = 2;
    ctx->lr = 0x802C4344u;
    if constexpr (KnownRegArgsCpuCall<0x802D9D94u>(&func_802D9D94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802D9D94_329D = func_802D9D94_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9D94_329D);
        r4 = static_cast<uint32_t>(regargs_result_802D9D94_329D >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D9D94u>(ctx);
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
    }
    goto loc_802C467C;
}

loc_802C4348:
{
    r3 = r31;
    r4 = 28;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x802C435Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_39EF = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_39EF);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_39EF >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
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
    }
}

loc_802C4360:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_802C467C;
    }
}

loc_802C4364:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r31 + 1154));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 22;
    r6 = 0;
    r7 = 2;
    ctx->lr = 0x802C4380u;
    if constexpr (KnownRegArgsCpuCall<0x802D9D94u>(&func_802D9D94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802D9D94_41D0 = func_802D9D94_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9D94_41D0);
        r4 = static_cast<uint32_t>(regargs_result_802D9D94_41D0 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D9D94u>(ctx);
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
    }
    goto loc_802C467C;
}

loc_802C4384:
{
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 1047), static_cast<uint8_t>(r30));
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r31 + 1154));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = 23;
    r6 = 0;
    r7 = 2;
    ctx->lr = 0x802C43A8u;
    if constexpr (KnownRegArgsCpuCall<0x802D9D94u>(&func_802D9D94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_802D9D94_49AE = func_802D9D94_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D9D94_49AE);
        r4 = static_cast<uint32_t>(regargs_result_802D9D94_49AE >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D9D94u>(ctx);
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
    }
    r3 = r31;
    r4 = 50;
    ctx->lr = 0x802C43B4u;
    if constexpr (KnownRegArgsCpuCall<0x802D3A98u>(&func_802D3A98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D3A98_504B = func_802D3A98_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D3A98_504B);
        r4 = static_cast<uint32_t>(regargs_result_802D3A98_504B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D3A98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 0;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_5328 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_5328;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 1;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_5572 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_5572;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead16((r31 + 962));
}

loc_802C43DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(28))) {
        goto loc_802C43FC;
    }
}

loc_802C43E0:
{
}

loc_802C43E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(30))) {
        goto loc_802C4414;
    }
}

loc_802C43E8:
{
}

loc_802C43EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(32))) {
        goto loc_802C4448;
    }
}

loc_802C43F0:
{
}

loc_802C43F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(31))) {
        goto loc_802C4464;
    }
}

loc_802C43F8:
{
    goto loc_802C467C;
}

loc_802C43FC:
{
    r3 = r31;
    r4 = 24;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x802C4410u;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_5B02 = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_5B02);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_5B02 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
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
    }
    goto loc_802C467C;
}

loc_802C4414:
{
    r3 = r31;
    r4 = 24;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x802C4428u;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_6248 = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_6248);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_6248 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
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
    }
    r3 = r31;
    r4 = 26;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_68BD = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_68BD);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_68BD >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802C4438:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802C467C;
    }
}

loc_802C443C:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r31 + 540), static_cast<uint16_t>(r0));
    goto loc_802C467C;
}

loc_802C4448:
{
    MemoryInline::FlatWrite16((r31 + 962), static_cast<uint16_t>(r30));
    r3 = r31;
    r4 = 4;
    r5 = 10;
    r6 = 0;
    ctx->lr = 0x802C4460u;
    if constexpr (KnownRegArgsCpuCall<0x802D2B20u>(&func_802D2B20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        const auto regargs_result_802D2B20_6D3F = func_802D2B20_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2B20_6D3F);
        r4 = static_cast<uint32_t>(regargs_result_802D2B20_6D3F >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2B20u>(ctx);
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
    }
    goto loc_802C467C;
}

loc_802C4464:
{
    MemoryInline::FlatWrite16((r31 + 962), static_cast<uint16_t>(r30));
    r3 = r31;
    r4 = 4;
    r5 = 8;
    r6 = 0;
    ctx->lr = 0x802C447Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2B20u>(&func_802D2B20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        const auto regargs_result_802D2B20_74B8 = func_802D2B20_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2B20_74B8);
        r4 = static_cast<uint32_t>(regargs_result_802D2B20_74B8 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2B20u>(ctx);
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
    }
    goto loc_802C467C;
}

loc_802C4480:
{
    // inline leaf 0x802D2A14 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 88));
    // end of inlined leaf 0x802D2A14
    r0 = (r3 & 65535);
}

loc_802C448C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(24))) {
        goto loc_802C449C;
    }
}

loc_802C4490:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1047), static_cast<uint8_t>(r0));
    goto loc_802C4658;
}

loc_802C449C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13320));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    ctx->lr = 0x802C44B0u;
    if constexpr (KnownRegArgsCpuCall<0x802D29F4u>(&func_802D29F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802D29F4_7DCB = func_802D29F4_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802D29F4_7DCB);
        r4 = static_cast<uint32_t>(regargs_result_802D29F4_7DCB >> 32);
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
        InvokeDirectCpu<0x802D29F4u>(ctx);
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

loc_802C44B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C4658;
    }
}

loc_802C44B8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802C44C4u;
    if constexpr (KnownRegArgsCpuCall<0x80114D2Cu>(&func_80114D2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        const auto regargs_result_80114D2C_8347 = func_80114D2C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114D2C_8347);
        r4 = static_cast<uint32_t>(regargs_result_80114D2C_8347 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80114D2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r31 + 364));
    r0 = MemoryInline::FlatRead16((r3 + 1616));
}

loc_802C44D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(45))) {
        goto loc_802C44F8;
    }
}

loc_802C44D4:
{
}

loc_802C44D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_802C4534;
    }
}

loc_802C44DC:
{
}

loc_802C44E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(239))) {
        goto loc_802C4570;
    }
}

loc_802C44E4:
{
}

loc_802C44E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(26))) {
        goto loc_802C45C4;
    }
}

loc_802C44EC:
{
}

loc_802C44F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(240))) {
        goto loc_802C4604;
    }
}

loc_802C44F4:
{
    goto loc_802C4658;
}

loc_802C44F8:
{
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D3618 (14 guest instruction(s))
}

loc_inl2_0x802D3618:
{
    r5 = MemoryInline::FlatRead32((r3 + 496));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl2_0x802D362C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl2_0x802D3638;
    }
}

loc_inl2_0x802D3630:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl2_0x802D3638:
{
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r0 = MemoryInline::FlatRead32((r3 + 496));
}

loc_inl2_0x802D3644:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802D3648:
{
    MemoryInline::FlatWrite32((r3 + 496), r4);
    goto loc_inl2_cont_802D3618;
}

loc_inl2_return:
{
}

loc_inl2_cont_802D3618:
{
    // end of inlined leaf 0x802D3618
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D6B90 (16 guest instruction(s))
}

loc_inl3_0x802D6B90:
{
    r0 = MemoryInline::FlatRead16((r3 + 980));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 982));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl3_0x802D6BA8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_inl3_0x802D6BB0;
    }
}

loc_inl3_0x802D6BAC:
{
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r4));
}

loc_inl3_0x802D6BB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 980));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl3_0x802D6BB8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl3_0x802D6BC4;
    }
}

loc_inl3_0x802D6BBC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r0));
}

loc_inl3_0x802D6BC4:
{
    r0 = MemoryInline::FlatRead16((r3 + 986));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 988), static_cast<uint16_t>(r0));
}

loc_inl3_cont_802D6B90:
{
    // end of inlined leaf 0x802D6B90
    r3 = r31;
    r4 = 0;
    r5 = 15;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_944D = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_944D;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 1;
    r5 = 2;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_9697 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_9697;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    goto loc_802C4658;
}

loc_802C4534:
{
    r3 = r31;
    r4 = 25;
    // inline leaf 0x802D36F8 (9 guest instruction(s))
}

loc_inl4_0x802D36F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 500));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 500), r0);
}

loc_inl4_0x802D370C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x802D3710:
{
    r0 = 150;
    MemoryInline::FlatWrite32((r3 + 500), r0);
    goto loc_inl4_cont_802D36F8;
}

loc_inl4_return:
{
}

loc_inl4_cont_802D36F8:
{
    // end of inlined leaf 0x802D36F8
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D3618 (14 guest instruction(s))
}

loc_inl5_0x802D3618:
{
    r5 = MemoryInline::FlatRead32((r3 + 496));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl5_0x802D362C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl5_0x802D3638;
    }
}

loc_inl5_0x802D3630:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl5_0x802D3638:
{
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r0 = MemoryInline::FlatRead32((r3 + 496));
}

loc_inl5_0x802D3644:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x802D3648:
{
    MemoryInline::FlatWrite32((r3 + 496), r4);
    goto loc_inl5_cont_802D3618;
}

loc_inl5_return:
{
}

loc_inl5_cont_802D3618:
{
    // end of inlined leaf 0x802D3618
    r3 = r31;
    r4 = 0;
    r5 = 25;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_9F7C = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_9F7C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 1;
    r5 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_A1C6 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_A1C6;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    goto loc_802C4658;
}

loc_802C4570:
{
    r3 = r31;
    r4 = 25;
    // inline leaf 0x802D36F8 (9 guest instruction(s))
}

loc_inl6_0x802D36F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 500));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 500), r0);
}

loc_inl6_0x802D370C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x802D3710:
{
    r0 = 150;
    MemoryInline::FlatWrite32((r3 + 500), r0);
    goto loc_inl6_cont_802D36F8;
}

loc_inl6_return:
{
}

loc_inl6_cont_802D36F8:
{
    // end of inlined leaf 0x802D36F8
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D3618 (14 guest instruction(s))
}

loc_inl7_0x802D3618:
{
    r5 = MemoryInline::FlatRead32((r3 + 496));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl7_0x802D362C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl7_0x802D3638;
    }
}

loc_inl7_0x802D3630:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 496), r0);
}

loc_inl7_0x802D3638:
{
    r4 = MemoryInline::FlatRead32((r3 + 500));
    r0 = MemoryInline::FlatRead32((r3 + 496));
}

loc_inl7_0x802D3644:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x802D3648:
{
    MemoryInline::FlatWrite32((r3 + 496), r4);
    goto loc_inl7_cont_802D3618;
}

loc_inl7_return:
{
}

loc_inl7_cont_802D3618:
{
    // end of inlined leaf 0x802D3618
    r3 = r31;
    r4 = 25;
    // inline leaf 0x802D6BD0 (11 guest instruction(s))
}

loc_inl8_0x802D6BD0:
{
    r0 = MemoryInline::FlatRead16((r3 + 982));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl8_0x802D6BD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(150))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x802D6BDC:
{
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 982), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl8_0x802D6BEC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x802D6BF0:
{
    r0 = 150;
    MemoryInline::FlatWrite16((r3 + 982), static_cast<uint16_t>(r0));
    goto loc_inl8_cont_802D6BD0;
}

loc_inl8_return:
{
}

loc_inl8_cont_802D6BD0:
{
    // end of inlined leaf 0x802D6BD0
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D6B90 (16 guest instruction(s))
}

loc_inl9_0x802D6B90:
{
    r0 = MemoryInline::FlatRead16((r3 + 980));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 982));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl9_0x802D6BA8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_inl9_0x802D6BB0;
    }
}

loc_inl9_0x802D6BAC:
{
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r4));
}

loc_inl9_0x802D6BB0:
{
    r0 = MemoryInline::FlatRead16((r3 + 980));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl9_0x802D6BB8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl9_0x802D6BC4;
    }
}

loc_inl9_0x802D6BBC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 980), static_cast<uint16_t>(r0));
}

loc_inl9_0x802D6BC4:
{
    r0 = MemoryInline::FlatRead16((r3 + 986));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 988), static_cast<uint16_t>(r0));
}

loc_inl9_cont_802D6B90:
{
    // end of inlined leaf 0x802D6B90
    r3 = r31;
    r4 = 0;
    r5 = 40;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_B3D9 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_B3D9;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 1;
    r5 = 5;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_B623 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_B623;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    goto loc_802C4658;
}

loc_802C45C4:
{
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D36F8 (9 guest instruction(s))
}

loc_inl10_0x802D36F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 500));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 500), r0);
}

loc_inl10_0x802D370C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x802D3710:
{
    r0 = 150;
    MemoryInline::FlatWrite32((r3 + 500), r0);
    goto loc_inl10_cont_802D36F8;
}

loc_inl10_return:
{
}

loc_inl10_cont_802D36F8:
{
    // end of inlined leaf 0x802D36F8
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 500));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x802D3618u>(&func_802D3618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802D3618_BB9D = func_802D3618_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_802D3618_BB9D;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D3618u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    r4 = 0;
    r5 = 70;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_BE1A = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_BE1A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 1;
    r5 = 7;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_C064 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_C064;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    goto loc_802C4658;
}

loc_802C4604:
{
    r3 = r31;
    r4 = 50;
    // inline leaf 0x802D36F8 (9 guest instruction(s))
}

loc_inl11_0x802D36F8:
{
    r5 = MemoryInline::FlatRead32((r3 + 500));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 500), r0);
}

loc_inl11_0x802D370C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x802D3710:
{
    r0 = 150;
    MemoryInline::FlatWrite32((r3 + 500), r0);
    goto loc_inl11_cont_802D36F8;
}

loc_inl11_return:
{
}

loc_inl11_cont_802D36F8:
{
    // end of inlined leaf 0x802D36F8
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 500));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if constexpr (KnownRegArgsCpuCall<0x802D3618u>(&func_802D3618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802D3618_C5DE = func_802D3618_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_802D3618_C5DE;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D3618u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    r4 = 50;
    if constexpr (KnownRegArgsCpuCall<0x802D6BD0u>(&func_802D6BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D6BD0_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D6BD0u>(ctx);
        r0 = ctx->gpr[0];
    }
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 982));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x802D6B90u>(&func_802D6B90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D6B90_CA60 = func_802D6B90_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_802D6B90_CA60;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D6B90u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 0;
    r5 = 100;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_CC8D = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_CC8D;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = r31;
    r4 = 1;
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802D9CE8u>(&func_802D9CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9CE8_CED8 = func_802D9CE8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802D9CE8_CED8;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9CE8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_802C4658:
{
    r3 = r31;
    ctx->lr = 0x802C4660u;
    if constexpr (KnownRegArgsCpuCall<0x802D29E8u>(&func_802D29E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        const auto regargs_result_802D29E8_D156 = func_802D29E8_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D29E8_D156);
        r4 = static_cast<uint32_t>(regargs_result_802D29E8_D156 >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D29E8u>(ctx);
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
    }
}

loc_802C4664:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802C467C;
    }
}

loc_802C4668:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 962), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802C467Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2B38u>(&func_802D2B38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        const auto regargs_result_802D2B38_D92D = func_802D2B38_ra98_1fc_18_0(ctx, r3, r4, r7, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2B38_D92D);
        r4 = static_cast<uint32_t>(regargs_result_802D2B38_D92D >> 32);
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2B38u>(ctx);
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
    }
}

loc_802C467C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_802C423C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C423C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C423C func_802C423C preserves=true fpr_mask=0x00000000
