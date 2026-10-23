#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEB14(CpuContext* ctx);
extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800EFE3C(CpuContext* ctx);
extern "C" uint64_t func_800EFE3C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800F0474(CpuContext* ctx);
extern "C" uint64_t func_800F0474_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_800F0474_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_800EFB24_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r20_addr_0 = 0;
    uint32_t r20_addr_1 = 0;
    uint32_t r20_addr_2 = 0;
    uint32_t r20_addr_3 = 0;
    uint32_t r20_addr_4 = 0;
    uint32_t r20_addr_5 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r21_addr_4 = 0;
    uint32_t r21_addr_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    uint32_t cr = ctx->cr;

    goto loc_800EFB24;

loc_800EFB24:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r27 = r3;
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r26 = (r3 & 65535);
}

loc_800EFB54:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800EFCB4;
    }
}

loc_800EFB58:
{
}

loc_800EFB5C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_800EFCB4;
    }
}

loc_800EFB60:
{
    r28 = r27;
    r30 = 0;
    r31 = 0x805A0000u;
    r3 = 0x805A0000u;
    r20 = (r3 + -29936);
    r3 = 0x805A0000u;
    r21 = (r3 + -29536);
    r22 = 1;
    r23 = 0x800F0000u;
    r24 = 0;
    r25 = 0x805A0000u;
    goto loc_800EFC6C;
}

loc_800EFB90:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_800EFB98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EFC64;
    }
}

loc_800EFB9C:
{
    r3 = MemoryInline::FlatRead8((r28 + 8));
    r29 = (r3 + 20);
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r29);
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800F0474u) && KnownTranslatedCpuCall<0x800F0474u>::kAvailable && !KnownTranslatedCpuCall<0x800F0474u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800F0474u>()) {
        func_800F0474_statefree(r3, r13);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F0474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r4 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r4 + -26709));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + -26709), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r28 + 20));
}

loc_800EFBD0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EFBF4;
    }
}

loc_800EFBD4:
{
    r3 = (r1 + 24);
    r4 = (r31 + -26664);
    r0 = MemoryInline::FlatRead8((r28 + 29));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r20_addr_2 = (r20 + r0);
    r5 = MemoryInline::FlatRead32(r20_addr_2);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800EFBF0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_22A7 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_22A7);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_22A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    goto loc_800EFC10;
}

loc_800EFBF4:
{
    r3 = (r1 + 24);
    r4 = (r31 + -26664);
    r0 = MemoryInline::FlatRead8((r28 + 29));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r21_addr_2 = (r21 + r0);
    r5 = MemoryInline::FlatRead32(r21_addr_2);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800EFC10u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_2C71 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_2C71);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_2C71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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

loc_800EFC10:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r22);
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r29 = (r29_rot_2 & -4);
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = (r0 + r29);
    r3 = (r1 + 24);
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r5 = MemoryInline::FlatRead32((r5 + 212));
    r6 = (r23 + 660);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x800EFC3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800CEB14_3617 = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_3617);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_3617 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r24);
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = (r0 + r29);
    r3 = (r25 + -26652);
    r4 = MemoryInline::FlatRead32((r5 + 408));
    r5 = MemoryInline::FlatRead32((r5 + 604));
    r6 = (r23 + 660);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x800EFC64u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800CEB14_3C7D = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_3C7D);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_3C7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_800EFC64:
{
    r30 = (r30 + 1);
    r28 = (r28 + 2848);
}

loc_800EFC6C:
{
}

loc_800EFC70:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r26))) {
        goto loc_800EFB90;
    }
}

loc_800EFC74:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800EFC80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EFC94;
    }
}

loc_800EFC84:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800EFC90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800EFCB4;
    }
}

loc_800EFC94:
{
    r20 = 0;
    goto loc_800EFCAC;
}

loc_800EFC9C:
{
    r3 = r27;
    ctx->lr = 0x800EFCA4u;
    if constexpr (KnownRegArgsCpuCall<0x800EFE3Cu>(&func_800EFE3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800EFE3C_45C1 = func_800EFE3C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800EFE3C_45C1);
        r4 = static_cast<uint32_t>(regargs_result_800EFE3C_45C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800EFE3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    r20 = (r20 + 1);
    r27 = (r27 + 2848);
}

loc_800EFCAC:
{
}

loc_800EFCB0:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r26))) {
        goto loc_800EFC9C;
    }
}

loc_800EFCB4:
{
    r11 = (r1 + 208);
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EFB24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EFB24_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EFB24 func_800EFB24 preserves=true fpr_mask=0x00000000
