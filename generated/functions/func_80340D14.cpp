#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005098C(CpuContext* ctx);
extern "C" uint64_t func_8005098C_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DB550(CpuContext* ctx);
extern "C" uint64_t func_800DB550_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801004AC(CpuContext* ctx);
extern "C" uint64_t func_801004AC_ra38_1f2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80275524(CpuContext* ctx);
extern "C" uint64_t func_80275524_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80340248(CpuContext* ctx);
extern "C" uint64_t func_80340248_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803425E0(CpuContext* ctx);
extern "C" uint64_t func_803425E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80340D14_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_46 = 0;
    uint32_t r0_rot_47 = 0;
    uint32_t r0_rot_48 = 0;
    uint32_t r0_rot_49 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_50 = 0;
    uint32_t r0_rot_51 = 0;
    uint32_t r0_rot_52 = 0;
    uint32_t r0_rot_53 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_12 = 0;
    uint32_t r4_rot_13 = 0;
    uint32_t r4_rot_14 = 0;
    uint32_t r4_rot_15 = 0;
    uint32_t r4_rot_16 = 0;
    uint32_t r4_rot_17 = 0;
    uint32_t r4_rot_18 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80340D14;

loc_80340D14:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r11 = (r1 + 128);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead8((r30 + 88));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x80340230 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r4 = (r0 * 20);
    r3 = 0x805E0000u;
    r0 = (r3 + 32056);
    r3 = (r0 + r4);
    // end of inlined leaf 0x80340230
    r31 = r3;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 48);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r27;
    r4 = 1;
    ctx->lr = 0x80340D64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8034048Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r3;
}

loc_80340D6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340DCC;
    }
}

loc_80340D70:
{
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r4 = 0;
    r5 = 66;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl5_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl5_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl5_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl5_0x8026FEF4;
    }
}

loc_inl5_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl5_cont_8026FECC;
}

loc_inl5_0x8026FEF4:
{
    r3 = 0;
}

loc_inl5_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80340D84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80340DA0;
    }
}

loc_80340D88:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
    r4 = 0;
    r5 = 67;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl6_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl6_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl6_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl6_cont_8026FECC;
}

loc_inl6_0x8026FEF4:
{
    r3 = 0;
}

loc_inl6_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80340D9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340DF8;
    }
}

loc_80340DA0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl7_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_49 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_49 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl7_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CEF40;
    }
}

loc_inl7_0x800CEF3C:
{
    r0 = 1;
}

loc_inl7_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_50 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_50 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_16 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl7_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419DC;
}

loc_80340DCC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl8_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_51 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_51 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl8_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x800CEF40;
    }
}

loc_inl8_0x800CEF3C:
{
    r0 = 1;
}

loc_inl8_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_52 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_52 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_17 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl8_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419DC;
}

loc_80340DF8:
{
    r28 = MemoryInline::FlatRead32((r29 + 48));
    r0 = MemoryInline::FlatRead8((r27 + 8));
}

loc_80340E04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80340E60;
    }
}

loc_80340E08:
{
    r3 = r28;
    r4 = 149;
    ctx->lr = 0x80340E14u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 90));
}

loc_80340E1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80340EAC;
    }
}

loc_80340E20:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 1436));
}

loc_80340E30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80340EAC;
    }
}

loc_80340E34:
{
    r3 = r28;
    r4 = 0;
    r5 = 65;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl9_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl9_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl9_0x8026FEF4;
    }
}

loc_inl9_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl9_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl9_0x8026FEF4;
    }
}

loc_inl9_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl9_cont_8026FECC;
}

loc_inl9_0x8026FEF4:
{
    r3 = 0;
}

loc_inl9_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80340E48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340EAC;
    }
}

loc_80340E4C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    goto loc_803419DC;
}

loc_80340E60:
{
    r0 = MemoryInline::FlatRead8((r30 + 90));
}

loc_80340E68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80340EAC;
    }
}

loc_80340E6C:
{
    r0 = MemoryInline::FlatRead16((r28 + 1436));
}

loc_80340E74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80340EAC;
    }
}

loc_80340E78:
{
    r3 = r28;
    r4 = 0;
    r5 = 65;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl10_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl10_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl10_0x8026FEF4;
    }
}

loc_inl10_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl10_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl10_0x8026FEF4;
    }
}

loc_inl10_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl10_cont_8026FECC;
}

loc_inl10_0x8026FEF4:
{
    r3 = 0;
}

loc_inl10_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80340E8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340EAC;
    }
}

loc_80340E90:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16(r31);
    MemoryInline::FlatWrite16((r28 + 1436), static_cast<uint16_t>(r0));
    goto loc_803419DC;
}

loc_80340EAC:
{
    r3 = r28;
    r4 = 0;
    r5 = 65;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl11_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl11_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl11_0x8026FEF4;
    }
}

loc_inl11_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl11_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl11_0x8026FEF4;
    }
}

loc_inl11_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl11_cont_8026FECC;
}

loc_inl11_0x8026FEF4:
{
    r3 = 0;
}

loc_inl11_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_80340EC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80340EF0;
    }
}

loc_80340EC4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl12_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl12_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl12_0x800CEF40;
    }
}

loc_inl12_0x800CEF3C:
{
    r0 = 1;
}

loc_inl12_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl12_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419DC;
}

loc_80340EF0:
{
    r4 = MemoryInline::FlatRead8((r27 + 7));
}

loc_80340EF8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(8))) {
        goto loc_803419CC;
    }
}

loc_80340EFC:
{
    r3 = 0x805F0000u;
    r3 = (r3 + -32340);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80340F14u:
        goto loc_80340F14;
        break;
    case 0x80340FD4u:
        goto loc_80340FD4;
        break;
    case 0x80341058u:
        goto loc_80341058;
        break;
    case 0x803416C0u:
        goto loc_803416C0;
        break;
    case 0x803417D4u:
        goto loc_803417D4;
        break;
    case 0x803417F4u:
        goto loc_803417F4;
        break;
    case 0x80341944u:
        goto loc_80341944;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80340F14:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r28 + 774));
}

loc_80340F24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(205))) {
        goto loc_80340F34;
    }
}

loc_80340F28:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 54), static_cast<uint16_t>(r0));
    goto loc_803419CC;
}

loc_80340F34:
{
    r0 = MemoryInline::FlatRead8((r27 + 8));
}

loc_80340F3C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_80340F48;
    }
}

loc_80340F40:
{
}

loc_80340F44:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(206))) {
        goto loc_80340FA4;
    }
}

loc_80340F48:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
    r4 = 149;
    ctx->lr = 0x80340F54u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80340F58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80340F74;
    }
}

loc_80340F5C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1431));
}

loc_80340F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80340F74;
    }
}

loc_80340F68:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 54), static_cast<uint16_t>(r0));
    goto loc_803419CC;
}

loc_80340F74:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl13_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl13_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl13_0x800CEF40;
    }
}

loc_inl13_0x800CEF3C:
{
    r0 = 1;
}

loc_inl13_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_9 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl13_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r4 - r0);
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 54), static_cast<uint16_t>(r0));
    goto loc_803419CC;
}

loc_80340FA4:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl14_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl14_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl14_0x800CEF40;
    }
}

loc_inl14_0x800CEF3C:
{
    r0 = 1;
}

loc_inl14_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl14_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r4 - r0);
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 54), static_cast<uint16_t>(r0));
    goto loc_803419CC;
}

loc_80340FD4:
{
    r3 = MemoryInline::FlatRead16((r30 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 54), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80340FE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80340FF8;
    }
}

loc_80340FEC:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    goto loc_80341004;
}

loc_80340FF8:
{
    r3 = MemoryInline::FlatRead8((r27 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
}

loc_80341004:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r27 + 12), r0);
    r3 = (r27 + 24);
    r4 = (r29 + 24);
    ctx->lr = 0x80341018u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80050FE4_67A5 = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_67A5);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_67A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050FE4u>(ctx);
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
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r27 + 12));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -10184));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 96), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    r3 = (r27 + 24);
    r4 = (r29 + 24);
    ctx->lr = 0x8034104Cu;
    if constexpr (KnownRegArgsCpuCall<0x80340248u>(&func_80340248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80340248_6FEE = func_80340248_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80340248_6FEE);
        r4 = static_cast<uint32_t>(regargs_result_80340248_6FEE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80340248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r30 + 80), r3);
    MemoryInline::FlatWrite32((r30 + 64), r3);
    goto loc_803419CC;
}

loc_80341058:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MH3_PerStep(f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 76));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r30 + 80));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r30 + 84));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 8);
    r4 = (r1 + 48);
    ctx->lr = 0x80341090u;
    if constexpr (KnownRegArgsCpuCall<0x8005098Cu>(&func_8005098C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_8005098C_7A4D = func_8005098C_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005098C_7A4D);
        r4 = static_cast<uint32_t>(regargs_result_8005098C_7A4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8005098Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 20);
    r4 = (r1 + 48);
    r5 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = (r27 + 24);
    r4 = (r1 + 20);
    ctx->lr = 0x803410ACu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r3 = MH3_TickLoad(r3, 2150895788);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_803410BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803419CC;
    }
}

loc_803410C0:
{
    r3 = MemoryInline::FlatRead16((r28 + 1436));
}

loc_803410C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80341104;
    }
}

loc_803410CC:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_803410D4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80341104;
    }
}

loc_803410D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl15_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl15_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl15_0x800CEF40;
    }
}

loc_inl15_0x800CEF3C:
{
    r0 = 1;
}

loc_inl15_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_11 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl15_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419CC;
}

loc_80341104:
{
    r0 = MemoryInline::FlatRead8((r27 + 7));
}

loc_8034110C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_803415F4;
    }
}

loc_80341110:
{
    r3 = r27;
    r4 = r29;
    ctx->lr = 0x8034111Cu;
    if constexpr (KnownRegArgsCpuCall<0x803425E0u>(&func_803425E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803425E0_8A47 = func_803425E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803425E0_8A47);
        r4 = static_cast<uint32_t>(regargs_result_803425E0_8A47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803425E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = (r3 & 255);
}

loc_80341124:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_803411F0;
    }
}

loc_80341128:
{
}

loc_8034112C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_8034139C;
    }
}

loc_80341130:
{
    r3 = MemoryInline::FlatRead8((r28 + 1431));
    r0 = (r4 + -1);
}

loc_8034113C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_803411C4;
    }
}

loc_80341140:
{
    r0 = MemoryInline::FlatRead8((r28 + 1430));
}

loc_80341148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803411C4;
    }
}

loc_8034114C:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl16_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl16_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl16_0x800CEF40;
    }
}

loc_inl16_0x800CEF3C:
{
    r0 = 1;
}

loc_inl16_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_13 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_5 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl16_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
}

loc_80341160:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034116C;
    }
}

loc_80341164:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1430), static_cast<uint8_t>(r0));
}

loc_8034116C:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl17_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl17_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl17_0x800CEF40;
    }
}

loc_inl17_0x800CEF3C:
{
    r0 = 1;
}

loc_inl17_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_15 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_6 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl17_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = (r13 + -23872);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    r3 = r28;
    r4 = 149;
    ctx->lr = 0x803411A8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803411AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80341594;
    }
}

loc_803411B0:
{
    r0 = MemoryInline::FlatRead16((r28 + 1434));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & -2);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_803411C4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl18_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl18_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl18_0x800CEF40;
    }
}

loc_inl18_0x800CEF3C:
{
    r0 = 1;
}

loc_inl18_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_19 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_7 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl18_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419DC;
}

loc_803411F0:
{
    r0 = (r4 + -1);
    r3 = MemoryInline::FlatRead8((r28 + 1431));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_803411FC:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80341370;
    }
}

loc_80341200:
{
    r0 = MemoryInline::FlatRead8((r28 + 1430));
}

loc_80341208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80341370;
    }
}

loc_8034120C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_803412CC;
    }
}

loc_80341210:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl19_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_28 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl19_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl19_0x800CEF40;
    }
}

loc_inl19_0x800CEF3C:
{
    r0 = 1;
}

loc_inl19_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_29 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_8 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl19_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_30 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
}

loc_8034123C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034127C;
    }
}

loc_80341240:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1430), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl20_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_31 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl20_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl20_0x800CEF40;
    }
}

loc_inl20_0x800CEF3C:
{
    r0 = 1;
}

loc_inl20_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_32 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_9 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl20_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r3 = (r13 + -23872);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_7);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_8034127C:
{
    r0 = MemoryInline::FlatRead16((r28 + 1434));
}

loc_80341284:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80341594;
    }
}

loc_80341288:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl21_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_34 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_34 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl21_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl21_0x800CEF40;
    }
}

loc_inl21_0x800CEF3C:
{
    r0 = 1;
}

loc_inl21_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_35 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_10 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl21_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_36 & -2);
    r3 = (r13 + -23872);
    r3_addr_8 = (r3 + r0);
    r5 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead8((r27 + 8));
    r0 = (r3 + -1);
    r3 = (r0 * 200);
    r0 = (r4 + r5);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_803412CC:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl22_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl22_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl22_0x800CEF40;
    }
}

loc_inl22_0x800CEF3C:
{
    r0 = 1;
}

loc_inl22_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_38 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_38 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_11 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl22_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
}

loc_803412E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80341320;
    }
}

loc_803412E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1430), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl23_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_39 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl23_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl23_0x800CEF40;
    }
}

loc_inl23_0x800CEF3C:
{
    r0 = 1;
}

loc_inl23_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_40 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_40 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_12 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl23_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_41 & -2);
    r3 = (r13 + -23872);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_9);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_80341320:
{
    r0 = MemoryInline::FlatRead16((r28 + 1434));
}

loc_80341328:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80341594;
    }
}

loc_8034132C:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_CC26 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_CC26;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_42 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_42 & -2);
    r3 = (r13 + -23872);
    r3_addr_10 = (r3 + r0);
    r5 = MemoryInline::FlatRead16(r3_addr_10);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead8((r27 + 8));
    r0 = (r3 + -1);
    r3 = (r0 * 200);
    r0 = (r4 + r5);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_80341370:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_D2C2 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_D2C2;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419DC;
}

loc_8034139C:
{
    r0 = (r4 + -1);
    r3 = MemoryInline::FlatRead8((r28 + 1431));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_803413A8:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80341568;
    }
}

loc_803413AC:
{
    r0 = MemoryInline::FlatRead8((r28 + 1430));
}

loc_803413B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80341568;
    }
}

loc_803413B8:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8034148C;
    }
}

loc_803413BC:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_D910 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_D910;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_803413DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034142C;
    }
}

loc_803413E0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1430), static_cast<uint8_t>(r0));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_DE35 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_DE35;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r3 = (r13 + -23872);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 1434));
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & -2);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_8034142C:
{
    r0 = MemoryInline::FlatRead16((r28 + 1434));
}

loc_80341434:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80341594;
    }
}

loc_80341438:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_E58A = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_E58A;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & -2);
    r3 = (r13 + -23872);
    r3_addr_4 = (r3 + r0);
    r5 = MemoryInline::FlatRead16(r3_addr_4);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead8((r27 + 8));
    r0 = (r3 + -1);
    r3 = (r0 * 200);
    r0 = (r4 + r5);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 1434));
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & -2);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_8034148C:
{
}

loc_80341490:
{
    r29 = 3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034149C;
    }
}

loc_80341498:
{
    r29 = 5;
}

loc_8034149C:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_ED4E = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_ED4E;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r29));
    r0 = (r0 * r29);
    r0 = (r3 - r0);
}

loc_803414B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80341508;
    }
}

loc_803414BC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1430), static_cast<uint8_t>(r0));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_F239 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_F239;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r3 = (r13 + -23872);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_5);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 + r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 1434));
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_25 & -2);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_80341508:
{
    r0 = MemoryInline::FlatRead16((r28 + 1434));
}

loc_80341510:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80341594;
    }
}

loc_80341514:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_F98E = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_F98E;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r3 = (r13 + -23872);
    r3_addr_6 = (r3 + r0);
    r5 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead8((r27 + 8));
    r0 = (r3 + -1);
    r3 = (r0 * 200);
    r0 = (r4 + r5);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 1434));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & -2);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r28 + 1434), static_cast<uint16_t>(r0));
    goto loc_80341594;
}

loc_80341568:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_1012E = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_1012E;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419DC;
}

loc_80341594:
{
    r0 = MemoryInline::FlatRead8((r28 + 1431));
    MemoryInline::FlatWrite8((r30 + 90), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead16(r31);
    r0 = MemoryInline::FlatRead8((r30 + 90));
    r0_rot_44 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_44 & -2);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite16((r3 + 1436), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead8((r28 + 1431));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 1431), static_cast<uint8_t>(r0));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_10774 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_10774;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r3 & 15);
    r0 = (r3 + 20);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r30 + 94), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite32((r27 + 16), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 95), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 1;
    ctx->lr = 0x803415F0u;
    if constexpr (KnownRegArgsCpuCall<0x80275524u>(&func_80275524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80275524_10C1C = func_80275524_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275524_10C1C);
        r4 = static_cast<uint32_t>(regargs_result_80275524_10C1C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_803416A0;
}

loc_803415F4:
{
    r3 = r27;
    r4 = r29;
    ctx->lr = 0x80341600u;
    if constexpr (KnownRegArgsCpuCall<0x803425E0u>(&func_803425E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803425E0_10FEC = func_803425E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803425E0_10FEC);
        r4 = static_cast<uint32_t>(regargs_result_803425E0_10FEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803425E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = MemoryInline::FlatRead8((r28 + 1431));
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_80341610:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80341674;
    }
}

loc_80341614:
{
    r0 = MemoryInline::FlatRead8((r28 + 1430));
}

loc_8034161C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80341674;
    }
}

loc_80341620:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10192));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    r3 = 2;
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10204));
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r28 + 22));
    ctx->lr = 0x80341658u;
    if constexpr (KnownRegArgsCpuCall<0x801004ACu>(&func_801004AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801004AC_117DB = func_801004AC_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801004AC_117DB);
        r4 = static_cast<uint32_t>(regargs_result_801004AC_117DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801004ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 0;
    r4 = (r1 + 32);
    ctx->lr = 0x80341664u;
    if constexpr (KnownRegArgsCpuCall<0x800DB550u>(&func_800DB550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DB550_11FF5 = func_800DB550_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB550_11FF5);
        r4 = static_cast<uint32_t>(regargs_result_800DB550_11FF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DB550u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r28;
    r4 = 4;
    ctx->lr = 0x80341670u;
    if constexpr (KnownRegArgsCpuCall<0x80275524u>(&func_80275524)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80275524_12487 = func_80275524_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80275524_12487);
        r4 = static_cast<uint32_t>(regargs_result_80275524_12487 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80275524u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_803416A0;
}

loc_80341674:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_12902 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_12902;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419DC;
}

loc_803416A0:
{
    r3 = MemoryInline::FlatRead8((r27 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10160));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10156));
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    goto loc_803419CC;
}

loc_803416C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MH3_PerStep(f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 76));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r30 + 80));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = MemoryInline::FlatRead32((r30 + 84));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 20);
    ctx->lr = 0x803416F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r27 + 24);
    r4 = (r1 + 20);
    ctx->lr = 0x80341700u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = MH3_PerStep(f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80341718:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803419CC;
    }
}

loc_80341720:
{
    r3 = MemoryInline::FlatRead8((r27 + 7));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = r27;
    r4 = r29;
    ctx->lr = 0x80341738u;
    if constexpr (KnownRegArgsCpuCall<0x803425E0u>(&func_803425E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_803425E0_13846 = func_803425E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803425E0_13846);
        r4 = static_cast<uint32_t>(regargs_result_803425E0_13846 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803425E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r27 + 7));
}

loc_80341740:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_803417C8;
    }
}

loc_80341744:
{
    r3 = (r3 & 255);
    r0 = (r3 + -2);
}

loc_80341750:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803417BC;
    }
}

loc_80341754:
{
    r0 = MemoryInline::FlatRead8((r28 + 1431));
}

loc_8034175C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r3))) {
        goto loc_8034176C;
    }
}

loc_80341760:
{
    r0 = MemoryInline::FlatRead16((r28 + 1434));
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419CC;
}

loc_8034176C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead8((r28 + 1431));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 1431), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 90));
    r0_rot_46 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_46 & -2);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite16((r3 + 1436), static_cast<uint16_t>(r4));
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 90), static_cast<uint8_t>(r0));
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_140F7 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_140F7;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419CC;
}

loc_803417BC:
{
    r0 = 20;
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419CC;
}

loc_803417C8:
{
    r0 = 20;
    MemoryInline::FlatWrite32((r27 + 12), r0);
    goto loc_803419CC;
}

loc_803417D4:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r3 = MH3_TickLoad(r3, 2150897620);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_803417E4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803419CC;
    }
}

loc_803417E8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    goto loc_803419CC;
}

loc_803417F4:
{
    r0 = MemoryInline::FlatRead16((r28 + 1434));
}

loc_803417FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80341880;
    }
}

loc_80341800:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_148B8 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_148B8;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 60);
    MemoryInline::FlatWrite32((r27 + 12), r0);
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_14CA4 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_14CA4;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 7);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(12));
    r3 = (r3_rot_4 & -4096);
    r0 = MemoryInline::FlatRead32((r30 + 80));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r30 + 90));
    r0_rot_47 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_47 & -2);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite16((r3 + 1436), static_cast<uint16_t>(r4));
    r0 = 255;
    MemoryInline::FlatWrite8((r30 + 90), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 1431));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 1431), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10152));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10148));
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    goto loc_803419CC;
}

loc_80341880:
{
    r3 = MemoryInline::FlatRead8((r30 + 94));
    r3 = MH3_TickLoad(r3, 2150897792);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8034188C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80341938;
    }
}

loc_80341890:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r3 = MH3_TickLoad(r3, 2150897808);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r27 + 16), r0);
}

loc_803418A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803418F0;
    }
}

loc_803418A4:
{
    r3 = (r27 + 24);
    r4 = (r29 + 24);
    ctx->lr = 0x803418B0u;
    if constexpr (KnownRegArgsCpuCall<0x80340248u>(&func_80340248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80340248_15771 = func_80340248_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80340248_15771);
        r4 = static_cast<uint32_t>(regargs_result_80340248_15771 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80340248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r30 + 64), r3);
    r3 = MemoryInline::FlatRead32((r30 + 64));
    r0 = (r3 + -1024);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_15F39 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_15F39;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3 = (r0 & 2047);
    r0 = MemoryInline::FlatRead32((r30 + 64));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r3 = (r30 + 80);
    r4 = (r30 + 64);
    r5 = 2048;
    ctx->lr = 0x803418ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8034027Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_803419CC;
}

loc_803418F0:
{
    r3 = (r27 + 24);
    r4 = (r29 + 24);
    ctx->lr = 0x803418FCu;
    if constexpr (KnownRegArgsCpuCall<0x80340248u>(&func_80340248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80340248_167DF = func_80340248_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80340248_167DF);
        r4 = static_cast<uint32_t>(regargs_result_80340248_167DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80340248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        xer = ctx->xer;
    }
    MemoryInline::FlatWrite32((r30 + 64), r3);
    r3 = (r30 + 80);
    r4 = (r30 + 64);
    r5 = 65536;
    r5 = (r5 + -1);
    ctx->lr = 0x80341914u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8034027Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_172F7 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_172F7;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r3 = (r3 & 15);
    r0 = (r3 + 20);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r30 + 94), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_803419CC;
}

loc_80341938:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r30 + 94), static_cast<uint8_t>(r0));
    goto loc_803419CC;
}

loc_80341944:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MH3_PerStep(f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r0 = MemoryInline::FlatRead32((r30 + 76));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = MemoryInline::FlatRead32((r30 + 80));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = MemoryInline::FlatRead32((r30 + 84));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 20);
    ctx->lr = 0x80341978u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r27 + 24);
    r4 = (r1 + 20);
    ctx->lr = 0x80341984u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f0.d = MH3_PerStep(f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10208));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8034199C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803419CC;
    }
}

loc_803419A4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 6), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 7), static_cast<uint8_t>(r0));
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_181C7 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_181C7;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r3 = (r0 & 31);
    r0 = (r3 + 10);
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_803419CC:
{
    r3 = (r30 + 80);
    r4 = (r30 + 64);
    r5 = 256;
    ctx->lr = 0x803419DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8034027Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
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
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_803419DC:
{
    r11 = (r1 + 128);
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80340D14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80340D14_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80340D14 func_80340D14 preserves=true fpr_mask=0x00000000
