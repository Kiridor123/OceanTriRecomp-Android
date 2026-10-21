#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D8468(CpuContext* ctx);
extern "C" uint64_t func_800D8468_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D84A0(CpuContext* ctx);
extern "C" uint32_t func_800D84A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800DE360(CpuContext* ctx);
extern "C" uint64_t func_800DE360_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_800DFA34(CpuContext* ctx);
extern "C" uint64_t func_800DFA34_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DFB58(CpuContext* ctx);
extern "C" uint32_t func_800DFB58_raa0_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DFC70(CpuContext* ctx);
extern "C" uint64_t func_800DFC70_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DFDB4(CpuContext* ctx);
extern "C" uint32_t func_800DFDB4_ra10_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800E8090(CpuContext* ctx);
extern "C" uint64_t func_800E8090_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800F0C78(CpuContext* ctx);
extern "C" uint64_t func_800F0C78_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801E9BD8(CpuContext* ctx);
extern "C" uint64_t func_801E9BD8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8028F99C(CpuContext* ctx);
extern "C" uint64_t func_8028F99C_ra38_c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_803AAFEC(CpuContext* ctx);
extern "C" uint64_t func_803AAFEC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_800DFE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r19 = ctx->gpr[19];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x800DFE30u);
    goto loc_800DFE30;

loc_800DFE30:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r21 = r3;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    ctx->lr = 0x800DFE54u;
    if constexpr (KnownRegArgsCpuCall<0x800D84A0u>(&func_800D84A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800D84A0_12D0 = func_800D84A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D84A0_12D0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D84A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800DFE58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DFEAC;
    }
}

loc_800DFE5C:
{
    r3 = (r21 + 196608);
    r0 = MemoryInline::FlatRead8((r3 + -28034));
    MemoryInline::FlatWrite8((r3 + -28033), static_cast<uint8_t>(r0));
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r5 = (r21 + 196608);
    MemoryInline::FlatWrite8((r5 + -28034), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead32((r13 + -17576));
    r4 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r4 + -27936));
}

loc_800DFE84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFE94;
    }
}

loc_800DFE88:
{
    r3 = 0;
    ctx->lr = 0x800DFE90u;
    if constexpr (KnownRegArgsCpuCall<0x800DFA34u>(&func_800DFA34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DFA34_18BC = func_800DFA34_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_800DFA34_18BC);
        r4 = static_cast<uint32_t>(regargs_result_800DFA34_18BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DFA34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    }
    goto loc_800E0338;
}

loc_800DFE94:
{
    r4 = MemoryInline::FlatRead8((r5 + -28033));
    r0 = (r3 & 255);
}

loc_800DFEA0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_800E0338;
    }
}

loc_800DFEA4:
{
    ctx->lr = 0x800DFEA8u;
    if constexpr (KnownRegArgsCpuCall<0x800DFB58u>(&func_800DFB58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DFB58_1E52 = func_800DFB58_raa0_0_8_0(ctx, r5, r7);
        r3 = regargs_result_800DFB58_1E52;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DFB58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    }
    goto loc_800E0338;
}

loc_800DFEAC:
{
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl3_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB10;
    }
}

loc_inl3_0x800CFB08:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB24;
    }
}

loc_inl3_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl3_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r19 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r19 = (r19 + r0);
    // inline leaf 0x800F2964 (9 guest instruction(s))
}

loc_inl5_0x800F2964:
{
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -26700));
}

loc_inl5_0x800F2974:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl5_0x800F2980;
    }
}

loc_inl5_0x800F2978:
{
    r3 = MemoryInline::FlatRead32((r3 + -26704));
    goto loc_inl5_cont_800F2964;
}

loc_inl5_0x800F2980:
{
    r3 = 0;
}

loc_inl5_cont_800F2964:
{
    // end of inlined leaf 0x800F2964
    r24 = r3;
}

loc_800DFED4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800DFF1C;
    }
}

loc_800DFED8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r3 = (r3 + 196608);
    r20 = MemoryInline::FlatRead32((r3 + -27936));
}

loc_800DFEE8:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_800DFEF4;
    }
}

loc_800DFEEC:
{
    r3 = 0;
    ctx->lr = 0x800DFEF4u;
    if constexpr (KnownRegArgsCpuCall<0x800DFA34u>(&func_800DFA34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DFA34_2B23 = func_800DFA34_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_800DFA34_2B23);
        r4 = static_cast<uint32_t>(regargs_result_800DFA34_2B23 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DFA34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
    }
}

loc_800DFEF4:
{
}

loc_800DFEF8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_800E0338;
    }
}

loc_800DFEFC:
{
    r3 = (r20 + 24);
    r4 = (r21 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r20 + 36);
    r4 = (r21 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800E02F0;
}

loc_800DFF1C:
{
    r22 = (r3 + 8);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_800DFF28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E0338;
    }
}

loc_800DFF2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800DFF34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFF3C;
    }
}

loc_800DFF38:
{
    goto loc_800E0338;
}

loc_800DFF3C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r3 = (r3 + 196608);
    r20 = MemoryInline::FlatRead32((r3 + -27936));
}

loc_800DFF4C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_800E0338;
    }
}

loc_800DFF50:
{
    r3 = MemoryInline::FlatRead32((r20 + 12));
    ctx->lr = 0x800DFF58u;
    if constexpr (KnownRegArgsCpuCall<0x800F0C78u>(&func_800F0C78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F0C78_3417 = func_800F0C78_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800F0C78_3417);
        r4 = static_cast<uint32_t>(regargs_result_800F0C78_3417 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F0C78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800DFF5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800E0338;
    }
}

loc_800DFF60:
{
    r3 = (r20 + 24);
    r4 = (r21 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r20 + 36);
    r4 = (r21 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r21 + 196608);
    r23 = MemoryInline::FlatRead8((r3 + -28034));
}

loc_800DFF84:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_800E0018;
    }
}

loc_800DFF88:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl7_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_inl7_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x802B06E4:
{
    r3 = r0;
    goto loc_inl7_cont_802B06CC;
}

loc_inl7_return:
{
}

loc_inl7_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_800DFF9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800E0018;
    }
}

loc_800DFFA0:
{
    ctx->lr = 0x800DFFA4u;
    if constexpr (KnownRegArgsCpuCall<0x803AAFECu>(&func_803AAFEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803AAFEC_3CC1 = func_803AAFEC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803AAFEC_3CC1);
        r4 = static_cast<uint32_t>(regargs_result_803AAFEC_3CC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AAFECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800DFFAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E0018;
    }
}

loc_800DFFB0:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30340));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30336));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30332));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r20;
    r4 = (r1 + 32);
    r5 = 6;
    r6 = 0;
    ctx->lr = 0x800DFFE4u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DE360_42E8 = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_42E8);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_42E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        InvokeDirectCpu<0x800DE360u>(ctx);
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
    }
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30328));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30336));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -30324));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r20;
    r4 = (r1 + 32);
    r5 = 6;
    r6 = 1;
    ctx->lr = 0x800E0018u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DE360_4A3B = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_4A3B);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_4A3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        InvokeDirectCpu<0x800DE360u>(ctx);
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
    }
}

loc_800E0018:
{
    r21 = 0;
    r27 = 3;
    r28 = 2;
    r29 = -1;
    r30 = 0;
    r31 = 255;
    r25 = 1;
    goto loc_800E02E4;
}

loc_800E0038:
{
    r3 = MemoryInline::FlatRead8(r22);
}

loc_800E0040:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E02DC;
    }
}

loc_800E0044:
{
    r0 = MemoryInline::FlatRead8((r22 + 69));
}

loc_800E004C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r23))) {
        goto loc_800E005C;
    }
}

loc_800E0050:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite16((r22 + 70), static_cast<uint16_t>(r30));
    goto loc_800E02DC;
}

loc_800E005C:
{
}

loc_800E0060:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_800E02DC;
    }
}

loc_800E0064:
{
    r3 = MemoryInline::FlatRead16((r22 + 70));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_800E006C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800E015C;
    }
}

loc_800E0070:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r22 + 70), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 2));
}

loc_800E0080:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E02DC;
    }
}

loc_800E0084:
{
    r0 = MemoryInline::FlatRead8((r22 + 1));
}

loc_800E008C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800E02DC;
    }
}

loc_800E0090:
{
    r4 = MemoryInline::FlatRead8((r22 + 68));
}

loc_800E0098:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_800E014C;
    }
}

loc_800E009C:
{
    r3 = r20;
    ctx->lr = 0x800E00A4u;
    if constexpr (KnownRegArgsCpuCall<0x800DFDB4u>(&func_800DFDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        const auto regargs_result_800DFDB4_55B6 = func_800DFDB4_ra10_0_10_0(ctx, r4);
        r4 = regargs_result_800DFDB4_55B6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800DFDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = r3;
}

loc_800E00AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E014C;
    }
}

loc_800E00B0:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_800E00B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E014C;
    }
}

loc_800E00BC:
{
    ctx->lr = 0x800E00C0u;
    if constexpr (KnownRegArgsCpuCall<0x800E8090u>(&func_800E8090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800E8090_59DC = func_800E8090_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E8090_59DC);
        r4 = static_cast<uint32_t>(regargs_result_800E8090_59DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800E00C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E014C;
    }
}

loc_800E00C8:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800E00D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800E0110;
    }
}

loc_800E00D8:
{
}

loc_800E00DC:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_800E00F8;
    }
}

loc_800E00E0:
{
    r3 = (r22 + 28);
    r4 = (r22 + 40);
    r5 = (r19 + 60);
    r6 = (r1 + 32);
    ctx->lr = 0x800E00F4u;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8028F99C_5FE9 = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_5FE9);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_5FE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_800E0124;
}

loc_800E00F8:
{
    r3 = (r22 + 28);
    r4 = (r22 + 40);
    r5 = (r20 + 24);
    r6 = (r1 + 32);
    ctx->lr = 0x800E010Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8028F99C_651F = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_651F);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_651F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_800E0124;
}

loc_800E0110:
{
    r3 = (r22 + 28);
    r4 = (r22 + 40);
    r5 = (r20 + 24);
    r6 = (r1 + 32);
    ctx->lr = 0x800E0124u;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8028F99C_6A55 = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_6A55);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_6A55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_800E0124:
{
    r3 = (r26 + 4);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    MemoryInline::FlatWriteFloat32((r26 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    MemoryInline::FlatWriteFloat32((r26 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    MemoryInline::FlatWriteFloat32((r26 + 24), f0.d);
    goto loc_800E02DC;
}

loc_800E014C:
{
    r3 = MemoryInline::FlatRead8((r22 + 68));
    // inline leaf 0x800DFD8C (10 guest instruction(s))
}

loc_inl11_0x800DFD8C:
{
    r0 = (r3 & 255);
}

loc_inl11_0x800DFD94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x800DFD98:
{
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -17576));
    r3 = (r3 + 196608);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + -27932), r4);
    goto loc_inl11_cont_800DFD8C;
}

loc_inl11_return:
{
}

loc_inl11_cont_800DFD8C:
{
    // end of inlined leaf 0x800DFD8C
    MemoryInline::FlatWrite8((r22 + 68), static_cast<uint8_t>(r31));
    goto loc_800E02DC;
}

loc_800E015C:
{
    r0 = MemoryInline::FlatRead32((r22 + 60));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r22 + 70), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r22 + 2));
}

loc_800E0170:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E02DC;
    }
}

loc_800E0174:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r3 = (r3 & 255);
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl13_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_4);
}

loc_inl13_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x802B06E4:
{
    r3 = r0;
    goto loc_inl13_cont_802B06CC;
}

loc_inl13_return:
{
}

loc_inl13_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_800E0188:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_800E01F8;
    }
}

loc_800E018C:
{
    // inline leaf 0x802FF298 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18484));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x802FF298
}

loc_800E0194:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800E01A4;
    }
}

loc_800E0198:
{
    r0 = MemoryInline::FlatRead32((r22 + 64));
}

loc_800E01A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_800E02DC;
    }
}

loc_800E01A4:
{
    r3 = 0;
    ctx->lr = 0x800E01ACu;
    if constexpr (KnownRegArgsCpuCall<0x801E9BD8u>(&func_801E9BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801E9BD8_7BA7 = func_801E9BD8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E9BD8_7BA7);
        r4 = static_cast<uint32_t>(regargs_result_801E9BD8_7BA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E9BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800E01B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800E01E0;
    }
}

loc_800E01B4:
{
    r3 = 1;
    ctx->lr = 0x800E01BCu;
    if constexpr (KnownRegArgsCpuCall<0x801E9BD8u>(&func_801E9BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801E9BD8_7F5E = func_801E9BD8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E9BD8_7F5E);
        r4 = static_cast<uint32_t>(regargs_result_801E9BD8_7F5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E9BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800E01C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800E01E0;
    }
}

loc_800E01C4:
{
    r3 = 2;
    ctx->lr = 0x800E01CCu;
    if constexpr (KnownRegArgsCpuCall<0x801E9BD8u>(&func_801E9BD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801E9BD8_8315 = func_801E9BD8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E9BD8_8315);
        r4 = static_cast<uint32_t>(regargs_result_801E9BD8_8315 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E9BD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800E01D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800E01E0;
    }
}

loc_800E01D4:
{
    r0 = MemoryInline::FlatRead32((r22 + 64));
}

loc_800E01DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_800E02DC;
    }
}

loc_800E01E0:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_800E01E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800E01F8;
    }
}

loc_800E01EC:
{
    r0 = MemoryInline::FlatRead32((r22 + 64));
}

loc_800E01F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(13))) {
        goto loc_800E02DC;
    }
}

loc_800E01F8:
{
    r3 = r20;
    r4 = MemoryInline::FlatRead32((r22 + 64));
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_897C = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_897C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r26 = r3;
}

loc_800E020C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E02CC;
    }
}

loc_800E0210:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r28));
    r0 = MemoryInline::FlatRead32((r20 + 12));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = MemoryInline::FlatRead32((r22 + 64));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    MemoryInline::FlatWrite32((r3 + 48), r29);
    MemoryInline::FlatWrite32((r3 + 52), r29);
    MemoryInline::FlatWrite32((r3 + 56), r30);
    r0 = MemoryInline::FlatRead8((r22 + 1));
}

loc_800E023C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E0268;
    }
}

loc_800E0240:
{
    r3 = (r3 + 4);
    r4 = (r22 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    MemoryInline::FlatWriteFloat32((r26 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    MemoryInline::FlatWriteFloat32((r26 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    MemoryInline::FlatWriteFloat32((r26 + 24), f0.d);
    goto loc_800E02CC;
}

loc_800E0268:
{
    r3 = (r22 + 28);
    r4 = (r22 + 40);
    r5 = (r20 + 24);
    r6 = (r1 + 32);
    ctx->lr = 0x800E027Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028F99Cu>(&func_8028F99C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_8028F99C_911F = func_8028F99C_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F99C_911F);
        r4 = static_cast<uint32_t>(regargs_result_8028F99C_911F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8028F99Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = (r26 + 4);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    MemoryInline::FlatWriteFloat32((r26 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    MemoryInline::FlatWriteFloat32((r26 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    MemoryInline::FlatWriteFloat32((r26 + 24), f0.d);
    MemoryInline::FlatWrite8((r22 + 68), static_cast<uint8_t>(r31));
    if constexpr (KnownRegArgsCpuCall<0x800DFC70u>(&func_800DFC70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DFC70_9787 = func_800DFC70_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DFC70_9787);
        r4 = static_cast<uint32_t>(regargs_result_800DFC70_9787 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800DFC70u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_800E02B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800E02CC;
    }
}

loc_800E02B4:
{
    r5 = MemoryInline::FlatRead32((r13 + -17576));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_2 & -4);
    r4 = (r4 + 196608);
    r0 = (r4 + -27932);
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_2, r26);
    MemoryInline::FlatWrite8((r22 + 68), static_cast<uint8_t>(r3));
}

loc_800E02CC:
{
    r0 = MemoryInline::FlatRead32((r22 + 60));
}

loc_800E02D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E02DC;
    }
}

loc_800E02D8:
{
    MemoryInline::FlatWrite8(r22, static_cast<uint8_t>(r28));
}

loc_800E02DC:
{
    r21 = (r21 + 1);
    r22 = (r22 + 72);
}

loc_800E02E4:
{
    r0 = MemoryInline::FlatRead32((r24 + 4));
}

loc_800E02EC:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_800E0038;
    }
}

loc_800E02F0:
{
    r21 = (r20 + 60);
    r19 = 0;
}

loc_800E02F8:
{
    r0 = MemoryInline::FlatRead8(r21);
}

loc_800E0300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E0328;
    }
}

loc_800E0304:
{
    r3 = MemoryInline::FlatRead8((r21 + 1));
    r0 = (r3 + -3);
}

loc_800E0310:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800E0328;
    }
}

loc_800E0314:
{
    r3 = r20;
    r4 = r21;
    ctx->lr = 0x800E0320u;
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
    InvokeDirectCpu<0x800D9348u>(ctx);
    r0 = ctx->gpr[0];
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
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r21;
    ctx->lr = 0x800E0328u;
    if constexpr (KnownRegArgsCpuCall<0x800D8468u>(&func_800D8468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800D8468_A332 = func_800D8468_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8468_A332);
        r4 = static_cast<uint32_t>(regargs_result_800D8468_A332 >> 32);
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800D8468u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800E0328:
{
    r19 = (r19 + 1);
    r21 = (r21 + 80);
}

loc_800E0334:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(32))) {
        goto loc_800E02F8;
    }
}

loc_800E0338:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574B4 (14 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    // end of inlined leaf 0x804574B4
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800DFE30 func_800DFE30 preserves=true fpr_mask=0x00000000
