#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F58(CpuContext* ctx);
extern "C" uint64_t func_80050F58_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80050FE4(CpuContext* ctx);
extern "C" uint64_t func_80050FE4_ra18_8_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802D0D00(CpuContext* ctx);
extern "C" uint64_t func_802D0D00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802D0E30(CpuContext* ctx);
extern "C" uint32_t func_802D0E30_ra68_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D33FC(CpuContext* ctx);
extern "C" uint64_t func_802D33FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D3E4C(CpuContext* ctx);
extern "C" uint32_t func_802D3E4C_ra188_1fc_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802D4238(CpuContext* ctx);
extern "C" void func_802D4238_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_802D4244(CpuContext* ctx);
extern "C" void func_802D4244_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802D4238_statefree(uint32_t);

extern "C" uint64_t func_802D0F98_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
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
    uint32_t r8 = ctx->gpr[8];
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
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802D0F98u);
    goto loc_802D0F98;

loc_802D0F98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r30 + 369));
}

loc_802D0FC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802D1628;
    }
}

loc_802D0FC8:
{
    r3 = r30;
    // inline leaf 0x802D94F0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1155));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802D94F0
}

loc_802D0FD4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D0FF8;
    }
}

loc_802D0FD8:
{
    r4 = MemoryInline::FlatRead8((r30 + 420));
    r3 = MemoryInline::FlatRead32((r30 + 364));
    r0 = MemoryInline::FlatRead8((r3 + 22));
}

loc_802D0FE8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_802D0FF8;
    }
}

loc_802D0FEC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1157));
}

loc_802D0FF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1628;
    }
}

loc_802D0FF8:
{
    r0 = MemoryInline::FlatRead8((r30 + 465));
}

loc_802D1000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D1044;
    }
}

loc_802D1004:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 860), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 856), static_cast<uint8_t>(r0));
    r3 = r30;
    // inline leaf 0x802D3A84 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 847), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D3A84
    r0 = MemoryInline::FlatRead8((r30 + 465));
}

loc_802D1020:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D103C;
    }
}

loc_802D1024:
{
    r3 = r30;
    // inline leaf 0x802D4264 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 905), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D4264
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 905), static_cast<uint8_t>(r0));
    r3 = r30;
    // inline leaf 0x802D422C (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 461), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D422C
}

loc_802D103C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 465), static_cast<uint8_t>(r0));
}

loc_802D1044:
{
    r3 = r30;
    ctx->lr = 0x802D104Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D3E4Cu>(&func_802D3E4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        const auto regargs_result_802D3E4C_19E1 = func_802D3E4C_ra188_1fc_8_0(ctx, r3, r7, r8, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_802D3E4C_19E1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802D3E4Cu>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_802D1050:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D1628;
    }
}

loc_802D1054:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D105C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D1074;
    }
}

loc_802D1060:
{
    r3 = (r30 + 432);
    r4 = (r30 + 376);
    ctx->lr = 0x802D106Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050F58u>(&func_80050F58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        const auto regargs_result_80050F58_2200 = func_80050F58_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050F58_2200);
        r4 = static_cast<uint32_t>(regargs_result_80050F58_2200 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80050F58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    MemoryInline::FlatWriteFloat32((r30 + 448), f1.d);
    goto loc_802D1084;
}

loc_802D1074:
{
    r3 = (r30 + 432);
    r4 = (r30 + 376);
    ctx->lr = 0x802D1080u;
    if constexpr (KnownRegArgsCpuCall<0x80050FE4u>(&func_80050FE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        const auto regargs_result_80050FE4_273C = func_80050FE4_ra18_8_18_0(ctx, r3, r4, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80050FE4_273C);
        r4 = static_cast<uint32_t>(regargs_result_80050FE4_273C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80050FE4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    MemoryInline::FlatWriteFloat32((r30 + 448), f1.d);
}

loc_802D1084:
{
    r0 = MemoryInline::FlatRead8((r30 + 461));
}

loc_802D108C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D1628;
    }
}

loc_802D1090:
{
    r0 = MemoryInline::FlatRead8((r30 + 463));
}

loc_802D1098:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D1618;
    }
}

loc_802D109C:
{
    r3 = r30;
    // inline leaf 0x802D429C (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 886), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 888), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D429C
    r0 = MemoryInline::FlatRead8((r30 + 460));
}

loc_802D10AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_802D1618;
    }
}

loc_802D10B0:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 22080);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802D10C8u:
        goto loc_802D10C8;
        break;
    case 0x802D1260u:
        goto loc_802D1260;
        break;
    case 0x802D1560u:
        goto loc_802D1560;
        break;
    case 0x802D13D8u:
        goto loc_802D13D8;
        break;
    case 0x802D14E4u:
        goto loc_802D14E4;
        break;
    case 0x802D1594u:
        goto loc_802D1594;
        break;
    case 0x802D15A0u:
        goto loc_802D15A0;
        break;
    case 0x802D15D4u:
        goto loc_802D15D4;
        break;
    case 0x802D15E8u:
        goto loc_802D15E8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
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

loc_802D10C8:
{
    r0 = MemoryInline::FlatRead8((r30 + 852));
}

loc_802D10D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D10F0;
    }
}

loc_802D10D4:
{
    r3 = r30;
    r4 = 2;
    r5 = 0;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl6_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl6_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl6_cont_802D4244;
}

loc_inl6_return:
{
}

loc_inl6_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 852), static_cast<uint8_t>(r0));
    goto loc_802D1618;
}

loc_802D10F0:
{
}

loc_802D10F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802D110C;
    }
}

loc_802D10F8:
{
    r3 = r30;
    r4 = 51;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl7_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl7_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl7_cont_802D4244;
}

loc_inl7_return:
{
}

loc_inl7_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D110C:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D1114:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D11AC;
    }
}

loc_802D1118:
{
    r0 = MemoryInline::FlatRead8((r30 + 1120));
}

loc_802D1120:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1138;
    }
}

loc_802D1124:
{
    r3 = r30;
    r4 = 41;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl8_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl8_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl8_cont_802D4244;
}

loc_inl8_return:
{
}

loc_inl8_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1138:
{
    r0 = MemoryInline::FlatRead8((r30 + 1121));
}

loc_802D1140:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1158;
    }
}

loc_802D1144:
{
    r3 = r30;
    r4 = 42;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl9_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl9_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl9_cont_802D4244;
}

loc_inl9_return:
{
}

loc_inl9_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1158:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802D1160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D1178;
    }
}

loc_802D1164:
{
    r3 = r30;
    r4 = 44;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl10_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl10_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl10_cont_802D4244;
}

loc_inl10_return:
{
}

loc_inl10_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1178:
{
    r0 = MemoryInline::FlatRead8((r30 + 845));
}

loc_802D1180:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1198;
    }
}

loc_802D1184:
{
    r3 = r30;
    r4 = 5;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl11_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl11_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl11_cont_802D4244;
}

loc_inl11_return:
{
}

loc_inl11_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1198:
{
    r3 = r30;
    r4 = 10;
    r5 = 0;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl12_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl12_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl12_cont_802D4244;
}

loc_inl12_return:
{
}

loc_inl12_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D11AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1120));
}

loc_802D11B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D11CC;
    }
}

loc_802D11B8:
{
    r3 = r30;
    r4 = 39;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl13_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl13_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl13_cont_802D4244;
}

loc_inl13_return:
{
}

loc_inl13_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D11CC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1121));
}

loc_802D11D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D11EC;
    }
}

loc_802D11D8:
{
    r3 = r30;
    r4 = 40;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl14_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl14_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl14_return;
    }
}

loc_inl14_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl14_cont_802D4244;
}

loc_inl14_return:
{
}

loc_inl14_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D11EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1128));
}

loc_802D11F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D120C;
    }
}

loc_802D11F8:
{
    r3 = r30;
    r4 = 43;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl15_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl15_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl15_cont_802D4244;
}

loc_inl15_return:
{
}

loc_inl15_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D120C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1088));
}

loc_802D1214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D122C;
    }
}

loc_802D1218:
{
    r3 = r30;
    r4 = 19;
    r5 = 0;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl16_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl16_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl16_return;
    }
}

loc_inl16_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl16_cont_802D4244;
}

loc_inl16_return:
{
}

loc_inl16_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D122C:
{
    r0 = MemoryInline::FlatRead8((r30 + 845));
}

loc_802D1234:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D124C;
    }
}

loc_802D1238:
{
    r3 = r30;
    r4 = 4;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl17_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl17_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl17_return;
    }
}

loc_inl17_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl17_cont_802D4244;
}

loc_inl17_return:
{
}

loc_inl17_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D124C:
{
    r3 = r30;
    r4 = 3;
    r5 = 0;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl18_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl18_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl18_return;
    }
}

loc_inl18_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl18_cont_802D4244;
}

loc_inl18_return:
{
}

loc_inl18_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1260:
{
    r0 = MemoryInline::FlatRead8((r30 + 852));
}

loc_802D1268:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D127C;
    }
}

loc_802D126C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 462), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 852), static_cast<uint8_t>(r0));
    goto loc_802D1618;
}

loc_802D127C:
{
}

loc_802D1280:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D1290;
    }
}

loc_802D1284:
{
    r3 = r30;
    ctx->lr = 0x802D128Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D0E30u>(&func_802D0E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802D0E30_620F = func_802D0E30_ra68_0_8_0(ctx, r3, r5, r6);
        r3 = regargs_result_802D0E30_620F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D0E30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_802D1618;
}

loc_802D1290:
{
}

loc_802D1294:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802D12AC;
    }
}

loc_802D1298:
{
    r3 = r30;
    r4 = 51;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl19_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl19_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl19_return;
    }
}

loc_inl19_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl19_cont_802D4244;
}

loc_inl19_return:
{
}

loc_inl19_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D12AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D12B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D132C;
    }
}

loc_802D12B8:
{
    r0 = MemoryInline::FlatRead8((r30 + 1056));
}

loc_802D12C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802D12DC;
    }
}

loc_802D12C4:
{
    r3 = r30;
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    ctx->lr = 0x802D12D8u;
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D33FC_6A44 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_6A44);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_6A44 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_802D1618;
}

loc_802D12DC:
{
}

loc_802D12E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802D12F8;
    }
}

loc_802D12E4:
{
    r3 = r30;
    r4 = 46;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl20_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl20_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl20_return;
    }
}

loc_inl20_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl20_cont_802D4244;
}

loc_inl20_return:
{
}

loc_inl20_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D12F8:
{
    r0 = MemoryInline::FlatRead8((r30 + 900));
}

loc_802D1300:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1318;
    }
}

loc_802D1304:
{
    r3 = r30;
    r4 = 36;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl21_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl21_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl21_return;
    }
}

loc_inl21_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl21_cont_802D4244;
}

loc_inl21_return:
{
}

loc_inl21_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1318:
{
    r3 = r30;
    r4 = 13;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl22_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl22_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl22_return;
    }
}

loc_inl22_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl22_cont_802D4244;
}

loc_inl22_return:
{
}

loc_inl22_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D132C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1056));
}

loc_802D1334:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802D134C;
    }
}

loc_802D1338:
{
    r3 = r30;
    r4 = 0x805D0000u;
    r4 = MemoryInline::FlatRead32((r4 + 18704));
    ctx->lr = 0x802D1348u;
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D33FC_7802 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_7802);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_7802 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_802D1618;
}

loc_802D134C:
{
}

loc_802D1350:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802D13A4;
    }
}

loc_802D1354:
{
    r0 = MemoryInline::FlatRead8((r30 + 452));
}

loc_802D135C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_802D1368;
    }
}

loc_802D1360:
{
    r0 = (r0 * 2840);
    r31 = (r31 + r0);
}

loc_802D1368:
{
    r3 = MemoryInline::FlatRead8((r31 + 485));
    r0 = (r3 + 248);
    r0 = (r0 & 255);
}

loc_802D1378:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802D1390;
    }
}

loc_802D137C:
{
    r3 = r30;
    r4 = 25;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl23_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl23_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl23_return;
    }
}

loc_inl23_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl23_cont_802D4244;
}

loc_inl23_return:
{
}

loc_inl23_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D1390:
{
    r3 = r30;
    r4 = 45;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl24_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl24_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl24_return;
    }
}

loc_inl24_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl24_cont_802D4244;
}

loc_inl24_return:
{
}

loc_inl24_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D13A4:
{
    r0 = MemoryInline::FlatRead8((r30 + 900));
}

loc_802D13AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D13C4;
    }
}

loc_802D13B0:
{
    r3 = r30;
    r4 = 35;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl25_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl25_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl25_return;
    }
}

loc_inl25_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl25_cont_802D4244;
}

loc_inl25_return:
{
}

loc_inl25_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D13C4:
{
    r3 = r30;
    r4 = 1;
    r5 = 1;
    // inline leaf 0x802D4244 (8 guest instruction(s))
}

loc_inl26_0x802D4244:
{
    MemoryInline::FlatWrite8((r3 + 462), static_cast<uint8_t>(r4));
    r0 = (r5 & 255);
}

loc_inl26_0x802D4250:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl26_return;
    }
}

loc_inl26_0x802D4254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 463), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 464), static_cast<uint8_t>(r0));
    goto loc_inl26_cont_802D4244;
}

loc_inl26_return:
{
}

loc_inl26_cont_802D4244:
{
    // end of inlined leaf 0x802D4244
    goto loc_802D1618;
}

loc_802D13D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D13E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D1460;
    }
}

loc_802D13E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 1095));
}

loc_802D13EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D140C;
    }
}

loc_802D13F0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1095), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 38;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D14D8;
}

loc_802D140C:
{
    r0 = MemoryInline::FlatRead8((r30 + 990));
}

loc_802D1414:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D142C;
    }
}

loc_802D1418:
{
    r3 = r30;
    r4 = 18;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D14D8;
}

loc_802D142C:
{
    r0 = MemoryInline::FlatRead8((r30 + 847));
}

loc_802D1434:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D144C;
    }
}

loc_802D1438:
{
    r3 = r30;
    r4 = 32;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D14D8;
}

loc_802D144C:
{
    r3 = r30;
    r4 = 12;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D14D8;
}

loc_802D1460:
{
    r0 = MemoryInline::FlatRead8((r30 + 1095));
}

loc_802D1468:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D1488;
    }
}

loc_802D146C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1095), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = 37;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D14D8;
}

loc_802D1488:
{
    r0 = MemoryInline::FlatRead8((r30 + 990));
}

loc_802D1490:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D14A8;
    }
}

loc_802D1494:
{
    r3 = r30;
    r4 = 9;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D14D8;
}

loc_802D14A8:
{
    r0 = MemoryInline::FlatRead8((r30 + 847));
}

loc_802D14B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D14C8;
    }
}

loc_802D14B4:
{
    r3 = r30;
    r4 = 31;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D14D8;
}

loc_802D14C8:
{
    r3 = r30;
    r4 = 8;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
}

loc_802D14D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 886), static_cast<uint8_t>(r0));
    goto loc_802D1618;
}

loc_802D14E4:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D14EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D1524;
    }
}

loc_802D14F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 990));
}

loc_802D14F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1510;
    }
}

loc_802D14FC:
{
    r3 = r30;
    r4 = 18;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1554;
}

loc_802D1510:
{
    r3 = r30;
    r4 = 11;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1554;
}

loc_802D1524:
{
    r0 = MemoryInline::FlatRead8((r30 + 990));
}

loc_802D152C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1544;
    }
}

loc_802D1530:
{
    r3 = r30;
    r4 = 9;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1554;
}

loc_802D1544:
{
    r3 = r30;
    r4 = 7;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
}

loc_802D1554:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 886), static_cast<uint8_t>(r0));
    goto loc_802D1618;
}

loc_802D1560:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D1568:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D1580;
    }
}

loc_802D156C:
{
    r3 = r30;
    r4 = 17;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D1580:
{
    r3 = r30;
    r4 = 6;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D1594:
{
    r0 = 16;
    MemoryInline::FlatWrite8((r30 + 462), static_cast<uint8_t>(r0));
    goto loc_802D1618;
}

loc_802D15A0:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D15A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D15C0;
    }
}

loc_802D15AC:
{
    r3 = r30;
    r4 = 34;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D15C0:
{
    r3 = r30;
    r4 = 33;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D15D4:
{
    r3 = r30;
    r4 = 47;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D15E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 368));
}

loc_802D15F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D1608;
    }
}

loc_802D15F4:
{
    r3 = r30;
    r4 = 50;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_802D1618;
}

loc_802D1608:
{
    r3 = r30;
    r4 = 49;
    r5 = 1;
    if constexpr (KnownRegArgsCpuCall<0x802D4244u>(&func_802D4244)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_802D4244_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D4244u>(ctx);
        r0 = ctx->gpr[0];
    }
}

loc_802D1618:
{
    r3 = r30;
    ctx->lr = 0x802D1620u;
    if constexpr (KnownRegArgsCpuCall<0x802D0D00u>(&func_802D0D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_802D0D00_B986 = func_802D0D00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D0D00_B986);
        r4 = static_cast<uint32_t>(regargs_result_802D0D00_B986 >> 32);
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
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802D0D00u>(ctx);
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
        ctr = ctx->ctr;
    }
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802D4238u) && KnownTranslatedCpuCall<0x802D4238u>::kAvailable && !KnownTranslatedCpuCall<0x802D4238u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802D4238u>()) {
        const auto state_free_result_802D4238_C088 = func_802D4238_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_802D4238_C088);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802D4238u>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_802D1628:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D0F98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D0F98_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D0F98 func_802D0F98 preserves=true fpr_mask=0x00000000
