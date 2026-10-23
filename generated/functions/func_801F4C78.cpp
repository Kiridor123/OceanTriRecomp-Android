#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004AF24(CpuContext* ctx);
extern "C" uint64_t func_8004AF24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004D900(CpuContext* ctx);
extern "C" uint64_t func_8004D900_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004DC30(CpuContext* ctx);
extern "C" uint64_t func_8004DC30_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801EC7AC(CpuContext* ctx);
extern "C" uint32_t func_801EC7AC_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801EC8C0(CpuContext* ctx);
extern "C" uint64_t func_801EC8C0_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801ECBA4(CpuContext* ctx);
extern "C" uint64_t func_801ECBA4_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801ECDB4(CpuContext* ctx);
extern "C" uint64_t func_801ECDB4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801ED2E8(CpuContext* ctx);
extern "C" uint64_t func_801ED2E8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801ED6EC(CpuContext* ctx);
extern "C" uint64_t func_801ED6EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801EDCB0(CpuContext* ctx);
extern "C" uint64_t func_801EDCB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801EE248(CpuContext* ctx);
extern "C" uint64_t func_801EE248_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801EE9EC(CpuContext* ctx);
extern "C" uint64_t func_801EE9EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801EEE28(CpuContext* ctx);
extern "C" uint64_t func_801EEE28_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801EF004(CpuContext* ctx);
extern "C" uint64_t func_801EF004_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801EFF34(CpuContext* ctx);
extern "C" uint64_t func_801EFF34_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_801F18D8(CpuContext* ctx);
extern "C" uint64_t func_801F18D8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801F1C68(CpuContext* ctx);
extern "C" uint64_t func_801F1C68_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801F1E20(CpuContext* ctx);
extern "C" uint64_t func_801F1E20_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801F20A4(CpuContext* ctx);
extern "C" uint64_t func_801F20A4_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F23C0(CpuContext* ctx);
extern "C" uint64_t func_801F23C0_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F256C(CpuContext* ctx);
extern "C" uint64_t func_801F256C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F2810(CpuContext* ctx);
extern "C" uint64_t func_801F2810_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F29B4(CpuContext* ctx);
extern "C" uint64_t func_801F29B4_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F2C10(CpuContext* ctx);
extern "C" uint64_t func_801F2C10_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F2DD0(CpuContext* ctx);
extern "C" uint64_t func_801F2DD0_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F3034(CpuContext* ctx);
extern "C" uint64_t func_801F3034_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F31EC(CpuContext* ctx);
extern "C" uint64_t func_801F31EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F32F8(CpuContext* ctx);
extern "C" uint64_t func_801F32F8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F388C(CpuContext* ctx);
extern "C" uint64_t func_801F388C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F3A4C(CpuContext* ctx);
extern "C" uint64_t func_801F3A4C_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_801F3E50(CpuContext* ctx);
extern "C" uint64_t func_801F3E50_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801F4040(CpuContext* ctx);
extern "C" uint64_t func_801F4040_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_801F4280(CpuContext* ctx);
extern "C" uint64_t func_801F4280_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801F4868(CpuContext* ctx);
extern "C" uint64_t func_801F4868_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802BBB1C(CpuContext* ctx);
extern "C" uint64_t func_802BBB1C_ra0_2_18_0(CpuContext*, double);

extern "C" uint64_t func_801F4C78_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

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
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_801F4C78;

loc_801F4C78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r31 = MemoryInline::FlatRead32((r3 + 172));
    r29 = 0;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801F4CB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F4CD0;
    }
}

loc_801F4CB4:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_801F4CC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801F53AC;
    }
}

loc_801F4CC8:
{
    ctx->lr = 0x801F4CCCu;
    if constexpr (KnownRegArgsCpuCall<0x802BBB1Cu>(&func_802BBB1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        const auto regargs_result_802BBB1C_2473 = func_802BBB1C_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802BBB1C_2473);
        r4 = static_cast<uint32_t>(regargs_result_802BBB1C_2473 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BBB1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_801F53AC;
}

loc_801F4CD0:
{
    // inline leaf 0x802DE288 (5 guest instruction(s))
    r0 = 1;
    r3 = 0x806C0000u;
    r3 = (r3 + -376);
    MemoryInline::FlatWriteRam8((r3 + 37), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DE288
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801F4CDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_801F4CEC;
    }
}

loc_801F4CE0:
{
    // inline leaf 0x802DE4E4 (11 guest instruction(s))
}

loc_inl1_0x802DE4E4:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r0 = MemoryInline::FlatRead8((r4 + -376));
}

loc_inl1_0x802DE4F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802DE4F8:
{
    r4 = (r4 + -376);
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_inl1_0x802DE504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802DE508:
{
    r3 = 1;
    goto loc_inl1_cont_802DE4E4;
}

loc_inl1_return:
{
}

loc_inl1_cont_802DE4E4:
{
    // end of inlined leaf 0x802DE4E4
}

loc_801F4CE8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801F53AC;
    }
}

loc_801F4CEC:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_801F4CF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801F4D08;
    }
}

loc_801F4CF8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x801F4D04u;
    if constexpr (KnownRegArgsCpuCall<0x801EC8C0u>(&func_801EC8C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801EC8C0_2EC0 = func_801EC8C0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801EC8C0_2EC0);
        r4 = static_cast<uint32_t>(regargs_result_801EC8C0_2EC0 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EC8C0u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_801F53AC;
}

loc_801F4D08:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801F4D10:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25))) {
        goto loc_801F5398;
    }
}

loc_801F4D14:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -27744);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x801F5398u:
        goto loc_801F5398;
        break;
    case 0x801F4D2Cu:
        goto loc_801F4D2C;
        break;
    case 0x801F5200u:
        goto loc_801F5200;
        break;
    case 0x801F5214u:
        goto loc_801F5214;
        break;
    case 0x801F5228u:
        goto loc_801F5228;
        break;
    case 0x801F523Cu:
        goto loc_801F523C;
        break;
    case 0x801F524Cu:
        goto loc_801F524C;
        break;
    case 0x801F5264u:
        goto loc_801F5264;
        break;
    case 0x801F5278u:
        goto loc_801F5278;
        break;
    case 0x801F528Cu:
        goto loc_801F528C;
        break;
    case 0x801F529Cu:
        goto loc_801F529C;
        break;
    case 0x801F52B0u:
        goto loc_801F52B0;
        break;
    case 0x801F52C4u:
        goto loc_801F52C4;
        break;
    case 0x801F52D8u:
        goto loc_801F52D8;
        break;
    case 0x801F52E8u:
        goto loc_801F52E8;
        break;
    case 0x801F52F8u:
        goto loc_801F52F8;
        break;
    case 0x801F5308u:
        goto loc_801F5308;
        break;
    case 0x801F531Cu:
        goto loc_801F531C;
        break;
    case 0x801F532Cu:
        goto loc_801F532C;
        break;
    case 0x801F533Cu:
        goto loc_801F533C;
        break;
    case 0x801F534Cu:
        goto loc_801F534C;
        break;
    case 0x801F5360u:
        goto loc_801F5360;
        break;
    case 0x801F5374u:
        goto loc_801F5374;
        break;
    case 0x801F5388u:
        goto loc_801F5388;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_801F4D2C:
{
    ctx->lr = 0x801F4D30u;
    if constexpr (KnownRegArgsCpuCall<0x801ECBA4u>(&func_801ECBA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801ECBA4_4100 = func_801ECBA4_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801ECBA4_4100);
        r4 = static_cast<uint32_t>(regargs_result_801ECBA4_4100 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801ECBA4u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_801F4D34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801F4D44;
    }
}

loc_801F4D38:
{
}

loc_801F4D3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801F51F4;
    }
}

loc_801F4D40:
{
    goto loc_801F5398;
}

loc_801F4D44:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4D8C;
    }
}

loc_801F4D58:
{
}

loc_801F4D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4DCC;
    }
}

loc_801F4D60:
{
}

loc_801F4D64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4E14;
    }
}

loc_801F4D68:
{
}

loc_801F4D6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F4E70;
    }
}

loc_801F4D70:
{
}

loc_801F4D74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801F4EE4;
    }
}

loc_801F4D78:
{
}

loc_801F4D7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801F4FD4;
    }
}

loc_801F4D80:
{
}

loc_801F4D84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801F50DC;
    }
}

loc_801F4D88:
{
    goto loc_801F51D4;
}

loc_801F4D8C:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4D94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4DA4;
    }
}

loc_801F4D98:
{
}

loc_801F4D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4DB8;
    }
}

loc_801F4DA0:
{
    goto loc_801F51D4;
}

loc_801F4DA4:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4DB4u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_502A = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_502A);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_502A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4DB8:
{
    r0 = 3;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4DC8u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_53D3 = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_53D3);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_53D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4DCC:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4DD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4DE4;
    }
}

loc_801F4DD8:
{
}

loc_801F4DDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4E00;
    }
}

loc_801F4DE0:
{
    goto loc_801F51D4;
}

loc_801F4DE4:
{
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4DF4u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_5942 = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_5942);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_5942 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 84);
    ctx->lr = 0x801F4DFCu;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_5C93 = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_5C93);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_5C93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E00:
{
    r0 = 5;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x801F4E10u;
    if constexpr (KnownRegArgsCpuCall<0x801ED2E8u>(&func_801ED2E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801ED2E8_6037 = func_801ED2E8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_801ED2E8_6037);
        r4 = static_cast<uint32_t>(regargs_result_801ED2E8_6037 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ED2E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E14:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4E1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4E34;
    }
}

loc_801F4E20:
{
}

loc_801F4E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4E48;
    }
}

loc_801F4E28:
{
}

loc_801F4E2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4E5C;
    }
}

loc_801F4E30:
{
    goto loc_801F51D4;
}

loc_801F4E34:
{
    r0 = 6;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 84);
    ctx->lr = 0x801F4E44u;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_665B = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_665B);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_665B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E48:
{
    r0 = 7;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 84);
    ctx->lr = 0x801F4E58u;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_6A21 = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_6A21);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_6A21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E5C:
{
    r0 = 8;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 84);
    ctx->lr = 0x801F4E6Cu;
    if constexpr (KnownRegArgsCpuCall<0x801ECDB4u>(&func_801ECDB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801ECDB4_6DE7 = func_801ECDB4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801ECDB4_6DE7);
        r4 = static_cast<uint32_t>(regargs_result_801ECDB4_6DE7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801ECDB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801F51D4;
}

loc_801F4E70:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4E78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4E90;
    }
}

loc_801F4E7C:
{
}

loc_801F4E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4EAC;
    }
}

loc_801F4E84:
{
}

loc_801F4E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4EC8;
    }
}

loc_801F4E8C:
{
    goto loc_801F51D4;
}

loc_801F4E90:
{
    r0 = 9;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 116);
    r4 = 0;
    r5 = MemoryInline::FlatRead32((r31 + 16));
    ctx->lr = 0x801F4EA8u;
    if constexpr (KnownRegArgsCpuCall<0x801EFF34u>(&func_801EFF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801EFF34_7478 = func_801EFF34_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801EFF34_7478);
        r4 = static_cast<uint32_t>(regargs_result_801EFF34_7478 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EFF34u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_801F51D4;
}

loc_801F4EAC:
{
    r0 = 10;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 116);
    r4 = 5;
    r5 = MemoryInline::FlatRead32((r31 + 16));
    ctx->lr = 0x801F4EC4u;
    if constexpr (KnownRegArgsCpuCall<0x801EFF34u>(&func_801EFF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801EFF34_7B04 = func_801EFF34_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801EFF34_7B04);
        r4 = static_cast<uint32_t>(regargs_result_801EFF34_7B04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EFF34u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_801F51D4;
}

loc_801F4EC8:
{
    r0 = 11;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 116);
    r4 = 4;
    r5 = MemoryInline::FlatRead32((r31 + 16));
    ctx->lr = 0x801F4EE0u;
    if constexpr (KnownRegArgsCpuCall<0x801EFF34u>(&func_801EFF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801EFF34_8190 = func_801EFF34_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801EFF34_8190);
        r4 = static_cast<uint32_t>(regargs_result_801EFF34_8190 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EFF34u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_801F51D4;
}

loc_801F4EE4:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4F0C;
    }
}

loc_801F4EF0:
{
}

loc_801F4EF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F4F44;
    }
}

loc_801F4EF8:
{
}

loc_801F4EFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F4F64;
    }
}

loc_801F4F00:
{
}

loc_801F4F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F4F9C;
    }
}

loc_801F4F08:
{
    goto loc_801F51D4;
}

loc_801F4F0C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F4F14u;
    if constexpr (KnownRegArgsCpuCall<0x8004D900u>(&func_8004D900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D900_8A4D = func_8004D900_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004D900_8A4D);
        r4 = static_cast<uint32_t>(regargs_result_8004D900_8A4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004D900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F4F18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F4F3C;
    }
}

loc_801F4F1C:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4F3C:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F4F44:
{
    r0 = 13;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4F64:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F4F6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004D900u>(&func_8004D900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D900_9AEC = func_8004D900_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004D900_9AEC);
        r4 = static_cast<uint32_t>(regargs_result_8004D900_9AEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004D900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F4F70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F4F94;
    }
}

loc_801F4F74:
{
    r0 = 14;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 2;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4F94:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F4F9C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F4FA4u;
    if constexpr (KnownRegArgsCpuCall<0x8004D900u>(&func_8004D900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004D900_A526 = func_8004D900_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004D900_A526);
        r4 = static_cast<uint32_t>(regargs_result_8004D900_A526 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004D900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F4FA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F4FCC;
    }
}

loc_801F4FAC:
{
    r0 = 15;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 0;
    r5 = 3;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F4FCC:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F4FD4:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F4FDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F4FFC;
    }
}

loc_801F4FE0:
{
}

loc_801F4FE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F5034;
    }
}

loc_801F4FE8:
{
}

loc_801F4FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F506C;
    }
}

loc_801F4FF0:
{
}

loc_801F4FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F50A4;
    }
}

loc_801F4FF8:
{
    goto loc_801F51D4;
}

loc_801F4FFC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F5004u;
    if constexpr (KnownRegArgsCpuCall<0x8004DC30u>(&func_8004DC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DC30_B24C = func_8004DC30_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004DC30_B24C);
        r4 = static_cast<uint32_t>(regargs_result_8004DC30_B24C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004DC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F5008:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F502C;
    }
}

loc_801F500C:
{
    r0 = 16;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F502C:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F5034:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F503Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AF24u>(&func_8004AF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004AF24_BC86 = func_8004AF24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004AF24_BC86);
        r4 = static_cast<uint32_t>(regargs_result_8004AF24_BC86 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AF24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801F5040:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F5064;
    }
}

loc_801F5044:
{
    r0 = 17;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_5, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_5, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_5, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F5064:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F506C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F5074u;
    if constexpr (KnownRegArgsCpuCall<0x8004DC30u>(&func_8004DC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DC30_C711 = func_8004DC30_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004DC30_C711);
        r4 = static_cast<uint32_t>(regargs_result_8004DC30_C711 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004DC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F5078:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F509C;
    }
}

loc_801F507C:
{
    r0 = 18;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 2;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_6 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_6, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_6, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_6, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_6, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_6, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F509C:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F50A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801F50ACu;
    if constexpr (KnownRegArgsCpuCall<0x8004DC30u>(&func_8004DC30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004DC30_D14B = func_8004DC30_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004DC30_D14B);
        r4 = static_cast<uint32_t>(regargs_result_8004DC30_D14B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004DC30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801F50B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F50D4;
    }
}

loc_801F50B4:
{
    r0 = 19;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 928);
    r4 = 1;
    r5 = 3;
    r6 = MemoryInline::FlatRead32((r31 + 16));
    // inline leaf 0x801F1FDC (15 guest instruction(s))
    r7 = 0;
    guest_range_7 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, r3, static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r3 + 1), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_7, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_7, 2u, (r3 + 2), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::WriteResolved8(guest_range_7, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_7, 3u, (r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_7, 8u, (r3 + 8), static_cast<uint16_t>(r7));
    MemoryInline::WriteResolved16(guest_range_7, 12u, (r3 + 12), static_cast<uint16_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_7, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_7, 16u, (r3 + 16), r7);
        MemoryInline::WriteResolved32(guest_range_7, 20u, (r3 + 20), r6);
    }
    MemoryInline::WriteResolved8(guest_range_7, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_7, 10u, (r3 + 10), static_cast<uint16_t>(r7));
    // end of inlined leaf 0x801F1FDC
    goto loc_801F51D4;
}

loc_801F50D4:
{
    r29 = 1;
    goto loc_801F51D4;
}

loc_801F50DC:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F50E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801F5114;
    }
}

loc_801F50E8:
{
}

loc_801F50EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F5130;
    }
}

loc_801F50F0:
{
}

loc_801F50F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801F514C;
    }
}

loc_801F50F8:
{
}

loc_801F50FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801F5168;
    }
}

loc_801F5100:
{
}

loc_801F5104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801F5184;
    }
}

loc_801F5108:
{
}

loc_801F510C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801F51A0;
    }
}

loc_801F5110:
{
    goto loc_801F51D4;
}

loc_801F5114:
{
    r0 = 20;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 912);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 0;
    ctx->lr = 0x801F512Cu;
    if constexpr (KnownRegArgsCpuCall<0x801F31ECu>(&func_801F31EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F31EC_E039 = func_801F31EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F31EC_E039);
        r4 = static_cast<uint32_t>(regargs_result_801F31EC_E039 >> 32);
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
        InvokeDirectCpu<0x801F31ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F5130:
{
    r0 = 21;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 872);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 0;
    ctx->lr = 0x801F5148u;
    if constexpr (KnownRegArgsCpuCall<0x801F388Cu>(&func_801F388C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F388C_E504 = func_801F388C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F388C_E504);
        r4 = static_cast<uint32_t>(regargs_result_801F388C_E504 >> 32);
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
        InvokeDirectCpu<0x801F388Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F514C:
{
    r0 = 22;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 912);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 1;
    ctx->lr = 0x801F5164u;
    if constexpr (KnownRegArgsCpuCall<0x801F31ECu>(&func_801F31EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F31EC_E9CF = func_801F31EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F31EC_E9CF);
        r4 = static_cast<uint32_t>(regargs_result_801F31EC_E9CF >> 32);
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
        InvokeDirectCpu<0x801F31ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F5168:
{
    r0 = 23;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 872);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 1;
    ctx->lr = 0x801F5180u;
    if constexpr (KnownRegArgsCpuCall<0x801F388Cu>(&func_801F388C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F388C_EE9A = func_801F388C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F388C_EE9A);
        r4 = static_cast<uint32_t>(regargs_result_801F388C_EE9A >> 32);
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
        InvokeDirectCpu<0x801F388Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F5184:
{
    r0 = 24;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 828);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 0;
    ctx->lr = 0x801F519Cu;
    if constexpr (KnownRegArgsCpuCall<0x801F3E50u>(&func_801F3E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F3E50_F365 = func_801F3E50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F3E50_F365);
        r4 = static_cast<uint32_t>(regargs_result_801F3E50_F365 >> 32);
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
        InvokeDirectCpu<0x801F3E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F51A0:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r4 = 0;
    ctx->lr = 0x801F51ACu;
    if constexpr (KnownRegArgsCpuCall<0x801F4280u>(&func_801F4280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F4280_F7CD = func_801F4280_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F4280_F7CD);
        r4 = static_cast<uint32_t>(regargs_result_801F4280_F7CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x801F4280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801F51B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801F51D0;
    }
}

loc_801F51B4:
{
    r0 = 25;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 828);
    r4 = MemoryInline::FlatRead32((r31 + 16));
    r5 = 1;
    ctx->lr = 0x801F51CCu;
    if constexpr (KnownRegArgsCpuCall<0x801F3E50u>(&func_801F3E50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_801F3E50_FD9C = func_801F3E50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801F3E50_FD9C);
        r4 = static_cast<uint32_t>(regargs_result_801F3E50_FD9C >> 32);
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
        InvokeDirectCpu<0x801F3E50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    goto loc_801F51D4;
}

loc_801F51D0:
{
    r29 = 1;
}

loc_801F51D4:
{
}

loc_801F51D8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_801F51E8;
    }
}

loc_801F51DC:
{
    r3 = 5;
    ctx->lr = 0x801F51E4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_102DC = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_102DC);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_102DC >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
    goto loc_801F5398;
}

loc_801F51E8:
{
    r3 = 2;
    ctx->lr = 0x801F51F0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_10A5F = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_10A5F);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_10A5F >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
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
        ctr = ctx->ctr;
    }
    goto loc_801F5398;
}

loc_801F51F4:
{
    r3 = r31;
    ctx->lr = 0x801F51FCu;
    if constexpr (KnownRegArgsCpuCall<0x801EC7ACu>(&func_801EC7AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_801EC7AC_111AE = func_801EC7AC_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_801EC7AC_111AE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EC7ACu>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_801F5398;
}

loc_801F5200:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x801F520Cu;
    if constexpr (KnownRegArgsCpuCall<0x801ED6ECu>(&func_801ED6EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801ED6EC_118CF = func_801ED6EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801ED6EC_118CF);
        r4 = static_cast<uint32_t>(regargs_result_801ED6EC_118CF >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801ED6ECu>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5214:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x801F5220u;
    if constexpr (KnownRegArgsCpuCall<0x801ED6ECu>(&func_801ED6EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801ED6EC_12046 = func_801ED6EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801ED6EC_12046);
        r4 = static_cast<uint32_t>(regargs_result_801ED6EC_12046 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801ED6ECu>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5228:
{
    r3 = (r31 + 84);
    r4 = r31;
    ctx->lr = 0x801F5234u;
    if constexpr (KnownRegArgsCpuCall<0x801EDCB0u>(&func_801EDCB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801EDCB0_127C6 = func_801EDCB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801EDCB0_127C6);
        r4 = static_cast<uint32_t>(regargs_result_801EDCB0_127C6 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EDCB0u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F523C:
{
    r3 = r31;
    ctx->lr = 0x801F5244u;
    if constexpr (KnownRegArgsCpuCall<0x801EE248u>(&func_801EE248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801EE248_12F30 = func_801EE248_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801EE248_12F30);
        r4 = static_cast<uint32_t>(regargs_result_801EE248_12F30 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EE248u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F524C:
{
    r3 = (r31 + 84);
    r4 = (r31 + 48);
    r5 = r31;
    ctx->lr = 0x801F525Cu;
    if constexpr (KnownRegArgsCpuCall<0x801EE9ECu>(&func_801EE9EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801EE9EC_136C6 = func_801EE9EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801EE9EC_136C6);
        r4 = static_cast<uint32_t>(regargs_result_801EE9EC_136C6 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EE9ECu>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5264:
{
    r3 = (r31 + 84);
    r4 = r31;
    ctx->lr = 0x801F5270u;
    if constexpr (KnownRegArgsCpuCall<0x801EEE28u>(&func_801EEE28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801EEE28_13E7C = func_801EEE28_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801EEE28_13E7C);
        r4 = static_cast<uint32_t>(regargs_result_801EEE28_13E7C >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EEE28u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5278:
{
    r3 = (r31 + 84);
    r4 = r31;
    ctx->lr = 0x801F5284u;
    if constexpr (KnownRegArgsCpuCall<0x801EF004u>(&func_801EF004)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801EF004_14626 = func_801EF004_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801EF004_14626);
        r4 = static_cast<uint32_t>(regargs_result_801EF004_14626 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801EF004u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F528C:
{
    r3 = r31;
    ctx->lr = 0x801F5294u;
    if constexpr (KnownRegArgsCpuCall<0x801F18D8u>(&func_801F18D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801F18D8_14D84 = func_801F18D8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F18D8_14D84);
        r4 = static_cast<uint32_t>(regargs_result_801F18D8_14D84 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F18D8u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F529C:
{
    r3 = (r31 + 116);
    r4 = r31;
    ctx->lr = 0x801F52A8u;
    if constexpr (KnownRegArgsCpuCall<0x801F1C68u>(&func_801F1C68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801F1C68_15505 = func_801F1C68_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F1C68_15505);
        r4 = static_cast<uint32_t>(regargs_result_801F1C68_15505 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F1C68u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F52B0:
{
    r3 = (r31 + 116);
    r4 = r31;
    ctx->lr = 0x801F52BCu;
    if constexpr (KnownRegArgsCpuCall<0x801F1E20u>(&func_801F1E20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801F1E20_15C86 = func_801F1E20_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F1E20_15C86);
        r4 = static_cast<uint32_t>(regargs_result_801F1E20_15C86 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F1E20u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F52C4:
{
    r3 = r31;
    r4 = (r31 + 928);
    ctx->lr = 0x801F52D0u;
    if constexpr (KnownRegArgsCpuCall<0x801F20A4u>(&func_801F20A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F20A4_1643D = func_801F20A4_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F20A4_1643D);
        r4 = static_cast<uint32_t>(regargs_result_801F20A4_1643D >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F20A4u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F52D8:
{
    r3 = (r31 + 928);
    ctx->lr = 0x801F52E0u;
    if constexpr (KnownRegArgsCpuCall<0x801F23C0u>(&func_801F23C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F23C0_16BD9 = func_801F23C0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F23C0_16BD9);
        r4 = static_cast<uint32_t>(regargs_result_801F23C0_16BD9 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F23C0u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F52E8:
{
    r3 = (r31 + 928);
    ctx->lr = 0x801F52F0u;
    if constexpr (KnownRegArgsCpuCall<0x801F256Cu>(&func_801F256C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F256C_17375 = func_801F256C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F256C_17375);
        r4 = static_cast<uint32_t>(regargs_result_801F256C_17375 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F256Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F52F8:
{
    r3 = (r31 + 928);
    ctx->lr = 0x801F5300u;
    if constexpr (KnownRegArgsCpuCall<0x801F2810u>(&func_801F2810)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F2810_17B11 = func_801F2810_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F2810_17B11);
        r4 = static_cast<uint32_t>(regargs_result_801F2810_17B11 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F2810u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5308:
{
    r3 = r31;
    r4 = (r31 + 928);
    ctx->lr = 0x801F5314u;
    if constexpr (KnownRegArgsCpuCall<0x801F29B4u>(&func_801F29B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F29B4_182BC = func_801F29B4_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F29B4_182BC);
        r4 = static_cast<uint32_t>(regargs_result_801F29B4_182BC >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F29B4u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F531C:
{
    r3 = (r31 + 928);
    ctx->lr = 0x801F5324u;
    if constexpr (KnownRegArgsCpuCall<0x801F2C10u>(&func_801F2C10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F2C10_18A58 = func_801F2C10_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F2C10_18A58);
        r4 = static_cast<uint32_t>(regargs_result_801F2C10_18A58 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F2C10u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F532C:
{
    r3 = (r31 + 928);
    ctx->lr = 0x801F5334u;
    if constexpr (KnownRegArgsCpuCall<0x801F2DD0u>(&func_801F2DD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F2DD0_191F4 = func_801F2DD0_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F2DD0_191F4);
        r4 = static_cast<uint32_t>(regargs_result_801F2DD0_191F4 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F2DD0u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F533C:
{
    r3 = (r31 + 928);
    ctx->lr = 0x801F5344u;
    if constexpr (KnownRegArgsCpuCall<0x801F3034u>(&func_801F3034)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F3034_19990 = func_801F3034_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F3034_19990);
        r4 = static_cast<uint32_t>(regargs_result_801F3034_19990 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F3034u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F534C:
{
    r3 = r31;
    r4 = (r31 + 912);
    ctx->lr = 0x801F5358u;
    if constexpr (KnownRegArgsCpuCall<0x801F32F8u>(&func_801F32F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F32F8_1A13B = func_801F32F8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F32F8_1A13B);
        r4 = static_cast<uint32_t>(regargs_result_801F32F8_1A13B >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F32F8u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5360:
{
    r3 = r31;
    r4 = (r31 + 872);
    ctx->lr = 0x801F536Cu;
    if constexpr (KnownRegArgsCpuCall<0x801F3A4Cu>(&func_801F3A4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F3A4C_1A8CB = func_801F3A4C_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F3A4C_1A8CB);
        r4 = static_cast<uint32_t>(regargs_result_801F3A4C_1A8CB >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F3A4Cu>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5374:
{
    r3 = r31;
    r4 = (r31 + 828);
    ctx->lr = 0x801F5380u;
    if constexpr (KnownRegArgsCpuCall<0x801F4040u>(&func_801F4040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_801F4040_1B07C = func_801F4040_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F4040_1B07C);
        r4 = static_cast<uint32_t>(regargs_result_801F4040_1B07C >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F4040u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
    goto loc_801F5398;
}

loc_801F5388:
{
    r3 = r31;
    r4 = (r31 + 828);
    ctx->lr = 0x801F5394u;
    if constexpr (KnownRegArgsCpuCall<0x801F4868u>(&func_801F4868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_801F4868_1B7F1 = func_801F4868_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801F4868_1B7F1);
        r4 = static_cast<uint32_t>(regargs_result_801F4868_1B7F1 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801F4868u>(ctx);
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
        ctr = ctx->ctr;
    }
    r30 = r3;
}

loc_801F5398:
{
    r0 = (r30 + -1);
}

loc_801F53A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801F53AC;
    }
}

loc_801F53A4:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_801F53AC:
{
    r3 = 0x80200000u;
    r3 = (r3 + -22084);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80049240_1C06E = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_1C06E);
        r4 = static_cast<uint32_t>(regargs_result_80049240_1C06E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
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
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F4C78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F4C78_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801F4C78 func_801F4C78 preserves=true fpr_mask=0x00000000
