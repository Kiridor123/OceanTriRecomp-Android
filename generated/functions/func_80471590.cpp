#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80470ED0(CpuContext* ctx);
extern "C" uint32_t func_80470ED0_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80471040(CpuContext* ctx);
extern "C" uint64_t func_80471040_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804CCC90(CpuContext* ctx);
extern "C" uint64_t func_804CCC90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80471590_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
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
    uint32_t r27_addic_src_0 = 0;
    uint32_t r27_addic_src_1 = 0;
    uint32_t r27_addic_src_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r30_addr_7 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_10 = 0;
    uint32_t r31_addr_11 = 0;
    uint32_t r31_addr_12 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r31_addr_5 = 0;
    uint32_t r31_addr_6 = 0;
    uint32_t r31_addr_7 = 0;
    uint32_t r31_addr_8 = 0;
    uint32_t r31_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80471590u);
    goto loc_80471590;

loc_80471590:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r0 = MemoryInline::FlatRead32((r13 + -15932));
    r25 = r3;
    r29 = 0;
    MemoryInline::FlatWrite32((r13 + -15928), r29);
    r4 = (r0 * 320);
    r3 = MemoryInline::FlatRead32((r13 + -15944));
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCC90_1450 = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_1450);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_1450 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -15932));
    r3 = MemoryInline::FlatRead32((r13 + -15940));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r4 = (r4_rot_0 & -64);
    if constexpr (KnownRegArgsCpuCall<0x804CCC90u>(&func_804CCC90)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCC90_17EA = func_804CCC90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCC90_17EA);
        r4 = static_cast<uint32_t>(regargs_result_804CCC90_17EA >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCC90u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    // inline leaf 0x8046F990 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16108));
    // end of inlined leaf 0x8046F990
    r0 = MemoryInline::FlatRead32((r13 + -15932));
    r31 = 0x80610000u;
    r30 = 0x80610000u;
    r27 = 31;
    r0 = (r0 * 600);
    r31 = (r31 + 608);
    r30 = (r30 + 480);
    r0 = (r3 + r0);
    r3 = (r0 + r25);
    r28 = (r3 + 32);
}

loc_804715FC:
{
    r3 = r27;
    // inline leaf 0x8046EB70 (5 guest instruction(s))
    r4 = 0x80700000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + -26256);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    // end of inlined leaf 0x8046EB70
    r26 = r3;
    goto loc_804717FC;
}

loc_8047160C:
{
    r0 = MemoryInline::FlatRead16((r26 + 108));
}

loc_80471614:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8047161C;
    }
}

loc_80471618:
{
    r28 = (r28 + 129);
}

loc_8047161C:
{
    r0 = MemoryInline::FlatRead32((r26 + 32));
}

loc_80471624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047163C;
    }
}

loc_80471628:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -15944));
    r0 = (r0 * 320);
    r3 = (r3 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80470ED0u>(&func_80470ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80470ED0_2078 = func_80470ED0_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80470ED0_2078;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80470ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
}

loc_8047163C:
{
    r0 = MemoryInline::FlatRead16((r26 + 56));
}

loc_80471644:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804717E8;
    }
}

loc_80471648:
{
    r0 = MemoryInline::FlatRead16((r26 + 226));
    r28 = (r28 + 387);
}

loc_80471654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047165C;
    }
}

loc_80471658:
{
    r28 = (r28 + 309);
}

loc_8047165C:
{
    r0 = MemoryInline::FlatRead16((r26 + 234));
}

loc_80471664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047166C;
    }
}

loc_80471668:
{
    r28 = (r28 + 1024);
}

loc_8047166C:
{
    r0 = MemoryInline::FlatRead16((r26 + 108));
}

loc_80471674:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8047167C;
    }
}

loc_80471678:
{
    r28 = (r28 + 27);
}

loc_8047167C:
{
    r3 = MemoryInline::FlatRead16((r26 + 48));
    r0 = MemoryInline::FlatRead16((r26 + 206));
}

loc_80471688:
{
    r4 = MemoryInline::FlatRead16((r26 + 208));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4_mrot_3 = (r4_rot_3 & -65536);
    r4_mdest_3 = (r4 & 65535);
    r4 = (r4_mdest_3 | r4_mrot_3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804716AC;
    }
}

loc_80471694:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r3 = (r3_rot_3 & -512);
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_4 & 65535);
    r0 = (r3 + 1561);
    goto loc_804716CC;
}

loc_804716AC:
{
}

loc_804716B0:
{
    r0 = 605;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804716CC;
    }
}

loc_804716B8:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r3 = (r3_rot_5 & -512);
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_6 & 65535);
    r0 = (r3 + 1466);
}

loc_804716CC:
{
    r4 = MemoryInline::FlatRead32((r26 + 52));
    r28 = (r28 + r0);
    r0 = MemoryInline::FlatRead16((r26 + 254));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(13));
    r5 = (r5_rot_3 & 124);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & 124);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r6 = (r6_rot_3 & 124);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r4 = (r4_rot_4 & 124);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_804716EC:
{
    r30_addr_3 = (r30 + r5);
    r5 = MemoryInline::FlatRead32(r30_addr_3);
    r30_addr_4 = (r30 + r3);
    r0 = MemoryInline::FlatRead32(r30_addr_4);
    r30_addr_5 = (r30 + r6);
    r6 = MemoryInline::FlatRead32(r30_addr_5);
    r30_addr_6 = (r30 + r4);
    r4 = MemoryInline::FlatRead32(r30_addr_6);
    r0 = (r5 + r0);
    r3 = (r28 + r6);
    r0 = (r4 + r0);
    r28 = (r3 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80471798;
    }
}

loc_80471710:
{
    r0 = MemoryInline::FlatRead16((r26 + 316));
    r28 = (r28 + 613);
}

loc_8047171C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80471728;
    }
}

loc_80471720:
{
    r28 = (r28 + 118);
    goto loc_80471734;
}

loc_80471728:
{
}

loc_8047172C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80471734;
    }
}

loc_80471730:
{
    r28 = (r28 + 834);
}

loc_80471734:
{
    r3 = MemoryInline::FlatRead16((r26 + 256));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r4 = (r4_rot_5 & 12);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 12);
    r31_addr_3 = (r31 + r4);
    r4 = MemoryInline::FlatRead32(r31_addr_3);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(20));
    r9 = (r9_rot_3 & 12);
    r31_addr_4 = (r31 + r0);
    r0 = MemoryInline::FlatRead32(r31_addr_4);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(22));
    r8 = (r8_rot_3 & 12);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r7 = (r7_rot_3 & 12);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r6 = (r6_rot_4 & 12);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(28));
    r5 = (r5_rot_4 & 12);
    r3 = (r3 & 12);
    r31_addr_5 = (r31 + r7);
    r7 = MemoryInline::FlatRead32(r31_addr_5);
    r0 = (r4 + r0);
    r31_addr_6 = (r31 + r3);
    r3 = MemoryInline::FlatRead32(r31_addr_6);
    r31_addr_7 = (r31 + r9);
    r9 = MemoryInline::FlatRead32(r31_addr_7);
    r7 = (r28 + r7);
    r31_addr_8 = (r31 + r8);
    r8 = MemoryInline::FlatRead32(r31_addr_8);
    r0 = (r3 + r0);
    r31_addr_9 = (r31 + r6);
    r6 = MemoryInline::FlatRead32(r31_addr_9);
    r31_addr_10 = (r31 + r5);
    r4 = MemoryInline::FlatRead32(r31_addr_10);
    r8 = (r9 + r8);
    r3 = (r8 + r7);
    r4 = (r6 + r4);
    r0 = (r4 + r0);
    r28 = (r3 + r0);
}

loc_80471798:
{
    r0 = MemoryInline::FlatRead32((r13 + -15920));
}

loc_804717A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r28))) {
        goto loc_804717B0;
    }
}

loc_804717A4:
{
    r3 = r26;
    ctx->lr = 0x804717ACu;
    if constexpr (KnownRegArgsCpuCall<0x80471040u>(&func_80471040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80471040_3B25 = func_80471040_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80471040_3B25);
        r4 = static_cast<uint32_t>(regargs_result_80471040_3B25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80471040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    goto loc_804717F0;
}

loc_804717B0:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -15944));
    r0 = (r0 * 320);
    r25 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r25 + 16));
}

loc_804717C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804717D4;
    }
}

loc_804717CC:
{
    r3 = r25;
    if constexpr (KnownRegArgsCpuCall<0x80470ED0u>(&func_80470ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80470ED0_4351 = func_80470ED0_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80470ED0_4351;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80470ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
}

loc_804717D4:
{
    MemoryInline::FlatWrite16((r26 + 56), static_cast<uint16_t>(r29));
    r3 = r26;
    MemoryInline::FlatWrite16((r25 + 16), static_cast<uint16_t>(r29));
    // inline leaf 0x8046EDC0 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16208));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r13 + -16208), r3);
    // end of inlined leaf 0x8046EDC0
    goto loc_804717F0;
}

loc_804717E8:
{
    r3 = r26;
    ctx->lr = 0x804717F0u;
    if constexpr (KnownRegArgsCpuCall<0x80471040u>(&func_80471040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80471040_49D9 = func_80471040_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80471040_49D9);
        r4 = static_cast<uint32_t>(regargs_result_80471040_49D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80471040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
}

loc_804717F0:
{
    MemoryInline::FlatWrite32((r26 + 28), r29);
    MemoryInline::FlatWrite32((r26 + 32), r29);
    r26 = MemoryInline::FlatRead32(r26);
}

loc_804717FC:
{
}

loc_80471800:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8047160C;
    }
}

loc_80471804:
{
    r27_addic_src_2 = r27;
    r27 = (r27_addic_src_2 + -1);
}

loc_80471808:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_804715FC;
    }
}

loc_8047180C:
{
    MemoryInline::FlatWrite32((r13 + -15924), r28);
    r3 = 0;
    // inline leaf 0x8046EB70 (5 guest instruction(s))
    r4 = 0x80700000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = (r4 + -26256);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    // end of inlined leaf 0x8046EB70
    r25 = r3;
    r26 = 0;
    goto loc_80471860;
}

loc_80471824:
{
    r0 = MemoryInline::FlatRead32((r25 + 32));
}

loc_8047182C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80471844;
    }
}

loc_80471830:
{
    r0 = MemoryInline::FlatRead32((r25 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -15944));
    r0 = (r0 * 320);
    r3 = (r3 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80470ED0u>(&func_80470ED0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_80470ED0_5590 = func_80470ED0_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80470ED0_5590;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80470ED0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
}

loc_80471844:
{
    MemoryInline::FlatWrite32((r25 + 32), r26);
    r0 = MemoryInline::FlatRead32((r25 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -15944));
    r0 = (r0 * 320);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r26));
    r25 = MemoryInline::FlatRead32(r25);
}

loc_80471860:
{
}

loc_80471864:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_80471824;
    }
}

loc_80471868:
{
    r0 = MemoryInline::FlatRead32((r13 + -15932));
    r3 = MemoryInline::FlatRead32((r13 + -15944));
    r4 = (r0 * 320);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCCC0_5BF6 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_5BF6);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_5BF6 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -15932));
    r3 = MemoryInline::FlatRead32((r13 + -15940));
    r4_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r4 = (r4_rot_8 & -64);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCCC0_5F90 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_5F90);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_5F90 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80471590(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80471590_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80471590 func_80471590 preserves=true fpr_mask=0x00000000
