#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80125FB8(CpuContext* ctx);
extern "C" uint32_t func_80125FB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80128AF0(CpuContext* ctx);
extern "C" uint64_t func_80128AF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80142248(CpuContext* ctx);
extern "C" uint64_t func_80142248_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801AA1B8(CpuContext* ctx);
extern "C" uint64_t func_801AA1B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801AAA04(CpuContext* ctx);
extern "C" uint64_t func_801AAA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801AAFB8(CpuContext* ctx);
extern "C" uint64_t func_801AAFB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801AB0B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_801AB0B8;

loc_801AB0B8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r30 = r3;
    r29 = r4;
    r3 = (r1 + 8);
    ctx->lr = 0x801AB0E0u;
    if constexpr (KnownRegArgsCpuCall<0x80125FB8u>(&func_80125FB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80125FB8_963 = func_80125FB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80125FB8_963;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80125FB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 8);
}

loc_801AB0EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AB0FC;
    }
}

loc_801AB0F0:
{
    r3 = r30;
    r4 = 128;
    // inline leaf 0x8011E684 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2084));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 2084), r0);
    // end of inlined leaf 0x8011E684
}

loc_801AB0FC:
{
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r4 = MemoryInline::FlatRead8((r30 + 10));
    ctx->lr = 0x801AB108u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r30 + 1132));
    ctx->lr = 0x801AB114u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r31 = r3;
    r0 = (r29 & 255);
}

loc_801AB120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AB140;
    }
}

loc_801AB124:
{
}

loc_801AB128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AB220;
    }
}

loc_801AB12C:
{
}

loc_801AB130:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AB284;
    }
}

loc_801AB134:
{
}

loc_801AB138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801AB284;
    }
}

loc_801AB13C:
{
    goto loc_801AB2B4;
}

loc_801AB140:
{
    r0 = MemoryInline::FlatRead8((r30 + 15));
}

loc_801AB148:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AB17C;
    }
}

loc_801AB14C:
{
    r3 = MemoryInline::FlatRead16((r30 + 26));
    ctx->lr = 0x801AB154u;
    if constexpr (KnownRegArgsCpuCall<0x801AAFB8u>(&func_801AAFB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_801AAFB8_17D8 = func_801AAFB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801AAFB8_17D8);
        r4 = static_cast<uint32_t>(regargs_result_801AAFB8_17D8 >> 32);
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
        InvokeDirectCpu<0x801AAFB8u>(ctx);
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
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AB15C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801AB16C;
    }
}

loc_801AB160:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    goto loc_801AB17C;
}

loc_801AB16C:
{
}

loc_801AB170:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801AB17C;
    }
}

loc_801AB174:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
}

loc_801AB17C:
{
    r3 = MemoryInline::FlatRead16((r30 + 26));
    r4 = (r1 + 8);
    ctx->lr = 0x801AB188u;
    if constexpr (KnownRegArgsCpuCall<0x80142248u>(&func_80142248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80142248_1F20 = func_80142248_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80142248_1F20);
        r4 = static_cast<uint32_t>(regargs_result_80142248_1F20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80142248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_801AB18C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AB1A0;
    }
}

loc_801AB190:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8((r30 + 481));
}

loc_801AB19C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801AB1D8;
    }
}

loc_801AB1A0:
{
}

loc_801AB1A4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801AB1B8;
    }
}

loc_801AB1A8:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x801AB1B4u;
    if constexpr (KnownRegArgsCpuCall<0x801AAA04u>(&func_801AAA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_801AAA04_2552 = func_801AAA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801AAA04_2552);
        r4 = static_cast<uint32_t>(regargs_result_801AAA04_2552 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801AAA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801AB1D8;
}

loc_801AB1B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20836));
    MemoryInline::FlatWriteFloat32((r30 + 400), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 396), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 392), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 452), r0);
    MemoryInline::FlatWrite32((r30 + 448), r0);
    MemoryInline::FlatWrite32((r30 + 444), r0);
}

loc_801AB1D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 2820));
}

loc_801AB1E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AB1F0;
    }
}

loc_801AB1E4:
{
}

loc_801AB1E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AB204;
    }
}

loc_801AB1EC:
{
    goto loc_801AB214;
}

loc_801AB1F0:
{
    r3 = r30;
    r4 = 2;
    r5 = 1;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl1_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl1_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801307B0;
    }
}

loc_inl1_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl1_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl1_cont_80130790;
}

loc_inl1_return:
{
}

loc_inl1_cont_80130790:
{
    // end of inlined leaf 0x80130790
    goto loc_801AB214;
}

loc_801AB204:
{
    r3 = r30;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl2_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl2_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x801307B0;
    }
}

loc_inl2_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl2_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl2_cont_80130790;
}

loc_inl2_return:
{
}

loc_inl2_cont_80130790:
{
    // end of inlined leaf 0x80130790
}

loc_801AB214:
{
    r0 = MemoryInline::FlatRead8((r30 + 2821));
    MemoryInline::FlatWrite8((r30 + 808), static_cast<uint8_t>(r0));
    goto loc_801AB2B4;
}

loc_801AB220:
{
    r3 = r30;
    ctx->lr = 0x801AB228u;
    if constexpr (KnownRegArgsCpuCall<0x801AA1B8u>(&func_801AA1B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_801AA1B8_37D7 = func_801AA1B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801AA1B8_37D7);
        r4 = static_cast<uint32_t>(regargs_result_801AA1B8_37D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801AA1B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead8((r30 + 2820));
}

loc_801AB230:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AB240;
    }
}

loc_801AB234:
{
}

loc_801AB238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AB254;
    }
}

loc_801AB23C:
{
    goto loc_801AB268;
}

loc_801AB240:
{
    r3 = r30;
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x801AB250u;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80128AF0_403C = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_403C);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_403C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801AB278;
}

loc_801AB254:
{
    r3 = r30;
    r4 = 2;
    r5 = 18;
    ctx->lr = 0x801AB264u;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80128AF0_4781 = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_4781);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_4781 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801AB278;
}

loc_801AB268:
{
    r3 = r30;
    r4 = 2;
    r5 = 1;
    ctx->lr = 0x801AB278u;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80128AF0_4EC5 = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_4EC5);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_4EC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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

loc_801AB278:
{
    r3 = r30;
    // inline leaf 0x80133C24 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C24
    goto loc_801AB2B4;
}

loc_801AB284:
{
    r3 = MemoryInline::FlatRead16((r30 + 26));
    ctx->lr = 0x801AB28Cu;
    if constexpr (KnownRegArgsCpuCall<0x801AAFB8u>(&func_801AAFB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_801AAFB8_571D = func_801AAFB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801AAFB8_571D);
        r4 = static_cast<uint32_t>(regargs_result_801AAFB8_571D >> 32);
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
        InvokeDirectCpu<0x801AAFB8u>(ctx);
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
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801AB294:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801AB2A4;
    }
}

loc_801AB298:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    goto loc_801AB2B4;
}

loc_801AB2A4:
{
}

loc_801AB2A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801AB2B4;
    }
}

loc_801AB2AC:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
}

loc_801AB2B4:
{
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_801AB2BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_801AB2CC;
    }
}

loc_801AB2C0:
{
}

loc_801AB2C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(28))) {
        goto loc_801AB358;
    }
}

loc_801AB2C8:
{
    goto loc_801AB3E0;
}

loc_801AB2CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_801AB2D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AB3E0;
    }
}

loc_801AB2D8:
{
}

loc_801AB2DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AB2F8;
    }
}

loc_801AB2E0:
{
}

loc_801AB2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AB30C;
    }
}

loc_801AB2E8:
{
}

loc_801AB2EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AB32C;
    }
}

loc_801AB2F0:
{
    goto loc_801AB34C;
}

loc_801AB2F8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20832));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 460), f0.d);
    goto loc_801AB3E0;
}

loc_801AB30C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20828));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 460), f0.d);
    r3 = r30;
    r4 = 80;
    ctx->lr = 0x801AB328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80132004u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_801AB3E0;
}

loc_801AB32C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20824));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 460), f0.d);
    r3 = r30;
    r4 = 200;
    ctx->lr = 0x801AB348u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80132004u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_801AB3E0;
}

loc_801AB34C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    goto loc_801AB3E0;
}

loc_801AB358:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_801AB360:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AB3E0;
    }
}

loc_801AB364:
{
}

loc_801AB368:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801AB384;
    }
}

loc_801AB36C:
{
}

loc_801AB370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AB398;
    }
}

loc_801AB374:
{
}

loc_801AB378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AB3B8;
    }
}

loc_801AB37C:
{
    goto loc_801AB3D8;
}

loc_801AB384:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20832));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 460), f0.d);
    goto loc_801AB3E0;
}

loc_801AB398:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20828));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 460), f0.d);
    r3 = r30;
    r4 = 95;
    ctx->lr = 0x801AB3B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80132004u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_801AB3E0;
}

loc_801AB3B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20824));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 460), f0.d);
    r3 = r30;
    r4 = 150;
    ctx->lr = 0x801AB3D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80132004u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_801AB3E0;
}

loc_801AB3D8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
}

loc_801AB3E0:
{
}

loc_801AB3E4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801AB404;
    }
}

loc_801AB3E8:
{
    r3 = MemoryInline::FlatRead8((r30 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 20));
}

loc_801AB3F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801AB404;
    }
}

loc_801AB3F8:
{
    r3 = (r30 + 432);
    r4 = (r31 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_801AB404:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 2820), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
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

extern "C" void func_801AB0B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801AB0B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AB0B8 func_801AB0B8 preserves=true fpr_mask=0x00000000
