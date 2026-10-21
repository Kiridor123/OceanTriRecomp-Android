#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005BA04(CpuContext* ctx);
extern "C" uint64_t func_8005BA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8098CD5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8098CD5Cu);
    goto loc_8098CD5C;

loc_8098CD5C:
{
    MemoryAlias::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 68), r0);
    r3 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r3 + 13672));
    r0 = MemoryAlias::FlatRead8(r3);
}

loc_8098CD88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8098CD98;
    }
}

loc_8098CD8C:
{
    r0 = MemoryAlias::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8098CD94:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8098CF50;
    }
}

loc_8098CD98:
{
    r3 = (r3 + 4124);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 4));
    MemoryAlias::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r4 + 8));
    MemoryAlias::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r3 = 0x809D0000u;
    r3 = MemoryAlias::FlatRead32((r3 + 13672));
    f1.d = MemoryAlias::FlatReadFloat32((r3 + 4124));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14704));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r3 = 0x80990000u;
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 14652));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f0.d);
    r28 = fctiwzword0;
    ctx->lr = 0x8098CDD4u;
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
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = 0x809A0000u;
    r30 = (r3 + -10424);
    r29 = 0;
    r3 = 0x809A0000u;
    r31 = (r3 + -1296);
}

loc_8098CDE8:
{
    r0 = MemoryAlias::FlatRead8(r30);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r31_addr_2 = (r31 + r0);
    r4 = MemoryAlias::FlatRead32(r31_addr_2);
    r0 = MemoryAlias::FlatRead16((r30 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4 = (r4 + r0);
    r3 = r30;
    r5 = 192;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r7 = 0;
    ctx->lr = 0x8098CE18u;
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
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80984E10u>(ctx);
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
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r29 = (r29 + 1);
    r30 = (r30 + 20);
}

loc_8098CE24:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_8098CDE8;
    }
}

loc_8098CE28:
{
    r31 = 0x809D0000u;
    r5 = MemoryAlias::FlatRead32((r31 + 13672));
    r0 = 396;
    r3 = 0x80990000u;
    f3.d = MemoryAlias::FlatReadFloat64((r3 + 14696));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 12), r0);
    r4 = 1127219200;
    stackword7 = r4;
    MemoryAlias::FlatWriteRam32((r1 + 8), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryAlias::FlatReadFloat32((r5 + 4124));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80990000u;
    f2.d = MemoryAlias::FlatReadFloat32((r3 + 14652));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f0.d);
    r29 = fctiwzword1;
    r0 = 110;
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryAlias::FlatWriteRam32((r1 + 28), r0);
    stackword9 = r4;
    MemoryAlias::FlatWriteRam32((r1 + 24), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryAlias::FlatReadFloat32((r5 + 4128));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryAlias::FlatWriteRamFloat64((r1 + 32), f0.d);
    r30 = fctiwzword2;
    r3 = 22;
    r4 = 22;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl1_0x8005B714:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl1_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20580), r4);
    goto loc_inl1_cont_8005B714;
}

loc_inl1_return:
{
}

loc_inl1_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    r3 = -1061093376;
    r3 = (r3 + -16129);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl2_0x8005B7EC:
{
    r4 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl2_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryAlias::FlatWrite32((r4 + 20600), r3);
    goto loc_inl2_cont_8005B7EC;
}

loc_inl2_return:
{
}

loc_inl2_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r4 = (r4 + 22);
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl3_0x8005B780:
{
    r5 = MemoryAlias::FlatRead32((r13 + -17736));
}

loc_inl3_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryAlias::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20588), r4);
    goto loc_inl3_cont_8005B780;
}

loc_inl3_return:
{
}

loc_inl3_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead8((r3 + 9));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x809A0000u;
    r3 = (r3 + 31200);
    r3_addr_1 = (r3 + r0);
    r28 = MemoryAlias::FlatRead32(r3_addr_1);
    r3 = MemoryAlias::FlatRead32((r31 + 13672));
    r0 = MemoryAlias::FlatRead8(r3);
}

loc_8098CEF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_8098CF14;
    }
}

loc_8098CEF8:
{
    // inline leaf 0x8097E800 (11 guest instruction(s))
}

loc_inl4_0x8097E800:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryAlias::FlatRead8((r3 + 738));
}

loc_inl4_0x8097E810:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl4_0x8097E824;
    }
}

loc_inl4_0x8097E814:
{
}

loc_inl4_0x8097E818:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_inl4_0x8097E824;
    }
}

loc_inl4_0x8097E81C:
{
    r3 = 0;
    goto loc_inl4_cont_8097E800;
}

loc_inl4_0x8097E824:
{
    r3 = 1;
}

loc_inl4_cont_8097E800:
{
    // end of inlined leaf 0x8097E800
}

loc_8098CF00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098CF50;
    }
}

loc_8098CF04:
{
    r3 = MemoryAlias::FlatRead32((r28 + 8));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098CF10u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_2AF7 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_2AF7);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_2AF7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_8098CF50;
}

loc_8098CF14:
{
    r3 = 1;
    // inline leaf 0x8097E864 (11 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -18480);
    r0 = (r3 & 255);
    r0 = (r0 * 848);
    r3 = (r4 + r0);
    r4 = MemoryAlias::FlatRead32((r3 + 48));
    r3 = (-1 - r4);
    r0 = (r4 + 1);
    r0 = (r3 | r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8097E864
}

loc_8098CF20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098CF34;
    }
}

loc_8098CF24:
{
    r3 = MemoryAlias::FlatRead32((r28 + 20));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098CF30u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_34CD = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_34CD);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_34CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_8098CF50;
}

loc_8098CF34:
{
    r3 = 1;
    // inline leaf 0x8097E82C (14 guest instruction(s))
}

loc_inl6_0x8097E82C:
{
    r4 = 0x80660000u;
    r4 = (r4 + -18480);
    r0 = (r3 & 255);
    r0 = (r0 * 848);
    r3 = (r4 + r0);
    r0 = MemoryAlias::FlatRead8((r3 + 738));
}

loc_inl6_0x8097E848:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl6_0x8097E85C;
    }
}

loc_inl6_0x8097E84C:
{
}

loc_inl6_0x8097E850:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_inl6_0x8097E85C;
    }
}

loc_inl6_0x8097E854:
{
    r3 = 0;
    goto loc_inl6_cont_8097E82C;
}

loc_inl6_0x8097E85C:
{
    r3 = 1;
}

loc_inl6_cont_8097E82C:
{
    // end of inlined leaf 0x8097E82C
}

loc_8098CF40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8098CF50;
    }
}

loc_8098CF44:
{
    r3 = MemoryAlias::FlatRead32((r28 + 12));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8098CF50u;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_3FC2 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_3FC2);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_3FC2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_8098CF50:
{
    r0 = MemoryAlias::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8098CD5C func_8098CD5C preserves=true fpr_mask=0x00000000
