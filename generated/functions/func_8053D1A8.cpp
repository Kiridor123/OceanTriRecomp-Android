#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80543344(CpuContext* ctx);
extern "C" uint32_t func_80543344_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8056CEE4(CpuContext* ctx);
extern "C" uint32_t func_8056CEE4_ra98_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8056CF28(CpuContext* ctx);
extern "C" uint32_t func_8056CF28_ra98_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8056D618(CpuContext* ctx);
extern "C" uint64_t func_8056D618_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8056D7F4(CpuContext* ctx);
extern "C" uint64_t func_8056D7F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8056DD40(CpuContext* ctx);
extern "C" uint64_t func_8056DD40_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8056DE58(CpuContext* ctx);
extern "C" void func_8056DE58_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8053D1A8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8053D1A8u);
    goto loc_8053D1A8;

loc_8053D1A8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0x80650000u;
    r30 = r3;
    r27 = r4;
    r3 = (r1 + 44);
    r31 = (r31 + -12824);
    ctx->lr = 0x8053D1D4u;
    if constexpr (KnownRegArgsCpuCall<0x8056CEE4u>(&func_8056CEE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8056CEE4_AA5 = func_8056CEE4_ra98_0_10_0(ctx, r3, r4, r7);
        r4 = regargs_result_8056CEE4_AA5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056CEE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    goto loc_8053D2B4;
}

loc_8053D1D8:
{
    r3 = (r1 + 44);
    r28 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8056D618u>(&func_8056D618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8056D618_E5B = func_8056D618_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056D618_E5B);
        r4 = static_cast<uint32_t>(regargs_result_8056D618_E5B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056D618u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = (r1 + 44);
    ctx->lr = 0x8053D1F0u;
    if constexpr (KnownRegArgsCpuCall<0x8056D7F4u>(&func_8056D7F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8056D7F4_1247 = func_8056D7F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056D7F4_1247);
        r4 = static_cast<uint32_t>(regargs_result_8056D7F4_1247 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8056D7F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(44));
}

loc_8053D1F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053D260;
    }
}

loc_8053D1FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053D20C;
    }
}

loc_8053D200:
{
}

loc_8053D204:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(40))) {
        goto loc_8053D218;
    }
}

loc_8053D208:
{
    goto loc_8053D238;
}

loc_8053D20C:
{
}

loc_8053D210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(88))) {
        goto loc_8053D218;
    }
}

loc_8053D214:
{
    goto loc_8053D238;
}

loc_8053D218:
{
    r12 = MemoryInline::FlatRead32((r30 + 76));
    r3 = (r30 + 76);
    r4 = (r31 + 12144);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x8053D230u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r3;
    goto loc_8053D260;
}

loc_8053D238:
{
    r3 = (r3 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x80543344u>(&func_80543344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80543344_1C64 = func_80543344_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80543344_1C64;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80543344u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r12 = MemoryInline::FlatRead32((r30 + 76));
    r0 = r3;
    r3 = (r30 + 76);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    r4 = (r0 & 65535);
    ctr = r12;
    ctx->lr = 0x8053D25Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r3;
}

loc_8053D260:
{
}

loc_8053D264:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8053D280;
    }
}

loc_8053D268:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053D280u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053D280:
{
    r3 = (r1 + 32);
    r4 = (r1 + 44);
    if constexpr (KnownRegArgsCpuCall<0x8056DE58u>(&func_8056DE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_8056DE58_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056DE58u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r5 = MemoryInline::FlatRead8((r1 + 36));
    r4 = MemoryInline::FlatRead8((r1 + 37));
    r3 = MemoryInline::FlatRead8((r1 + 38));
    r0 = MemoryInline::FlatRead16((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r0));
}

loc_8053D2B4:
{
    r3 = (r1 + 44);
    if constexpr (KnownRegArgsCpuCall<0x8056DD40u>(&func_8056DD40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8056DD40_2A74 = func_8056DD40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056DD40_2A74);
        r4 = static_cast<uint32_t>(regargs_result_8056DD40_2A74 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056DD40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8053D2C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053D1D8;
    }
}

loc_8053D2C4:
{
    r4 = r27;
    r3 = (r1 + 20);
    ctx->lr = 0x8053D2D0u;
    if constexpr (KnownRegArgsCpuCall<0x8056CF28u>(&func_8056CF28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8056CF28_2ED1 = func_8056CF28_ra98_0_10_0(ctx, r3, r4, r7);
        r4 = regargs_result_8056CF28_2ED1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056CF28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r6 = MemoryInline::FlatRead32((r1 + 20));
    r5 = MemoryInline::FlatRead8((r1 + 24));
    r4 = MemoryInline::FlatRead8((r1 + 25));
    r3 = MemoryInline::FlatRead8((r1 + 26));
    r0 = MemoryInline::FlatRead16((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r0));
    goto loc_8053D3CC;
}

loc_8053D2FC:
{
    r3 = (r1 + 44);
    r28 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8056D618u>(&func_8056D618)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8056D618_34B7 = func_8056D618_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056D618_34B7);
        r4 = static_cast<uint32_t>(regargs_result_8056D618_34B7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056D618u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = (r1 + 44);
    ctx->lr = 0x8053D314u;
    if constexpr (KnownRegArgsCpuCall<0x8056D7F4u>(&func_8056D7F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8056D7F4_38A6 = func_8056D7F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056D7F4_38A6);
        r4 = static_cast<uint32_t>(regargs_result_8056D7F4_38A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8056D7F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(44));
}

loc_8053D31C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053D35C;
    }
}

loc_8053D320:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8053D330;
    }
}

loc_8053D324:
{
}

loc_8053D328:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(42))) {
        goto loc_8053D33C;
    }
}

loc_8053D32C:
{
    goto loc_8053D378;
}

loc_8053D330:
{
}

loc_8053D334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(76))) {
        goto loc_8053D33C;
    }
}

loc_8053D338:
{
    goto loc_8053D378;
}

loc_8053D33C:
{
    r12 = MemoryInline::FlatRead32((r30 + 76));
    r3 = (r30 + 76);
    r4 = (r31 + 12236);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x8053D354u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r3;
    goto loc_8053D378;
}

loc_8053D35C:
{
    r12 = MemoryInline::FlatRead32((r30 + 76));
    r3 = (r30 + 76);
    r4 = (r31 + 11916);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x8053D374u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r3;
}

loc_8053D378:
{
}

loc_8053D37C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8053D398;
    }
}

loc_8053D380:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8053D398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053D398:
{
    r3 = (r1 + 8);
    r4 = (r1 + 44);
    if constexpr (KnownRegArgsCpuCall<0x8056DE58u>(&func_8056DE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_8056DE58_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056DE58u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r6 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead8((r1 + 12));
    r4 = MemoryInline::FlatRead8((r1 + 13));
    r3 = MemoryInline::FlatRead8((r1 + 14));
    r0 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    MemoryInline::FlatWriteRam8((r1 + 48), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 49), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 50), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 52), static_cast<uint16_t>(r0));
}

loc_8053D3CC:
{
    r3 = (r1 + 44);
    if constexpr (KnownRegArgsCpuCall<0x8056DD40u>(&func_8056DD40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8056DD40_4DBB = func_8056DD40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056DD40_4DBB);
        r4 = static_cast<uint32_t>(regargs_result_8056DD40_4DBB >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8056DD40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_8053D3D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8053D2FC;
    }
}

loc_8053D3DC:
{
    r11 = (r1 + 80);
    r3 = 0;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8053D1A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8053D1A8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053D1A8 func_8053D1A8 preserves=true fpr_mask=0x00000000
