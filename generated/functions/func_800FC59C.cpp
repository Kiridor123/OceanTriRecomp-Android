#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F9DE4(CpuContext* ctx);
extern "C" uint64_t func_800F9DE4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800FCA98(CpuContext* ctx);
extern "C" uint64_t func_800FCA98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BEE68(CpuContext* ctx);
extern "C" uint32_t func_803BEE68_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_800FC59C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

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
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_800FC59C;

loc_800FC59C:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 12), r0);
}

loc_800FC684:
{
    r28 = 0;
    r29 = r31;
    goto loc_800FC6A4;
}

loc_800FC690:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r30 + 24);
    ctx->lr = 0x800FC69Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800FC6A4:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_800FC6AC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_800FC690;
    }
}

loc_800FC6B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r30 + 2));
}

loc_800FC6C0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(2))) {
        goto loc_800FC6DC;
    }
}

loc_800FC6C4:
{
    r0 = (r3 + -3);
}

loc_800FC6CC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800FC7BC;
    }
}

loc_800FC6D0:
{
}

loc_800FC6D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(24))) {
        goto loc_800FC7D0;
    }
}

loc_800FC6D8:
{
    goto loc_800FC818;
}

loc_800FC6DC:
{
    r3 = r30;
    ctx->lr = 0x800FC6E4u;
    if constexpr (KnownRegArgsCpuCall<0x800F9DE4u>(&func_800F9DE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800F9DE4_F96 = func_800F9DE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800F9DE4_F96);
        r4 = static_cast<uint32_t>(regargs_result_800F9DE4_F96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F9DE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_800FC6E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FC744;
    }
}

loc_800FC6EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805A0000u;
    r4 = (r3 + -16468);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    goto loc_800FC798;
}

loc_800FC744:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x805A0000u;
    r4 = (r3 + -16488);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 7));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
}

loc_800FC798:
{
    ctx->lr = 0x800FC79Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BEE68u>(&func_803BEE68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BEE68_1D9A = func_803BEE68_ra0_0_8_0(ctx);
        r3 = regargs_result_803BEE68_1D9A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BEE68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800FC7A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800FC820;
    }
}

loc_800FC7A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    goto loc_800FC820;
}

loc_800FC7BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    goto loc_800FC820;
}

loc_800FC7D0:
{
    r3 = r30;
    ctx->lr = 0x800FC7D8u;
    if constexpr (KnownRegArgsCpuCall<0x800F9DE4u>(&func_800F9DE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800F9DE4_2306 = func_800F9DE4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800F9DE4_2306);
        r4 = static_cast<uint32_t>(regargs_result_800F9DE4_2306 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F9DE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_800FC7DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FC800;
    }
}

loc_800FC7E0:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r0 = 191;
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    goto loc_800FC820;
}

loc_800FC800:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    goto loc_800FC820;
}

loc_800FC818:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
}

loc_800FC820:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x800FC830u;
    if constexpr (KnownRegArgsCpuCall<0x800FCA98u>(&func_800FCA98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800FCA98_2AB4 = func_800FCA98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800FCA98_2AB4);
        r4 = static_cast<uint32_t>(regargs_result_800FCA98_2AB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800FCA98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
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

extern "C" void func_800FC59C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FC59C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xF0003FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FC59C func_800FC59C preserves=true fpr_mask=0x00000000
