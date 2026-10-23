#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800E4AE0(CpuContext* ctx);
extern "C" uint64_t func_800E4AE0_ra0_0_18_0(CpuContext*);
extern "C" void func_80208838(CpuContext* ctx);
extern "C" uint64_t func_80208838_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80335E3C(CpuContext* ctx);
extern "C" uint64_t func_80335E3C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80337514(CpuContext* ctx);
extern "C" uint64_t func_80337514_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80337C68(CpuContext* ctx);
extern "C" uint64_t func_80337C68_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8033886C(CpuContext* ctx);
extern "C" uint64_t func_8033886C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80339F74(CpuContext* ctx);
extern "C" uint64_t func_80339F74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803781E8(CpuContext* ctx);
extern "C" uint64_t func_803781E8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80383C0C(CpuContext* ctx);
extern "C" uint64_t func_80383C0C_ra38_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80416440(CpuContext* ctx);
extern "C" uint64_t func_80416440_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_804271B8(CpuContext* ctx);
extern "C" uint64_t func_804271B8_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80428F24(CpuContext* ctx);
extern "C" uint64_t func_80428F24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8042A9E8(CpuContext* ctx);
extern "C" uint64_t func_8042A9E8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042DE60(CpuContext* ctx);
extern "C" uint64_t func_8042DE60_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80453864(CpuContext* ctx);
extern "C" uint64_t func_80453864_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80428F74_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_80428F74;

loc_80428F74:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -352), 0, 360u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -352), r1);
    r1 = (r1 + -352);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 356u, (r1 + 356), r0);
    r11 = (r1 + 352);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r4;
    r27 = r5;
    r28 = r7;
    r30 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = MemoryInline::FlatRead32((r30 + 368));
}

loc_80428FA0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80428FB4;
    }
}

loc_80428FA4:
{
    r29 = MemoryInline::FlatRead32((r30 + 360));
    r0 = (r0 * 692);
    r29 = (r29 + r0);
    goto loc_80428FB8;
}

loc_80428FB4:
{
    r29 = 0;
}

loc_80428FB8:
{
}

loc_80428FBC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80428FF8;
    }
}

loc_80428FC0:
{
}

loc_80428FC4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80428FF8;
    }
}

loc_80428FC8:
{
}

loc_80428FCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(28))) {
        goto loc_80428FE0;
    }
}

loc_80428FD0:
{
}

loc_80428FD4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(35))) {
        goto loc_80428FE0;
    }
}

loc_80428FD8:
{
}

loc_80428FDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(12))) {
        goto loc_80428FF8;
    }
}

loc_80428FE0:
{
    r0 = MemoryInline::FlatRead32(r7);
    MemoryInline::FlatWrite32((r30 + 320), r0);
    r0 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r30 + 324), r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
    MemoryInline::FlatWrite32((r30 + 328), r0);
}

loc_80428FF8:
{
}

loc_80428FFC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80429014;
    }
}

loc_80429000:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8 = (r30 + r0);
    r31 = (r8 + 120);
    MemoryInline::FlatWrite32(r31, r5);
    goto loc_80429028;
}

loc_80429014:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r8 = (r30 + r0);
    r31 = (r8 + 120);
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80429028:
{
}

loc_8042902C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(42))) {
        goto loc_8042A058;
    }
}

loc_80429030:
{
    r8 = 0x80600000u;
    r8 = (r8 + 16664);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r8_addr_1 = (r8 + r0);
    r8 = MemoryInline::FlatRead32(r8_addr_1);
    ctr = r8;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8042A058u:
        goto loc_8042A058;
        break;
    case 0x80429048u:
        goto loc_80429048;
        break;
    case 0x80429074u:
        goto loc_80429074;
        break;
    case 0x8042907Cu:
        goto loc_8042907C;
        break;
    case 0x80429138u:
        goto loc_80429138;
        break;
    case 0x80429198u:
        goto loc_80429198;
        break;
    case 0x8042921Cu:
        goto loc_8042921C;
        break;
    case 0x804293BCu:
        goto loc_804293BC;
        break;
    case 0x804293D8u:
        goto loc_804293D8;
        break;
    case 0x80429470u:
        goto loc_80429470;
        break;
    case 0x804294D8u:
        goto loc_804294D8;
        break;
    case 0x804294FCu:
        goto loc_804294FC;
        break;
    case 0x80429598u:
        goto loc_80429598;
        break;
    case 0x8042961Cu:
        goto loc_8042961C;
        break;
    case 0x804296A8u:
        goto loc_804296A8;
        break;
    case 0x80429714u:
        goto loc_80429714;
        break;
    case 0x8042975Cu:
        goto loc_8042975C;
        break;
    case 0x80429788u:
        goto loc_80429788;
        break;
    case 0x804297A8u:
        goto loc_804297A8;
        break;
    case 0x8042993Cu:
        goto loc_8042993C;
        break;
    case 0x80429AB0u:
        goto loc_80429AB0;
        break;
    case 0x80429BD8u:
        goto loc_80429BD8;
        break;
    case 0x80429D74u:
        goto loc_80429D74;
        break;
    case 0x80429DD0u:
        goto loc_80429DD0;
        break;
    case 0x80429E58u:
        goto loc_80429E58;
        break;
    case 0x80429ED8u:
        goto loc_80429ED8;
        break;
    case 0x80429F00u:
        goto loc_80429F00;
        break;
    case 0x80429F68u:
        goto loc_80429F68;
        break;
    case 0x804294A4u:
        goto loc_804294A4;
        break;
    case 0x80429F8Cu:
        goto loc_80429F8C;
        break;
    case 0x80429FE8u:
        goto loc_80429FE8;
        break;
    case 0x8042A01Cu:
        goto loc_8042A01C;
        break;
    case 0x8042A03Cu:
        goto loc_8042A03C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80429048:
{
}

loc_8042904C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80429064;
    }
}

loc_80429050:
{
    MemoryInline::FlatWrite32(r31, r5);
    MemoryInline::FlatWrite32((r30 + 80), r5);
    r3 = 4;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80453864_33F7 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_33F7);
        r4 = static_cast<uint32_t>(regargs_result_80453864_33F7 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_8042A058;
}

loc_80429064:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429074:
{
    MemoryInline::FlatWrite32((r30 + 96), r5);
    goto loc_8042A058;
}

loc_8042907C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -32064), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429090:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804290C8;
    }
}

loc_80429094:
{
}

loc_80429098:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804290A8;
    }
}

loc_8042909C:
{
    r3 = 5;
    if constexpr (KnownRegArgsCpuCall<0x80453864u>(&func_80453864)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80453864_39D9 = func_80453864_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80453864_39D9);
        r4 = static_cast<uint32_t>(regargs_result_80453864_39D9 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80453864u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_8042A058;
}

loc_804290A8:
{
    r3 = MemoryInline::FlatRead32(r7);
    r4 = 0;
    ctx->lr = 0x804290B4u;
    if constexpr (KnownRegArgsCpuCall<0x8042A9E8u>(&func_8042A9E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042A9E8_3DD6 = func_8042A9E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042A9E8_3DD6);
        r4 = static_cast<uint32_t>(regargs_result_8042A9E8_3DD6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042A9E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
    r0 = (r3 & 255);
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    MemoryInline::FlatWriteRam8((r3 + 354), static_cast<uint8_t>(r0));
}

loc_804290C8:
{
}

loc_804290CC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_804290D0:
{
    r27 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + -32092));
}

loc_804290DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_804290E0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r27 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804290F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429108;
    }
}

loc_804290F4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    MemoryInline::FlatWrite32((r27 + -32084), r0);
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWrite32((r27 + -32080), r0);
    goto loc_80429114;
}

loc_80429108:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r27 + -32084), r0);
    MemoryInline::FlatWrite32((r27 + -32080), r0);
}

loc_80429114:
{
    r3 = MemoryInline::FlatRead32((r27 + -32088));
    r4 = (r27 + -32084);
    r12 = MemoryInline::FlatRead32((r27 + -32092));
    ctr = r12;
    ctx->lr = 0x80429128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r27 + -32100), r0);
    MemoryInline::FlatWrite32((r27 + -32092), r0);
    goto loc_8042A058;
}

loc_80429138:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_80429144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429148:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429158:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8042916C;
    }
}

loc_8042915C:
{
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_80429174;
}

loc_8042916C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_80429174:
{
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x80429188u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
    goto loc_8042A058;
}

loc_80429198:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804291A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804291B4;
    }
}

loc_804291A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 368));
    r4 = 0;
    ctx->lr = 0x804291B0u;
    if constexpr (KnownRegArgsCpuCall<0x8042A9E8u>(&func_8042A9E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042A9E8_59E1 = func_8042A9E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042A9E8_59E1);
        r4 = static_cast<uint32_t>(regargs_result_8042A9E8_59E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042A9E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_804291C0;
}

loc_804291B4:
{
    r0 = -1;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
}

loc_804291C0:
{
    r27 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + -32092));
}

loc_804291CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_804291D0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804291E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804291F0;
    }
}

loc_804291E4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    MemoryInline::FlatWrite32((r27 + -32084), r0);
    goto loc_804291F8;
}

loc_804291F0:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r27 + -32084), r0);
}

loc_804291F8:
{
    r3 = MemoryInline::FlatRead32((r27 + -32088));
    r4 = (r27 + -32084);
    r12 = MemoryInline::FlatRead32((r27 + -32092));
    ctr = r12;
    ctx->lr = 0x8042920Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r27 + -32100), r0);
    MemoryInline::FlatWrite32((r27 + -32092), r0);
    goto loc_8042A058;
}

loc_8042921C:
{
    r0 = MemoryInline::FlatRead32((r30 + 368));
}

loc_80429224:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429228:
{
    r3 = MemoryInline::FlatRead32((r30 + 360));
    r0 = (r0 * 692);
    r3 = (r3 + r0);
}

loc_80429238:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_8042923C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_4 & -64);
    r31 = (r3 + r0);
    r27 = 1;
    MemoryInline::FlatWrite32((r31 + 144), r27);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 148), static_cast<uint8_t>(r0));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl3_0x8041A358:
{
}

loc_inl3_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8041A36C;
    }
}

loc_inl3_0x8041A360:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_inl3_cont_8041A358;
}

loc_inl3_0x8041A36C:
{
    r3 = 0;
}

loc_inl3_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r5 = (r31 + 176);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 248));
    ctr = r12;
    ctx->lr = 0x8042927Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl5_0x8041A358:
{
}

loc_inl5_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8041A36C;
    }
}

loc_inl5_0x8041A360:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    goto loc_inl5_cont_8041A358;
}

loc_inl5_0x8041A36C:
{
    r3 = 0;
}

loc_inl5_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r5 = (r31 + 156);
    r6 = 16;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 240));
    ctr = r12;
    ctx->lr = 0x804292A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r27));
    r0 = MemoryInline::FlatRead32((r30 + 68));
}

loc_804292B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80429328;
    }
}

loc_804292BC:
{
    r3 = (r1 + 48);
    r4 = (r31 + 176);
    ctx->lr = 0x804292C8u;
    if constexpr (KnownRegArgsCpuCall<0x8042DE60u>(&func_8042DE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042DE60_7E94 = func_8042DE60_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042DE60_7E94);
        r4 = static_cast<uint32_t>(regargs_result_8042DE60_7E94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042DE60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    r3 = (r1 + 48);
    ctx->lr = 0x804292D0u;
    if constexpr (KnownRegArgsCpuCall<0x803781E8u>(&func_803781E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803781E8_8773 = func_803781E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803781E8_8773);
        r4 = static_cast<uint32_t>(regargs_result_803781E8_8773 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x803781E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    r3 = (r31 + 176);
    ctx->lr = 0x804292D8u;
    if constexpr (KnownRegArgsCpuCall<0x804271B8u>(&func_804271B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804271B8_908E = func_804271B8_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804271B8_908E);
        r4 = static_cast<uint32_t>(regargs_result_804271B8_908E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
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
        InvokeDirectCpu<0x804271B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    }
    r0 = (r3 * 288);
    r3 = (r30 + r0);
    r5 = MemoryInline::FlatRead8((r3 + 29869));
    r4 = (r30 + 65536);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r4 + r0);
    MemoryInline::FlatWrite8((r3 + -15244), static_cast<uint8_t>(r5));
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r26 = (r26_rot_1 & -16);
    r3 = (r4 + r26);
    r3 = (r3 + -15372);
    r4 = (r1 + 48);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_9BB2 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_9BB2;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = (r30 + 65536);
    r3 = (r0 + r26);
    r3 = (r3 + -15308);
    r4 = (r31 + 156);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_A06C = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_A06C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 2;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
}

loc_80429328:
{
    r3 = (r31 + 176);
    ctx->lr = 0x80429330u;
    if constexpr (KnownRegArgsCpuCall<0x804271B8u>(&func_804271B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804271B8_A5F3 = func_804271B8_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804271B8_A5F3);
        r4 = static_cast<uint32_t>(regargs_result_804271B8_A5F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
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
        InvokeDirectCpu<0x804271B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    }
    r26 = r3;
    r3 = 12;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl6_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl6_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl6_0x803BECF4;
    }
}

loc_inl6_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
    r3 = (r0 ^ 1);
    goto loc_inl6_cont_803BECD4;
}

loc_inl6_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_6 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_inl6_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_80429344:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80429370;
    }
}

loc_80429348:
{
    r26 = (r26 * 288);
    r3 = 41;
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl7_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl7_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl7_0x80455E4C;
    }
}

loc_inl7_0x80455E48:
{
    r3 = 0;
}

loc_inl7_0x80455E4C:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl7_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
    r4 = r3;
    r3 = (r1 + 200);
    r5 = (r30 + r26);
    r5 = (r5 + 29842);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8042936Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_B6AD = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_B6AD);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_B6AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_80429394;
}

loc_80429370:
{
    r26 = (r26 * 288);
    r3 = 41;
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl8_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl8_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl8_0x80455E4C;
    }
}

loc_inl8_0x80455E48:
{
    r3 = 0;
}

loc_inl8_0x80455E4C:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl8_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
    r4 = r3;
    r3 = (r1 + 200);
    r5 = (r30 + r26);
    r5 = (r5 + 29832);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80429394u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_C342 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_C342);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_C342 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
}

loc_80429394:
{
    r3 = 1;
    r4 = 0;
    r5 = 16777216;
    r5 = (r5 + -16);
    r6 = (r1 + 200);
    r8 = (r30 + r26);
    r7 = (r8 + 29832);
    r8 = (r8 + 29842);
    ctx->lr = 0x804293B8u;
    if constexpr (KnownRegArgsCpuCall<0x80383C0Cu>(&func_80383C0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80383C0C_CCDF = func_80383C0C_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80383C0C_CCDF);
        r4 = static_cast<uint32_t>(regargs_result_80383C0C_CCDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x80383C0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_8042A058;
}

loc_804293BC:
{
}

loc_804293C0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_804293C4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 112), r0);
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15495), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_804293D8:
{
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_804293E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429408;
    }
}

loc_804293E4:
{
    r3 = (r4 & 255);
    r4 = 4;
    ctx->lr = 0x804293F0u;
    if constexpr (KnownRegArgsCpuCall<0x80428F24u>(&func_80428F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80428F24_D777 = func_80428F24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80428F24_D777);
        r4 = static_cast<uint32_t>(regargs_result_80428F24_D777 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80428F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r30 + 80), r27);
    r4 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
    goto loc_8042A058;
}

loc_80429408:
{
}

loc_8042940C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8042944C;
    }
}

loc_80429410:
{
}

loc_80429414:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8042944C;
    }
}

loc_80429418:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 2147155968);
}

loc_80429424:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(54))) {
        goto loc_80429438;
    }
}

loc_80429428:
{
    r0 = 18;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    goto loc_8042944C;
}

loc_80429438:
{
    r0 = 19;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8042944Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_DF9B = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_DF9B);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_DF9B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
}

loc_8042944C:
{
    r0 = 6;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
    goto loc_8042A058;
}

loc_80429470:
{
    r3 = (r4 & 255);
    r4 = 4;
    ctx->lr = 0x8042947Cu;
    if constexpr (KnownRegArgsCpuCall<0x80428F24u>(&func_80428F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80428F24_E977 = func_80428F24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80428F24_E977);
        r4 = static_cast<uint32_t>(regargs_result_80428F24_E977 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80428F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_80429494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_80429498:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r4));
    goto loc_8042A058;
}

loc_804294A4:
{
    r3 = (r4 & 255);
    r4 = 4;
    ctx->lr = 0x804294B0u;
    if constexpr (KnownRegArgsCpuCall<0x80428F24u>(&func_80428F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80428F24_EEBC = func_80428F24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80428F24_EEBC);
        r4 = static_cast<uint32_t>(regargs_result_80428F24_EEBC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80428F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_804294C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_804294CC:
{
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r4));
    goto loc_8042A058;
}

loc_804294D8:
{
    MemoryInline::FlatWrite8((r30 + 107), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_804294EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8042A058;
    }
}

loc_804294F0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 68), r0);
    goto loc_8042A058;
}

loc_804294FC:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429504:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429518;
    }
}

loc_80429508:
{
}

loc_8042950C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80429518;
    }
}

loc_80429510:
{
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8((r29 + 141), static_cast<uint8_t>(r0));
}

loc_80429518:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_80429524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80429570;
    }
}

loc_80429528:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429538:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429548;
    }
}

loc_8042953C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_80429550;
}

loc_80429548:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_80429550:
{
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x80429564u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
}

loc_80429570:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429578:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_8042957C:
{
    r0 = MemoryInline::FlatRead32((r30 + 68));
}

loc_80429584:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429588:
{
    r0 = 1;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429598:
{
    r3 = MemoryInline::FlatRead32((r30 + 360));
    r0 = MemoryInline::FlatRead32((r30 + 368));
    r0 = (r0 * 692);
    r3 = (r3 + r0);
}

loc_804295AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804295D0;
    }
}

loc_804295B0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_12 & -64);
    r3 = (r3 + r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 144), r0);
    MemoryInline::FlatWrite8((r3 + 148), static_cast<uint8_t>(r0));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15495), static_cast<uint8_t>(r0));
}

loc_804295D0:
{
    r5 = -1;
    MemoryInline::FlatWrite32((r30 + 368), r5);
    r26 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r30 + 106), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_804295F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8042960C;
    }
}

loc_804295F8:
{
    ctx->lr = 0x804295FCu;
    if constexpr (KnownRegArgsCpuCall<0x80208838u>(&func_80208838)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80208838_106AA = func_80208838_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80208838_106AA);
        r4 = static_cast<uint32_t>(regargs_result_80208838_106AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x80208838u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r26));
    r0 = 25;
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
}

loc_8042960C:
{
    r0 = 7;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_8042961C:
{
    r6 = 0;
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = (r30 + r5);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead32((r30 + 360));
    r0 = MemoryInline::FlatRead32((r30 + 368));
    r0 = (r0 * 692);
    r3 = (r3 + r0);
}

loc_80429640:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80429654;
    }
}

loc_80429644:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r0 = (r0_rot_14 & -64);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 144), r6);
    MemoryInline::FlatWrite8((r3 + 148), static_cast<uint8_t>(r6));
}

loc_80429654:
{
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_8042965C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80429698;
    }
}

loc_80429660:
{
    r6 = 0;
    r5 = (r30 + 65536);
    MemoryInline::FlatWrite8((r5 + -16047), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead32((r30 + 68));
}

loc_80429674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429678:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_16 & -16);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + -15372), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + -15308), static_cast<uint8_t>(r6));
    r0 = 2;
    MemoryInline::FlatWrite8((r5 + -16046), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429698:
{
    r3 = (r4 & 255);
    r4 = 4;
    ctx->lr = 0x804296A4u;
    if constexpr (KnownRegArgsCpuCall<0x80428F24u>(&func_80428F24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80428F24_11703 = func_80428F24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80428F24_11703);
        r4 = static_cast<uint32_t>(regargs_result_80428F24_11703 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80428F24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_8042A058;
}

loc_804296A8:
{
}

loc_804296AC:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_804296E4;
    }
}

loc_804296B0:
{
    r3 = (r1 + 28);
    r4 = r28;
    ctx->lr = 0x804296BCu;
    if constexpr (KnownRegArgsCpuCall<0x8042DE60u>(&func_8042DE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042DE60_11BBA = func_8042DE60_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042DE60_11BBA);
        r4 = static_cast<uint32_t>(regargs_result_8042DE60_11BBA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042DE60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r28 + 53);
    ctx->lr = 0x804296C8u;
    if constexpr (KnownRegArgsCpuCall<0x80416440u>(&func_80416440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80416440_12530 = func_80416440_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80416440_12530);
        r4 = static_cast<uint32_t>(regargs_result_80416440_12530 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80416440u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r5 = MemoryInline::FlatRead32((r28 + 568));
    r6 = (r28 + 53);
    r7 = (r1 + 28);
    r8 = (r28 + 32);
    ctx->lr = 0x804296E4u;
    if constexpr (KnownRegArgsCpuCall<0x80383C0Cu>(&func_80383C0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80383C0C_12D76 = func_80383C0C_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80383C0C_12D76);
        r4 = static_cast<uint32_t>(regargs_result_80383C0C_12D76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x80383C0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
}

loc_804296E4:
{
    r3 = (r30 + 31960);
    r0 = 16;
    ctr = r0;
}

loc_804296F0:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804296F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80429708;
    }
}

loc_804296FC:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429708:
{
    r3 = (r3 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804296F0;
    }
}

loc_80429710:
{
    goto loc_8042A058;
}

loc_80429714:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15222));
}

loc_80429720:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_80429724:
{
    r3 = (r1 + 8);
    r4 = r28;
    ctx->lr = 0x80429730u;
    if constexpr (KnownRegArgsCpuCall<0x8042DE60u>(&func_8042DE60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042DE60_13985 = func_8042DE60_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042DE60_13985);
        r4 = static_cast<uint32_t>(regargs_result_8042DE60_13985 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042DE60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    // inline leaf 0x800E8A3C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16732));
    // end of inlined leaf 0x800E8A3C
    r4 = (r28 + 53);
    ctx->lr = 0x8042973Cu;
    if constexpr (KnownRegArgsCpuCall<0x80416440u>(&func_80416440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80416440_142FB = func_80416440_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80416440_142FB);
        r4 = static_cast<uint32_t>(regargs_result_80416440_142FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80416440u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r5 = MemoryInline::FlatRead32((r28 + 568));
    r6 = (r28 + 53);
    r7 = (r1 + 8);
    r8 = (r28 + 32);
    ctx->lr = 0x80429758u;
    if constexpr (KnownRegArgsCpuCall<0x80383C0Cu>(&func_80383C0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80383C0C_14B40 = func_80383C0C_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80383C0C_14B40);
        r4 = static_cast<uint32_t>(regargs_result_80383C0C_14B40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x80383C0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_8042A058;
}

loc_8042975C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429764:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_80429768:
{
}

loc_8042976C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429770:
{
    r5 = MemoryInline::FlatRead32(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_17 & -64);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 152), r5);
    goto loc_8042A058;
}

loc_80429788:
{
}

loc_8042978C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429790:
{
    r5 = MemoryInline::FlatRead32(r7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_18 & -64);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 152), r5);
    goto loc_8042A058;
}

loc_804297A8:
{
}

loc_804297AC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_804297B8;
    }
}

loc_804297B0:
{
    MemoryInline::FlatWrite32((r30 + 112), r5);
    goto loc_804298A8;
}

loc_804297B8:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 112), r0);
    r7 = 0;
    r4 = 1;
    ctr = r6;
}

loc_804297D0:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80429808;
    }
}

loc_804297D4:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804297E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_804297F0;
    }
}

loc_804297EC:
{
    MemoryInline::FlatWrite32((r30 + 112), r4);
}

loc_804297F0:
{
    r0 = MemoryInline::FlatRead8(r28);
    r28 = (r28 + 1);
    r3 = (r30 + r7);
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804297D4;
    }
}

loc_80429808:
{
    r5 = -1;
    r3 = (4 - r7);
}

loc_80429814:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(4))) {
        goto loc_804298A8;
    }
}

loc_80429818:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_19 & 536870911);
}

loc_80429820:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80429894;
    }
}

loc_80429828:
{
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80429828;
    }
}

loc_8042988C:
{
    r3 = (r3 & 7);
}

loc_80429890:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804298A8;
    }
}

loc_80429894:
{
    ctr = r3;
}

loc_80429898:
{
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80429898;
    }
}

loc_804298A8:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_804298B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80429900;
    }
}

loc_804298B8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804298C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_804298D8;
    }
}

loc_804298CC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_804298E0;
}

loc_804298D8:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_804298E0:
{
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x804298F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
}

loc_80429900:
{
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_80429908:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_8042990C:
{
    r0 = MemoryInline::FlatRead32((r30 + 68));
}

loc_80429914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80429924;
    }
}

loc_80429918:
{
    r0 = 3;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
}

loc_80429924:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    ctx->lr = 0x80429938u;
    if constexpr (KnownRegArgsCpuCall<0x800E4AE0u>(&func_800E4AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800E4AE0_16E60 = func_800E4AE0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4AE0_16E60);
        r4 = static_cast<uint32_t>(regargs_result_800E4AE0_16E60 >> 32);
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
        InvokeDirectCpu<0x800E4AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_8042A058;
}

loc_8042993C:
{
}

loc_80429940:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_8042994C;
    }
}

loc_80429944:
{
    MemoryInline::FlatWrite32((r30 + 112), r5);
    goto loc_80429A68;
}

loc_8042994C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 112), r0);
    r7 = 0;
    r4 = 1;
    ctr = r6;
}

loc_80429964:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_8042999C;
    }
}

loc_80429968:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8042997C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80429984;
    }
}

loc_80429980:
{
    MemoryInline::FlatWrite32((r30 + 112), r4);
}

loc_80429984:
{
    r0 = MemoryInline::FlatRead8(r28);
    r28 = (r28 + 1);
    r3 = (r30 + r7);
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80429968;
    }
}

loc_8042999C:
{
    r5 = -1;
    r3 = (4 - r7);
}

loc_804299A8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(4))) {
        goto loc_80429A3C;
    }
}

loc_804299AC:
{
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_21 & 536870911);
}

loc_804299B4:
{
    ctr = r0;
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80429A28;
    }
}

loc_804299BC:
{
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804299BC;
    }
}

loc_80429A20:
{
    r3 = (r3 & 7);
}

loc_80429A24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80429A3C;
    }
}

loc_80429A28:
{
    ctr = r3;
}

loc_80429A2C:
{
    r4 = (r30 + r7);
    MemoryInline::FlatWrite8((r4 + 116), static_cast<uint8_t>(r5));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80429A2C;
    }
}

loc_80429A3C:
{
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_80429A44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80429A68;
    }
}

loc_80429A48:
{
    r0 = 6;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r0));
    r0 = 18;
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429A68:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x8042B2DC (8 guest instruction(s))
}

loc_inl11_0x8042B2DC:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = MemoryInline::FlatRead32((r3 + 112));
}

loc_inl11_0x8042B2E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x8042B2EC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 72), r0);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    goto loc_inl11_cont_8042B2DC;
}

loc_inl11_return:
{
}

loc_inl11_cont_8042B2DC:
{
    // end of inlined leaf 0x8042B2DC
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_80429A7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_80429A80:
{
    r0 = MemoryInline::FlatRead32((r30 + 68));
}

loc_80429A88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80429A98;
    }
}

loc_80429A8C:
{
    r0 = 3;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
}

loc_80429A98:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r30 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
    ctx->lr = 0x80429AACu;
    if constexpr (KnownRegArgsCpuCall<0x800E4AE0u>(&func_800E4AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800E4AE0_18550 = func_800E4AE0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4AE0_18550);
        r4 = static_cast<uint32_t>(regargs_result_800E4AE0_18550 >> 32);
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
        InvokeDirectCpu<0x800E4AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_8042A058;
}

loc_80429AB0:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429AB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429ADC;
    }
}

loc_80429ABC:
{
}

loc_80429AC0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80429ADC;
    }
}

loc_80429AC4:
{
    r4 = MemoryInline::FlatRead8(r7);
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_24 & -64);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 148), static_cast<uint8_t>(r4));
}

loc_80429ADC:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_80429AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80429B3C;
    }
}

loc_80429AEC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429AFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429B0C;
    }
}

loc_80429B00:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_80429B14;
}

loc_80429B0C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_80429B14:
{
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite32((r26 + -32080), r0);
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x80429B30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
}

loc_80429B3C:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429B44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_80429B48:
{
}

loc_80429B4C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429B50:
{
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_26 & -64);
    r5 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 148));
}

loc_80429B68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80429B90;
    }
}

loc_80429B6C:
{
    r0 = 1;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15495), static_cast<uint8_t>(r0));
    r4 = 2;
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
    goto loc_80429BB0;
}

loc_80429B90:
{
    r0 = 0;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15495), static_cast<uint8_t>(r0));
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r30 + 106));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
}

loc_80429BB0:
{
    r0 = MemoryInline::FlatRead8((r5 + 148));
}

loc_80429BB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8042A058;
    }
}

loc_80429BBC:
{
    r0 = MemoryInline::FlatRead32((r30 + 68));
}

loc_80429BC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429BC8:
{
    r0 = 5;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429BD8:
{
}

loc_80429BDC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429BE0:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r0 = (r0_rot_27 & -64);
    r31 = (r29 + r0);
    r0 = MemoryInline::FlatRead8(r7);
    MemoryInline::FlatWrite8((r31 + 148), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 148));
}

loc_80429C08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80429C38;
    }
}

loc_80429C0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 107));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80429C18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_80429C24;
    }
}

loc_80429C1C:
{
    r3 = 30;
    ctx->lr = 0x80429C24u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_1A06D = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_1A06D);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_1A06D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
}

loc_80429C24:
{
    r4 = 2;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r4));
    goto loc_80429C44;
}

loc_80429C38:
{
    r0 = 1;
    r3 = (r30 + r4);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r0));
}

loc_80429C44:
{
    r0 = MemoryInline::FlatRead8((r30 + 107));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
}

loc_80429C54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8042A058;
    }
}

loc_80429C58:
{
    r3 = (r31 + 176);
    ctx->lr = 0x80429C60u;
    if constexpr (KnownRegArgsCpuCall<0x804271B8u>(&func_804271B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804271B8_1AC21 = func_804271B8_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804271B8_1AC21);
        r4 = static_cast<uint32_t>(regargs_result_804271B8_1AC21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
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
        InvokeDirectCpu<0x804271B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    }
    r26 = (r3 * 288);
    r3 = (r30 + r26);
    r3 = (r3 + 29832);
    r4 = (r30 + 29544);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80429C78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429C7C:
{
    r3 = (r30 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 30113));
}

loc_80429C88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429C8C:
{
    r0 = MemoryInline::FlatRead8((r31 + 148));
}

loc_80429C94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80429CF4;
    }
}

loc_80429C98:
{
    r3 = 12;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl12_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl12_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl12_0x803BECF4;
    }
}

loc_inl12_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_8);
    r3 = (r0 ^ 1);
    goto loc_inl12_cont_803BECD4;
}

loc_inl12_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_9);
}

loc_inl12_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_80429CA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80429CD0;
    }
}

loc_80429CAC:
{
    r3 = 35;
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl13_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl13_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl13_0x80455E4C;
    }
}

loc_inl13_0x80455E48:
{
    r3 = 0;
}

loc_inl13_0x80455E4C:
{
    r0_rot_28 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_28 & -4);
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_4);
}

loc_inl13_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
    r4 = r3;
    r3 = (r1 + 72);
    r5 = (r30 + r26);
    r5 = (r5 + 29842);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80429CCCu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_1BFDB = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_1BFDB);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_1BFDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_80429D4C;
}

loc_80429CD0:
{
    r3 = 35;
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl14_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl14_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl14_0x80455E4C;
    }
}

loc_inl14_0x80455E48:
{
    r3 = 0;
}

loc_inl14_0x80455E4C:
{
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_29 & -4);
    r4_addr_5 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_5);
}

loc_inl14_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
    r4 = r3;
    r3 = (r1 + 72);
    r5 = (r30 + r26);
    r5 = (r5 + 29832);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80429CF0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_1CC60 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_1CC60);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_1CC60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_80429D4C;
}

loc_80429CF4:
{
    r3 = 12;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl15_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl15_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl15_0x803BECF4;
    }
}

loc_inl15_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_11 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_11);
    r3 = (r0 ^ 1);
    goto loc_inl15_cont_803BECD4;
}

loc_inl15_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_12);
}

loc_inl15_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_80429D04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80429D2C;
    }
}

loc_80429D08:
{
    r3 = 36;
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl16_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl16_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl16_0x80455E4C;
    }
}

loc_inl16_0x80455E48:
{
    r3 = 0;
}

loc_inl16_0x80455E4C:
{
    r0_rot_30 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_30 & -4);
    r4_addr_6 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_6);
}

loc_inl16_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
    r4 = r3;
    r3 = (r1 + 72);
    r5 = (r30 + r26);
    r5 = (r5 + 29842);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80429D28u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_1DC4F = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_1DC4F);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_1DC4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_80429D4C;
}

loc_80429D2C:
{
    r3 = 36;
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl17_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl17_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl17_0x80455E4C;
    }
}

loc_inl17_0x80455E48:
{
    r3 = 0;
}

loc_inl17_0x80455E4C:
{
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_31 & -4);
    r4_addr_7 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_7);
}

loc_inl17_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
    r4 = r3;
    r3 = (r1 + 72);
    r5 = (r30 + r26);
    r5 = (r5 + 29832);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80429D4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_1E8D4 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_1E8D4);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_1E8D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
}

loc_80429D4C:
{
    r3 = 1;
    r4 = 0;
    r5 = 16777216;
    r5 = (r5 + -16);
    r6 = (r1 + 72);
    r8 = (r30 + r26);
    r7 = (r8 + 29832);
    r8 = (r8 + 29842);
    ctx->lr = 0x80429D70u;
    if constexpr (KnownRegArgsCpuCall<0x80383C0Cu>(&func_80383C0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80383C0C_1F273 = func_80383C0C_ra38_1fa_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80383C0C_1F273);
        r4 = static_cast<uint32_t>(regargs_result_80383C0C_1F273 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x80383C0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_8042A058;
}

loc_80429D74:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_80429D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429D84:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429D94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429DA4;
    }
}

loc_80429D98:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_80429DAC;
}

loc_80429DA4:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_80429DAC:
{
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x80429DC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
    goto loc_8042A058;
}

loc_80429DD0:
{
    r3 = MemoryInline::FlatRead8((r7 + 2));
    r0 = (r3 + -1);
}

loc_80429DDC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80429E08;
    }
}

loc_80429DE0:
{
    r0 = (r3 + -5);
}

loc_80429DE8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80429E18;
    }
}

loc_80429DEC:
{
}

loc_80429DF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_80429E28;
    }
}

loc_80429DF4:
{
}

loc_80429DF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(10))) {
        goto loc_80429E38;
    }
}

loc_80429DFC:
{
}

loc_80429E00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(13))) {
        goto loc_80429E48;
    }
}

loc_80429E04:
{
    goto loc_8042A058;
}

loc_80429E08:
{
    r3 = (r4 & 255);
    r4 = r28;
    ctx->lr = 0x80429E14u;
    if constexpr (KnownRegArgsCpuCall<0x80335E3Cu>(&func_80335E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80335E3C_20692 = func_80335E3C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80335E3C_20692);
        r4 = static_cast<uint32_t>(regargs_result_80335E3C_20692 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x80335E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_8042A058;
}

loc_80429E18:
{
    r3 = (r4 & 255);
    r4 = r28;
    ctx->lr = 0x80429E24u;
    if constexpr (KnownRegArgsCpuCall<0x80337514u>(&func_80337514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80337514_20FED = func_80337514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80337514_20FED);
        r4 = static_cast<uint32_t>(regargs_result_80337514_20FED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
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
        InvokeDirectCpu<0x80337514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    }
    goto loc_8042A058;
}

loc_80429E28:
{
    r3 = (r4 & 255);
    r4 = r28;
    ctx->lr = 0x80429E34u;
    if constexpr (KnownRegArgsCpuCall<0x80337C68u>(&func_80337C68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80337C68_21A30 = func_80337C68_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80337C68_21A30);
        r4 = static_cast<uint32_t>(regargs_result_80337C68_21A30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
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
        InvokeDirectCpu<0x80337C68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    }
    goto loc_8042A058;
}

loc_80429E38:
{
    r3 = (r4 & 255);
    r4 = r28;
    ctx->lr = 0x80429E44u;
    if constexpr (KnownRegArgsCpuCall<0x8033886Cu>(&func_8033886C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8033886C_22439 = func_8033886C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8033886C_22439);
        r4 = static_cast<uint32_t>(regargs_result_8033886C_22439 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8033886Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_8042A058;
}

loc_80429E48:
{
    r3 = (r4 & 255);
    r4 = r28;
    ctx->lr = 0x80429E54u;
    if constexpr (KnownRegArgsCpuCall<0x80339F74u>(&func_80339F74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80339F74_22D94 = func_80339F74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80339F74_22D94);
        r4 = static_cast<uint32_t>(regargs_result_80339F74_22D94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
        ctx->gpr[12] = r12;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
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
        InvokeDirectCpu<0x80339F74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
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
    }
    goto loc_8042A058;
}

loc_80429E58:
{
}

loc_80429E5C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80429E68;
    }
}

loc_80429E60:
{
    MemoryInline::FlatWrite32((r30 + 72), r5);
    goto loc_80429E70;
}

loc_80429E68:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 72), r0);
}

loc_80429E70:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_80429E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80429EC8;
    }
}

loc_80429E80:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429EA0;
    }
}

loc_80429E94:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_80429EA8;
}

loc_80429EA0:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_80429EA8:
{
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x80429EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
}

loc_80429EC8:
{
    r0 = 8;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429ED8:
{
}

loc_80429EDC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80429EE8;
    }
}

loc_80429EE0:
{
    MemoryInline::FlatWrite32((r30 + 72), r5);
    goto loc_80429EF0;
}

loc_80429EE8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 72), r0);
}

loc_80429EF0:
{
    r3 = 0;
    r4 = 0;
    // inline leaf 0x8042B4EC (11 guest instruction(s))
}

loc_inl18_0x8042B4EC:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = MemoryInline::FlatRead32((r3 + 72));
}

loc_inl18_0x8042B4F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl18_return;
    }
}

loc_inl18_0x8042B4FC:
{
    r0 = 9;
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    r0 = 34;
    MemoryInline::FlatWrite8((r3 + 23), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    goto loc_inl18_cont_8042B4EC;
}

loc_inl18_return:
{
}

loc_inl18_cont_8042B4EC:
{
    // end of inlined leaf 0x8042B4EC
    goto loc_8042A058;
}

loc_80429F00:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_80429F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80429F58;
    }
}

loc_80429F10:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429F20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429F30;
    }
}

loc_80429F24:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_80429F38;
}

loc_80429F30:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_80429F38:
{
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x80429F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
}

loc_80429F58:
{
    r0 = 6;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -16046), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429F68:
{
    MemoryInline::FlatWrite32((r30 + 80), r5);
    r5 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r5));
    r0 = 2;
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -15783), static_cast<uint8_t>(r0));
    goto loc_8042A058;
}

loc_80429F8C:
{
    r26 = (r30 + 65536);
    r0 = MemoryInline::FlatRead32((r26 + -32092));
}

loc_80429F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042A058;
    }
}

loc_80429F9C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r26 + -32088), r0);
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80429FAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80429FBC;
    }
}

loc_80429FB0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
    goto loc_80429FC4;
}

loc_80429FBC:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r26 + -32084), r0);
}

loc_80429FC4:
{
    r3 = MemoryInline::FlatRead32((r26 + -32088));
    r4 = (r26 + -32084);
    r12 = MemoryInline::FlatRead32((r26 + -32092));
    ctr = r12;
    ctx->lr = 0x80429FD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + -32100), r0);
    MemoryInline::FlatWrite32((r26 + -32092), r0);
    goto loc_8042A058;
}

loc_80429FE8:
{
    r0 = MemoryInline::FlatRead8((r30 + 23));
}

loc_80429FF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(25))) {
        goto loc_80429FFC;
    }
}

loc_80429FF4:
{
    r3 = 0;
    ctx->lr = 0x80429FFCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_25776 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_25776);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_25776 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
}

loc_80429FFC:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -32060));
}

loc_8042A008:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8042A058;
    }
}

loc_8042A00C:
{
    r3 = MemoryInline::FlatRead32(r28);
    r4 = 0;
    ctx->lr = 0x8042A018u;
    if constexpr (KnownRegArgsCpuCall<0x8042A9E8u>(&func_8042A9E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042A9E8_26164 = func_8042A9E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042A9E8_26164);
        r4 = static_cast<uint32_t>(regargs_result_8042A9E8_26164 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042A9E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_8042A058;
}

loc_8042A01C:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -32060));
}

loc_8042A028:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8042A058;
    }
}

loc_8042A02C:
{
    r3 = MemoryInline::FlatRead32(r7);
    r4 = 0;
    ctx->lr = 0x8042A038u;
    if constexpr (KnownRegArgsCpuCall<0x8042A9E8u>(&func_8042A9E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042A9E8_26B75 = func_8042A9E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042A9E8_26B75);
        r4 = static_cast<uint32_t>(regargs_result_8042A9E8_26B75 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042A9E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
    goto loc_8042A058;
}

loc_8042A03C:
{
    r3 = (r30 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -32060));
}

loc_8042A048:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8042A058;
    }
}

loc_8042A04C:
{
    r3 = MemoryInline::FlatRead32(r7);
    r4 = 1;
    ctx->lr = 0x8042A058u;
    if constexpr (KnownRegArgsCpuCall<0x8042A9E8u>(&func_8042A9E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8042A9E8_27586 = func_8042A9E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042A9E8_27586);
        r4 = static_cast<uint32_t>(regargs_result_8042A9E8_27586 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8042A9E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
    }
}

loc_8042A058:
{
    r3 = 0;
    r11 = (r1 + 352);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 356));
    ctx->lr = r0;
    r1 = (r1 + 352);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80428F74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80428F74_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x03FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80428F74 func_80428F74 preserves=true fpr_mask=0x00000000
