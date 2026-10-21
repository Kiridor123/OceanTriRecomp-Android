#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022009C(CpuContext* ctx);
extern "C" uint64_t func_8022009C_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA63C(CpuContext* ctx);
extern "C" uint32_t func_802AA63C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802FB02C(CpuContext* ctx);
extern "C" uint64_t func_802FB02C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802FF2AC(CpuContext* ctx);
extern "C" uint64_t func_802FF2AC_ra0_0_18_0(CpuContext*);
extern "C" void func_8035B660(CpuContext* ctx);
extern "C" uint64_t func_8035B660_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803776C8(CpuContext* ctx);
extern "C" uint64_t func_803776C8_ra1c0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802FB02C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_addze_src_1 = 0;
    uint32_t r0_addze_src_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
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
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802FB02Cu);
    goto loc_802FB02C;

loc_802FB02C:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802FB048:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802FB400;
    }
}

loc_802FB04C:
{
    r3 = r31;
    // inline leaf 0x8004D274 (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17824), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(4) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r3) >> 4);
    r0_addze_src_1 = r0;
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_1 + r0_ca_1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r5 = MemoryInline::FlatRead16((r6 + 18394));
    r4 = 1;
    r0 = (r3 & 15);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 65535);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite16((r6 + 18394), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004D274
}

loc_802FB058:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(162))) {
        goto loc_802FB400;
    }
}

loc_802FB05C:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -27644);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802FB2FCu:
        goto loc_802FB2FC;
        break;
    case 0x802FB334u:
        goto loc_802FB334;
        break;
    case 0x802FB36Cu:
        goto loc_802FB36C;
        break;
    case 0x802FB2E0u:
        goto loc_802FB2E0;
        break;
    case 0x802FB318u:
        goto loc_802FB318;
        break;
    case 0x802FB350u:
        goto loc_802FB350;
        break;
    case 0x802FB400u:
        goto loc_802FB400;
        break;
    case 0x802FB150u:
        goto loc_802FB150;
        break;
    case 0x802FB284u:
        goto loc_802FB284;
        break;
    case 0x802FB130u:
        goto loc_802FB130;
        break;
    case 0x802FB118u:
        goto loc_802FB118;
        break;
    case 0x802FB0FCu:
        goto loc_802FB0FC;
        break;
    case 0x802FB0DCu:
        goto loc_802FB0DC;
        break;
    case 0x802FB144u:
        goto loc_802FB144;
        break;
    case 0x802FB0C0u:
        goto loc_802FB0C0;
        break;
    case 0x802FB098u:
        goto loc_802FB098;
        break;
    case 0x802FB084u:
        goto loc_802FB084;
        break;
    case 0x802FB074u:
        goto loc_802FB074;
        break;
    case 0x802FB3D4u:
        goto loc_802FB3D4;
        break;
    case 0x802FB3ECu:
        goto loc_802FB3EC;
        break;
    case 0x802FB16Cu:
        goto loc_802FB16C;
        break;
    case 0x802FB188u:
        goto loc_802FB188;
        break;
    case 0x802FB1F8u:
        goto loc_802FB1F8;
        break;
    case 0x802FB214u:
        goto loc_802FB214;
        break;
    case 0x802FB1A4u:
        goto loc_802FB1A4;
        break;
    case 0x802FB1C0u:
        goto loc_802FB1C0;
        break;
    case 0x802FB1DCu:
        goto loc_802FB1DC;
        break;
    case 0x802FB230u:
        goto loc_802FB230;
        break;
    case 0x802FB24Cu:
        goto loc_802FB24C;
        break;
    case 0x802FB268u:
        goto loc_802FB268;
        break;
    case 0x802FB388u:
        goto loc_802FB388;
        break;
    case 0x802FB2A8u:
        goto loc_802FB2A8;
        break;
    case 0x802FB2C4u:
        goto loc_802FB2C4;
        break;
    case 0x802FB158u:
        goto loc_802FB158;
        break;
    case 0x802FB3C4u:
        goto loc_802FB3C4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        ctx->xer = xer;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802FB074:
{
    r0 = 9;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB084:
{
    r0 = 5;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    // inline leaf 0x8033C3E8 (10 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15875));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r3 + 15875), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15875));
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8033C3E8
    goto loc_802FB400;
}

loc_802FB098:
{
    r0 = 4;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    // inline leaf 0x8033C3E8 (10 guest instruction(s))
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15875));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r3 + 15875), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15875));
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8033C3E8
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r3 + 20844);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_802FB400;
}

loc_802FB0C0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15874));
}

loc_802FB0CC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_802FB400;
    }
}

loc_802FB0D0:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 15874), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB0DC:
{
    r3 = 2;
    // inline leaf 0x802FF300 (9 guest instruction(s))
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = MemoryInline::FlatRead8((r6 + 18483));
    r4 = 1;
    r0 = (r3 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite8((r6 + 18483), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802FF300
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r3 + 20844);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_802FB400;
}

loc_802FB0FC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15874));
}

loc_802FB108:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB10C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 15874), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB118:
{
    r0 = 3;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x802FF300 (9 guest instruction(s))
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = MemoryInline::FlatRead8((r6 + 18483));
    r4 = 1;
    r0 = (r3 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite8((r6 + 18483), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802FF300
    goto loc_802FB400;
}

loc_802FB130:
{
    r0 = 2;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r0));
    ctx->lr = 0x802FB140u;
    if constexpr (KnownRegArgsCpuCall<0x802FF2ACu>(&func_802FF2AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802FF2AC_3149 = func_802FF2AC_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_802FF2AC_3149);
        r4 = static_cast<uint32_t>(regargs_result_802FF2AC_3149 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x802FF2ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    goto loc_802FB400;
}

loc_802FB144:
{
    r3 = 26;
    ctx->lr = 0x802FB14Cu;
    if constexpr (KnownRegArgsCpuCall<0x802FB02Cu>(&func_802FB02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_802FB02C_3588 = func_802FB02C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802FB02C_3588);
        r4 = static_cast<uint32_t>(regargs_result_802FB02C_3588 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x802FB02Cu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_802FB400;
}

loc_802FB150:
{
    ctx->lr = 0x802FB154u;
    if constexpr (KnownRegArgsCpuCall<0x8022009Cu>(&func_8022009C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8022009C_3D2F = func_8022009C_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8022009C_3D2F);
        r4 = static_cast<uint32_t>(regargs_result_8022009C_3D2F >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8022009Cu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_802FB400;
}

loc_802FB158:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    MemoryInline::FlatWriteRam8((r3 + 10), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB16C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18005));
}

loc_802FB178:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB17C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 18005), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB188:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18005));
}

loc_802FB194:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_802FB400;
    }
}

loc_802FB198:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 18005), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB1A4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18007));
}

loc_802FB1B0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_802FB400;
    }
}

loc_802FB1B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 18007), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB1C0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18007));
}

loc_802FB1CC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB1D0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 18007), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB1DC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18007));
}

loc_802FB1E8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_802FB400;
    }
}

loc_802FB1EC:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 18007), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB1F8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18004));
}

loc_802FB204:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB208:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 18004), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB214:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18004));
}

loc_802FB220:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_802FB400;
    }
}

loc_802FB224:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 18004), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB230:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18006));
}

loc_802FB23C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_802FB400;
    }
}

loc_802FB240:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 18006), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB24C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18006));
}

loc_802FB258:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB25C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 18006), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB268:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18006));
}

loc_802FB274:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_802FB400;
    }
}

loc_802FB278:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 18006), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB284:
{
    r4 = 1;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    MemoryInline::FlatWrite8((r3 + 15873), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15874));
}

loc_802FB29C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_802FB400;
    }
}

loc_802FB2A0:
{
    MemoryInline::FlatWrite8((r3 + 15874), static_cast<uint8_t>(r4));
    goto loc_802FB400;
}

loc_802FB2A8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18032));
}

loc_802FB2B4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB2B8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 18032), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB2C4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18032));
}

loc_802FB2D0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_802FB400;
    }
}

loc_802FB2D4:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 18032), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB2E0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 16186));
}

loc_802FB2EC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB2F0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 16186), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB2FC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 16186));
}

loc_802FB308:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_802FB400;
    }
}

loc_802FB30C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 16186), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB318:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 16198));
}

loc_802FB324:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB328:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 16198), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB334:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 16198));
}

loc_802FB340:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_802FB400;
    }
}

loc_802FB344:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 16198), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB350:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 16210));
}

loc_802FB35C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_802FB400;
    }
}

loc_802FB360:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 16210), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB36C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 16210));
}

loc_802FB378:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_802FB400;
    }
}

loc_802FB37C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 16210), static_cast<uint8_t>(r0));
    goto loc_802FB400;
}

loc_802FB388:
{
    r3 = 3;
    ctx->lr = 0x802FB390u;
    if constexpr (KnownRegArgsCpuCall<0x802AA63Cu>(&func_802AA63C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_802AA63C_626E = func_802AA63C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802AA63C_626E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->xer = xer;
        InvokeDirectCpu<0x802AA63Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r3 = 0;
    r4 = 512;
    // inline leaf 0x80211E80 (19 guest instruction(s))
}

loc_inl5_0x80211E80:
{
    r0 = (r3 & 255);
}

loc_inl5_0x80211E88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(5))) {
        goto loc_inl5_0x80211EA8;
    }
}

loc_inl5_0x80211E8C:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r4 = (r4 & 65535);
    r3 = 0x805C0000u;
    r3 = (r3 + -25584);
    r3_addr_2 = (r3 + r5);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_inl5_0x80211EA4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl5_0x80211EB8;
    }
}

loc_inl5_0x80211EA8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17204));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl5_cont_80211E80;
}

loc_inl5_0x80211EB8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17204));
    r3_addr_3 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_inl5_cont_80211E80:
{
    // end of inlined leaf 0x80211E80
    r4 = r3;
    r3 = (r1 + 8);
    r5 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x802FB3B4u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8045E54C_6AC2 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_6AC2);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_6AC2 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 0;
    r4 = (r1 + 8);
    ctx->lr = 0x802FB3C0u;
    if constexpr (KnownRegArgsCpuCall<0x8035B660u>(&func_8035B660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8035B660_7278 = func_8035B660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8035B660_7278);
        r4 = static_cast<uint32_t>(regargs_result_8035B660_7278 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8035B660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_802FB400;
}

loc_802FB3C4:
{
    // inline leaf 0x8004DE08 (10 guest instruction(s))
}

loc_inl6_0x8004DE08:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = MemoryInline::FlatRead16((r3 + 15844));
}

loc_inl6_0x8004DE14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x8004DE20;
    }
}

loc_inl6_0x8004DE18:
{
    r3 = 0;
    goto loc_inl6_cont_8004DE08;
}

loc_inl6_0x8004DE20:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 15844), static_cast<uint16_t>(r0));
    r3 = 1;
}

loc_inl6_cont_8004DE08:
{
    // end of inlined leaf 0x8004DE08
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    ctx->lr = 0x802FB3D0u;
    if constexpr (KnownRegArgsCpuCall<0x803776C8u>(&func_803776C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_803776C8_7A35 = func_803776C8_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803776C8_7A35);
        r4 = static_cast<uint32_t>(regargs_result_803776C8_7A35 >> 32);
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
        ctx->xer = xer;
        InvokeDirectCpu<0x803776C8u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_802FB400;
}

loc_802FB3D4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r3 + 21084);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_802FB400;
}

loc_802FB3EC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r3 = (r3 + 21084);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802FB400:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->xer = xer;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802FB02C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802FB02C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802FB02C func_802FB02C preserves=true fpr_mask=0x00000000
