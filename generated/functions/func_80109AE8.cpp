#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DC528(CpuContext* ctx);
extern "C" uint64_t func_800DC528_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800DC538(CpuContext* ctx);
extern "C" uint64_t func_800DC538_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E0880(CpuContext* ctx);
extern "C" uint64_t func_800E0880_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801072B4(CpuContext* ctx);
extern "C" uint64_t func_801072B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8010A78C(CpuContext* ctx);
extern "C" uint64_t func_8010A78C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80112240(CpuContext* ctx);
extern "C" uint64_t func_80112240_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801126C8(CpuContext* ctx);
extern "C" uint64_t func_801126C8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_80109AE8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_80109AE8;

loc_80109AE8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r28 = MemoryInline::FlatRead32((r3 + 48));
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80109B24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80109B28:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80109B44;
    }
}

loc_80109B2C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_80109D44;
}

loc_80109B44:
{
    ctx->lr = 0x80109B48u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80109B4C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80109D44;
    }
}

loc_80109B50:
{
    r3 = r28;
    r4 = 256;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279118
}

loc_80109B60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80109BF0;
    }
}

loc_80109B64:
{
    r3 = r28;
    r4 = 512;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80279118
}

loc_80109B74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80109BF0;
    }
}

loc_80109B78:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_80109B8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80109BE4;
    }
}

loc_80109B90:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_80109B98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80109BD4;
    }
}

loc_80109B9C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_80109BAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80109BB8;
    }
}

loc_80109BB0:
{
    r3 = (r30 + 24);
    ctx->lr = 0x80109BB8u;
    if constexpr (KnownRegArgsCpuCall<0x800DC538u>(&func_800DC538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DC538_176F = func_800DC538_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC538_176F);
        r4 = static_cast<uint32_t>(regargs_result_800DC538_176F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DC538u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
}

loc_80109BB8:
{
    r3 = (r30 + 24);
    r4 = (r30 + 36);
    r5 = MemoryInline::FlatRead8((r30 + 68));
    r6 = 108;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29432));
    ctx->lr = 0x80109BD0u;
    if constexpr (KnownRegArgsCpuCall<0x801126C8u>(&func_801126C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_801126C8_1BE7 = func_801126C8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801126C8_1BE7);
        r4 = static_cast<uint32_t>(regargs_result_801126C8_1BE7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801126C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    goto loc_80109BE4;
}

loc_80109BD4:
{
    r3 = (r30 + 24);
    r4 = MemoryInline::FlatRead8((r30 + 68));
    r5 = 46;
    ctx->lr = 0x80109BE4u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80112240_20F2 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_20F2);
        r4 = static_cast<uint32_t>(regargs_result_80112240_20F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80112240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_80109BE4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r0));
    goto loc_80109D44;
}

loc_80109BF0:
{
    r29 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r29));
    r3 = r28;
    r4 = 256;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80279118
}

loc_80109C0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80109C58;
    }
}

loc_80109C10:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_80109C18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80109C40;
    }
}

loc_80109C1C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 68));
}

loc_80109C2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80109C38;
    }
}

loc_80109C30:
{
    r3 = (r30 + 24);
    ctx->lr = 0x80109C38u;
    if constexpr (KnownRegArgsCpuCall<0x800DC528u>(&func_800DC528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DC528_2B9E = func_800DC528_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800DC528_2B9E);
        r4 = static_cast<uint32_t>(regargs_result_800DC528_2B9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DC528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
    }
}

loc_80109C38:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
}

loc_80109C40:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80109C54u;
    if constexpr (KnownRegArgsCpuCall<0x8010A78Cu>(&func_8010A78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8010A78C_302C = func_8010A78C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8010A78C_302C);
        r4 = static_cast<uint32_t>(regargs_result_8010A78C_302C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8010A78Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_80109C70;
}

loc_80109C58:
{
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r29));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80109C70u;
    if constexpr (KnownRegArgsCpuCall<0x8010A78Cu>(&func_8010A78C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8010A78C_3509 = func_8010A78C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8010A78C_3509);
        r4 = static_cast<uint32_t>(regargs_result_8010A78C_3509 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8010A78Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80109C70:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MH3_TickLoad(r3, 2148572272);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_80109C80:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80109CC8;
    }
}

loc_80109C84:
{
    r3 = r28;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_80109C94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(51))) {
        goto loc_80109CC8;
    }
}

loc_80109C98:
{
    r0 = 19;
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_80109CA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80109CBC;
    }
}

loc_80109CAC:
{
    r3 = r28;
    r4 = 30;
    ctx->lr = 0x80109CB8u;
    if constexpr (KnownRegArgsCpuCall<0x801072B4u>(&func_801072B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801072B4_3CE3 = func_801072B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801072B4_3CE3);
        r4 = static_cast<uint32_t>(regargs_result_801072B4_3CE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801072B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    }
    goto loc_80109CC8;
}

loc_80109CBC:
{
    r3 = r28;
    r4 = 23;
    ctx->lr = 0x80109CC8u;
    if constexpr (KnownRegArgsCpuCall<0x801072B4u>(&func_801072B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801072B4_4182 = func_801072B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801072B4_4182);
        r4 = static_cast<uint32_t>(regargs_result_801072B4_4182 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801072B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    }
}

loc_80109CC8:
{
    r0 = MemoryInline::FlatRead8((r28 + 22));
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r28 + 316));
    r3 = (r3 + 4);
    r4 = 2;
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    r3 = (r1 + 8);
    r4 = (r30 + 24);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r3 = (r30 + 36);
    r4 = (r28 + 84);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 4);
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r3 + 40);
    r4 = (r30 + 36);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x80109D2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800E0880_4DC9 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_4DC9);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_4DC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = r30;
    r4 = (r31 + 4);
    r5 = 2;
    r6 = MemoryInline::FlatRead32(r31);
    r7 = 0;
    ctx->lr = 0x80109D44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80109D44:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80109AE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80109AE8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80109AE8 func_80109AE8 preserves=true fpr_mask=0x00000000
