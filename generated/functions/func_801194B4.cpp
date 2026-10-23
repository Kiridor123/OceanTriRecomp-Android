#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800504B0(CpuContext* ctx);
extern "C" uint64_t func_800504B0_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800505FC(CpuContext* ctx);
extern "C" uint64_t func_800505FC_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F140(CpuContext* ctx);
extern "C" uint64_t func_8006F140_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8006F14C(CpuContext* ctx);
extern "C" uint32_t func_8006F14C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007BE90(CpuContext* ctx);
extern "C" uint64_t func_8007BE90_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E0880(CpuContext* ctx);
extern "C" uint64_t func_800E0880_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801194B4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_801194B4;

loc_801194B4:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r26 = r3;
    r28 = 0;
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 112);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r27 = MemoryInline::FlatRead32((r26 + 56));
    r29 = 0;
    r30 = r27;
    r3 = 0x805A0000u;
    r24 = (r3 + 3488);
    r3 = 0x805A0000u;
    r25 = (r3 + 3184);
    r31 = 0;
}

loc_80119508:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_80119510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80119520;
    }
}

loc_80119514:
{
}

loc_80119518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8011954C;
    }
}

loc_8011951C:
{
    goto loc_80119594;
}

loc_80119520:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
}

loc_80119528:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80119538;
    }
}

loc_8011952C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    goto loc_80119594;
}

loc_80119538:
{
    MemoryInline::FlatWrite32((r30 + 28), r31);
    r3 = MemoryInline::FlatRead8((r30 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
    goto loc_80119594;
}

loc_8011954C:
{
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 28), r0);
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r24_addr_2 = (r24 + r0);
    r3 = MemoryInline::FlatRead32(r24_addr_2);
    r4 = MemoryInline::FlatRead32((r30 + 28));
    ctx->lr = 0x8011956Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r25_addr_2 = (r25 + r0);
    r0 = MemoryInline::FlatRead32(r25_addr_2);
}

loc_80119584:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80119594;
    }
}

loc_80119588:
{
    r3 = MemoryInline::FlatRead8((r30 + 20));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
}

loc_80119594:
{
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 280));
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8007BF10u>(ctx);
    r3 = (r1 + 56);
    // inline leaf 0x800E29F8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800E29F8
}

loc_801195B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801195F4;
    }
}

loc_801195B8:
{
    r3 = (r1 + 56);
    r4 = 0;
    ctx->lr = 0x801195C4u;
    if constexpr (KnownRegArgsCpuCall<0x8007BE90u>(&func_8007BE90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8007BE90_1E36 = func_8007BE90_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007BE90_1E36);
        r4 = static_cast<uint32_t>(regargs_result_8007BE90_1E36 >> 32);
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
        InvokeDirectCpu<0x8007BE90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    ctx->lr = 0x801195D4u;
    if constexpr (KnownRegArgsCpuCall<0x8006F14Cu>(&func_8006F14C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006F14C_2207 = func_8006F14C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8006F14C_2207;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006F14Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead32((r30 + 22));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 16);
    r4 = 3;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80096548u>(ctx);
    r3 = (r1 + 16);
    ctx->lr = 0x801195F4u;
    if constexpr (KnownRegArgsCpuCall<0x8006F140u>(&func_8006F140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8006F140_25BE = func_8006F140_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_8006F140_25BE);
        r4 = static_cast<uint32_t>(regargs_result_8006F140_25BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8006F140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
}

loc_801195F4:
{
    r30 = (r30 + 12);
    r29 = (r29 + 1);
}

loc_80119600:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(5))) {
        goto loc_80119508;
    }
}

loc_80119604:
{
    r0 = MemoryInline::FlatRead8((r27 + 20));
}

loc_8011960C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80119614;
    }
}

loc_80119610:
{
    r28 = 1;
}

loc_80119614:
{
    r0 = MemoryInline::FlatRead8((r27 + 32));
}

loc_8011961C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80119628;
    }
}

loc_80119620:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80119628:
{
    r0 = MemoryInline::FlatRead8((r27 + 44));
}

loc_80119630:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8011963C;
    }
}

loc_80119634:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_8011963C:
{
    r0 = MemoryInline::FlatRead8((r27 + 56));
}

loc_80119644:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80119650;
    }
}

loc_80119648:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80119650:
{
    r0 = MemoryInline::FlatRead8((r27 + 68));
}

loc_80119658:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80119664;
    }
}

loc_8011965C:
{
    r0 = (r28 + 1);
    r28 = (r0 & 255);
}

loc_80119664:
{
}

loc_80119668:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(5))) {
        goto loc_80119684;
    }
}

loc_8011966C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r26 + 5), static_cast<uint8_t>(r0));
    goto loc_80119850;
}

loc_80119684:
{
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28640));
    f2.d = f1.d;
    r0 = MemoryInline::FlatRead32((r26 + 16));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28568));
    r0 = (r0 ^ -2147483648);
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r5 = 1127219200;
    stackword13 = r5;
    MemoryInline::FlatWriteRam32((r1 + 160), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword13), static_cast<uint32_t>(stackword12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + 3184);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = (r0 ^ -2147483648);
    stackword14 = r0;
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    stackword15 = r5;
    MemoryInline::FlatWriteRam32((r1 + 168), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword15), static_cast<uint32_t>(stackword14));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 120));
    f3.d = PpcFmulsInline(f0.d, f3.d);
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_801196F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80119700;
    }
}

loc_801196F4:
{
}

loc_801196F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80119714;
    }
}

loc_801196FC:
{
    goto loc_80119724;
}

loc_80119700:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28552));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    goto loc_80119724;
}

loc_80119714:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28548));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
}

loc_80119724:
{
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28544));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051454u>(ctx);
    r3 = MemoryInline::FlatRead32((r26 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r26 + 16), r0);
}

loc_80119740:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(4))) {
        goto loc_8011974C;
    }
}

loc_80119744:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r26 + 16), r0);
}

loc_8011974C:
{
    r3 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r26 + 40));
    r4 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = MemoryInline::FlatRead32((r26 + 36));
    r4 = (r1 + 112);
    ctx->lr = 0x8011976Cu;
    if constexpr (KnownRegArgsCpuCall<0x800504B0u>(&func_800504B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800504B0_3F37 = func_800504B0_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800504B0_3F37);
        r4 = static_cast<uint32_t>(regargs_result_800504B0_3F37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800504B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r26 + 44));
    r4 = (r1 + 112);
    ctx->lr = 0x80119778u;
    if constexpr (KnownRegArgsCpuCall<0x800505FCu>(&func_800505FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800505FC_443F = func_800505FC_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800505FC_443F);
        r4 = static_cast<uint32_t>(regargs_result_800505FC_443F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800505FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = (r1 + 44);
    r4 = (r1 + 112);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r26 + 24);
    r5 = (r1 + 44);
    ctx->lr = 0x80119794u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_49BE = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_49BE);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_49BE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 32);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 48));
    r0 = (r3 + 256);
    MemoryInline::FlatWrite32((r4 + 48), r0);
    MemoryInline::FlatWrite32((r26 + 44), r0);
    r28 = 0;
    r24 = r27;
    r25 = (r27 + 4);
    goto loc_80119844;
}

loc_801197DC:
{
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r3 = (r3 + 4);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r3 = (r3 + 28);
    r4 = (r27 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r24 + 4));
    r4 = (r1 + 112);
    r5 = 0;
    ctx->lr = 0x8011980Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800E0880_5359 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_5359);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_5359 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[2] = f2;
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r24 + 12));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x80119820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    r3 = r26;
    r4 = r25;
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80119838u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
    r24 = (r24 + 4);
    r25 = (r25 + 4);
    r28 = (r28 + 1);
}

loc_80119844:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_8011984C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_801197DC;
    }
}

loc_80119850:
{
    r11 = (r1 + 208);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801194B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801194B4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801194B4 func_801194B4 preserves=true fpr_mask=0x00000000
