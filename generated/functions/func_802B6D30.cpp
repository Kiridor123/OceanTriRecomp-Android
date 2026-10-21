#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A758(CpuContext* ctx);
extern "C" uint32_t func_8026A758_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BE0EC(CpuContext* ctx);
extern "C" uint32_t func_802BE0EC_ra28_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802BE2F0(CpuContext* ctx);
extern "C" uint64_t func_802BE2F0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" void func_802B6D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x802B6D30u);
    goto loc_802B6D30;

loc_802B6D30:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 42));
}

loc_802B6D60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B7058;
    }
}

loc_802B6D64:
{
    r3 = r30;
    r4 = 9;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7058;
    }
}

loc_802B6D78:
{
    r3 = r30;
    ctx->lr = 0x802B6D80u;
    if constexpr (KnownRegArgsCpuCall<0x802BE2F0u>(&func_802BE2F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BE2F0_CA8 = func_802BE2F0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE2F0_CA8);
        r4 = static_cast<uint32_t>(regargs_result_802BE2F0_CA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE2F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_802B6D84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B7058;
    }
}

loc_802B6D88:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_802B6D90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B6F78;
    }
}

loc_802B6D94:
{
    r27 = 560;
    r0 = MemoryInline::FlatRead8((r29 + 136));
}

loc_802B6DA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6DB4;
    }
}

loc_802B6DA4:
{
    r0 = MemoryInline::FlatRead8((r29 + 181));
}

loc_802B6DAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B6DB4;
    }
}

loc_802B6DB0:
{
    r27 = 368;
}

loc_802B6DB4:
{
    r31 = MemoryInline::FlatRead32((r29 + 100));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 170), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6DD0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802B6DE8;
    }
}

loc_802B6DD4:
{
    r3 = r30;
    r4 = 4;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6DE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6EE4;
    }
}

loc_802B6DE8:
{
    r3 = MemoryInline::FlatRead8((r29 + 160));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802B6DF4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_802B6E00;
    }
}

loc_802B6DF8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 160), static_cast<uint8_t>(r0));
}

loc_802B6E00:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13664));
    stackword7 = r27;
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    r3 = 1127219200;
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::FlatRead8((r29 + 160));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13648));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r27 = fctiwzword0;
    r0 = MemoryInline::FlatRead8((r28 + 1180));
    r0 = (r0 & 2);
}

loc_802B6E5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B6E6C;
    }
}

loc_802B6E60:
{
    r4 = 4;
    r28 = 2;
    goto loc_802B6E74;
}

loc_802B6E6C:
{
    r4 = 2;
    r28 = 4;
}

loc_802B6E74:
{
    r3 = r30;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6E80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6EA0;
    }
}

loc_802B6E84:
{
    r0 = (r27 & 65535);
    r31 = (r31 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802B6E94:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(16020))) {
        goto loc_802B6ECC;
    }
}

loc_802B6E98:
{
    r31 = 16020;
    goto loc_802B6ECC;
}

loc_802B6EA0:
{
    r3 = r30;
    r4 = r28;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6EB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6ECC;
    }
}

loc_802B6EB4:
{
    r0 = (r27 & 65535);
    r31 = (r31 - r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802B6EC4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-16020))) {
        goto loc_802B6ECC;
    }
}

loc_802B6EC8:
{
    r31 = -16020;
}

loc_802B6ECC:
{
    MemoryInline::FlatWrite32((r29 + 100), r31);
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 170), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite8((r29 + 171), static_cast<uint8_t>(r0));
    goto loc_802B6F6C;
}

loc_802B6EE4:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6EF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6F50;
    }
}

loc_802B6EF8:
{
    r3 = r30;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8026F96C_2A50 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_2A50);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_2A50 >> 32);
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
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802B6F0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B6F50;
    }
}

loc_802B6F10:
{
    r3 = r30;
    // inline leaf 0x802B79E4 (14 guest instruction(s))
}

loc_inl7_0x802B79E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_inl7_0x802B79EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl7_0x802B7A14;
    }
}

loc_inl7_0x802B79F0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13620));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl7_0x802B79FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl7_0x802B7A14;
    }
}

loc_inl7_0x802B7A00:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_inl7_0x802B7A08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x802B7A14;
    }
}

loc_inl7_0x802B7A0C:
{
    r3 = 1;
    goto loc_inl7_cont_802B79E4;
}

loc_inl7_0x802B7A14:
{
    r3 = 0;
}

loc_inl7_cont_802B79E4:
{
    // end of inlined leaf 0x802B79E4
}

loc_802B6F1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6F2C;
    }
}

loc_802B6F20:
{
    ctx->lr = 0x802B6F24u;
    if constexpr (KnownRegArgsCpuCall<0x802BE0ECu>(&func_802BE0EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802BE0EC_3282 = func_802BE0EC_ra28_2_8_0(ctx, r3, r5, f1.d);
        r3 = regargs_result_802BE0EC_3282;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802BE0ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_802B6F28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B6F50;
    }
}

loc_802B6F2C:
{
    r0 = MemoryInline::FlatRead32((r30 + 84));
    r0 = (0 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite32((r29 + 100), r3);
    r0 = 10;
    MemoryInline::FlatWrite8((r29 + 160), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 176), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r29 + 178), static_cast<uint16_t>(r3));
}

loc_802B6F50:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 160), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 171));
}

loc_802B6F60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B6F6C;
    }
}

loc_802B6F64:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 171), static_cast<uint8_t>(r0));
}

loc_802B6F6C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r29 + 124), static_cast<uint8_t>(r0));
    goto loc_802B7058;
}

loc_802B6F78:
{
    r0 = MemoryInline::FlatRead8((r28 + 1180));
    r0 = (r0 & 2);
}

loc_802B6F84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B6FEC;
    }
}

loc_802B6F88:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6F98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B6FC0;
    }
}

loc_802B6F9C:
{
    r3 = MemoryInline::FlatRead8((r29 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 124), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802B6FB0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_802B704C;
    }
}

loc_802B6FB4:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r29 + 124), static_cast<uint8_t>(r0));
    goto loc_802B704C;
}

loc_802B6FC0:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6FD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B704C;
    }
}

loc_802B6FD4:
{
    r3 = MemoryInline::FlatRead8((r29 + 124));
}

loc_802B6FDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B704C;
    }
}

loc_802B6FE0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 124), static_cast<uint8_t>(r0));
    goto loc_802B704C;
}

loc_802B6FEC:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x8026A758 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r3 = 1;
    r0 = (r4 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_12 & 1);
    // end of inlined leaf 0x8026A758
}

loc_802B6FFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B7024;
    }
}

loc_802B7000:
{
    r3 = MemoryInline::FlatRead8((r29 + 124));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 124), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802B7014:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_802B704C;
    }
}

loc_802B7018:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r29 + 124), static_cast<uint8_t>(r0));
    goto loc_802B704C;
}

loc_802B7024:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x8026A758u>(&func_8026A758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8026A758_464F = func_8026A758_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A758_464F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026A758u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_802B7034:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B704C;
    }
}

loc_802B7038:
{
    r3 = MemoryInline::FlatRead8((r29 + 124));
}

loc_802B7040:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B704C;
    }
}

loc_802B7044:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 124), static_cast<uint8_t>(r0));
}

loc_802B704C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 160), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 176), static_cast<uint8_t>(r0));
}

loc_802B7058:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B6D30 func_802B6D30 preserves=true fpr_mask=0x00000000
