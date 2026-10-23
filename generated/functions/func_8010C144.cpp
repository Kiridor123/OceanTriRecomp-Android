#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800504B0(CpuContext* ctx);
extern "C" uint64_t func_800504B0_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80050574(CpuContext* ctx);
extern "C" uint64_t func_80050574_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800505FC(CpuContext* ctx);
extern "C" uint64_t func_800505FC_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800E0880(CpuContext* ctx);
extern "C" uint64_t func_800E0880_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8010C144_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_8010C144;

loc_8010C144:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r20 = r3;
    r21 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r21 + 4));
}

loc_8010C178:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8010C1A0;
    }
}

loc_8010C17C:
{
    r0 = MemoryInline::FlatRead8((r21 + 76));
}

loc_8010C184:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8010C1A0;
    }
}

loc_8010C188:
{
    r3 = MemoryInline::FlatRead8((r20 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r20 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r20 + 1), static_cast<uint8_t>(r0));
    goto loc_8010C4A0;
}

loc_8010C1A0:
{
    r22 = 0;
    r27 = r21;
    r26 = (r21 + 24);
    r25 = (r21 + 36);
    r24 = (r21 + 8);
    r23 = (r21 + 12);
    r30 = 5;
    r29 = 0;
    r31 = 15;
    r28 = 65536;
    goto loc_8010C494;
}

loc_8010C1CC:
{
    r3 = MemoryInline::FlatRead32((r27 + 72));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r27 + 72), r0);
    r3 = (r20 + 36);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
}

loc_8010C1E8:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(1))) {
        goto loc_8010C1F8;
    }
}

loc_8010C1EC:
{
    r3 = (r28 + -32768);
    r4 = (r1 + 24);
    ctx->lr = 0x8010C1F8u;
    if constexpr (KnownRegArgsCpuCall<0x800505FCu>(&func_800505FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800505FC_108A = func_800505FC_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800505FC_108A);
        r4 = static_cast<uint32_t>(regargs_result_800505FC_108A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800505FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8010C1F8:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
}

loc_8010C200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010C218;
    }
}

loc_8010C204:
{
}

loc_8010C208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8010C2FC;
    }
}

loc_8010C20C:
{
}

loc_8010C210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8010C3AC;
    }
}

loc_8010C214:
{
    goto loc_8010C47C;
}

loc_8010C218:
{
    r3 = MemoryInline::FlatRead32((r20 + 48));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8010C224:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8010C230;
    }
}

loc_8010C228:
{
    MemoryInline::FlatWrite32((r27 + 72), r29);
    goto loc_8010C240;
}

loc_8010C230:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8010C238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8010C240;
    }
}

loc_8010C23C:
{
    MemoryInline::FlatWrite32((r27 + 72), r29);
}

loc_8010C240:
{
    r0 = MemoryInline::FlatRead32((r27 + 72));
}

loc_8010C248:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8010C2B8;
    }
}

loc_8010C24C:
{
    MemoryInline::FlatWrite32((r27 + 72), r30);
    r3 = MemoryInline::FlatRead8((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 4), static_cast<uint8_t>(r0));
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r20 + 40));
    ctx->lr = 0x8010C268u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = MemoryInline::FlatRead32((r27 + 52));
    r4 = (r1 + 24);
    ctx->lr = 0x8010C274u;
    if constexpr (KnownRegArgsCpuCall<0x80050574u>(&func_80050574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80050574_1DB5 = func_80050574_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80050574_1DB5);
        r4 = static_cast<uint32_t>(regargs_result_80050574_1DB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80050574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r25;
    r4 = r26;
    ctx->lr = 0x8010C280u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 24);
    r4 = r25;
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = (r1 + 24);
    r5 = 0;
    ctx->lr = 0x8010C29Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800E0880_2553 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_2553);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_2553 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r20;
    r4 = r24;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8010C2B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_8010C47C;
}

loc_8010C2B8:
{
    r3 = (r1 + 24);
    r4 = r25;
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = (r1 + 24);
    r5 = 0;
    ctx->lr = 0x8010C2D4u;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800E0880_3058 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_3058);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_3058 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r25;
    r4 = r23;
    ctx->lr = 0x8010C2E0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = r20;
    r4 = r24;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8010C2F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_8010C47C;
}

loc_8010C2FC:
{
    r3 = MemoryInline::FlatRead32((r27 + 52));
    r4 = (r1 + 24);
    ctx->lr = 0x8010C308u;
    if constexpr (KnownRegArgsCpuCall<0x80050574u>(&func_80050574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80050574_39A8 = func_80050574_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80050574_39A8);
        r4 = static_cast<uint32_t>(regargs_result_80050574_39A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80050574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f0.d = MemoryInline::FlatReadFloat32((r27 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r0 = MemoryInline::FlatRead32((r27 + 72));
}

loc_8010C328:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8010C33C;
    }
}

loc_8010C32C:
{
    MemoryInline::FlatWrite32((r27 + 72), r31);
    r3 = MemoryInline::FlatRead8((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 4), static_cast<uint8_t>(r0));
}

loc_8010C33C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = (r1 + 24);
    r5 = 0;
    ctx->lr = 0x8010C34Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800E0880_41B8 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_41B8);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_41B8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f1.d = MemoryInline::FlatReadFloat32((r27 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 148));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 28), f0.d);
    r3 = r23;
    f1.d = MemoryInline::FlatReadFloat32((r21 + 152));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = r25;
    r4 = r26;
    ctx->lr = 0x8010C374u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = r25;
    r4 = r23;
    ctx->lr = 0x8010C380u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r27 + 52));
    r0 = MemoryInline::FlatRead32((r27 + 64));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r27 + 52), r0);
    r3 = r20;
    r4 = r24;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8010C3A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    goto loc_8010C47C;
}

loc_8010C3AC:
{
    r3 = MemoryInline::FlatRead32((r27 + 48));
    r4 = (r1 + 24);
    ctx->lr = 0x8010C3B8u;
    if constexpr (KnownRegArgsCpuCall<0x800505FCu>(&func_800505FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800505FC_4DF7 = func_800505FC_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800505FC_4DF7);
        r4 = static_cast<uint32_t>(regargs_result_800505FC_4DF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800505FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r27 + 48));
    r4 = (r1 + 24);
    ctx->lr = 0x8010C3C4u;
    if constexpr (KnownRegArgsCpuCall<0x800504B0u>(&func_800504B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800504B0_5292 = func_800504B0_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800504B0_5292);
        r4 = static_cast<uint32_t>(regargs_result_800504B0_5292 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800504B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r27 + 52));
    r4 = (r1 + 24);
    ctx->lr = 0x8010C3D0u;
    if constexpr (KnownRegArgsCpuCall<0x80050574u>(&func_80050574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80050574_572D = func_80050574_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80050574_572D);
        r4 = static_cast<uint32_t>(regargs_result_80050574_572D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80050574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f0.d = MemoryInline::FlatReadFloat32((r27 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 44));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    r0 = MemoryInline::FlatRead32((r27 + 72));
}

loc_8010C3F0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8010C400;
    }
}

loc_8010C3F4:
{
    r3 = MemoryInline::FlatRead8((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 4), static_cast<uint8_t>(r0));
}

loc_8010C400:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r4 = (r1 + 24);
    r5 = 0;
    ctx->lr = 0x8010C410u;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800E0880_5F0C = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_5F0C);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_5F0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    f1.d = MemoryInline::FlatReadFloat32((r27 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r21 + 148));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 28), f0.d);
    r3 = r23;
    f1.d = MemoryInline::FlatReadFloat32((r21 + 152));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = r25;
    r4 = r26;
    ctx->lr = 0x8010C438u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = r25;
    r4 = r23;
    ctx->lr = 0x8010C444u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r27 + 52));
    r0 = MemoryInline::FlatRead32((r27 + 64));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r27 + 52), r0);
    r3 = MemoryInline::FlatRead32((r27 + 48));
    r0 = MemoryInline::FlatRead32((r27 + 60));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r27 + 48), r0);
    r3 = r20;
    r4 = r24;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8010C47Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_8010C47C:
{
    r27 = (r27 + 72);
    r26 = (r26 + 72);
    r25 = (r25 + 72);
    r24 = (r24 + 72);
    r23 = (r23 + 72);
    r22 = (r22 + 1);
}

loc_8010C494:
{
    r0 = MemoryInline::FlatRead32(r21);
}

loc_8010C49C:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r0))) {
        goto loc_8010C1CC;
    }
}

loc_8010C4A0:
{
    r11 = (r1 + 128);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010C144(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010C144_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8010C144 func_8010C144 preserves=true fpr_mask=0x00000000
