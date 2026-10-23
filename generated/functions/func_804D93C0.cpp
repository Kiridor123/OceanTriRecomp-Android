#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBA00(CpuContext* ctx);
extern "C" uint64_t func_804CBA00_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D2870(CpuContext* ctx);
extern "C" uint32_t func_804D2870_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D91A0(CpuContext* ctx);
extern "C" uint64_t func_804D91A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DF710(CpuContext* ctx);
extern "C" uint64_t func_804DF710_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D93C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r4_adde_right_0 = 0;
    uint32_t r4_adde_right_1 = 0;
    uint32_t r4_adde_right_2 = 0;
    uint32_t r4_adde_right_3 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r5_addc_left_0 = 0;
    uint32_t r5_addc_left_1 = 0;
    uint32_t r5_addc_left_2 = 0;
    uint32_t r5_addc_left_3 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804D93C0;

loc_804D93C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -14824));
}

loc_804D93D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D93E0;
    }
}

loc_804D93D8:
{
    r3 = 1;
    goto loc_804D9508;
}

loc_804D93E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -20024));
    ctx->lr = 0x804D93E8u;
    if constexpr (KnownRegArgsCpuCall<0x804CBA00u>(&func_804CBA00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804CBA00_DD9 = func_804CBA00_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CBA00_DD9);
        r4 = static_cast<uint32_t>(regargs_result_804CBA00_DD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804CBA00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r13 + -14856));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804D93F0:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_804D9448;
    }
}

loc_804D93F4:
{
    r0 = (r4 + -2);
    r3 = 0;
}

loc_804D9400:
{
    MemoryInline::FlatWrite32((r13 + -14856), r3);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_804D9438;
    }
}

loc_804D9408:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_804D9418;
    }
}

loc_804D940C:
{
}

loc_804D9410:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_804D9428;
    }
}

loc_804D9414:
{
    goto loc_804D9444;
}

loc_804D9418:
{
    r3 = 0x804E0000u;
    r3 = (r3 + -26144);
    MemoryInline::FlatWrite32((r13 + -20004), r3);
    goto loc_804D9444;
}

loc_804D9428:
{
    r3 = 0x804E0000u;
    r3 = (r3 + -25856);
    MemoryInline::FlatWrite32((r13 + -20004), r3);
    goto loc_804D9444;
}

loc_804D9438:
{
    r3 = 0x804E0000u;
    r3 = (r3 + -25568);
    MemoryInline::FlatWrite32((r13 + -20004), r3);
}

loc_804D9444:
{
    MemoryInline::FlatWrite32((r13 + -20008), r4);
}

loc_804D9448:
{
    r0 = MemoryInline::FlatRead32((r13 + -14756));
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -14824), r3);
}

loc_804D9458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D94BC;
    }
}

loc_804D945C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r8 = (static_cast<int32_t>(r3) >> 16);
    r5 = 65536;
    r0 = (static_cast<int32_t>(r3) >> 31);
    r6 = 0;
    r7 = (r5 + -1);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & -1);
    r0 = (static_cast<int32_t>(r3) >> 31);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5_mrot_1 = (r5_rot_2 & -65536);
    r5_mdest_1 = (r5 & 65535);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r4 = (r4 & r7);
    r0 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r5 & r7);
    r5 = (r3 & r7);
    r0_addc_right_1 = r0;
    r0 = (r4 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (r8 & r7);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r6 + r6);
    r4 = (r4 + r4_ca_1);
    r3 = 0x80000000u;
    r5_addc_left_1 = r5;
    r5 = (r5_addc_left_1 + r0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = -268435456;
    r4_adde_right_1 = r4;
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r6 + r4_adde_right_1);
    r4 = (r4 + r4_ca_2);
    r4 = (r7 + r5);
    r4 = (r4 & 16383);
    MemoryInline::FlatWriteRam16((r3 + 12512), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -14836), r0);
}

loc_804D94BC:
{
    r4 = 0x80000000u;
    r3 = 0x80750000u;
    r0 = MemoryInline::FlatRead16((r4 + 12512));
    r4 = (r3 + 2224);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6 = (r6_rot_1 & 4194048);
    r0 = (r6 | 1291845632);
    MemoryInline::FlatWriteRam32((r3 + 2224), r0);
    r5 = (r6 | 1296039936);
    r3 = (r6 | 1300234240);
    r0 = (r6 | 1304428544);
    MemoryInline::FlatWriteRam32((r4 + 4), r5);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    ctx->lr = 0x804D94F4u;
    if constexpr (KnownRegArgsCpuCall<0x804DF710u>(&func_804DF710)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804DF710_25E3 = func_804DF710_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF710_25E3);
        r4 = static_cast<uint32_t>(regargs_result_804DF710_25E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804DF710u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x80630000u;
    r3 = (r3 + -23488);
    if constexpr (KnownRegArgsCpuCall<0x804D2870u>(&func_804D2870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D2870_2D88 = func_804D2870_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804D2870_2D88;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D2870u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = -268435456;
    ctx->lr = 0x804D9508u;
    if constexpr (KnownRegArgsCpuCall<0x804D91A0u>(&func_804D91A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_804D91A0_30F0 = func_804D91A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D91A0_30F0);
        r4 = static_cast<uint32_t>(regargs_result_804D91A0_30F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D91A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804D9508:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D93C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D93C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D93C0 func_804D93C0 preserves=true fpr_mask=0x00000000
