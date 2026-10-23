#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004BD20(CpuContext* ctx);
extern "C" uint64_t func_8004BD20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A6C80(CpuContext* ctx);
extern "C" uint64_t func_802A6C80_ra68_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A8F60(CpuContext* ctx);
extern "C" uint64_t func_802A8F60_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802A90CC(CpuContext* ctx);
extern "C" uint64_t func_802A90CC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802DEA74(CpuContext* ctx);
extern "C" uint64_t func_802DEA74_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802DEB4C(CpuContext* ctx);
extern "C" uint64_t func_802DEB4C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802DEBF8(CpuContext* ctx);
extern "C" uint64_t func_802DEBF8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8035B764(CpuContext* ctx);
extern "C" uint64_t func_8035B764_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8035B8DC(CpuContext* ctx);
extern "C" uint64_t func_8035B8DC_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802DEC7C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_802DEC7C;

loc_802DEC7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r3 & 255);
    r5 = (r4 * 304);
    r3 = 0x806C0000u;
    r0 = (r3 + -296);
    r31 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_802DECB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DECD0;
    }
}

loc_802DECB4:
{
    r3 = MemoryInline::FlatRead16(r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802DECBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DECC8;
    }
}

loc_802DECC0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
}

loc_802DECC8:
{
    r3 = 0;
    goto loc_802DF0DC;
}

loc_802DECD0:
{
    r3 = r31;
    // inline leaf 0x802DE968 (13 guest instruction(s))
    r0 = (r4 & 255);
    r5 = (r0 * 848);
    r4 = 0x80660000u;
    r0 = (r4 + -18480);
    r5 = (r0 + r5);
    r0 = MemoryInline::FlatRead16((r5 + 708));
    r4 = (r0 & 63);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r5 + 724));
    r0 = (r0 & 15);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802DE968
    r0 = MemoryInline::FlatRead16((r31 + 10));
    MemoryInline::FlatWrite16((r31 + 288), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 290), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_802DECF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802DED0C;
    }
}

loc_802DECF4:
{
    r3 = MemoryInline::FlatRead8((r31 + 302));
}

loc_802DECFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DED20;
    }
}

loc_802DED00:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 302), static_cast<uint8_t>(r0));
    goto loc_802DED20;
}

loc_802DED0C:
{
    r3 = MemoryInline::FlatRead8((r31 + 302));
}

loc_802DED14:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(3))) {
        goto loc_802DED20;
    }
}

loc_802DED18:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 302), static_cast<uint8_t>(r0));
}

loc_802DED20:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_802DED28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DED58;
    }
}

loc_802DED2C:
{
}

loc_802DED30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DED60;
    }
}

loc_802DED34:
{
}

loc_802DED38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802DEE1C;
    }
}

loc_802DED3C:
{
}

loc_802DED40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802DEE98;
    }
}

loc_802DED44:
{
}

loc_802DED48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802DEF2C;
    }
}

loc_802DED4C:
{
}

loc_802DED50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802DEFC0;
    }
}

loc_802DED54:
{
    goto loc_802DF0D0;
}

loc_802DED58:
{
    r3 = 0;
    goto loc_802DF0DC;
}

loc_802DED60:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802DED6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_802DEDE4;
    }
}

loc_802DED70:
{
    r3 = 2;
    r4 = 8;
    r5 = MemoryInline::FlatRead16((r31 + 8));
    ctx->lr = 0x802DED80u;
    if constexpr (KnownRegArgsCpuCall<0x8035B764u>(&func_8035B764)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8035B764_1BA8 = func_8035B764_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8035B764_1BA8);
        r4 = static_cast<uint32_t>(regargs_result_8035B764_1BA8 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8035B764u>(ctx);
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
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r3));
    r29 = 24;
    r0 = MemoryInline::FlatRead8((r31 + 301));
}

loc_802DED90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DED98;
    }
}

loc_802DED94:
{
    r29 = 32;
}

loc_802DED98:
{
    // inline leaf 0x800470BC (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800470BC
}

loc_802DEDA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802DEDB0;
    }
}

loc_802DEDA4:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r31 + 295), static_cast<uint8_t>(r0));
    goto loc_802DEDB8;
}

loc_802DEDB0:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 295), static_cast<uint8_t>(r0));
}

loc_802DEDB8:
{
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 292), static_cast<uint8_t>(r30));
    r3 = r29;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = MemoryInline::FlatRead8((r31 + 295));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl2_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x802A8F8C;
    }
}

loc_inl2_0x802A8F84:
{
    r3 = 1;
    goto loc_inl2_cont_802A8F78;
}

loc_inl2_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl2_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl2_cont_802A8F78;
}

loc_inl2_return:
{
}

loc_inl2_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r31 + 293), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 294), static_cast<uint8_t>(r30));
    goto loc_802DEE14;
}

loc_802DEDE4:
{
    // inline leaf 0x8035B9E0 (7 guest instruction(s))
}

loc_inl3_0x8035B9E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16960));
}

loc_inl3_0x8035B9E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8035B9F4;
    }
}

loc_inl3_0x8035B9EC:
{
    r3 = -1;
    goto loc_inl3_cont_8035B9E0;
}

loc_inl3_0x8035B9F4:
{
    r3 = MemoryInline::FlatRead8((r3 + 3084));
}

loc_inl3_cont_8035B9E0:
{
    // end of inlined leaf 0x8035B9E0
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802DEDF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_802DF0D0;
    }
}

loc_802DEDFC:
{
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    goto loc_802DF0D0;
}

loc_802DEE14:
{
    r3 = 0;
    goto loc_802DF0DC;
}

loc_802DEE1C:
{
    r0 = MemoryInline::FlatRead8((r31 + 7));
}

loc_802DEE24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DEE5C;
    }
}

loc_802DEE28:
{
    r3 = 4;
    ctx->lr = 0x802DEE30u;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_3165 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_3165;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead8((r31 + 7));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 7));
}

loc_802DEE48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DEE5C;
    }
}

loc_802DEE4C:
{
    r3 = MemoryInline::FlatRead8((r31 + 6));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = MemoryInline::FlatRead32((r4 + 28));
    ctx->lr = 0x802DEE5Cu;
    if constexpr (KnownRegArgsCpuCall<0x8035B8DCu>(&func_8035B8DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8035B8DC_35BC = func_8035B8DC_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8035B8DC_35BC);
        r4 = static_cast<uint32_t>(regargs_result_8035B8DC_35BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8035B8DCu>(ctx);
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
    }
}

loc_802DEE5C:
{
    // inline leaf 0x8035B9E0 (7 guest instruction(s))
}

loc_inl4_0x8035B9E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16960));
}

loc_inl4_0x8035B9E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x8035B9F4;
    }
}

loc_inl4_0x8035B9EC:
{
    r3 = -1;
    goto loc_inl4_cont_8035B9E0;
}

loc_inl4_0x8035B9F4:
{
    r3 = MemoryInline::FlatRead8((r3 + 3084));
}

loc_inl4_cont_8035B9E0:
{
    // end of inlined leaf 0x8035B9E0
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead8((r31 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802DEE70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_802DF0D0;
    }
}

loc_802DEE74:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 296), r0);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 296));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x802DEE8Cu;
    if constexpr (KnownRegArgsCpuCall<0x802DEB4Cu>(&func_802DEB4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEB4C_3E88 = func_802DEB4C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DEB4C_3E88);
        r4 = static_cast<uint32_t>(regargs_result_802DEB4C_3E88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DEB4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
}

loc_802DEE98:
{
    r5 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r5 & 16);
}

loc_802DEEA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DEEF4;
    }
}

loc_802DEEA8:
{
    r0 = MemoryInline::FlatRead32((r31 + 296));
}

loc_802DEEB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DEEC0;
    }
}

loc_802DEEB4:
{
}

loc_802DEEB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DEED8;
    }
}

loc_802DEEBC:
{
    goto loc_802DEF18;
}

loc_802DEEC0:
{
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x802DEED4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_45A6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_45A6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_45A6 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802DEF18;
}

loc_802DEED8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x802DEEECu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_4D59 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_4D59);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_4D59 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 1;
    goto loc_802DF0DC;
}

loc_802DEEF4:
{
    r0 = (r5 & 3);
}

loc_802DEEFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DEF18;
    }
}

loc_802DEF00:
{
    r3 = MemoryInline::FlatRead32((r31 + 296));
    r4 = 2;
    r6 = 1;
    r7 = 2;
    ctx->lr = 0x802DEF14u;
    if constexpr (KnownRegArgsCpuCall<0x802A8F60u>(&func_802A8F60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802A8F60_5574 = func_802A8F60_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A8F60_5574);
        r4 = static_cast<uint32_t>(regargs_result_802A8F60_5574 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A8F60u>(ctx);
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
    MemoryInline::FlatWrite32((r31 + 296), r3);
}

loc_802DEF18:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 296));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x802DEF28u;
    if constexpr (KnownRegArgsCpuCall<0x802DEB4Cu>(&func_802DEB4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEB4C_5CAC = func_802DEB4C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DEB4C_5CAC);
        r4 = static_cast<uint32_t>(regargs_result_802DEB4C_5CAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DEB4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802DF0D0;
}

loc_802DEF2C:
{
    r3 = MemoryInline::FlatRead16((r31 + 10));
    r0 = (r3 & 16);
}

loc_802DEF38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DEF94;
    }
}

loc_802DEF3C:
{
    r0 = MemoryInline::FlatRead32((r31 + 296));
    r0 = (r0 * 24);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 26));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802DEF54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DEF88;
    }
}

loc_802DEF58:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 296), r0);
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x802DEF74u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_636C = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_636C);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_636C >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 296));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x802DEF84u;
    if constexpr (KnownRegArgsCpuCall<0x802DEBF8u>(&func_802DEBF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEBF8_6A5C = func_802DEBF8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DEBF8_6A5C);
        r4 = static_cast<uint32_t>(regargs_result_802DEBF8_6A5C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DEBF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802DF0D0;
}

loc_802DEF88:
{
    r3 = 2;
    ctx->lr = 0x802DEF90u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_6E28 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_6E28);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_6E28 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802DF0D0;
}

loc_802DEF94:
{
    r0 = (r3 & 32);
}

loc_802DEF9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DEFB4;
    }
}

loc_802DEFA0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x802DEFB0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_763D = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_763D);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_763D >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802DF0D0;
}

loc_802DEFB4:
{
    r3 = (r31 + 288);
    ctx->lr = 0x802DEFBCu;
    if constexpr (KnownRegArgsCpuCall<0x802A6C80u>(&func_802A6C80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802A6C80_7D48 = func_802A6C80_ra68_1f8_18_0(ctx, r3, r5, r6, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A6C80_7D48);
        r4 = static_cast<uint32_t>(regargs_result_802A6C80_7D48 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A6C80u>(ctx);
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
    goto loc_802DF0D0;
}

loc_802DEFC0:
{
    r3 = (r31 + 296);
    r4 = MemoryInline::FlatRead16((r31 + 10));
    r5 = 1;
    r6 = 2;
    ctx->lr = 0x802DEFD4u;
    if constexpr (KnownRegArgsCpuCall<0x802A90CCu>(&func_802A90CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802A90CC_84B8 = func_802A90CC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A90CC_84B8);
        r4 = static_cast<uint32_t>(regargs_result_802A90CC_84B8 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802A90CCu>(ctx);
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

loc_802DEFD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_802DEFF8;
    }
}

loc_802DEFDC:
{
}

loc_802DEFE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802DF0A0;
    }
}

loc_802DEFE4:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 296));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x802DEFF4u;
    if constexpr (KnownRegArgsCpuCall<0x802DEBF8u>(&func_802DEBF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEBF8_8CCE = func_802DEBF8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DEBF8_8CCE);
        r4 = static_cast<uint32_t>(regargs_result_802DEBF8_8CCE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DEBF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802DF0D0;
}

loc_802DEFF8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r31 + 294));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r31 + 295));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r31 + 292));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r0 = (r5 + r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x802DE9C4 (16 guest instruction(s))
}

loc_inl5_0x802DE9C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 301));
}

loc_inl5_0x802DE9CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x802DE9F0;
    }
}

loc_inl5_0x802DE9D0:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl5_0x802DE9D8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl5_0x802DE9F0;
    }
}

loc_inl5_0x802DE9DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r5 + -24);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    goto loc_inl5_cont_802DE9C4;
}

loc_inl5_0x802DE9F0:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
}

loc_inl5_cont_802DE9C4:
{
    // end of inlined leaf 0x802DE9C4
    r30 = r3;
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_802DF034:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802DF068;
    }
}

loc_802DF038:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = MemoryInline::FlatRead16(r30);
    r5 = -100;
    r6 = 1;
    ctx->lr = 0x802DF04Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004BD20u>(&func_8004BD20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004BD20_9854 = func_8004BD20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BD20_9854);
        r4 = static_cast<uint32_t>(regargs_result_8004BD20_9854 >> 32);
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
        InvokeDirectCpu<0x8004BD20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r5 = MemoryInline::FlatRead8((r31 + 5));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r6 = 1;
    ctx->lr = 0x802DF064u;
    if constexpr (KnownRegArgsCpuCall<0x8004BD20u>(&func_8004BD20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004BD20_9D2A = func_8004BD20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BD20_9D2A);
        r4 = static_cast<uint32_t>(regargs_result_8004BD20_9D2A >> 32);
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
        InvokeDirectCpu<0x8004BD20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_802DF08C;
}

loc_802DF068:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = MemoryInline::FlatRead16(r30);
    r5 = -100;
    ctx->lr = 0x802DF078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80272E94u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r5 = MemoryInline::FlatRead8((r31 + 5));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    ctx->lr = 0x802DF08Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80272E94u>(ctx);
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
}

loc_802DF08C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802DF0DC;
}

loc_802DF0A0:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 296));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x802DF0B0u;
    if constexpr (KnownRegArgsCpuCall<0x802DEB4Cu>(&func_802DEB4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEB4C_A975 = func_802DEB4C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DEB4C_A975);
        r4 = static_cast<uint32_t>(regargs_result_802DEB4C_A975 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DEB4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 296), r0);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 296));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->lr = 0x802DF0D0u;
    if constexpr (KnownRegArgsCpuCall<0x802DEB4Cu>(&func_802DEB4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEB4C_ADA4 = func_802DEB4C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DEB4C_ADA4);
        r4 = static_cast<uint32_t>(regargs_result_802DEB4C_ADA4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802DEB4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802DF0D0:
{
    r3 = r31;
    ctx->lr = 0x802DF0D8u;
    if constexpr (KnownRegArgsCpuCall<0x802DEA74u>(&func_802DEA74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DEA74_B0EE = func_802DEA74_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802DEA74_B0EE);
        r4 = static_cast<uint32_t>(regargs_result_802DEA74_B0EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DEA74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 1;
}

loc_802DF0DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_802DEC7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DEC7C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802DEC7C func_802DEC7C preserves=true fpr_mask=0x00000000
