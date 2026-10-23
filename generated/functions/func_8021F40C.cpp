#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041A70(CpuContext* ctx);
extern "C" uint64_t func_80041A70_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004D1F4(CpuContext* ctx);
extern "C" uint64_t func_8004D1F4_rac0_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CF154(CpuContext* ctx);
extern "C" uint64_t func_800CF154_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800CF1B8(CpuContext* ctx);
extern "C" uint64_t func_800CF1B8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D5D7C(CpuContext* ctx);
extern "C" uint64_t func_800D5D7C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D5D90(CpuContext* ctx);
extern "C" uint64_t func_800D5D90_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801FCA64(CpuContext* ctx);
extern "C" uint64_t func_801FCA64_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021F62C(CpuContext* ctx);
extern "C" uint64_t func_8021F62C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021F774(CpuContext* ctx);
extern "C" uint64_t func_8021F774_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021F840(CpuContext* ctx);
extern "C" uint64_t func_8021F840_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8021F40C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8021F40C;

loc_8021F40C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    ctx->lr = 0x8021F428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800D2F80u>(ctx);
    r0 = ctx->gpr[0];
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
    ctx->lr = 0x8021F42Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D5D7Cu>(&func_800D5D7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D5D7C_DC8 = func_800D5D7C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D5D7C_DC8);
        r4 = static_cast<uint32_t>(regargs_result_800D5D7C_DC8 >> 32);
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
        InvokeDirectCpu<0x800D5D7Cu>(ctx);
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
    r3 = MemoryInline::FlatRead8((r30 + 8));
}

loc_8021F434:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021F444;
    }
}

loc_8021F438:
{
}

loc_8021F43C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8021F45C;
    }
}

loc_8021F440:
{
    goto loc_8021F610;
}

loc_8021F444:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    goto loc_8021F610;
}

loc_8021F45C:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_8021F464:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021F494;
    }
}

loc_8021F468:
{
}

loc_8021F46C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8021F4A0;
    }
}

loc_8021F470:
{
}

loc_8021F474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8021F4AC;
    }
}

loc_8021F478:
{
}

loc_8021F47C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8021F4B8;
    }
}

loc_8021F480:
{
}

loc_8021F484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8021F4C4;
    }
}

loc_8021F488:
{
}

loc_8021F48C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8021F4F8;
    }
}

loc_8021F490:
{
    goto loc_8021F610;
}

loc_8021F494:
{
    r3 = r30;
    ctx->lr = 0x8021F49Cu;
    if constexpr (KnownRegArgsCpuCall<0x8021F62Cu>(&func_8021F62C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021F62C_19B5 = func_8021F62C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021F62C_19B5);
        r4 = static_cast<uint32_t>(regargs_result_8021F62C_19B5 >> 32);
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
        InvokeDirectCpu<0x8021F62Cu>(ctx);
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
    goto loc_8021F610;
}

loc_8021F4A0:
{
    r3 = r30;
    ctx->lr = 0x8021F4A8u;
    if constexpr (KnownRegArgsCpuCall<0x8021F774u>(&func_8021F774)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021F774_1F65 = func_8021F774_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021F774_1F65);
        r4 = static_cast<uint32_t>(regargs_result_8021F774_1F65 >> 32);
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
        InvokeDirectCpu<0x8021F774u>(ctx);
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
    goto loc_8021F610;
}

loc_8021F4AC:
{
    r3 = r30;
    ctx->lr = 0x8021F4B4u;
    if constexpr (KnownRegArgsCpuCall<0x8021F840u>(&func_8021F840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021F840_2515 = func_8021F840_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021F840_2515);
        r4 = static_cast<uint32_t>(regargs_result_8021F840_2515 >> 32);
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
        InvokeDirectCpu<0x8021F840u>(ctx);
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
    goto loc_8021F610;
}

loc_8021F4B8:
{
    r3 = r30;
    // inline leaf 0x8021FFB4 (3 guest instruction(s))
    r0 = 4;
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8021FFB4
    goto loc_8021F610;
}

loc_8021F4C4:
{
    r30 = 0;
    r3 = 0x806B0000u;
    r31 = (r3 + -12348);
}

loc_8021F4D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 180));
}

loc_8021F4D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021F4E0;
    }
}

loc_8021F4DC:
{
    // inline leaf 0x800D8EA8 (5 guest instruction(s))
}

loc_inl1_0x800D8EA8:
{
}

loc_inl1_0x800D8EAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800D8EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl1_cont_800D8EA8;
}

loc_inl1_return:
{
}

loc_inl1_cont_800D8EA8:
{
    // end of inlined leaf 0x800D8EA8
}

loc_8021F4E0:
{
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_8021F4EC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_8021F4D0;
    }
}

loc_8021F4F0:
{
    ctx->lr = 0x8021F4F4u;
    if constexpr (KnownRegArgsCpuCall<0x800CF154u>(&func_800CF154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CF154_2F5B = func_800CF154_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF154_2F5B);
        r4 = static_cast<uint32_t>(regargs_result_800CF154_2F5B >> 32);
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
        InvokeDirectCpu<0x800CF154u>(ctx);
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
    goto loc_8021F614;
}

loc_8021F4F8:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_8021F500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021F518;
    }
}

loc_8021F504:
{
}

loc_8021F508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8021F524;
    }
}

loc_8021F50C:
{
}

loc_8021F510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8021F52C;
    }
}

loc_8021F514:
{
    goto loc_8021F610;
}

loc_8021F518:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
    goto loc_8021F610;
}

loc_8021F524:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
}

loc_8021F52C:
{
    r30 = 0;
    r3 = 0x806B0000u;
    r31 = (r3 + -12348);
}

loc_8021F538:
{
    r3 = MemoryInline::FlatRead32((r31 + 180));
}

loc_8021F540:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021F548;
    }
}

loc_8021F544:
{
    // inline leaf 0x800D8EA8 (5 guest instruction(s))
}

loc_inl2_0x800D8EA8:
{
}

loc_inl2_0x800D8EAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800D8EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl2_cont_800D8EA8;
}

loc_inl2_return:
{
}

loc_inl2_cont_800D8EA8:
{
    // end of inlined leaf 0x800D8EA8
}

loc_8021F548:
{
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_8021F554:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_8021F538;
    }
}

loc_8021F558:
{
    ctx->lr = 0x8021F55Cu;
    if constexpr (KnownRegArgsCpuCall<0x801FCA64u>(&func_801FCA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FCA64_3BB5 = func_801FCA64_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801FCA64_3BB5);
        r4 = static_cast<uint32_t>(regargs_result_801FCA64_3BB5 >> 32);
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
        InvokeDirectCpu<0x801FCA64u>(ctx);
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
    ctx->lr = 0x8021F560u;
    if constexpr (KnownRegArgsCpuCall<0x800CF1B8u>(&func_800CF1B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CF1B8_4127 = func_800CF1B8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF1B8_4127);
        r4 = static_cast<uint32_t>(regargs_result_800CF1B8_4127 >> 32);
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
        InvokeDirectCpu<0x800CF1B8u>(ctx);
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
    ctx->lr = 0x8021F564u;
    if constexpr (KnownRegArgsCpuCall<0x8004D1F4u>(&func_8004D1F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004D1F4_46B4 = func_8004D1F4_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8004D1F4_46B4);
        r4 = static_cast<uint32_t>(regargs_result_8004D1F4_46B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004D1F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = 3;
    // inline leaf 0x800CF2B8 (7 guest instruction(s))
}

loc_inl3_0x800CF2B8:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CF2C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(7))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x800CF2C4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 37), static_cast<uint8_t>(r3));
    goto loc_inl3_cont_800CF2B8;
}

loc_inl3_return:
{
}

loc_inl3_cont_800CF2B8:
{
    // end of inlined leaf 0x800CF2B8
    r3 = 1;
    // inline leaf 0x800CF29C (7 guest instruction(s))
}

loc_inl4_0x800CF29C:
{
    r0 = (r3 & 255);
}

loc_inl4_0x800CF2A4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x800CF2A8:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 36), static_cast<uint8_t>(r3));
    goto loc_inl4_cont_800CF29C;
}

loc_inl4_return:
{
}

loc_inl4_cont_800CF29C:
{
    // end of inlined leaf 0x800CF29C
    r3 = 0x80660000u;
    r0 = MemoryInline::FlatRead16((r3 + -19148));
}

loc_8021F580:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2005))) {
        goto loc_8021F594;
    }
}

loc_8021F584:
{
    r3 = (r3 + -19148);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r0 | 128);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
}

loc_8021F594:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    r0 = (r0 & 128);
}

loc_8021F5A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021F5B0;
    }
}

loc_8021F5AC:
{
    // inline leaf 0x800D0754 (6 guest instruction(s))
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 1996), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 1997), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800D0754
}

loc_8021F5B0:
{
    r3 = 0x80660000u;
    r5 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r5 + 2008));
}

loc_8021F5C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021F5D8;
    }
}

loc_8021F5C4:
{
    r4 = 0x80660000u;
    r3 = (r4 + -19148);
    r0 = MemoryInline::FlatRead8((r3 + 11));
}

loc_8021F5D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8021F5E0;
    }
}

loc_8021F5D8:
{
    ctx->lr = 0x8021F5DCu;
    if constexpr (KnownRegArgsCpuCall<0x80041A70u>(&func_80041A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80041A70_545C = func_80041A70_rac0_0_18_0(ctx, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_80041A70_545C);
        r4 = static_cast<uint32_t>(regargs_result_80041A70_545C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80041A70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_8021F614;
}

loc_8021F5E0:
{
    r0 = MemoryInline::FlatRead16((r4 + -19148));
}

loc_8021F5E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021F5F8;
    }
}

loc_8021F5EC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r5 + 2002), static_cast<uint8_t>(r0));
    goto loc_8021F600;
}

loc_8021F5F8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r5 + 2002), static_cast<uint8_t>(r0));
}

loc_8021F600:
{
    r3 = 6;
    // inline leaf 0x800CF2B8 (7 guest instruction(s))
}

loc_inl6_0x800CF2B8:
{
    r0 = (r3 & 255);
}

loc_inl6_0x800CF2C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(7))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x800CF2C4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 37), static_cast<uint8_t>(r3));
    goto loc_inl6_cont_800CF2B8;
}

loc_inl6_return:
{
}

loc_inl6_cont_800CF2B8:
{
    // end of inlined leaf 0x800CF2B8
    ctx->lr = 0x8021F60Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800419DCu>(ctx);
    r0 = ctx->gpr[0];
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
    goto loc_8021F614;
}

loc_8021F610:
{
    ctx->lr = 0x8021F614u;
    if constexpr (KnownRegArgsCpuCall<0x800D5D90u>(&func_800D5D90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D5D90_5E11 = func_800D5D90_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D5D90_5E11);
        r4 = static_cast<uint32_t>(regargs_result_800D5D90_5E11 >> 32);
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
        InvokeDirectCpu<0x800D5D90u>(ctx);
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

loc_8021F614:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x3FFFFFFF gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021F40C func_8021F40C preserves=true fpr_mask=0x00000000
