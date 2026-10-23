#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803DFA04(CpuContext* ctx);
extern "C" uint64_t func_803DFA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803EB6DC(CpuContext* ctx);
extern "C" uint64_t func_803EB6DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FED8(CpuContext* ctx);
extern "C" uint64_t func_8045FED8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803EA924_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
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
    uint32_t ctr = ctx->ctr;

    goto loc_803EA924;

loc_803EA924:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
}

loc_803EA94C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EABD4;
    }
}

loc_803EA950:
{
}

loc_803EA954:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803EA95C;
    }
}

loc_803EA958:
{
    goto loc_803EABD4;
}

loc_803EA95C:
{
    r3 = r29;
    r4 = 3;
    r5 = (r5 + 4);
    r6 = 16;
    ctx->lr = 0x803EA970u;
    if constexpr (KnownRegArgsCpuCall<0x803DFA04u>(&func_803DFA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_803DFA04_C2D = func_803DFA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803DFA04_C2D);
        r4 = static_cast<uint32_t>(regargs_result_803DFA04_C2D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803DFA04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r29 + 64);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 96);
    r4 = 0;
    r5 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r25 = 0;
    r3 = (r30 + 126);
    r4 = (r13 + -21728);
    if constexpr (KnownRegArgsCpuCall<0x8045FED8u>(&func_8045FED8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FED8_14D1 = func_8045FED8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045FED8_14D1);
        r4 = static_cast<uint32_t>(regargs_result_8045FED8_14D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FED8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r24 = r3;
    r27 = 0;
    goto loc_803EAA64;
}

loc_803EA9AC:
{
}

loc_803EA9B0:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(3))) {
        goto loc_803EAA6C;
    }
}

loc_803EA9B4:
{
}

loc_803EA9B8:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_803EA9F8;
    }
}

loc_803EA9BC:
{
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_19AD = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_19AD);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_19AD >> 32);
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
}

loc_803EA9C8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(31))) {
        goto loc_803EA9DC;
    }
}

loc_803EA9CC:
{
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_1CCF = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_1CCF);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_1CCF >> 32);
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
    r26 = r3;
    goto loc_803EA9E0;
}

loc_803EA9DC:
{
    r26 = 31;
}

loc_803EA9E0:
{
    r3 = (r29 + 64);
    r4 = r24;
    r5 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + r26);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r27));
}

loc_803EA9F8:
{
    r0 = MemoryInline::FlatRead8((r30 + 125));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -1);
}

loc_803EAA08:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_803EAA50;
    }
}

loc_803EAA0C:
{
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_2216 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_2216);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_2216 >> 32);
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
}

loc_803EAA18:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(63))) {
        goto loc_803EAA2C;
    }
}

loc_803EAA1C:
{
    r3 = r24;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_2538 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_2538);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_2538 >> 32);
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
    r27 = r3;
    goto loc_803EAA30;
}

loc_803EAA2C:
{
    r27 = 63;
}

loc_803EAA30:
{
    r3 = (r29 + 96);
    r4 = r24;
    r5 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    r3 = (r29 + r27);
    MemoryInline::FlatWrite8((r3 + 96), static_cast<uint8_t>(r0));
    goto loc_803EAA6C;
}

loc_803EAA50:
{
    r25 = (r25 + 1);
    r3 = 0;
    r4 = (r13 + -21728);
    if constexpr (KnownRegArgsCpuCall<0x8045FED8u>(&func_8045FED8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FED8_29D7 = func_8045FED8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045FED8_29D7);
        r4 = static_cast<uint32_t>(regargs_result_8045FED8_29D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FED8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r24 = r3;
}

loc_803EAA64:
{
}

loc_803EAA68:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_803EA9AC;
    }
}

loc_803EAA6C:
{
    r3 = (r29 + 160);
    r4 = (r30 + 20);
    r5 = 63;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r27 = 0;
    MemoryInline::FlatWrite8((r29 + 223), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r30 + 92));
    MemoryInline::FlatWrite32((r29 + 224), r0);
    r0 = MemoryInline::FlatRead32((r30 + 88));
    MemoryInline::FlatWrite32((r29 + 228), r0);
    r0 = MemoryInline::FlatRead32((r30 + 100));
    MemoryInline::FlatWrite32((r29 + 232), r0);
    r0 = MemoryInline::FlatRead32((r30 + 108));
    MemoryInline::FlatWrite32((r29 + 236), r0);
    r0 = MemoryInline::FlatRead32((r30 + 112));
    MemoryInline::FlatWrite32((r29 + 240), r0);
    MemoryInline::FlatWrite32((r29 + 244), r27);
    r3 = r28;
    r4 = (r29 + 244);
    r5 = r31;
    ctx->lr = 0x803EAAC0u;
    if constexpr (KnownRegArgsCpuCall<0x803EB6DCu>(&func_803EB6DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803EB6DC_319B = func_803EB6DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803EB6DC_319B);
        r4 = static_cast<uint32_t>(regargs_result_803EB6DC_319B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803EB6DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r30 + 118));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite8((r29 + 280), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 284), r27);
    r4 = 0;
    r3 = r29;
    r0 = 2;
    ctr = r0;
}

loc_803EAAEC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 341), 0, 2633u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 341), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 56u, (r3 + 397), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 112u, (r3 + 453), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 168u, (r3 + 509), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 224u, (r3 + 565), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 280u, (r3 + 621), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 336u, (r3 + 677), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 392u, (r3 + 733), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 448u, (r3 + 789), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 504u, (r3 + 845), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 560u, (r3 + 901), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 616u, (r3 + 957), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 672u, (r3 + 1013), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 728u, (r3 + 1069), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 784u, (r3 + 1125), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 840u, (r3 + 1181), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 896u, (r3 + 1237), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 952u, (r3 + 1293), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1008u, (r3 + 1349), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1064u, (r3 + 1405), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1120u, (r3 + 1461), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1176u, (r3 + 1517), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1232u, (r3 + 1573), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1288u, (r3 + 1629), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1344u, (r3 + 1685), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1400u, (r3 + 1741), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1456u, (r3 + 1797), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1512u, (r3 + 1853), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1568u, (r3 + 1909), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1624u, (r3 + 1965), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1680u, (r3 + 2021), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1736u, (r3 + 2077), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1792u, (r3 + 2133), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1848u, (r3 + 2189), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1904u, (r3 + 2245), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 1960u, (r3 + 2301), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2016u, (r3 + 2357), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2072u, (r3 + 2413), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2128u, (r3 + 2469), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2184u, (r3 + 2525), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2240u, (r3 + 2581), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2296u, (r3 + 2637), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2352u, (r3 + 2693), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2408u, (r3 + 2749), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2464u, (r3 + 2805), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2520u, (r3 + 2861), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2576u, (r3 + 2917), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 2632u, (r3 + 2973), static_cast<uint8_t>(r27));
    r3 = (r3 + 2688);
    r4 = (r4 + 48);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803EAAEC;
    }
}

loc_803EABB8:
{
    r0 = (r4 * 56);
    r3 = (r29 + r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 341), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 397), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 453), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 509), static_cast<uint8_t>(r0));
}

loc_803EABD4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EA924(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EA924_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803EA924 func_803EA924 preserves=true fpr_mask=0x00000000
