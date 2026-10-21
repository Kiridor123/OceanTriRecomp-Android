#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80500DA0(CpuContext* ctx);
extern "C" void func_80500DA0_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804FD0B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r11_addr_0 = 0;
    uint32_t r11_addr_1 = 0;
    uint32_t r11_addr_2 = 0;
    uint32_t r11_addr_3 = 0;
    uint32_t r11_addr_4 = 0;
    uint32_t r11_addr_5 = 0;
    uint32_t r11_addr_6 = 0;
    uint32_t r11_addr_7 = 0;
    uint32_t r11_addr_8 = 0;
    uint32_t r11_addr_9 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_addr_5 = 0;
    uint32_t r12_addr_6 = 0;
    uint32_t r12_addr_7 = 0;
    uint32_t r12_addr_8 = 0;
    uint32_t r12_addr_9 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_addr_6 = 0;
    uint32_t r29_addr_7 = 0;
    uint32_t r29_addr_8 = 0;
    uint32_t r29_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t r24 = ctx->gpr[24];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804FD0B0u);
    goto loc_804FD0B0;

loc_804FD0B0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r31 = 0x80760000u;
    r3 = 0x80630000u;
    r31 = (r31 + 3936);
    r30 = (r31 + 0);
    r3 = (r3 + -5112);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80500DA0u>(&func_80500DA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_80500DA0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80500DA0u>(ctx);
        r1 = ctx->gpr[1];
    }
    r0 = 2;
    r29 = (r31 + 3520);
    r12 = (r31 + 8552);
    r11 = (r31 + 8584);
    r3 = 0;
    r28 = 0;
    ctr = r0;
}

loc_804FD0FC:
{
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r9 = (r9_rot_2 & 510);
    r4 = (r3 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r8 = (r3 + 2);
    r29_addr_2 = (r29 + r0);
    MemoryInline::FlatWrite32(r29_addr_2, r28);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r10 = (r10_rot_2 & 1020);
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r27 = (r27_rot_2 & 510);
    r6 = (r3 + 4);
    r12_addr_2 = (r12 + r9);
    MemoryInline::FlatWrite16(r12_addr_2, static_cast<uint16_t>(r28));
    r5 = (r3 + 5);
    r7 = (r3 + 3);
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r26 = (r26_rot_2 & 510);
    r11_addr_2 = (r11 + r9);
    MemoryInline::FlatWrite16(r11_addr_2, static_cast<uint16_t>(r28));
    r9_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r9 = (r9_rot_3 & 1020);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & 1020);
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r25 = (r25_rot_2 & 510);
    r29_addr_3 = (r29 + r10);
    MemoryInline::FlatWrite32(r29_addr_3, r28);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 510);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & 1020);
    r0 = (r3 + 6);
    r12_addr_3 = (r12 + r27);
    MemoryInline::FlatWrite16(r12_addr_3, static_cast<uint16_t>(r28));
    r4 = (r3 + 7);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r24 = (r24_rot_2 & 510);
    r11_addr_3 = (r11 + r27);
    MemoryInline::FlatWrite16(r11_addr_3, static_cast<uint16_t>(r28));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r27 = (r27_rot_3 & 510);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r29_addr_4 = (r29 + r9);
    MemoryInline::FlatWrite32(r29_addr_4, r28);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 510);
    r3 = (r3 + 8);
    r12_addr_4 = (r12 + r26);
    MemoryInline::FlatWrite16(r12_addr_4, static_cast<uint16_t>(r28));
    r11_addr_4 = (r11 + r26);
    MemoryInline::FlatWrite16(r11_addr_4, static_cast<uint16_t>(r28));
    r29_addr_5 = (r29 + r8);
    MemoryInline::FlatWrite32(r29_addr_5, r28);
    r12_addr_5 = (r12 + r10);
    MemoryInline::FlatWrite16(r12_addr_5, static_cast<uint16_t>(r28));
    r11_addr_5 = (r11 + r10);
    MemoryInline::FlatWrite16(r11_addr_5, static_cast<uint16_t>(r28));
    r29_addr_6 = (r29 + r7);
    MemoryInline::FlatWrite32(r29_addr_6, r28);
    r12_addr_6 = (r12 + r25);
    MemoryInline::FlatWrite16(r12_addr_6, static_cast<uint16_t>(r28));
    r11_addr_6 = (r11 + r25);
    MemoryInline::FlatWrite16(r11_addr_6, static_cast<uint16_t>(r28));
    r29_addr_7 = (r29 + r6);
    MemoryInline::FlatWrite32(r29_addr_7, r28);
    r12_addr_7 = (r12 + r24);
    MemoryInline::FlatWrite16(r12_addr_7, static_cast<uint16_t>(r28));
    r11_addr_7 = (r11 + r24);
    MemoryInline::FlatWrite16(r11_addr_7, static_cast<uint16_t>(r28));
    r29_addr_8 = (r29 + r5);
    MemoryInline::FlatWrite32(r29_addr_8, r28);
    r12_addr_8 = (r12 + r27);
    MemoryInline::FlatWrite16(r12_addr_8, static_cast<uint16_t>(r28));
    r11_addr_8 = (r11 + r27);
    MemoryInline::FlatWrite16(r11_addr_8, static_cast<uint16_t>(r28));
    r29_addr_9 = (r29 + r0);
    MemoryInline::FlatWrite32(r29_addr_9, r28);
    r12_addr_9 = (r12 + r4);
    MemoryInline::FlatWrite16(r12_addr_9, static_cast<uint16_t>(r28));
    r11_addr_9 = (r11 + r4);
    MemoryInline::FlatWrite16(r11_addr_9, static_cast<uint16_t>(r28));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804FD0FC;
    }
}

loc_804FD1C0:
{
    r0 = 3;
    r4 = (r30 + 88);
    r3 = (r30 + 28);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 1792u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 24), r4);
    r5 = r30;
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 20), r3);
    ctr = r0;
}

loc_804FD1E0:
{
    r0 = (5 - r4);
}

loc_804FD1E8:
{
    r0 = (r0 * 96);
    r3 = (r30 + r0);
    r0 = (r3 + 1188);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804FD204;
    }
}

loc_804FD1FC:
{
    r0 = 0;
    goto loc_804FD214;
}

loc_804FD204:
{
    r0 = (r4 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_804FD214:
{
}

loc_804FD218:
{
    MemoryInline::FlatWrite32((r5 + 32), r0);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_804FD228;
    }
}

loc_804FD220:
{
    r0 = 0;
    goto loc_804FD238;
}

loc_804FD228:
{
    r0 = (r4 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_804FD238:
{
    r4_addic_src_2 = r4;
    r4 = (r4_addic_src_2 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804FD23C:
{
    MemoryInline::FlatWrite32((r5 + 36), r0);
    r0 = (5 - r4);
    r0 = (r0 * 96);
    r3 = (r30 + r0);
    r0 = (r3 + 1188);
    MemoryInline::FlatWrite32((r5 + 40), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804FD260;
    }
}

loc_804FD258:
{
    r0 = 0;
    goto loc_804FD270;
}

loc_804FD260:
{
    r0 = (r4 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_804FD270:
{
}

loc_804FD274:
{
    MemoryInline::FlatWrite32((r5 + 44), r0);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(5))) {
        goto loc_804FD284;
    }
}

loc_804FD27C:
{
    r0 = 0;
    goto loc_804FD294;
}

loc_804FD284:
{
    r0 = (r4 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 28);
}

loc_804FD294:
{
    MemoryInline::FlatWrite32((r5 + 48), r0);
    r5 = (r5 + 24);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804FD1E0;
    }
}

loc_804FD2A4:
{
    r0 = 5;
    r4 = (r30 + 216);
    r3 = (r30 + 108);
    MemoryInline::WriteResolved32(guest_range_1, 92u, (r30 + 104), r4);
    r5 = r30;
    r4 = (r30 + 228);
    r6 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 100), r3);
    ctr = r0;
}

loc_804FD2C8:
{
}

loc_804FD2CC:
{
    MemoryInline::FlatWrite32((r5 + 108), r4);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804FD2DC;
    }
}

loc_804FD2D4:
{
    r0 = 0;
    goto loc_804FD2EC;
}

loc_804FD2DC:
{
    r0 = (r6 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_804FD2EC:
{
}

loc_804FD2F0:
{
    MemoryInline::FlatWrite32((r5 + 112), r0);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(9))) {
        goto loc_804FD300;
    }
}

loc_804FD2F8:
{
    r0 = 0;
    goto loc_804FD310;
}

loc_804FD300:
{
    r0 = (r6 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_804FD310:
{
    MemoryInline::FlatWrite32((r5 + 116), r0);
    r4 = (r4 + 96);
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + 1);
}

loc_804FD31C:
{
    MemoryInline::FlatWrite32((r5 + 120), r4);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804FD32C;
    }
}

loc_804FD324:
{
    r0 = 0;
    goto loc_804FD33C;
}

loc_804FD32C:
{
    r0 = (r6 + -1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_804FD33C:
{
}

loc_804FD340:
{
    MemoryInline::FlatWrite32((r5 + 124), r0);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(9))) {
        goto loc_804FD350;
    }
}

loc_804FD348:
{
    r0 = 0;
    goto loc_804FD360;
}

loc_804FD350:
{
    r0 = (r6 + 1);
    r0 = (r0 * 12);
    r3 = (r30 + r0);
    r0 = (r3 + 108);
}

loc_804FD360:
{
    MemoryInline::FlatWrite32((r5 + 128), r0);
    r4 = (r4 + 96);
    r5 = (r5 + 24);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804FD2C8;
    }
}

loc_804FD374:
{
    r29 = 0;
    r6 = 1;
    r0 = -65;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 12), static_cast<uint8_t>(r29));
    r3 = (r30 + 1794);
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 14), static_cast<uint8_t>(r29));
    r5 = 6;
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 13), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r30 + 15), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r30 + 16), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r30 + 17), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 1755u, (r30 + 1767), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 1757u, (r30 + 1769), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 1756u, (r30 + 1768), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 1758u, (r30 + 1770), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 1759u, (r30 + 1771), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 1788u, (r30 + 1800), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 1790u, (r30 + 1802), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 1791u, (r30 + 1803), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 1788);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 10;
    MemoryInline::FlatWriteRam16((r30 + 1860), static_cast<uint16_t>(r29));
    MemoryInline::FlatWriteRam16((r30 + 1862), static_cast<uint16_t>(r0));
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = (r31 + 0);
    r28 = r3;
    r3 = (r30 + 228);
    r4 = 0;
    r5 = 960;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 1188);
    r4 = 0;
    r5 = 576;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam8((r30 + 18), static_cast<uint8_t>(r29));
    r3 = r28;
    MemoryInline::FlatWriteRam8((r30 + 19), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r30 + 1764), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r30 + 1765), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r30 + 1766), static_cast<uint8_t>(r29));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FD0B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FD0B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804FD0B0 func_804FD0B0 preserves=true fpr_mask=0x00000000
