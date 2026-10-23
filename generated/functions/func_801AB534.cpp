#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012CF18(CpuContext* ctx);
extern "C" uint32_t func_8012CF18_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80130790(CpuContext* ctx);
extern "C" void func_80130790_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801B0074(CpuContext* ctx);
extern "C" uint32_t func_801B0074_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803462CC(CpuContext* ctx);
extern "C" uint64_t func_803462CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_801AB534_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_801AB534;

loc_801AB534:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r31 = r3;
    r3 = r29;
    ctx->lr = 0x801AB564u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_D58 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_D58);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_D58 >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801AB568:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB5C8;
    }
}

loc_801AB56C:
{
    r0 = MemoryInline::FlatRead32((r29 + 456));
    r0 = (r0 & 8);
}

loc_801AB578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AB5C8;
    }
}

loc_801AB57C:
{
    r3 = r29;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_801AB588:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AB5C8;
    }
}

loc_801AB58C:
{
    r3 = r29;
    r4 = 13;
    r5 = 0;
    // inline leaf 0x8012D270 (12 guest instruction(s))
}

loc_inl2_0x8012D270:
{
    r6 = MemoryInline::FlatRead8((r3 + 485));
    r0 = (r4 & 255);
}

loc_inl2_0x8012D27C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D280:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r5 & 255);
}

loc_inl2_0x8012D28C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x8012D298;
    }
}

loc_inl2_0x8012D290:
{
    r3 = 1;
    goto loc_inl2_cont_8012D270;
}

loc_inl2_0x8012D298:
{
    r3 = 0;
}

loc_inl2_cont_8012D270:
{
    // end of inlined leaf 0x8012D270
}

loc_801AB5A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB5C8;
    }
}

loc_801AB5A4:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    ctx->lr = 0x801AB5ACu;
    if constexpr (KnownRegArgsCpuCall<0x801B0074u>(&func_801B0074)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_801B0074_1748 = func_801B0074_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801B0074_1748;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801B0074u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801AB5B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801AB5C8;
    }
}

loc_801AB5B4:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x801AB5C4u;
    if constexpr (KnownRegArgsCpuCall<0x8012CF18u>(&func_8012CF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CF18_1A8A = func_8012CF18_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8012CF18_1A8A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
    goto loc_801AB978;
}

loc_801AB5C8:
{
    r3 = MemoryInline::FlatRead8((r29 + 3));
    r4 = MemoryInline::FlatRead8((r29 + 10));
    ctx->lr = 0x801AB5D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r29 + 1132));
    ctx->lr = 0x801AB5E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r30 = r3;
}

loc_801AB5E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801AB930;
    }
}

loc_801AB5EC:
{
    r4 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_801AB5F8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_801AB608;
    }
}

loc_801AB5FC:
{
    r3 = (r29 + 432);
    r4 = (r30 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_801AB608:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_801AB610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801AB638;
    }
}

loc_801AB614:
{
}

loc_801AB618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801AB638;
    }
}

loc_801AB61C:
{
}

loc_801AB620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801AB638;
    }
}

loc_801AB624:
{
}

loc_801AB628:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801AB778;
    }
}

loc_801AB62C:
{
}

loc_801AB630:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801AB860;
    }
}

loc_801AB634:
{
    goto loc_801AB978;
}

loc_801AB638:
{
    r3 = r29;
    ctx->lr = 0x801AB640u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_28DF = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_28DF);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_28DF >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801AB644:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB668;
    }
}

loc_801AB648:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_801AB654:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801AB668;
    }
}

loc_801AB658:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl3_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl3_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl3_0x801307B0;
    }
}

loc_inl3_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl3_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl3_cont_80130790;
}

loc_inl3_return:
{
}

loc_inl3_cont_80130790:
{
    // end of inlined leaf 0x80130790
}

loc_801AB668:
{
    r0 = MemoryInline::FlatRead8((r29 + 2099));
}

loc_801AB670:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801AB6E0;
    }
}

loc_801AB674:
{
    r3 = r29;
    ctx->lr = 0x801AB67Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_32A6 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_32A6);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_32A6 >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801AB680:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB6A4;
    }
}

loc_801AB684:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_801AB690:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801AB6A4;
    }
}

loc_801AB694:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl4_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl4_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_0x801307B0;
    }
}

loc_inl4_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl4_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl4_cont_80130790;
}

loc_inl4_return:
{
}

loc_inl4_cont_80130790:
{
    // end of inlined leaf 0x80130790
}

loc_801AB6A4:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_801AB6AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(28))) {
        goto loc_801AB6D0;
    }
}

loc_801AB6B0:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_801AB6B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801AB6D0;
    }
}

loc_801AB6BC:
{
    r3 = r30;
    r4 = 2;
    r5 = MemoryInline::FlatRead8((r29 + 481));
    ctx->lr = 0x801AB6CCu;
    if constexpr (KnownRegArgsCpuCall<0x803462CCu>(&func_803462CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803462CC_3D6C = func_803462CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803462CC_3D6C);
        r4 = static_cast<uint32_t>(regargs_result_803462CC_3D6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803462CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_801AB6E0;
}

loc_801AB6D0:
{
    r3 = r30;
    r4 = 1;
    r5 = MemoryInline::FlatRead8((r29 + 481));
    ctx->lr = 0x801AB6E0u;
    if constexpr (KnownRegArgsCpuCall<0x803462CCu>(&func_803462CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803462CC_4431 = func_803462CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803462CC_4431);
        r4 = static_cast<uint32_t>(regargs_result_803462CC_4431 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803462CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_801AB6E0:
{
    r3 = r29;
    ctx->lr = 0x801AB6E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_4AA1 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_4AA1);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_4AA1 >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801AB6EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB978;
    }
}

loc_801AB6F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_801AB6F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801AB740;
    }
}

loc_801AB6FC:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_801AB708:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801AB740;
    }
}

loc_801AB70C:
{
    r0 = MemoryInline::FlatRead8((r29 + 1083));
}

loc_801AB714:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AB740;
    }
}

loc_801AB718:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl5_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl5_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x801307B0;
    }
}

loc_inl5_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl5_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl5_cont_80130790;
}

loc_inl5_return:
{
}

loc_inl5_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r3 = r29;
    r4 = (r31 & 127);
    r0 = (r4 + 30);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x801AB740u;
    if constexpr (KnownRegArgsCpuCall<0x8012CF18u>(&func_8012CF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CF18_556D = func_8012CF18_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8012CF18_556D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
}

loc_801AB740:
{
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_801AB748:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_801AB978;
    }
}

loc_801AB74C:
{
    r0 = MemoryInline::FlatRead8((r30 + 11));
}

loc_801AB754:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AB978;
    }
}

loc_801AB758:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_801AB764:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801AB978;
    }
}

loc_801AB768:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 808), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 2821), static_cast<uint8_t>(r0));
    goto loc_801AB978;
}

loc_801AB778:
{
    r3 = r29;
    ctx->lr = 0x801AB780u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_5B64 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_5B64);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_5B64 >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801AB784:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB978;
    }
}

loc_801AB788:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_801AB794:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801AB978;
    }
}

loc_801AB798:
{
    r0 = MemoryInline::FlatRead8((r29 + 2099));
}

loc_801AB7A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801AB7B8;
    }
}

loc_801AB7A4:
{
    r3 = r29;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_801AB7B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_801AB7C8;
    }
}

loc_801AB7B8:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl7_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl7_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl7_0x801307B0;
    }
}

loc_inl7_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl7_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl7_cont_80130790;
}

loc_inl7_return:
{
}

loc_inl7_cont_80130790:
{
    // end of inlined leaf 0x80130790
}

loc_801AB7C8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1083));
}

loc_801AB7D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801AB848;
    }
}

loc_801AB7D4:
{
}

loc_801AB7D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801AB848;
    }
}

loc_801AB7DC:
{
    r0 = MemoryInline::FlatRead16((r30 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801AB7E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801AB848;
    }
}

loc_801AB7E8:
{
    r0 = MemoryInline::FlatRead8((r29 + 2821));
}

loc_801AB7F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801AB820;
    }
}

loc_801AB7F4:
{
    r3 = r29;
    r4 = 2;
    r5 = 1;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl8_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl8_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x801307B0;
    }
}

loc_inl8_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl8_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl8_cont_80130790;
}

loc_inl8_return:
{
}

loc_inl8_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r3 = r29;
    r4 = (r31 & 127);
    r0 = (r4 + 30);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x801AB81Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012CF18u>(&func_8012CF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CF18_6DB9 = func_8012CF18_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8012CF18_6DB9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
    goto loc_801AB848;
}

loc_801AB820:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl9_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl9_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl9_0x801307B0;
    }
}

loc_inl9_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl9_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl9_cont_80130790;
}

loc_inl9_return:
{
}

loc_inl9_cont_80130790:
{
    // end of inlined leaf 0x80130790
    r3 = r29;
    r4 = (r31 & 127);
    r0 = (r4 + 30);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x801AB848u;
    if constexpr (KnownRegArgsCpuCall<0x8012CF18u>(&func_8012CF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CF18_74A2 = func_8012CF18_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8012CF18_74A2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
}

loc_801AB848:
{
    r0 = MemoryInline::FlatRead8((r29 + 1083));
}

loc_801AB850:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801AB978;
    }
}

loc_801AB854:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2820), static_cast<uint8_t>(r0));
    goto loc_801AB978;
}

loc_801AB860:
{
    r3 = r29;
    ctx->lr = 0x801AB868u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_789F = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_789F);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_789F >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801AB86C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB978;
    }
}

loc_801AB870:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_801AB87C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801AB978;
    }
}

loc_801AB880:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
}

loc_801AB888:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AB8F0;
    }
}

loc_801AB88C:
{
    r0 = MemoryInline::FlatRead8((r30 + 15));
}

loc_801AB894:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801AB8B8;
    }
}

loc_801AB898:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_801AB8A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801AB8B8;
    }
}

loc_801AB8A4:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x80130790 (13 guest instruction(s))
}

loc_inl10_0x80130790:
{
    r6 = MemoryInline::FlatRead8((r3 + 1083));
    r0 = (r4 & 255);
}

loc_inl10_0x8013079C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl10_0x801307B0;
    }
}

loc_inl10_0x801307A0:
{
    r6 = MemoryInline::FlatRead8((r3 + 1084));
    r0 = (r5 & 255);
}

loc_inl10_0x801307AC:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(r0))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x801307B0:
{
    MemoryInline::FlatWrite8((r3 + 1083), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1084), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1088), static_cast<uint16_t>(r0));
    goto loc_inl10_cont_80130790;
}

loc_inl10_return:
{
}

loc_inl10_cont_80130790:
{
    // end of inlined leaf 0x80130790
    goto loc_801AB924;
}

loc_801AB8B8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1084));
}

loc_801AB8C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AB8DC;
    }
}

loc_801AB8C4:
{
    r3 = r29;
    r4 = (r31 & 127);
    r0 = (r4 + 30);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x801AB8DCu;
    if constexpr (KnownRegArgsCpuCall<0x8012CF18u>(&func_8012CF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CF18_852C = func_8012CF18_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8012CF18_852C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
}

loc_801AB8DC:
{
    r3 = r29;
    r4 = 2;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
    goto loc_801AB924;
}

loc_801AB8F0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1084));
}

loc_801AB8F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801AB914;
    }
}

loc_801AB8FC:
{
    r3 = r29;
    r4 = (r31 & 127);
    r0 = (r4 + 30);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x801AB914u;
    if constexpr (KnownRegArgsCpuCall<0x8012CF18u>(&func_8012CF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CF18_8B71 = func_8012CF18_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8012CF18_8B71;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    }
}

loc_801AB914:
{
    r3 = r29;
    r4 = 2;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
}

loc_801AB924:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 2820), static_cast<uint8_t>(r0));
    goto loc_801AB978;
}

loc_801AB930:
{
    r3 = r29;
    ctx->lr = 0x801AB938u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8012D090_9103 = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_9103);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_9103 >> 32);
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
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_801AB93C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AB978;
    }
}

loc_801AB940:
{
    r0 = MemoryInline::FlatRead8((r29 + 2099));
}

loc_801AB948:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801AB95C;
    }
}

loc_801AB94C:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
}

loc_801AB95C:
{
    r0 = MemoryInline::FlatRead16((r29 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801AB964:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(180))) {
        goto loc_801AB978;
    }
}

loc_801AB968:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80130790u>(&func_80130790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        func_80130790_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80130790u>(ctx);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    }
}

loc_801AB978:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_801AB534(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801AB534_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801AB534 func_801AB534 preserves=true fpr_mask=0x00000000
