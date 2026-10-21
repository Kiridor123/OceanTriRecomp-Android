#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80474EC0_ra38_fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7)
{
    uint32_t addr_lfdx_80474F00_loc_0 = 0;
    uint32_t addr_lfdx_804752FC_loc_0 = 0;
    uint32_t addr_stfdx_80474F04_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80474EC0u);
    goto loc_80474EC0;

loc_80474EC0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r4 = (r4 + 4);
    r6 = (r5 + 8);
    r9 = 0;
    r10 = 24;
    r7 = 1;
    r31 = 0x80000000u;
}

loc_80474EF0:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80474EF8:
{
    f1.d = MemoryInline::FlatReadFloat64(r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    addr_lfdx_80474F00_loc_0 = (r5 + r0);
    f7.d = MemoryInline::FlatReadFloat64(addr_lfdx_80474F00_loc_0);
    addr_stfdx_80474F04_loc_0 = (r5 + r0);
    MemoryInline::FlatWriteFloat64(addr_stfdx_80474F04_loc_0, f1.d);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80475100;
    }
}

loc_80474F0C:
{
    r12 = (r7 + -1);
    r8 = r9;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r9), static_cast<int32_t>(r12));
}

loc_80474F18:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8047510C;
    }
}

loc_80474F1C:
{
    r24 = (r12 - r9);
    r30 = (r7 + -9);
    r0 = (r24 + 1);
}

loc_80474F2C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_804750B4;
    }
}

loc_80474F30:
{
    r29 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r25 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80474F58;
    }
}

loc_80474F48:
{
    r11 = (r31 + -2);
}

loc_80474F50:
{
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(r11))) {
        goto loc_80474F58;
    }
}

loc_80474F54:
{
    r25 = 1;
}

loc_80474F58:
{
}

loc_80474F5C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80474F70;
    }
}

loc_80474F60:
{
    r11 = (r31 + -2);
}

loc_80474F68:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r11))) {
        goto loc_80474F70;
    }
}

loc_80474F6C:
{
    r26 = 1;
}

loc_80474F70:
{
}

loc_80474F74:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80474F88;
    }
}

loc_80474F78:
{
    r11 = (r9 + -2147483648);
}

loc_80474F80:
{
    if ((static_cast<uint32_t>(r11) == static_cast<uint32_t>(0))) {
        goto loc_80474F88;
    }
}

loc_80474F84:
{
    r27 = 1;
}

loc_80474F88:
{
}

loc_80474F8C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80474FC8;
    }
}

loc_80474F90:
{
    r12 = (r7 + -1);
    r11 = (0 - r9);
    r25 = (r12 & -2147483648);
    r11 = (r11 & -2147483648);
    r12 = 1;
}

loc_80474FA8:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r11))) {
        goto loc_80474FBC;
    }
}

loc_80474FAC:
{
    r11 = (r24 & -2147483648);
}

loc_80474FB4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(r11))) {
        goto loc_80474FBC;
    }
}

loc_80474FB8:
{
    r12 = 0;
}

loc_80474FBC:
{
}

loc_80474FC0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80474FC8;
    }
}

loc_80474FC4:
{
    r28 = 1;
}

loc_80474FC8:
{
}

loc_80474FCC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80474FF4;
    }
}

loc_80474FD0:
{
    r11 = (r24 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(0));
}

loc_80474FD4:
{
    r11 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80474FE8;
    }
}

loc_80474FDC:
{
    r0 = (r0 & -2147483648);
}

loc_80474FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80474FE8;
    }
}

loc_80474FE4:
{
    r11 = 0;
}

loc_80474FE8:
{
}

loc_80474FEC:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80474FF4;
    }
}

loc_80474FF0:
{
    r29 = 1;
}

loc_80474FF4:
{
}

loc_80474FF8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804750B4;
    }
}

loc_80474FFC:
{
    r0 = (r30 + 8);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r12 = (r12_rot_2 & -8);
    r0 = (r0 - r9);
    r11 = (r12 + r3);
    r12 = (r5 + r12);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    r11 = (r10 + r11);
    ctr = r0;
}

loc_80475020:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r30))) {
        goto loc_804750B4;
    }
}

loc_80475024:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r12, 0, 64u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 0u, r12);
    r8 = (r8 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost(r11, 0, 64u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r11);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 8u, (r12 + 8));
    f6.d = (f3.d * f1.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 8u, (r11 + 8));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r12 + 16));
    f5.d = (f2.d * f1.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r11 + 16));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r12 + 24));
    f7.d = (f7.d - f6.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 24u, (r11 + 24));
    f6.d = (f4.d * f3.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r12 + 32));
    f7.d = (f7.d - f5.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r11 + 32));
    f5.d = (f2.d * f1.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r12 + 40));
    f7.d = (f7.d - f6.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 40u, (r11 + 40));
    f6.d = (f4.d * f3.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 48u, (r12 + 48));
    f7.d = (f7.d - f5.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r11 + 48));
    f5.d = (f2.d * f1.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r12 + 56));
    f7.d = (f7.d - f6.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 56u, (r11 + 56));
    f3.d = (f4.d * f3.d);
    r11 = (r11 + 64);
    f7.d = (f7.d - f5.d);
    r12 = (r12 + 64);
    f1.d = (f2.d * f1.d);
    f7.d = (f7.d - f3.d);
    f7.d = (f7.d - f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80475024;
    }
}

loc_804750B4:
{
    r11 = (r7 + -1);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r24 = (r24_rot_2 & -8);
    r0 = (r11 + 1);
    r12 = (r24 + r3);
    r25 = (r5 + r24);
    r0 = (r0 - r8);
    r12 = (r10 + r12);
    ctr = r0;
}

loc_804750D8:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r11))) {
        goto loc_8047510C;
    }
}

loc_804750DC:
{
    f2.d = MemoryInline::FlatReadFloat64(r25);
    r25 = (r25 + 8);
    f1.d = MemoryInline::FlatReadFloat64(r12);
    r12 = (r12 + 8);
    r8 = (r8 + 1);
    f1.d = (f2.d * f1.d);
    f7.d = (f7.d - f1.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804750DC;
    }
}

loc_804750FC:
{
    goto loc_8047510C;
}

loc_80475100:
{
    SetCRFloatResident(cr, 0, f7.d, f0.d);
}

loc_80475104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8047510C;
    }
}

loc_80475108:
{
    r9 = r7;
}

loc_8047510C:
{
    r7 = (r7 + 1);
    MemoryInline::FlatWriteFloat64(r6, f7.d);
}

loc_80475118:
{
    r10 = (r10 + 24);
    r4 = (r4 + 4);
    r6 = (r6 + 8);
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(2))) {
        goto loc_80474EF0;
    }
}

loc_80475128:
{
    r25 = (r5 + 16);
    r4 = 6;
    r8 = 48;
    r6 = 2;
}

loc_80475138:
{
    r7 = (r6 + 1);
    f6.d = MemoryInline::FlatReadFloat64(r25);
}

loc_80475144:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(2))) {
        goto loc_804752EC;
    }
}

loc_80475148:
{
    r24 = (2 - r7);
    r26 = (r24 + 1);
}

loc_80475154:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(8))) {
        goto loc_804752AC;
    }
}

loc_80475158:
{
}

loc_8047515C:
{
    r10 = 0;
    r11 = 0;
    r12 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(3))) {
        goto loc_80475174;
    }
}

loc_80475170:
{
    r0 = 1;
}

loc_80475174:
{
}

loc_80475178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80475190;
    }
}

loc_8047517C:
{
    r9 = (r6 + 1);
    r0 = (r9 + -2147483648);
}

loc_80475188:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80475190;
    }
}

loc_8047518C:
{
    r12 = 1;
}

loc_80475190:
{
}

loc_80475194:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804751C4;
    }
}

loc_80475198:
{
    r0 = (r6 + 1);
    r9 = 1;
    r0 = (0 - r0);
    r0 = (r0 & -2147483648);
}

loc_804751A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804751B8;
    }
}

loc_804751AC:
{
    r0 = (r24 & -2147483648);
}

loc_804751B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804751B8;
    }
}

loc_804751B4:
{
    r9 = 0;
}

loc_804751B8:
{
}

loc_804751BC:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804751C4;
    }
}

loc_804751C0:
{
    r11 = 1;
}

loc_804751C4:
{
}

loc_804751C8:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_804751F0;
    }
}

loc_804751CC:
{
    r0 = (r24 & -2147483648);
}

loc_804751D0:
{
    r9 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804751E4;
    }
}

loc_804751D8:
{
    r0 = (r26 & -2147483648);
}

loc_804751DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804751E4;
    }
}

loc_804751E0:
{
    r9 = 0;
}

loc_804751E4:
{
}

loc_804751E8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804751F0;
    }
}

loc_804751EC:
{
    r10 = 1;
}

loc_804751F0:
{
}

loc_804751F4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804752AC;
    }
}

loc_804751F8:
{
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r10 = (r10_rot_2 & -8);
    r0 = (2 - r7);
    r9 = (r10 + r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    r10 = (r5 + r10);
    r9 = (r8 + r9);
    ctr = r0;
}

loc_80475218:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(-6))) {
        goto loc_804752AC;
    }
}

loc_8047521C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r10, 0, 64u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, r10);
    r7 = (r7 + 8);
    guest_range_5 = MemoryInline::ResolveRangeHost(r9, 0, 64u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, r9);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 8u, (r10 + 8));
    f5.d = (f2.d * f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 8u, (r9 + 8));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r10 + 16));
    f4.d = (f1.d * f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 16u, (r9 + 16));
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 24u, (r10 + 24));
    f6.d = (f6.d - f5.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 24u, (r9 + 24));
    f5.d = (f3.d * f2.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r10 + 32));
    f6.d = (f6.d - f4.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 32u, (r9 + 32));
    f4.d = (f1.d * f0.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 40u, (r10 + 40));
    f6.d = (f6.d - f5.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 40u, (r9 + 40));
    f5.d = (f3.d * f2.d);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r10 + 48));
    f6.d = (f6.d - f4.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 48u, (r9 + 48));
    f4.d = (f1.d * f0.d);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 56u, (r10 + 56));
    f6.d = (f6.d - f5.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 56u, (r9 + 56));
    f2.d = (f3.d * f2.d);
    r9 = (r9 + 64);
    f6.d = (f6.d - f4.d);
    r10 = (r10 + 64);
    f0.d = (f1.d * f0.d);
    f6.d = (f6.d - f2.d);
    f6.d = (f6.d - f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8047521C;
    }
}

loc_804752AC:
{
    r10_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r10 = (r10_rot_4 & -8);
    r0 = (3 - r7);
    r9 = (r10 + r3);
    r9 = (r8 + r9);
    r10 = (r5 + r10);
    ctr = r0;
}

loc_804752C8:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(2))) {
        goto loc_804752EC;
    }
}

loc_804752CC:
{
    f1.d = MemoryInline::FlatReadFloat64(r10);
    r10 = (r10 + 8);
    f0.d = MemoryInline::FlatReadFloat64(r9);
    r9 = (r9 + 8);
    r7 = (r7 + 1);
    f0.d = (f1.d * f0.d);
    f6.d = (f6.d - f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804752CC;
    }
}

loc_804752EC:
{
    r0 = (r4 + r6);
    r6 = (r6 + -1);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r4 = (r4 + -3);
    addr_lfdx_804752FC_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_804752FC_loc_0);
}

loc_80475304:
{
    r8 = (r8 + -24);
    f0.d = (f6.d / f0.d);
    MemoryInline::FlatWriteFloat64(r25, f0.d);
    r25 = (r25 + -8);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(1))) {
        goto loc_80475138;
    }
}

loc_80475318:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80474EC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80474EC0_ra38_fe_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FD3 gpr_return=0x00000010 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80474EC0 func_80474EC0 preserves=true fpr_mask=0x00000000
