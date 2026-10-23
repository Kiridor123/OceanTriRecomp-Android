#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8048BB18(CpuContext* ctx);
extern "C" uint64_t func_8048BB18_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048FC44_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r11_ca_0 = 0;
    uint32_t r11_ca_1 = 0;
    uint32_t r11_ca_2 = 0;
    uint32_t r11_ca_3 = 0;
    uint32_t r11_ca_4 = 0;
    uint32_t r11_ca_5 = 0;
    uint32_t r11_ca_6 = 0;
    uint32_t r12_ca_0 = 0;
    uint32_t r12_ca_1 = 0;
    uint32_t r12_ca_2 = 0;
    uint32_t r12_ca_3 = 0;
    uint32_t r12_ca_4 = 0;
    uint32_t r12_ca_5 = 0;
    uint32_t r29_ca_0 = 0;
    uint32_t r29_ca_1 = 0;
    uint32_t r29_ca_2 = 0;
    uint32_t r29_ca_3 = 0;
    uint32_t r29_ca_4 = 0;
    uint32_t r29_ca_5 = 0;
    uint32_t r29_ca_6 = 0;
    uint32_t r29_ca_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_18 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_10 = 0;
    uint32_t r5_rot_11 = 0;
    uint32_t r5_rot_12 = 0;
    uint32_t r5_rot_13 = 0;
    uint32_t r5_rot_14 = 0;
    uint32_t r5_rot_15 = 0;
    uint32_t r5_rot_16 = 0;
    uint32_t r5_rot_17 = 0;
    uint32_t r5_rot_18 = 0;
    uint32_t r5_rot_19 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_20 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
    uint32_t r5_rot_8 = 0;
    uint32_t r5_rot_9 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_ca_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r8_ca_3 = 0;
    uint32_t r8_ca_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;
    uint32_t r8_rot_6 = 0;
    uint32_t r8_rot_7 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_ca_3 = 0;
    uint32_t r9_ca_4 = 0;
    uint32_t r9_ca_5 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint32_t r9_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8048FC44;

loc_8048FC44:
{
    guest_range_2 = MemoryAlias::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryAlias::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryAlias::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r31 = r4;
    r30 = r3;
    r3 = 2;
    r29 = 0x80570000u;
    r29 = (r29 + 16424);
    guest_range_0 = MemoryAlias::ResolveRangeHost(r29, 0, 10u, true, false);
    r12 = MemoryAlias::ReadResolved8(guest_range_0, 0u, r29);
    r11 = MemoryAlias::ReadResolved8(guest_range_0, 1u, (r29 + 1));
    r10 = MemoryAlias::ReadResolved8(guest_range_0, 2u, (r29 + 2));
    r9 = MemoryAlias::ReadResolved8(guest_range_0, 3u, (r29 + 3));
    r8 = MemoryAlias::ReadResolved8(guest_range_0, 4u, (r29 + 4));
    r7 = MemoryAlias::ReadResolved8(guest_range_0, 5u, (r29 + 5));
    r6 = MemoryAlias::ReadResolved8(guest_range_0, 6u, (r29 + 6));
    r5 = MemoryAlias::ReadResolved8(guest_range_0, 7u, (r29 + 7));
    r4 = MemoryAlias::ReadResolved8(guest_range_0, 8u, (r29 + 8));
    r0 = MemoryAlias::ReadResolved8(guest_range_0, 9u, (r29 + 9));
    MemoryAlias::WriteResolved8(guest_range_2, 8u, (r1 + 8), static_cast<uint8_t>(r12));
    MemoryAlias::WriteResolved8(guest_range_2, 9u, (r1 + 9), static_cast<uint8_t>(r11));
    MemoryAlias::WriteResolved8(guest_range_2, 10u, (r1 + 10), static_cast<uint8_t>(r10));
    MemoryAlias::WriteResolved8(guest_range_2, 11u, (r1 + 11), static_cast<uint8_t>(r9));
    MemoryAlias::WriteResolved8(guest_range_2, 12u, (r1 + 12), static_cast<uint8_t>(r8));
    MemoryAlias::WriteResolved8(guest_range_2, 13u, (r1 + 13), static_cast<uint8_t>(r7));
    MemoryAlias::WriteResolved8(guest_range_2, 14u, (r1 + 14), static_cast<uint8_t>(r6));
    MemoryAlias::WriteResolved8(guest_range_2, 15u, (r1 + 15), static_cast<uint8_t>(r5));
    MemoryAlias::WriteResolved8(guest_range_2, 16u, (r1 + 16), static_cast<uint8_t>(r4));
    MemoryAlias::WriteResolved8(guest_range_2, 17u, (r1 + 17), static_cast<uint8_t>(r0));
    ctx->lr = 0x8048FCC0u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80478000_1DA0 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_1DA0);
        r4 = static_cast<uint32_t>(regargs_result_80478000_1DA0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8048FCC4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8048FCD0;
    }
}

loc_8048FCC8:
{
    r3 = 0;
    goto loc_80490048;
}

loc_8048FCD0:
{
    r4 = 13;
    r0 = 0;
    guest_range_1 = MemoryAlias::ResolveRangeHost((r3 + 2), 0, 19u, false, true);
    MemoryAlias::WriteResolved16(guest_range_1, 0u, (r3 + 2), static_cast<uint16_t>(r4));
    r5 = 63;
    r4 = 12;
}

loc_8048FCE8:
{
    MemoryAlias::WriteResolved16(guest_range_1, 2u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = 10;
    MemoryAlias::WriteResolved8(guest_range_1, 6u, (r3 + 8), static_cast<uint8_t>(r5));
    MemoryAlias::WriteResolved8(guest_range_1, 7u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryAlias::WriteResolved8(guest_range_1, 8u, (r3 + 10), static_cast<uint8_t>(r0));
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(r31))) {
        goto loc_8048FFF0;
    }
}

loc_8048FD00:
{
}

loc_8048FD04:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(78))) {
        goto loc_8048FFF0;
    }
}

loc_8048FD08:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r30), static_cast<int32_t>(r31));
}

loc_8048FD0C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8048FFF0;
    }
}

loc_8048FD10:
{
    r11 = (r31 - r30);
    r7 = (r31 + -8);
    r12 = (r11 + 1);
}

loc_8048FD20:
{
    if ((static_cast<int32_t>(r12) <= static_cast<int32_t>(8))) {
        goto loc_8048FFA0;
    }
}

loc_8048FD24:
{
    r5 = 0;
    r6 = 0;
    r8 = 0;
    r9 = 0;
    r10 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8048FD50;
    }
}

loc_8048FD3C:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8048FD48:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_8048FD50;
    }
}

loc_8048FD4C:
{
    r10 = 1;
}

loc_8048FD50:
{
}

loc_8048FD54:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8048FD6C;
    }
}

loc_8048FD58:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8048FD64:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_8048FD6C;
    }
}

loc_8048FD68:
{
    r9 = 1;
}

loc_8048FD6C:
{
}

loc_8048FD70:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8048FD84;
    }
}

loc_8048FD74:
{
    r0 = (r30 + -2147483648);
}

loc_8048FD7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8048FD84;
    }
}

loc_8048FD80:
{
    r8 = 1;
}

loc_8048FD84:
{
}

loc_8048FD88:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8048FDC0;
    }
}

loc_8048FD8C:
{
    r0 = (0 - r30);
    r8 = (r31 & -2147483648);
    r0 = (r0 & -2147483648);
    r4 = 1;
}

loc_8048FDA0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(r0))) {
        goto loc_8048FDB4;
    }
}

loc_8048FDA4:
{
    r0 = (r11 & -2147483648);
}

loc_8048FDAC:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_8048FDB4;
    }
}

loc_8048FDB0:
{
    r4 = 0;
}

loc_8048FDB4:
{
}

loc_8048FDB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8048FDC0;
    }
}

loc_8048FDBC:
{
    r6 = 1;
}

loc_8048FDC0:
{
}

loc_8048FDC4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8048FDEC;
    }
}

loc_8048FDC8:
{
    r0 = (r11 & -2147483648);
}

loc_8048FDCC:
{
    r4 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8048FDE0;
    }
}

loc_8048FDD4:
{
    r0 = (r12 & -2147483648);
}

loc_8048FDD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048FDE0;
    }
}

loc_8048FDDC:
{
    r4 = 0;
}

loc_8048FDE0:
{
}

loc_8048FDE4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8048FDEC;
    }
}

loc_8048FDE8:
{
    r5 = 1;
}

loc_8048FDEC:
{
}

loc_8048FDF0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8048FFA0;
    }
}

loc_8048FDF4:
{
    r5 = (r7 + 8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r30) >> 3);
    r5 = (r5 - r30);
    r4 = (r1 + 8);
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r0 + r6_ca_1);
    r0 = 1;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r5 = (r5_rot_1 & 536870911);
    r6 = (r4 + r6);
    ctr = r5;
}

loc_8048FE1C:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r7))) {
        goto loc_8048FFA0;
    }
}

loc_8048FE20:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r5 = (r5_rot_3 & -536870912);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r8 = (r8_rot_2 & 1);
    r5 = (r5 - r8);
    r10 = MemoryAlias::FlatRead8(r6);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_4 & -1);
    r7 = (r30 + 1);
    r5 = (r5 + r8);
    r9 = (r30 + 2);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r8 = (r30 + 3);
    r11 = (r10 & ~r5);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    MemoryAlias::FlatWrite8(r6, static_cast<uint8_t>(r11));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r5 = (r5_rot_5 & -536870912);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r11 = (static_cast<int32_t>(r7) >> 3);
    r7 = (r30 + 4);
    r5 = (r5 - r10);
    r6 = (r6 + 1);
    r29_ca_2 = (xer >> 29) & 1u;
    r29 = (r11 + r29_ca_2);
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_6 & -1);
    r4_addr_2 = (r4 + r29);
    r12 = MemoryAlias::FlatRead8(r4_addr_2);
    r10 = (r5 + r10);
    r11 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r10));
    r5_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r5 = (r5_rot_7 & -536870912);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r9 = (static_cast<int32_t>(r9) >> 3);
    r11 = (r12 & ~r11);
    r5 = (r5 - r10);
    r4_addr_3 = (r4 + r29);
    MemoryAlias::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r11));
    r29_ca_3 = (xer >> 29) & 1u;
    r29 = (r9 + r29_ca_3);
    r9 = (r30 + 5);
    r5_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_8 & -1);
    r4_addr_4 = (r4 + r29);
    r12 = MemoryAlias::FlatRead8(r4_addr_4);
    r5 = (r5 + r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r10 = (static_cast<int32_t>(r8) >> 3);
    r11 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r12 = (r12 & ~r11);
    r5_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r5 = (r5_rot_9 & -536870912);
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_3 & 1);
    r4_addr_5 = (r4 + r29);
    MemoryAlias::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r12));
    r5 = (r5 - r8);
    r11_ca_2 = (xer >> 29) & 1u;
    r11 = (r10 + r11_ca_2);
    r5_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_10 & -1);
    r4_addr_6 = (r4 + r11);
    r10 = MemoryAlias::FlatRead8(r4_addr_6);
    r8 = (r5 + r8);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r7) >> 3);
    r8 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
    r10 = (r10 & ~r8);
    r29_ca_4 = (xer >> 29) & 1u;
    r29 = (r5 + r29_ca_4);
    r4_addr_7 = (r4 + r11);
    MemoryAlias::FlatWrite8(r4_addr_7, static_cast<uint8_t>(r10));
    r5_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r5 = (r5_rot_11 & -536870912);
    r8_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r8 = (r8_rot_4 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r9);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r9) >> 3);
    r5 = (r5 - r8);
    r4_addr_8 = (r4 + r29);
    r11 = MemoryAlias::FlatRead8(r4_addr_8);
    r5_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_12 & -1);
    r12_ca_2 = (xer >> 29) & 1u;
    r12 = (r7 + r12_ca_2);
    r5 = (r5 + r8);
    r8 = (r30 + 6);
    r10 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r5 = (r5_rot_13 & -536870912);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 1);
    r10 = (r11 & ~r10);
    r4_addr_9 = (r4 + r29);
    MemoryAlias::FlatWrite8(r4_addr_9, static_cast<uint8_t>(r10));
    r5 = (r5 - r9);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -1);
    r9 = (r7 + r9);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r8) >> 3);
    r11_ca_3 = (xer >> 29) & 1u;
    r11 = (r5 + r11_ca_3);
    r7 = (r30 + 7);
    r4_addr_10 = (r4 + r12);
    r10 = MemoryAlias::FlatRead8(r4_addr_10);
    r9 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r9));
    r5_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r5 = (r5_rot_14 & -536870912);
    r30 = (r30 + 8);
    r10 = (r10 & ~r9);
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r9 = (r9_rot_3 & 1);
    r4_addr_11 = (r4 + r12);
    MemoryAlias::FlatWrite8(r4_addr_11, static_cast<uint8_t>(r10));
    r5 = (r5 - r9);
    r5_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_15 & -1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r7);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r8 = (static_cast<int32_t>(r7) >> 3);
    r5 = (r5 + r9);
    r4_addr_12 = (r4 + r11);
    r10 = MemoryAlias::FlatRead8(r4_addr_12);
    r9 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(29));
    r5 = (r5_rot_16 & -536870912);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r9 = (r10 & ~r9);
    r5 = (r5 - r7);
    r4_addr_13 = (r4 + r11);
    MemoryAlias::FlatWrite8(r4_addr_13, static_cast<uint8_t>(r9));
    r9_ca_2 = (xer >> 29) & 1u;
    r9 = (r8 + r9_ca_2);
    r5_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_17 & -1);
    r4_addr_14 = (r4 + r9);
    r8 = MemoryAlias::FlatRead8(r4_addr_14);
    r5 = (r5 + r7);
    r5 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r5 = (r8 & ~r5);
    r4_addr_15 = (r4 + r9);
    MemoryAlias::FlatWrite8(r4_addr_15, static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048FE20;
    }
}

loc_8048FFA0:
{
    r0 = (r31 + 1);
    r7 = (r1 + 8);
    r0 = (r0 - r30);
    r5 = 1;
    ctr = r0;
}

loc_8048FFB8:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r31))) {
        goto loc_8048FFF0;
    }
}

loc_8048FFBC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & -536870912);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r30);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r6 = (static_cast<int32_t>(r30) >> 3);
    r30 = (r30 + 1);
    r0 = (r0 - r4);
    r8_ca_2 = (xer >> 29) & 1u;
    r8 = (r6 + r8_ca_2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -1);
    r7_addr_2 = (r7 + r8);
    r6 = MemoryAlias::FlatRead8(r7_addr_2);
    r0 = (r0 + r4);
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r6 & ~r0);
    r7_addr_3 = (r7 + r8);
    MemoryAlias::FlatWrite8(r7_addr_3, static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048FFBC;
    }
}

loc_8048FFF0:
{
    guest_range_3 = MemoryAlias::ResolveRangeHost((r1 + 8), 0, 10u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 0u, (r1 + 8));
    MemoryAlias::WriteResolved8(guest_range_1, 9u, (r3 + 11), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 1u, (r1 + 9));
    MemoryAlias::WriteResolved8(guest_range_1, 10u, (r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 2u, (r1 + 10));
    MemoryAlias::WriteResolved8(guest_range_1, 11u, (r3 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 3u, (r1 + 11));
    MemoryAlias::WriteResolved8(guest_range_1, 12u, (r3 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 4u, (r1 + 12));
    MemoryAlias::WriteResolved8(guest_range_1, 13u, (r3 + 15), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 5u, (r1 + 13));
    MemoryAlias::WriteResolved8(guest_range_1, 14u, (r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 6u, (r1 + 14));
    MemoryAlias::WriteResolved8(guest_range_1, 15u, (r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 7u, (r1 + 15));
    MemoryAlias::WriteResolved8(guest_range_1, 16u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 8u, (r1 + 16));
    MemoryAlias::WriteResolved8(guest_range_1, 17u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::ReadResolved8(guest_range_3, 9u, (r1 + 17));
    MemoryAlias::WriteResolved8(guest_range_1, 18u, (r3 + 20), static_cast<uint8_t>(r0));
    ctx->lr = 0x80490044u;
    if constexpr (KnownRegArgsCpuCall<0x8048BB18u>(&func_8048BB18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        ctx->xer = xer;
        const auto regargs_result_8048BB18_6B07 = func_8048BB18_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048BB18_6B07);
        r4 = static_cast<uint32_t>(regargs_result_8048BB18_6B07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        xer = ctx->xer;
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
        ctx->gpr[10] = r10;
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
        ctx->xer = xer;
        InvokeDirectCpu<0x8048BB18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        xer = ctx->xer;
    }
    r3 = 1;
}

loc_80490048:
{
    r0 = MemoryAlias::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048FC44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048FC44_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048FC44 func_8048FC44 preserves=true fpr_mask=0x00000000
