#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A9354(CpuContext* ctx);
extern "C" uint32_t func_802A9354_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802DA338(CpuContext* ctx);
extern "C" uint32_t func_802DA338_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80349E94(CpuContext* ctx);
extern "C" uint64_t func_80349E94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80349FF0(CpuContext* ctx);
extern "C" uint64_t func_80349FF0_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8034BC14(CpuContext* ctx);
extern "C" uint64_t func_8034BC14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8034C02C(CpuContext* ctx);
extern "C" uint64_t func_8034C02C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8034C678(CpuContext* ctx);
extern "C" uint64_t func_8034C678_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803493FC_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_803493FC;

loc_803493FC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r31 = 0;
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 & 15);
    r0 = (r4 | r0);
    r4 = (r0 & 65535);
    r0 = MemoryInline::FlatRead8((r3 + 423));
    r0 = (r0 * 24);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80349444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034946C;
    }
}

loc_80349448:
{
}

loc_8034944C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80349530;
    }
}

loc_80349450:
{
}

loc_80349454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8034962C;
    }
}

loc_80349458:
{
}

loc_8034945C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8034975C;
    }
}

loc_80349460:
{
}

loc_80349464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80349840;
    }
}

loc_80349468:
{
    goto loc_80349958;
}

loc_8034946C:
{
    r0 = (r4 & 16);
}

loc_80349474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349514;
    }
}

loc_80349478:
{
    r0 = MemoryInline::FlatRead8((r5 + 110));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80349484:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80349494;
    }
}

loc_80349488:
{
    r3 = 2;
    ctx->lr = 0x80349490u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_116E = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_116E);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_116E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_80349494:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 757), static_cast<uint8_t>(r0));
    r3 = 27;
    ctx->lr = 0x803494A8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_18B4 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_18B4);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_18B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = MemoryInline::FlatRead8((r29 + 423));
    r3 = MemoryInline::FlatRead8((r29 + 422));
    r0 = MemoryInline::FlatRead8((r29 + 424));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r29 + 29), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 749));
    r0 = (r4 + r0);
    r4 = (r0 & 255);
    ctx->lr = 0x803494DCu;
    if constexpr (KnownRegArgsCpuCall<0x8034C678u>(&func_8034C678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8034C678_20E0 = func_8034C678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034C678_20E0);
        r4 = static_cast<uint32_t>(regargs_result_8034C678_20E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8034C678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r3 = (r29 + 751);
    r4 = (r1 + 16);
    // inline leaf 0x80349978 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80349978
    r3 = (r29 + 420);
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r29 + 752));
    r5 = (r5 & 65535);
    r6 = 7;
    // inline leaf 0x802A9354 (30 guest instruction(s))
}

loc_inl1_0x802A9354:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_inl1_0x802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_inl1_0x802A93B8;
    }
}

loc_inl1_0x802A93B4:
{
    goto loc_inl1_0x802A93BC;
}

loc_inl1_0x802A93B8:
{
    r5 = r7;
}

loc_inl1_0x802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl1_cont_802A9354:
{
    // end of inlined leaf 0x802A9354
    r3 = r29;
    ctx->lr = 0x80349510u;
    if constexpr (KnownRegArgsCpuCall<0x80349E94u>(&func_80349E94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80349E94_2E36 = func_80349E94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80349E94_2E36);
        r4 = static_cast<uint32_t>(regargs_result_80349E94_2E36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349E94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80349958;
}

loc_80349514:
{
    r0 = (r4 & 32);
}

loc_8034951C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349528;
    }
}

loc_80349520:
{
    r31 = 2;
    goto loc_80349958;
}

loc_80349528:
{
    ctx->lr = 0x8034952Cu;
    if constexpr (KnownRegArgsCpuCall<0x80349FF0u>(&func_80349FF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80349FF0_32BF = func_80349FF0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80349FF0_32BF);
        r4 = static_cast<uint32_t>(regargs_result_80349FF0_32BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80349FF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_80349530:
{
    r0 = (r4 & 16);
}

loc_80349538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803495D8;
    }
}

loc_8034953C:
{
    r0 = MemoryInline::FlatRead8((r5 + 110));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80349548:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80349558;
    }
}

loc_8034954C:
{
    r3 = 2;
    ctx->lr = 0x80349554u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_3B14 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_3B14);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_3B14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_80349558:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 757), static_cast<uint8_t>(r0));
    r3 = 27;
    ctx->lr = 0x8034956Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_425A = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_425A);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_425A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = MemoryInline::FlatRead8((r29 + 423));
    r3 = MemoryInline::FlatRead8((r29 + 422));
    r0 = MemoryInline::FlatRead8((r29 + 424));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r29 + 30), static_cast<uint8_t>(r0));
    r3 = 1;
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 751));
    r0 = (r4 + r0);
    r4 = (r0 & 255);
    ctx->lr = 0x803495A0u;
    if constexpr (KnownRegArgsCpuCall<0x8034C678u>(&func_8034C678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8034C678_4A86 = func_8034C678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034C678_4A86);
        r4 = static_cast<uint32_t>(regargs_result_8034C678_4A86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8034C678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    r3 = (r29 + 753);
    r4 = (r1 + 12);
    // inline leaf 0x80349978 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80349978
    r3 = (r29 + 420);
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r29 + 754));
    r5 = (r5 & 65535);
    r6 = 7;
    // inline leaf 0x802A9354 (30 guest instruction(s))
}

loc_inl3_0x802A9354:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_inl3_0x802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_inl3_0x802A93B8;
    }
}

loc_inl3_0x802A93B4:
{
    goto loc_inl3_0x802A93BC;
}

loc_inl3_0x802A93B8:
{
    r5 = r7;
}

loc_inl3_0x802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl3_cont_802A9354:
{
    // end of inlined leaf 0x802A9354
    r3 = r29;
    ctx->lr = 0x803495D4u;
    if constexpr (KnownRegArgsCpuCall<0x80349E94u>(&func_80349E94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80349E94_57DC = func_80349E94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80349E94_57DC);
        r4 = static_cast<uint32_t>(regargs_result_80349E94_57DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349E94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80349958;
}

loc_803495D8:
{
    r0 = (r4 & 32);
}

loc_803495E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349624;
    }
}

loc_803495E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 757), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x803495F8u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_5CCA = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_5CCA);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_5CCA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r6 = MemoryInline::FlatRead8((r29 + 750));
    r3 = (r29 + 420);
    r4 = MemoryInline::FlatRead8((r29 + 29));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = (r4 & 65535);
    r5 = r6;
    r5 = (r5 & 65535);
    // inline leaf 0x802A9354 (30 guest instruction(s))
}

loc_inl4_0x802A9354:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_inl4_0x802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_inl4_0x802A93B8;
    }
}

loc_inl4_0x802A93B4:
{
    goto loc_inl4_0x802A93BC;
}

loc_inl4_0x802A93B8:
{
    r5 = r7;
}

loc_inl4_0x802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl4_cont_802A9354:
{
    // end of inlined leaf 0x802A9354
    r3 = r29;
    ctx->lr = 0x80349620u;
    if constexpr (KnownRegArgsCpuCall<0x80349E94u>(&func_80349E94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80349E94_6A85 = func_80349E94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80349E94_6A85);
        r4 = static_cast<uint32_t>(regargs_result_80349E94_6A85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349E94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80349958;
}

loc_80349624:
{
    ctx->lr = 0x80349628u;
    if constexpr (KnownRegArgsCpuCall<0x80349FF0u>(&func_80349FF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80349FF0_6E29 = func_80349FF0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80349FF0_6E29);
        r4 = static_cast<uint32_t>(regargs_result_80349FF0_6E29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80349FF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_8034962C:
{
    r0 = (r4 & 16);
}

loc_80349634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349708;
    }
}

loc_80349638:
{
    r0 = MemoryInline::FlatRead8((r5 + 110));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80349644:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80349654;
    }
}

loc_80349648:
{
    r3 = 2;
    ctx->lr = 0x80349650u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_767E = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_767E);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_767E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_80349654:
{
    r3 = 27;
    ctx->lr = 0x8034965Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_7D2F = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_7D2F);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_7D2F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = MemoryInline::FlatRead8((r29 + 423));
    r3 = MemoryInline::FlatRead8((r29 + 422));
    r0 = MemoryInline::FlatRead8((r29 + 424));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r30 = (r0 & 255);
    r3 = 2;
    r0 = MemoryInline::FlatRead8((r29 + 753));
    r0 = (r30 + r0);
    r4 = (r0 & 255);
    ctx->lr = 0x80349688u;
    if constexpr (KnownRegArgsCpuCall<0x8034C678u>(&func_8034C678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8034C678_84DD = func_8034C678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034C678_84DD);
        r4 = static_cast<uint32_t>(regargs_result_8034C678_84DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8034C678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = (r29 + 755);
    r4 = (r1 + 8);
    // inline leaf 0x80349978 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80349978
    r0 = MemoryInline::FlatRead8((r29 + 755));
}

loc_803496A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803496D0;
    }
}

loc_803496A8:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    MemoryInline::FlatWrite8((r29 + 31), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 430), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 756));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r29 + 431), static_cast<uint8_t>(r0));
    goto loc_80349958;
}

loc_803496D0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 757), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    MemoryInline::FlatWrite8((r29 + 31), static_cast<uint8_t>(r0));
    r3 = (r29 + 420);
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r29 + 756));
    r5 = (r5 & 65535);
    r6 = 7;
    // inline leaf 0x802A9354 (30 guest instruction(s))
}

loc_inl6_0x802A9354:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_inl6_0x802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_inl6_0x802A93B8;
    }
}

loc_inl6_0x802A93B4:
{
    goto loc_inl6_0x802A93BC;
}

loc_inl6_0x802A93B8:
{
    r5 = r7;
}

loc_inl6_0x802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl6_cont_802A9354:
{
    // end of inlined leaf 0x802A9354
    r3 = r29;
    ctx->lr = 0x80349704u;
    if constexpr (KnownRegArgsCpuCall<0x80349E94u>(&func_80349E94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80349E94_9616 = func_80349E94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80349E94_9616);
        r4 = static_cast<uint32_t>(regargs_result_80349E94_9616 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349E94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80349958;
}

loc_80349708:
{
    r0 = (r4 & 32);
}

loc_80349710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349754;
    }
}

loc_80349714:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 757), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x80349728u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_9B04 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_9B04);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_9B04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r29 + 420);
    r4 = MemoryInline::FlatRead8((r29 + 30));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = (r4 & 65535);
    r5 = MemoryInline::FlatRead8((r29 + 752));
    r5 = (r5 & 65535);
    r6 = 7;
    // inline leaf 0x802A9354 (30 guest instruction(s))
}

loc_inl7_0x802A9354:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, r3, static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r3 + 2), static_cast<uint8_t>(r6));
    r7 = (r6 & 255);
    r0 = (r5 & 65535);
    r6 = (r0 + r7);
    r0 = (r6 + -1);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r6 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r3 + 6), static_cast<uint8_t>(r6));
    r6 = (r6 + -1);
    r0 = (r7 * r6);
    r0 = (r5 - r0);
    r5 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r3 + 7), static_cast<uint8_t>(r5));
    r4 = (r4 & 65535);
    r8 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r7));
    r0 = (r8 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = (r8 * r7);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_inl7_0x802A93B0:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r6))) {
        goto loc_inl7_0x802A93B8;
    }
}

loc_inl7_0x802A93B4:
{
    goto loc_inl7_0x802A93BC;
}

loc_inl7_0x802A93B8:
{
    r5 = r7;
}

loc_inl7_0x802A93BC:
{
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r3 + 5), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r3 + 8), static_cast<uint16_t>(r0));
}

loc_inl7_cont_802A9354:
{
    // end of inlined leaf 0x802A9354
    r3 = r29;
    ctx->lr = 0x80349750u;
    if constexpr (KnownRegArgsCpuCall<0x80349E94u>(&func_80349E94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80349E94_A8BE = func_80349E94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80349E94_A8BE);
        r4 = static_cast<uint32_t>(regargs_result_80349E94_A8BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349E94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80349958;
}

loc_80349754:
{
    ctx->lr = 0x80349758u;
    if constexpr (KnownRegArgsCpuCall<0x80349FF0u>(&func_80349FF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80349FF0_AC62 = func_80349FF0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80349FF0_AC62);
        r4 = static_cast<uint32_t>(regargs_result_80349FF0_AC62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80349FF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_8034975C:
{
    r0 = (r4 & 16);
}

loc_80349764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803497EC;
    }
}

loc_80349768:
{
    r0 = MemoryInline::FlatRead8((r5 + 110));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80349774:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80349784;
    }
}

loc_80349778:
{
    r3 = 2;
    ctx->lr = 0x80349780u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_B4B7 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_B4B7);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_B4B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_80349784:
{
    r3 = 27;
    ctx->lr = 0x8034978Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_BB68 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_BB68);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_BB68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 3;
    r5 = MemoryInline::FlatRead8((r29 + 423));
    r4 = MemoryInline::FlatRead8((r29 + 422));
    r0 = MemoryInline::FlatRead8((r29 + 424));
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 755));
    r0 = (r4 + r0);
    r4 = (r0 & 255);
    ctx->lr = 0x803497B8u;
    if constexpr (KnownRegArgsCpuCall<0x8034C678u>(&func_8034C678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8034C678_C314 = func_8034C678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034C678_C314);
        r4 = static_cast<uint32_t>(regargs_result_8034C678_C314 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8034C678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWriteRam16((r1 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 20));
}

loc_803497C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80349958;
    }
}

loc_803497CC:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 430), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 21));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r29 + 431), static_cast<uint8_t>(r0));
    goto loc_80349958;
}

loc_803497EC:
{
    r0 = (r4 & 32);
}

loc_803497F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349838;
    }
}

loc_803497F8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 757), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8034980Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_CBCC = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_CBCC);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_CBCC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = (r29 + 420);
    r4 = MemoryInline::FlatRead8((r29 + 31));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = (r4 & 65535);
    r5 = MemoryInline::FlatRead8((r29 + 754));
    r5 = (r5 & 65535);
    r6 = 7;
    if constexpr (KnownRegArgsCpuCall<0x802A9354u>(&func_802A9354)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802A9354_D312 = func_802A9354_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A9354_D312;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802A9354u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = r29;
    ctx->lr = 0x80349834u;
    if constexpr (KnownRegArgsCpuCall<0x80349E94u>(&func_80349E94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80349E94_D687 = func_80349E94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80349E94_D687);
        r4 = static_cast<uint32_t>(regargs_result_80349E94_D687 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80349E94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80349958;
}

loc_80349838:
{
    ctx->lr = 0x8034983Cu;
    if constexpr (KnownRegArgsCpuCall<0x80349FF0u>(&func_80349FF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80349FF0_DA2B = func_80349FF0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80349FF0_DA2B);
        r4 = static_cast<uint32_t>(regargs_result_80349FF0_DA2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80349FF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_80349840:
{
    r0 = (r4 & 32);
}

loc_80349848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80349868;
    }
}

loc_8034984C:
{
    r3 = 1;
    ctx->lr = 0x80349854u;
    if constexpr (KnownRegArgsCpuCall<0x802DA338u>(&func_802DA338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802DA338_E14D = func_802DA338_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802DA338_E14D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DA338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r29 + 757));
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x80349864u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_E4A3 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_E4A3);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_E4A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80349958;
}

loc_80349868:
{
    r30 = MemoryInline::FlatRead8((r3 + 430));
    r0 = (r4 & 4);
}

loc_80349874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803498B0;
    }
}

loc_80349878:
{
    r30 = (r30 + -1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
}

loc_80349884:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_803498A4;
    }
}

loc_80349888:
{
    r30 = 0;
    r3 = 2;
    ctx->lr = 0x80349894u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_ED1E = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_ED1E);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_ED1E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead16((r29 + 8));
    r0 = (r0 & 65531);
}

loc_8034989C:
{
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_803498FC;
}

loc_803498A4:
{
    r3 = 6;
    ctx->lr = 0x803498ACu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_F472 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_F472);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_F472 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803498FC;
}

loc_803498B0:
{
    r0 = (r4 & 8);
}

loc_803498B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803498FC;
    }
}

loc_803498BC:
{
    r30 = (r30 + 1);
    r4 = MemoryInline::FlatRead8((r3 + 431));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803498D0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_803498F4;
    }
}

loc_803498D4:
{
    r0 = (r4 + -1);
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 2;
    ctx->lr = 0x803498E4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_FD69 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_FD69);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_FD69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead16((r29 + 8));
    r0 = (r0 & 65527);
}

loc_803498EC:
{
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_803498FC;
}

loc_803498F4:
{
    r3 = 6;
    ctx->lr = 0x803498FCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DBC94_104BD = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_104BD);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_104BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[8] = r8;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_803498FC:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r0 = MemoryInline::FlatRead8((r29 + 430));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8034990C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80349914;
    }
}

loc_80349910:
{
    MemoryInline::FlatWrite8((r29 + 430), static_cast<uint8_t>(r30));
}

loc_80349914:
{
    r3 = MemoryInline::FlatRead8((r29 + 757));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r29 + r0);
    r6 = MemoryInline::FlatRead8((r4 + 749));
    r5 = MemoryInline::FlatRead8((r29 + 423));
    r4 = MemoryInline::FlatRead8((r29 + 422));
    r0 = MemoryInline::FlatRead8((r29 + 424));
    r4 = (r4 * r0);
    r0 = (r6 + r5);
    r0 = (r4 + r0);
    r4 = (r0 & 255);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->lr = 0x80349948u;
    if constexpr (KnownRegArgsCpuCall<0x8034BC14u>(&func_8034BC14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8034BC14_10E9A = func_8034BC14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034BC14_10E9A);
        r4 = static_cast<uint32_t>(regargs_result_8034BC14_10E9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8034BC14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80349950:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80349958;
    }
}

loc_80349954:
{
    ctx->lr = 0x80349958u;
    if constexpr (KnownRegArgsCpuCall<0x8034C02Cu>(&func_8034C02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8034C02C_112DF = func_8034C02C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034C02C_112DF);
        r4 = static_cast<uint32_t>(regargs_result_8034C02C_112DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8034C02Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_80349958:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803493FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803493FC_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803493FC func_803493FC preserves=true fpr_mask=0x00000000
