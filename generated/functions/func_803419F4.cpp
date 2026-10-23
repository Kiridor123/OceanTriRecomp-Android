#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80275524(CpuContext* ctx);
extern "C" uint64_t func_80275524_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80340248(CpuContext* ctx);
extern "C" uint64_t func_80340248_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_803419F4_ra38_1e2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_803419F4;

loc_803419F4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r28 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r30 = MemoryInline::FlatRead32((r31 + 56));
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r29 = MemoryInline::FlatRead32((r30 + 48));
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_80341A30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(34))) {
        goto loc_80341A4C;
    }
}

loc_80341A34:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80341A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80341A4C;
    }
}

loc_80341A40:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_80341A48:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80341A60;
    }
}

loc_80341A4C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    goto loc_80341BB0;
}

loc_80341A60:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
}

loc_80341A68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80341A80;
    }
}

loc_80341A6C:
{
}

loc_80341A70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80341A90;
    }
}

loc_80341A74:
{
}

loc_80341A78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80341B2C;
    }
}

loc_80341A7C:
{
    goto loc_80341BB0;
}

loc_80341A80:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_80341A90:
{
    r3 = (r28 + 24);
    r4 = (r30 + 24);
    ctx->lr = 0x80341A9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80340248u>(&func_80340248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80340248_DCD = func_80340248_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80340248_DCD);
        r4 = static_cast<uint32_t>(regargs_result_80340248_DCD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80340248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r31 + 64), r3);
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r0 = MemoryInline::FlatRead8((r31 + 90));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & -4096);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r31 + 64), r0);
    r3 = (r31 + 80);
    r4 = (r31 + 64);
    r5 = 2048;
    ctx->lr = 0x80341AC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8034027Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    MemoryInline::FlatWriteFloat32((r28 + 32), f0.d);
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r3 = MH3_TickLoad(r3, 2150898388);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_80341AE4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80341AFC;
    }
}

loc_80341AE8:
{
    r0 = 10;
    MemoryInline::FlatWrite32((r28 + 12), r0);
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x80341AFCu;
    if constexpr (KnownRegArgsCpuCall<0x80275524u>(&func_80275524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275524_18FF = func_80275524_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275524_18FF);
        r4 = static_cast<uint32_t>(regargs_result_80275524_18FF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80275524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80341AFC:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_80341B04:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80341BB0;
    }
}

loc_80341B08:
{
    r3 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 7), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 89), static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 3;
    ctx->lr = 0x80341B28u;
    if constexpr (KnownRegArgsCpuCall<0x80275524u>(&func_80275524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275524_1DF1 = func_80275524_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275524_1DF1);
        r4 = static_cast<uint32_t>(regargs_result_80275524_1DF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80275524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80341BB0;
}

loc_80341B2C:
{
    r0 = -16384;
    MemoryInline::FlatWrite32((r31 + 76), r0);
    r0 = MemoryInline::FlatRead8((r31 + 90));
}

loc_80341B3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80341B4C;
    }
}

loc_80341B40:
{
}

loc_80341B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80341B5C;
    }
}

loc_80341B48:
{
    goto loc_80341B68;
}

loc_80341B4C:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r0 = (r3 + 4096);
    MemoryInline::FlatWrite32((r31 + 76), r0);
    goto loc_80341B68;
}

loc_80341B5C:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r0 = (r3 + -4096);
    MemoryInline::FlatWrite32((r31 + 76), r0);
}

loc_80341B68:
{
    r3 = (r1 + 8);
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 90));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -10144));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10192));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = (r28 + 24);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80341BB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803419F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803419F4_ra38_1e2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FE3 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803419F4 func_803419F4 preserves=true fpr_mask=0x00000000
