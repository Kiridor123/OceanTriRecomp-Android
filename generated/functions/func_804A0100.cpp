#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804A0BE4(CpuContext* ctx);
extern "C" uint64_t func_804A0BE4_rad0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A0CC4(CpuContext* ctx);
extern "C" uint64_t func_804A0CC4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804A0DD8(CpuContext* ctx);
extern "C" uint64_t func_804A0DD8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804A1248(CpuContext* ctx);
extern "C" uint64_t func_804A1248_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804A0100_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_804A0100;

loc_804A0100:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_804A010C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 4608;
    r31 = 0;
    r29 = r3;
    r28 = r4;
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32(r4, r31);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A0144;
    }
}

loc_804A013C:
{
    r3 = 11;
    goto loc_804A0440;
}

loc_804A0144:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_804A014C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804A0168;
    }
}

loc_804A0150:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    r30 = MemoryInline::FlatRead32((r3 + 4636));
}

loc_804A0160:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804A0168;
    }
}

loc_804A0164:
{
    goto loc_804A0180;
}

loc_804A0168:
{
    ctx->lr = 0x804A016Cu;
    if constexpr (KnownRegArgsCpuCall<0x804A0BE4u>(&func_804A0BE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804A0BE4_C3D = func_804A0BE4_rad0_1fe_18_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0BE4_C3D);
        r4 = static_cast<uint32_t>(regargs_result_804A0BE4_C3D >> 32);
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
        InvokeDirectCpu<0x804A0BE4u>(ctx);
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

loc_804A0170:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804A0180;
    }
}

loc_804A0178:
{
    r3 = 6;
    goto loc_804A0440;
}

loc_804A0180:
{
    MemoryInline::FlatWrite32(r28, r30);
    r3 = r30;
    r5 = (r1 + 12);
    r4 = 1;
    ctx->lr = 0x804A0194u;
    if constexpr (KnownRegArgsCpuCall<0x804A1248u>(&func_804A1248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A1248_1429 = func_804A1248_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A1248_1429);
        r4 = static_cast<uint32_t>(regargs_result_804A1248_1429 >> 32);
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
        InvokeDirectCpu<0x804A1248u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A0198:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A01A0;
    }
}

loc_804A019C:
{
    r31 = 7;
}

loc_804A01A0:
{
}

loc_804A01A4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A01DC;
    }
}

loc_804A01A8:
{
    r3 = 0;
    r0 = 9;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r7 = (r1 + 8);
    r3 = r30;
    r4 = 512;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r5 = 1;
    r6 = 2;
    ctx->lr = 0x804A01D0u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_1D33 = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_1D33);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_1D33 >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A01D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A01DC;
    }
}

loc_804A01D8:
{
    r31 = 7;
}

loc_804A01DC:
{
}

loc_804A01E0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A0234;
    }
}

loc_804A01E4:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A0234;
    }
}

loc_804A01F0:
{
    r3 = (r29 + 9);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_25F3 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_25F3);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_25F3 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + 1);
}

loc_804A0200:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(80))) {
        goto loc_804A0230;
    }
}

loc_804A0204:
{
    r3 = (r29 + 9);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_292E = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_292E);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_292E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = r3;
    r3 = r30;
    r6 = (r4 + 1);
    r7 = (r29 + 9);
    r4 = 11;
    r5 = 8;
    ctx->lr = 0x804A0228u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_2C5E = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_2C5E);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_2C5E >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A022C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A0234;
    }
}

loc_804A0230:
{
    r31 = 7;
}

loc_804A0234:
{
}

loc_804A0238:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A028C;
    }
}

loc_804A023C:
{
    r0 = MemoryInline::FlatRead8((r29 + 89));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A028C;
    }
}

loc_804A0248:
{
    r3 = (r29 + 89);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_3520 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_3520);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_3520 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + 1);
}

loc_804A0258:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(80))) {
        goto loc_804A0288;
    }
}

loc_804A025C:
{
    r3 = (r29 + 89);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_385C = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_385C);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_385C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = r3;
    r3 = r30;
    r6 = (r4 + 1);
    r7 = (r29 + 89);
    r4 = 257;
    r5 = 4;
    ctx->lr = 0x804A0280u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_3B8E = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_3B8E);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_3B8E >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A0284:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A028C;
    }
}

loc_804A0288:
{
    r31 = 7;
}

loc_804A028C:
{
}

loc_804A0290:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A02E4;
    }
}

loc_804A0294:
{
    r0 = MemoryInline::FlatRead8((r29 + 169));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A02E4;
    }
}

loc_804A02A0:
{
    r3 = (r29 + 169);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_4452 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_4452);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_4452 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + 1);
}

loc_804A02B0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(80))) {
        goto loc_804A02E0;
    }
}

loc_804A02B4:
{
    r3 = (r29 + 169);
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_478F = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_478F);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_478F >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = r3;
    r3 = r30;
    r6 = (r4 + 1);
    r7 = (r29 + 169);
    r4 = 10;
    r5 = 8;
    ctx->lr = 0x804A02D8u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_4AC1 = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_4AC1);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_4AC1 >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A02DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A02E4;
    }
}

loc_804A02E0:
{
    r31 = 7;
}

loc_804A02E4:
{
}

loc_804A02E8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A0324;
    }
}

loc_804A02EC:
{
    r0 = MemoryInline::FlatRead16(r29);
    r7 = (r1 + 8);
    r3 = r30;
    r4 = 513;
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r6 = 2;
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->lr = 0x804A0318u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_542E = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_542E);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_542E >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A031C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A0324;
    }
}

loc_804A0320:
{
    r31 = 7;
}

loc_804A0324:
{
}

loc_804A0328:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A0364;
    }
}

loc_804A032C:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r7 = (r1 + 8);
    r3 = r30;
    r4 = 514;
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r6 = 2;
    r0 = MemoryInline::FlatRead16((r29 + 4));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->lr = 0x804A0358u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_5DA7 = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_5DA7);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_5DA7 >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A035C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A0364;
    }
}

loc_804A0360:
{
    r31 = 7;
}

loc_804A0364:
{
}

loc_804A0368:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A03A4;
    }
}

loc_804A036C:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r7 = (r1 + 8);
    r3 = r30;
    r4 = 515;
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r6 = 2;
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->lr = 0x804A0398u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_6720 = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_6720);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_6720 >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A039C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A03A4;
    }
}

loc_804A03A0:
{
    r31 = 7;
}

loc_804A03A4:
{
}

loc_804A03A8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A03D0;
    }
}

loc_804A03AC:
{
    r3 = r30;
    r7 = (r29 + 8);
    r4 = 516;
    r5 = 5;
    r6 = 1;
    ctx->lr = 0x804A03C4u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_6F85 = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_6F85);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_6F85 >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A03C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A03D0;
    }
}

loc_804A03CC:
{
    r31 = 7;
}

loc_804A03D0:
{
}

loc_804A03D4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A0410;
    }
}

loc_804A03D8:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r7 = (r1 + 8);
    r3 = r30;
    r4 = 517;
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r6 = 2;
    r0 = MemoryInline::FlatRead16((r29 + 2));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    ctx->lr = 0x804A0404u;
    if constexpr (KnownRegArgsCpuCall<0x804A0DD8u>(&func_804A0DD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0DD8_78FE = func_804A0DD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A0DD8_78FE);
        r4 = static_cast<uint32_t>(regargs_result_804A0DD8_78FE >> 32);
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
        InvokeDirectCpu<0x804A0DD8u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804A0408:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A0410;
    }
}

loc_804A040C:
{
    r31 = 7;
}

loc_804A0410:
{
}

loc_804A0414:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804A0424;
    }
}

loc_804A0418:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804A0CC4u>(&func_804A0CC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804A0CC4_8109 = func_804A0CC4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A0CC4_8109);
        r4 = static_cast<uint32_t>(regargs_result_804A0CC4_8109 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804A0CC4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_804A043C;
}

loc_804A0424:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_804A042C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804A043C;
    }
}

loc_804A0430:
{
    r3 = 0x80740000u;
    r3 = (r3 + -2048);
    MemoryInline::FlatWriteRam32((r3 + 4636), r30);
}

loc_804A043C:
{
    r3 = r31;
}

loc_804A0440:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_804A0100(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A0100_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A0100 func_804A0100 preserves=true fpr_mask=0x00000000
