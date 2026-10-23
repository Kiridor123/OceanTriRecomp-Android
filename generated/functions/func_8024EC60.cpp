#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114C84(CpuContext* ctx);
extern "C" uint64_t func_80114C84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8024D610(CpuContext* ctx);
extern "C" uint32_t func_8024D610_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80274874(CpuContext* ctx);
extern "C" uint64_t func_80274874_ra0_0_18_0(CpuContext*);
extern "C" void func_802748B4(CpuContext* ctx);
extern "C" uint32_t func_802748B4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80276618(CpuContext* ctx);
extern "C" uint64_t func_80276618_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802791F8(CpuContext* ctx);
extern "C" uint64_t func_802791F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D9ADC(CpuContext* ctx);
extern "C" uint64_t func_802D9ADC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8024EC60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8024EC60;

loc_8024EC60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    ctx->lr = 0x8024EC7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80274874u>(&func_80274874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274874_7DE = func_80274874_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80274874_7DE);
        r4 = static_cast<uint32_t>(regargs_result_80274874_7DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = r3;
    r0 = 15;
    MemoryInline::FlatWrite8((r27 + 1631), static_cast<uint8_t>(r0));
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024EC94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8024ECA8;
    }
}

loc_8024EC98:
{
    r3 = MemoryInline::FlatRead8((r27 + 22));
    r0 = MemoryInline::FlatRead8((r29 + 22));
}

loc_8024ECA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8024EED4;
    }
}

loc_8024ECA8:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8024ECB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8024ECCC;
    }
}

loc_8024ECB8:
{
    r3 = r27;
    ctx->lr = 0x8024ECC0u;
    if constexpr (KnownRegArgsCpuCall<0x802748B4u>(&func_802748B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802748B4_E9A = func_802748B4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802748B4_E9A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802748B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r28 = r3;
}

loc_8024ECC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8024EED4;
    }
}

loc_8024ECCC:
{
    r0 = MemoryInline::FlatRead16((r27 + 774));
}

loc_8024ECD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(362))) {
        goto loc_8024ECF4;
    }
}

loc_8024ECD8:
{
}

loc_8024ECDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(363))) {
        goto loc_8024ED6C;
    }
}

loc_8024ECE0:
{
}

loc_8024ECE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(364))) {
        goto loc_8024EDD0;
    }
}

loc_8024ECE8:
{
}

loc_8024ECEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(365))) {
        goto loc_8024EE40;
    }
}

loc_8024ECF0:
{
    goto loc_8024EED4;
}

loc_8024ECF4:
{
    r3 = r29;
    r4 = 20;
    r5 = 0;
    ctx->lr = 0x8024ED04u;
    if constexpr (KnownRegArgsCpuCall<0x80276618u>(&func_80276618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80276618_149C = func_80276618_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80276618_149C);
        r4 = static_cast<uint32_t>(regargs_result_80276618_149C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80276618u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8024ED10u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_1787 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_1787);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_1787 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x8024ED1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8024D610u>(&func_8024D610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8024D610_1AC9 = func_8024D610_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8024D610_1AC9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8024D610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8024ED20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024ED44;
    }
}

loc_8024ED24:
{
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x8024ED30u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_1DCD = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_1DCD);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_1DCD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r28;
    r4 = 20;
    r5 = 1;
    ctx->lr = 0x8024ED40u;
    if constexpr (KnownRegArgsCpuCall<0x80276618u>(&func_80276618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80276618_211B = func_80276618_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80276618_211B);
        r4 = static_cast<uint32_t>(regargs_result_80276618_211B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80276618u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_8024ED60;
}

loc_8024ED44:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024ED50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8024ED60;
    }
}

loc_8024ED54:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x8024ED60u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_2544 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_2544);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_2544 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8024ED60:
{
    r3 = 4;
    ctx->lr = 0x8024ED68u;
    if constexpr (KnownRegArgsCpuCall<0x802D9ADCu>(&func_802D9ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9ADC_288C = func_802D9ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D9ADC_288C);
        r4 = static_cast<uint32_t>(regargs_result_802D9ADC_288C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9ADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8024EED4;
}

loc_8024ED6C:
{
    r30 = 0;
    MemoryInline::FlatWrite16((r29 + 1002), static_cast<uint16_t>(r30));
    r3 = r29;
    r4 = 4;
    ctx->lr = 0x8024ED80u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_2C53 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_2C53);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_2C53 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x8024ED8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8024D610u>(&func_8024D610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8024D610_2F95 = func_8024D610_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8024D610_2F95;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8024D610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8024ED90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024EDA8;
    }
}

loc_8024ED94:
{
    MemoryInline::FlatWrite16((r28 + 1002), static_cast<uint16_t>(r30));
    r3 = r28;
    r4 = 4;
    ctx->lr = 0x8024EDA4u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_32E3 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_32E3);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_32E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8024EDC4;
}

loc_8024EDA8:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024EDB4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8024EDC4;
    }
}

loc_8024EDB8:
{
    r3 = r27;
    r4 = 4;
    ctx->lr = 0x8024EDC4u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_3761 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_3761);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_3761 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8024EDC4:
{
    r3 = 3;
    ctx->lr = 0x8024EDCCu;
    if constexpr (KnownRegArgsCpuCall<0x802D9ADCu>(&func_802D9ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9ADC_3AA9 = func_802D9ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D9ADC_3AA9);
        r4 = static_cast<uint32_t>(regargs_result_802D9ADC_3AA9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9ADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8024EED4;
}

loc_8024EDD0:
{
    r30 = 10;
    MemoryInline::FlatWrite8((r29 + 1097), static_cast<uint8_t>(r30));
    r31 = 5400;
    MemoryInline::FlatWrite16((r29 + 1098), static_cast<uint16_t>(r31));
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8024EDECu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_3ECA = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_3ECA);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_3ECA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x8024EDF8u;
    if constexpr (KnownRegArgsCpuCall<0x8024D610u>(&func_8024D610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8024D610_420C = func_8024D610_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8024D610_420C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8024D610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8024EDFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024EE18;
    }
}

loc_8024EE00:
{
    MemoryInline::FlatWrite8((r28 + 1097), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite16((r28 + 1098), static_cast<uint16_t>(r31));
    r3 = r28;
    r4 = 1;
    ctx->lr = 0x8024EE14u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_45A2 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_45A2);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_45A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8024EE34;
}

loc_8024EE18:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024EE24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8024EE34;
    }
}

loc_8024EE28:
{
    r3 = r27;
    r4 = 1;
    ctx->lr = 0x8024EE34u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_4A20 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_4A20);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_4A20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8024EE34:
{
    r3 = 1;
    ctx->lr = 0x8024EE3Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D9ADCu>(&func_802D9ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9ADC_4D68 = func_802D9ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D9ADC_4D68);
        r4 = static_cast<uint32_t>(regargs_result_802D9ADC_4D68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9ADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8024EED4;
}

loc_8024EE40:
{
    r3 = r29;
    r4 = 1;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x802791F8u>(&func_802791F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791F8_50C9 = func_802791F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802791F8_50C9);
        r4 = static_cast<uint32_t>(regargs_result_802791F8_50C9 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8024EE54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024EE60;
    }
}

loc_8024EE58:
{
    r0 = 5400;
    MemoryInline::FlatWrite16((r29 + 1102), static_cast<uint16_t>(r0));
}

loc_8024EE60:
{
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x8024EE6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_54A2 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_54A2);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_54A2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x8024EE78u;
    if constexpr (KnownRegArgsCpuCall<0x8024D610u>(&func_8024D610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8024D610_57E4 = func_8024D610_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8024D610_57E4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8024D610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8024EE7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024EEB0;
    }
}

loc_8024EE80:
{
    r3 = r28;
    r4 = 1;
    r5 = 20;
    if constexpr (KnownRegArgsCpuCall<0x802791F8u>(&func_802791F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802791F8_5ADA = func_802791F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802791F8_5ADA);
        r4 = static_cast<uint32_t>(regargs_result_802791F8_5ADA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802791F8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8024EE94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024EEA0;
    }
}

loc_8024EE98:
{
    r0 = 5400;
    MemoryInline::FlatWrite16((r28 + 1102), static_cast<uint16_t>(r0));
}

loc_8024EEA0:
{
    r3 = r28;
    r4 = 2;
    ctx->lr = 0x8024EEACu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_5EB3 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_5EB3);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_5EB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8024EECC;
}

loc_8024EEB0:
{
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024EEBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8024EECC;
    }
}

loc_8024EEC0:
{
    r3 = r27;
    r4 = 2;
    ctx->lr = 0x8024EECCu;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80114C84_6331 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_6331);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_6331 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8024EECC:
{
    r3 = 2;
    ctx->lr = 0x8024EED4u;
    if constexpr (KnownRegArgsCpuCall<0x802D9ADCu>(&func_802D9ADC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D9ADC_6679 = func_802D9ADC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D9ADC_6679);
        r4 = static_cast<uint32_t>(regargs_result_802D9ADC_6679 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D9ADCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8024EED4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8024EC60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8024EC60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8024EC60 func_8024EC60 preserves=true fpr_mask=0x00000000
