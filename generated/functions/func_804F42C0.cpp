#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804FA160(CpuContext* ctx);
extern "C" void func_804FA160_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804F42C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r5_addr_7 = 0;
    uint32_t r5_addr_8 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint32_t r9_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804F42C0u);
    goto loc_804F42C0;

loc_804F42C0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r5 = 0x80760000u;
    r31 = 0x80630000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
}

loc_804F42E4:
{
    r5 = (r5 + -10352);
    r29 = r3;
    r5_addr_0 = (r5 + r0);
    r30 = MemoryInline::FlatRead32(r5_addr_0);
    r31 = (r31 + -13288);
    r0 = -1;
    r5 = MemoryInline::FlatRead32((r30 + 2420));
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_804F430C;
    }
}

loc_804F4300:
{
}

loc_804F4304:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804F4324;
    }
}

loc_804F4308:
{
    goto loc_804F4334;
}

loc_804F430C:
{
    r6 = 253;
    MemoryInline::FlatWrite8((r30 + 2241), static_cast<uint8_t>(r6));
    r4 = 0;
    MemoryInline::FlatWrite8((r30 + 2448), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 2449), static_cast<uint8_t>(r4));
    goto loc_804F4348;
}

loc_804F4324:
{
    r4 = (r13 + -14092);
    r4_addr_1 = (r4 + r3);
    r4 = MemoryInline::FlatRead8(r4_addr_1);
    MemoryInline::FlatWrite8((r30 + 2241), static_cast<uint8_t>(r4));
    goto loc_804F4348;
}

loc_804F4334:
{
    r6 = 252;
    MemoryInline::FlatWrite8((r30 + 2241), static_cast<uint8_t>(r6));
    r4 = 0;
    MemoryInline::FlatWrite8((r30 + 2448), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r30 + 2449), static_cast<uint8_t>(r4));
}

loc_804F4348:
{
    r4 = (r13 + -14096);
    r4_addr_3 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_3);
    MemoryInline::FlatWrite8((r30 + 2242), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r30 + 2241));
    r3 = (r3 + 255);
    r3 = (r3 & 255);
}

loc_804F4364:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(1))) {
        goto loc_804F47A0;
    }
}

loc_804F4368:
{
    r6 = 0;
    r4 = 0;
    r3 = 0x80000000u;
    // nop
}

loc_804F4378:
{
    r10 = (r4 + 14);
    r7 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r10));
}

loc_804F4384:
{
    r8 = 0;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804F44B8;
    }
}

loc_804F438C:
{
    r11 = (r4 + 6);
    r12 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804F43B4;
    }
}

loc_804F43A4:
{
    r9 = (r3 + -2);
}

loc_804F43AC:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(r9))) {
        goto loc_804F43B4;
    }
}

loc_804F43B0:
{
    r26 = 1;
}

loc_804F43B4:
{
}

loc_804F43B8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_804F43CC;
    }
}

loc_804F43BC:
{
    r9 = (r3 + -2);
}

loc_804F43C4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r9))) {
        goto loc_804F43CC;
    }
}

loc_804F43C8:
{
    r27 = 1;
}

loc_804F43CC:
{
}

loc_804F43D0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_804F43E4;
    }
}

loc_804F43D4:
{
    r9 = (r4 + -2147483648);
}

loc_804F43DC:
{
    if ((static_cast<uint32_t>(r9) == static_cast<uint32_t>(0))) {
        goto loc_804F43E4;
    }
}

loc_804F43E0:
{
    r28 = 1;
}

loc_804F43E4:
{
}

loc_804F43E8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804F4420;
    }
}

loc_804F43EC:
{
    r10 = (r4 + 14);
    r9 = (0 - r4);
    r26 = (r10 & -2147483648);
    r9 = (r9 & -2147483648);
    r10 = 1;
}

loc_804F4404:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r9))) {
        goto loc_804F4414;
    }
}

loc_804F4408:
{
}

loc_804F440C:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_804F4414;
    }
}

loc_804F4410:
{
    r10 = 0;
}

loc_804F4414:
{
}

loc_804F4418:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804F4420;
    }
}

loc_804F441C:
{
    r12 = 1;
}

loc_804F4420:
{
}

loc_804F4424:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804F448C;
    }
}

loc_804F4428:
{
    r9 = (r11 + 7);
    r9 = (r9 - r4);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(29));
    r9 = (r9_rot_2 & 536870911);
    ctr = r9;
}

loc_804F443C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r11))) {
        goto loc_804F448C;
    }
}

loc_804F4440:
{
    r11 = (r5 + r7);
    r5_addr_3 = (r5 + r7);
    r10 = MemoryInline::FlatRead8(r5_addr_3);
    r9 = MemoryInline::FlatRead8((r11 + 1));
    r7 = (r7 + 8);
    r8 = (r8 + r10);
    r10 = MemoryInline::FlatRead8((r11 + 2));
    r8 = (r8 + r9);
    r9 = MemoryInline::FlatRead8((r11 + 3));
    r8 = (r8 + r10);
    r10 = MemoryInline::FlatRead8((r11 + 4));
    r8 = (r8 + r9);
    r9 = MemoryInline::FlatRead8((r11 + 5));
    r8 = (r8 + r10);
    r10 = MemoryInline::FlatRead8((r11 + 6));
    r8 = (r8 + r9);
    r9 = MemoryInline::FlatRead8((r11 + 7));
    r8 = (r8 + r10);
    r8 = (r8 + r9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F4440;
    }
}

loc_804F448C:
{
    r11 = (r4 + 14);
    r10 = (r5 + r7);
    r9 = (r11 - r7);
    ctr = r9;
}

loc_804F44A0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r11))) {
        goto loc_804F44B8;
    }
}

loc_804F44A4:
{
    r9 = MemoryInline::FlatRead8(r10);
    r7 = (r7 + 1);
    r10 = (r10 + 1);
    r8 = (r8 + r9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804F44A4;
    }
}

loc_804F44B8:
{
    r10 = (r5 + r4);
    r9 = (r8 + 85);
    r7 = MemoryInline::FlatRead8((r10 + 14));
    r9 = (r9 & 255);
}

loc_804F44CC:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(r7))) {
        goto loc_804F44E8;
    }
}

loc_804F44D0:
{
    r8 = (r8 + 170);
    r7 = MemoryInline::FlatRead8((r10 + 15));
    r8 = (r8 & 255);
}

loc_804F44E0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r7))) {
        goto loc_804F44E8;
    }
}

loc_804F44E4:
{
    r0 = r4;
}

loc_804F44E8:
{
    r6 = (r6 + 1);
    r4 = (r4 + 16);
}

loc_804F44F4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(2))) {
        goto loc_804F4378;
    }
}

loc_804F44F8:
{
    r3 = MemoryInline::FlatRead8((r30 + 2241));
}

loc_804F4500:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804F4510;
    }
}

loc_804F4504:
{
}

loc_804F4508:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_804F467C;
    }
}

loc_804F450C:
{
    goto loc_804F47A0;
}

loc_804F4510:
{
}

loc_804F4514:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_804F4548;
    }
}

loc_804F4518:
{
    r3 = (r31 + 604);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r3 = 512;
    MemoryInline::FlatWrite16((r30 + 2190), static_cast<uint16_t>(r3));
    r0 = 716;
    MemoryInline::FlatWrite16((r30 + 2192), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 2194), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 2196), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 2198), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 2200), static_cast<uint16_t>(r0));
    goto loc_804F47A0;
}

loc_804F4548:
{
    r3 = (r0 + r5);
    r5_addr_7 = (r5 + r0);
    r4 = MemoryInline::FlatRead8(r5_addr_7);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 13u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_1 & 3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_1 = (r0_rot_2 & 1020);
    r0_mdest_1 = (r0 & -1021);
    r0 = (r0_mdest_1 | r0_mrot_1);
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 2180), 0, 22u, false, true);
    MemoryInline::WriteResolved16(guest_range_3, 10u, (r30 + 2190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 3));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 1));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_2 = (r0_rot_4 & 1020);
    r0_mdest_2 = (r0 & -1021);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::WriteResolved16(guest_range_3, 12u, (r30 + 2192), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 3));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 2));
    r0 = (r0 & 3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_3 = (r0_rot_5 & 1020);
    r0_mdest_3 = (r0 & -1021);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::WriteResolved16(guest_range_3, 14u, (r30 + 2194), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_6 & 3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_4 = (r0_rot_7 & 1020);
    r0_mdest_4 = (r0 & -1021);
    r0 = (r0_mdest_4 | r0_mrot_4);
    MemoryInline::WriteResolved16(guest_range_3, 16u, (r30 + 2196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 5));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_8 & 3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_5 = (r0_rot_9 & 1020);
    r0_mdest_5 = (r0 & -1021);
    r0 = (r0_mdest_5 | r0_mrot_5);
    MemoryInline::WriteResolved16(guest_range_3, 18u, (r30 + 2198), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 7));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 6));
    r0 = (r0 & 3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0_mrot_6 = (r0_rot_10 & 1020);
    r0_mdest_6 = (r0 & -1021);
    r0 = (r0_mdest_6 | r0_mrot_6);
    MemoryInline::WriteResolved16(guest_range_3, 20u, (r30 + 2200), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 2u, (r30 + 2182), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 0u, (r30 + 2180), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 11));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 8u, (r30 + 2188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 12));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_3, 6u, (r30 + 2186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2321));
}

loc_804F45FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F4618;
    }
}

loc_804F4600:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 13));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2184), static_cast<uint16_t>(r0));
}

loc_804F4618:
{
    r4 = MemoryInline::FlatRead16((r30 + 2190));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 624);
    r5 = MemoryInline::FlatRead16((r30 + 2192));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2194));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r30 + 2196));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 672);
    r5 = MemoryInline::FlatRead16((r30 + 2198));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2200));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r30 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 720);
    r5 = MemoryInline::FlatRead16((r30 + 2182));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2180));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r30 + 2184));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 760);
    r5 = MemoryInline::FlatRead16((r30 + 2188));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2186));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    goto loc_804F47A0;
}

loc_804F467C:
{
    r5_addr_6 = (r5 + r0);
    r4 = MemoryInline::FlatRead8(r5_addr_6);
    r3 = (r0 + r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    guest_range_4 = MemoryInline::ResolveRangeHost((r30 + 2180), 0, 22u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r30 + 2182), static_cast<uint16_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 13u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r30 + 2180), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r3 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r30 + 2188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r30 + 2186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r30 + 2194), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r3 + 7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r30 + 2192), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r3 + 9));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 20u, (r30 + 2200), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r3 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r30 + 2198), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 2321));
}

loc_804F46E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F472C;
    }
}

loc_804F46EC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r3 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2178), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2184), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r3 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r3 + 11));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 2196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r3 + 12));
    MemoryInline::FlatWrite8((r30 + 2202), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r3 + 13));
    MemoryInline::FlatWrite8((r30 + 2203), static_cast<uint8_t>(r0));
}

loc_804F472C:
{
    r4 = MemoryInline::FlatRead16((r30 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 800);
    r5 = MemoryInline::FlatRead16((r30 + 2182));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2180));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r30 + 2184));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 840);
    r5 = MemoryInline::FlatRead16((r30 + 2188));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2186));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r30 + 2190));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 880);
    r5 = MemoryInline::FlatRead16((r30 + 2194));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2192));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead16((r30 + 2196));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = (r31 + 920);
    r5 = MemoryInline::FlatRead16((r30 + 2200));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r30 + 2198));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
    r4 = MemoryInline::FlatRead8((r30 + 2202));
    r3 = (r31 + 960);
    r5 = MemoryInline::FlatRead8((r30 + 2203));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x804FA160u>(&func_804FA160)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        func_804FA160_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
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
        InvokeDirectCpu<0x804FA160u>(ctx);
        r1 = ctx->gpr[1];
    }
}

loc_804F47A0:
{
    r4 = MemoryInline::FlatRead8((r30 + 2241));
}

loc_804F47A8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(3))) {
        goto loc_804F47B8;
    }
}

loc_804F47AC:
{
    r0 = MemoryInline::FlatRead16((r30 + 2432));
}

loc_804F47B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804F47E4;
    }
}

loc_804F47B8:
{
    r12 = MemoryInline::FlatRead32((r30 + 2204));
}

loc_804F47C0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804F47E4;
    }
}

loc_804F47C4:
{
    r0 = MemoryInline::FlatRead32((r30 + 2208));
}

loc_804F47CC:
{
    if ((static_cast<uint32_t>(r12) != static_cast<uint32_t>(r0))) {
        goto loc_804F47E4;
    }
}

loc_804F47D0:
{
    r3 = r29;
    ctr = r12;
    ctx->lr = 0x804F47DCu;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
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
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 2204), r0);
}

loc_804F47E4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F42C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F42C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F42C0 func_804F42C0 preserves=true fpr_mask=0x00000000
