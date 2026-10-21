#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BDA30(CpuContext* ctx);
extern "C" uint64_t func_804BDA30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804BDD80(CpuContext* ctx);
extern "C" uint64_t func_804BDD80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D51A0(CpuContext* ctx);
extern "C" uint64_t func_804D51A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804BB9C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804BB9C0u);
    goto loc_804BB9C0;

loc_804BB9C0:
{
    MemoryHw::FlatWriteRam32((r1 + -736), r1);
    r1 = (r1 + -736);
    r0 = ctx->lr;
    r3 = 2;
    MemoryHw::FlatWriteRam32((r1 + 740), r0);
    r30 = r4;
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = -855638016;
    r3_addr_0 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x804BB940
}

loc_804BB9EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804BBBF8;
    }
}

loc_804BB9F0:
{
    r31 = (r3 + -2147483648);
    r3 = 1;
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = -855638016;
    r3_addr_1 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
    r3 = -855638016;
    r0 = 1073741824;
    MemoryHw::FlatWrite32((r3 + 48), r0);
    r3 = r31;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_E76 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_E76);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_E76 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryHw::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_804BBA2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804BBA80;
    }
}

loc_804BBA30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804BBA40;
    }
}

loc_804BBA34:
{
}

loc_804BBA38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_804BBA4C;
    }
}

loc_804BBA3C:
{
    goto loc_804BBB7C;
}

loc_804BBA40:
{
}

loc_804BBA44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_804BBB7C;
    }
}

loc_804BBA48:
{
    goto loc_804BBAB8;
}

loc_804BBA4C:
{
    r3 = MemoryHw::FlatRead32((r31 + 12));
}

loc_804BBA54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804BBA60;
    }
}

loc_804BBA58:
{
    r0 = (r3 + -2147483648);
    goto loc_804BBA64;
}

loc_804BBA60:
{
    r0 = 0;
}

loc_804BBA64:
{
    MemoryHw::FlatWrite32((r31 + 12), r0);
    r4 = MemoryHw::FlatRead32((r31 + 4));
}

loc_804BBA70:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_804BBB7C;
    }
}

loc_804BBA74:
{
    r3 = MemoryHw::FlatRead32((r31 + 12));
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_1671 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_1671);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_1671 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_804BBB7C;
}

loc_804BBA80:
{
    r3 = MemoryHw::FlatRead32((r31 + 24));
}

loc_804BBA88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804BBA94;
    }
}

loc_804BBA8C:
{
    r0 = (r3 + -2147483648);
    goto loc_804BBA98;
}

loc_804BBA94:
{
    r0 = 0;
}

loc_804BBA98:
{
    MemoryHw::FlatWrite32((r31 + 24), r0);
    r3 = MemoryHw::FlatRead32((r31 + 16));
    r4 = MemoryHw::FlatRead32((r31 + 20));
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_1B69 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_1B69);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_1B69 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = MemoryHw::FlatRead32((r31 + 24));
    r4 = MemoryHw::FlatRead32((r31 + 28));
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_1EEB = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_1EEB);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_1EEB >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_804BBB7C;
}

loc_804BBAB8:
{
    r3 = MemoryHw::FlatRead32((r31 + 24));
}

loc_804BBAC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804BBACC;
    }
}

loc_804BBAC4:
{
    r3 = (r3 + -2147483648);
    goto loc_804BBAD0;
}

loc_804BBACC:
{
    r3 = 0;
}

loc_804BBAD0:
{
    MemoryHw::FlatWrite32((r31 + 24), r3);
    r4 = MemoryHw::FlatRead32((r31 + 16));
    r0 = MemoryHw::FlatRead32((r31 + 20));
    r0 = (r4 + r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_2466 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_2466);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_2466 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r28 = 0;
    r29 = 0;
    goto loc_804BBB34;
}

loc_804BBAF4:
{
    r3 = MemoryHw::FlatRead32((r31 + 24));
    r3_addr_3 = (r3 + r29);
    r3 = MemoryHw::FlatRead32(r3_addr_3);
}

loc_804BBB00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804BBB0C;
    }
}

loc_804BBB04:
{
    r0 = (r3 + -2147483648);
    goto loc_804BBB10;
}

loc_804BBB0C:
{
    r0 = 0;
}

loc_804BBB10:
{
    r3 = MemoryHw::FlatRead32((r31 + 24));
    r3_addr_4 = (r3 + r29);
    MemoryHw::FlatWrite32(r3_addr_4, r0);
    r3 = MemoryHw::FlatRead32((r31 + 24));
    r4 = (r3 + r29);
    r3_addr_5 = (r3 + r29);
    r3 = MemoryHw::FlatRead32(r3_addr_5);
    r4 = MemoryHw::FlatRead32((r4 + 4));
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCC90_2A69 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_2A69);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_2A69 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r28 = (r28 + 1);
    r29 = (r29 + 8);
}

loc_804BBB34:
{
    r3 = MemoryHw::FlatRead32((r31 + 16));
    r0 = MemoryHw::FlatRead32((r31 + 20));
    r0 = (r3 + r0);
}

loc_804BBB44:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_804BBAF4;
    }
}

loc_804BBB48:
{
    r0 = MemoryHw::FlatRead32((r13 + -15328));
}

loc_804BBB50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BBB7C;
    }
}

loc_804BBB54:
{
    r0 = MemoryHw::FlatRead32((r13 + -15320));
}

loc_804BBB5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_804BBB7C;
    }
}

loc_804BBB60:
{
    r3 = MemoryHw::FlatRead32((r13 + -20336));
    r0 = 0;
    MemoryHw::FlatWrite32((r13 + -15328), r0);
}

loc_804BBB70:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_804BBB7C;
    }
}

loc_804BBB74:
{
    r0 = (r3 + 1);
    MemoryHw::FlatWrite32((r13 + -20336), r0);
}

loc_804BBB7C:
{
    r0 = MemoryHw::FlatRead32((r31 + 32));
}

loc_804BBB84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BBBCC;
    }
}

loc_804BBB88:
{
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl2_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl2_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl2_cont_804CD870;
}

loc_inl2_return:
{
}

loc_inl2_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = (r1 + 8);
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl3_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl3_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl3_0x804CD668;
    }
}

loc_inl3_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl3_cont_804CD630;
}

loc_inl3_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWriteRam32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl3_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r12 = MemoryHw::FlatRead32((r31 + 32));
    r3 = MemoryHw::FlatRead32((r31 + 4));
    r4 = MemoryHw::FlatRead32((r31 + 36));
    ctr = r12;
    ctx->lr = 0x804BBBACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
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
    r3 = (r1 + 8);
    // inline leaf 0x804CD870 (9 guest instruction(s))
}

loc_inl4_0x804CD870:
{
    r5 = 0;
    MemoryHw::FlatWriteRam16((r3 + 416), static_cast<uint16_t>(r5));
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam16((r3 + 418), static_cast<uint16_t>(r5));
    r0 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl4_0x804CD888:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x804CD88C:
{
    MemoryHw::FlatWriteRam32((r4 + 216), r5);
    goto loc_inl4_cont_804CD870;
}

loc_inl4_return:
{
}

loc_inl4_cont_804CD870:
{
    // end of inlined leaf 0x804CD870
    r3 = r30;
    // inline leaf 0x804CD630 (23 guest instruction(s))
}

loc_inl5_0x804CD630:
{
    r4 = 0x80000000u;
    MemoryHw::FlatWriteRam32((r4 + 212), r3);
    r5 = (r3 & 1073741823);
    MemoryHw::FlatWriteRam32((r4 + 192), r5);
    r5 = MemoryHw::FlatRead32((r4 + 216));
}

loc_inl5_0x804CD648:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r3))) {
        goto loc_inl5_0x804CD668;
    }
}

loc_inl5_0x804CD64C:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 | 8192);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 | 2);
    ctx->msr = r6;
    goto loc_inl5_cont_804CD630;
}

loc_inl5_0x804CD668:
{
    r6 = MemoryHw::FlatRead32((r3 + 412));
    r6 = (r6 & -8193);
    MemoryHw::FlatWrite32((r3 + 412), r6);
    r6 = ctx->msr;
    r6 = (r6 & -8193);
    r6 = (r6 | 2);
    ctx->msr = r6;
    // isync @ 0x804CD684 (no-op)
}

loc_inl5_cont_804CD630:
{
    // end of inlined leaf 0x804CD630
    r3 = MemoryHw::FlatRead32((r13 + -20332));
    r4 = r31;
    ctx->lr = 0x804BBBC8u;
    if constexpr (KnownRegArgsCpuCall<0x804BDA30u>(&func_804BDA30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804BDA30_4336 = func_804BDA30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDA30_4336);
        r4 = static_cast<uint32_t>(regargs_result_804BDA30_4336 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x804BDA30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_804BBBD4;
}

loc_804BBBCC:
{
    r3 = (r31 + 44);
    ctx->lr = 0x804BBBD4u;
    if constexpr (KnownRegArgsCpuCall<0x804D51A0u>(&func_804D51A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D51A0_47AE = func_804D51A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D51A0_47AE);
        r4 = static_cast<uint32_t>(regargs_result_804D51A0_47AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
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
        InvokeDirectCpu<0x804D51A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
}

loc_804BBBD4:
{
    r3 = 1;
    // inline leaf 0x804BB940 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = -855638016;
    r3_addr_7 = (r3 + r0);
    r3 = MemoryHw::FlatRead32(r3_addr_7);
    // end of inlined leaf 0x804BB940
    r0 = (r3 & 48);
    r3 = 1;
    r4 = (r0 | 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BB950u>(ctx);
    r4 = MemoryHw::FlatRead32((r31 + 8));
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804BDD80u>(&func_804BDD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804BDD80_51E7 = func_804BDD80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804BDD80_51E7);
        r4 = static_cast<uint32_t>(regargs_result_804BDD80_51E7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804BDD80u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_804BBBF8:
{
    r0 = MemoryHw::FlatRead32((r1 + 740));
    ctx->lr = r0;
    r1 = (r1 + 736);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BB9C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BB9C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BB9C0 func_804BB9C0 preserves=true fpr_mask=0x00000000
