#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8045A288_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r12_stbu_ea_0 = 0;
    uint32_t r12_stbu_ea_1 = 0;
    uint32_t r12_stbu_ea_2 = 0;
    uint32_t r12_stbu_ea_3 = 0;
    uint32_t r12_stbu_ea_4 = 0;
    uint32_t r12_stbu_ea_5 = 0;
    uint32_t r12_stbu_ea_6 = 0;
    uint32_t r12_stbu_ea_7 = 0;
    uint32_t r12_stbu_ea_8 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r8_stbu_ea_0 = 0;
    uint32_t r8_stbu_ea_1 = 0;
    uint32_t r8_stbu_ea_2 = 0;
    uint32_t r8_stbu_ea_3 = 0;
    uint32_t r8_stbu_ea_4 = 0;
    uint32_t r8_stbu_ea_5 = 0;
    uint32_t r8_stbu_ea_6 = 0;
    uint32_t r8_stbu_ea_7 = 0;
    uint32_t r8_stbu_ea_8 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8045A288;

loc_8045A288:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 42u, true, false);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    r31 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r4 + 40));
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 42u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r29);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r31);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r11);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r9);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r6);
    }
    MemoryInline::WriteResolved16(guest_range_3, 40u, (r3 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_8045A2F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A750;
    }
}

loc_8045A2FC:
{
    r8 = MemoryInline::FlatRead8((r3 + 4));
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_8045A308:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_8045A310;
    }
}

loc_8045A30C:
{
    r8 = r0;
}

loc_8045A310:
{
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r4);
    r8 = (r8 + r0);
}

loc_8045A324:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(36))) {
        goto loc_8045A32C;
    }
}

loc_8045A328:
{
    r8 = 36;
}

loc_8045A32C:
{
    r7 = 0;
    goto loc_8045A348;
}

loc_8045A334:
{
    r6 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (r3 + r6);
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r6));
}

loc_8045A348:
{
    r4 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8045A350:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r8))) {
        goto loc_8045A334;
    }
}

loc_8045A354:
{
    r7 = MemoryInline::FlatRead8((r5 + 4));
    r4 = (r3 + 5);
    r6 = (r4 + r8);
    r7 = (r7 + r0);
}

loc_8045A368:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_8045A370;
    }
}

loc_8045A36C:
{
    r6 = (r4 + r7);
}

loc_8045A370:
{
    r7 = (r6 - r4);
    r9 = (r5 + 5);
    r7 = (r7 - r0);
    r10 = (r9 + r7);
    r11 = r10;
    goto loc_8045A4A8;
}

loc_8045A388:
{
    r6 = (r6 + -1);
    r8 = MemoryInline::FlatRead8(r6);
    r10 = (r10 + -1);
    r7 = MemoryInline::FlatRead8(r10);
}

loc_8045A394:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r7))) {
        goto loc_8045A498;
    }
}

loc_8045A398:
{
    r12 = (r6 + -1);
    goto loc_8045A3A4;
}

loc_8045A3A0:
{
    r12 = (r12 + -1);
}

loc_8045A3A4:
{
    r7 = MemoryInline::FlatRead8(r12);
}

loc_8045A3AC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8045A3A0;
    }
}

loc_8045A3B0:
{
}

loc_8045A3B4:
{
    r8 = (r6 - r12);
    if ((static_cast<uint32_t>(r12) == static_cast<uint32_t>(r6))) {
        goto loc_8045A498;
    }
}

loc_8045A3BC:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r7 = (r7_rot_2 & 536870911);
}

loc_8045A3C0:
{
    ctr = r7;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8045A478;
    }
}

loc_8045A3C8:
{
    r7 = MemoryInline::FlatRead8(r12);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8(r12, static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 1));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 1), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 2));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 2), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 3));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 3), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 4));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 4), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 5));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 5), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 6));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 6), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 7));
    r7 = (r7 + 10);
    r7 = (r7 & 255);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8((r12 + 7), static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 8));
    r7 = (r7 + 10);
    r12_stbu_ea_3 = (r12 + 8);
    MemoryInline::FlatWrite8(r12_stbu_ea_3, static_cast<uint8_t>(r7));
    r12 = r12_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A3C8;
    }
}

loc_8045A470:
{
    r8 = (r8 & 7);
}

loc_8045A474:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8045A498;
    }
}

loc_8045A478:
{
    ctr = r8;
}

loc_8045A47C:
{
    r7 = MemoryInline::FlatRead8(r12);
    r7 = (r7 + -1);
    MemoryInline::FlatWrite8(r12, static_cast<uint8_t>(r7));
    r7 = MemoryInline::FlatRead8((r12 + 1));
    r7 = (r7 + 10);
    r12_stbu_ea_6 = (r12 + 1);
    MemoryInline::FlatWrite8(r12_stbu_ea_6, static_cast<uint8_t>(r7));
    r12 = r12_stbu_ea_6;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A47C;
    }
}

loc_8045A498:
{
    r8 = MemoryInline::FlatRead8(r10);
    r7 = MemoryInline::FlatRead8(r6);
    r7 = (r7 - r8);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r7));
}

loc_8045A4A8:
{
}

loc_8045A4AC:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r4))) {
        goto loc_8045A4B8;
    }
}

loc_8045A4B0:
{
}

loc_8045A4B4:
{
    if ((static_cast<uint32_t>(r10) > static_cast<uint32_t>(r9))) {
        goto loc_8045A388;
    }
}

loc_8045A4B8:
{
    r8 = MemoryInline::FlatRead8((r5 + 4));
    r9 = (r11 - r9);
}

loc_8045A4C4:
{
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(r8))) {
        goto loc_8045A64C;
    }
}

loc_8045A4C8:
{
    r7 = MemoryInline::FlatRead8(r11);
    r10 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
}

loc_8045A4D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8045A4E0;
    }
}

loc_8045A4D8:
{
    r10 = 1;
    goto loc_8045A52C;
}

loc_8045A4E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8045A52C;
    }
}

loc_8045A4E4:
{
    r5 = (r5 + r8);
    r6 = (r11 + 1);
    r7 = (r5 + 5);
    r5 = (r7 - r6);
    ctr = r5;
}

loc_8045A4FC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r7))) {
        goto loc_8045A514;
    }
}

loc_8045A500:
{
    r5 = MemoryInline::FlatRead8(r6);
}

loc_8045A508:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045A64C;
    }
}

loc_8045A50C:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A500;
    }
}

loc_8045A514:
{
    r5 = (r4 + r9);
    r6 = (r0 + r5);
    r6 = (r6 + -1);
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 & 1);
}

loc_8045A524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A52C;
    }
}

loc_8045A528:
{
    r10 = 1;
}

loc_8045A52C:
{
}

loc_8045A530:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8045A64C;
    }
}

loc_8045A534:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_8045A53C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8045A640;
    }
}

loc_8045A540:
{
    r8 = (r6 + -1);
    goto loc_8045A54C;
}

loc_8045A548:
{
    r8 = (r8 + -1);
}

loc_8045A54C:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_8045A554:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A548;
    }
}

loc_8045A558:
{
}

loc_8045A55C:
{
    r5 = (r6 - r8);
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(r6))) {
        goto loc_8045A640;
    }
}

loc_8045A564:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_8045A568:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A620;
    }
}

loc_8045A570:
{
    r7 = MemoryInline::FlatRead8(r8);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 1), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 2));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 2), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 3));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 3), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 4));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 5));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 6));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 6), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 7));
    r0 = (r7 + 10);
    r7 = (r0 & 255);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8((r8 + 7), static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 8));
    r0 = (r7 + 10);
    r8_stbu_ea_2 = (r8 + 8);
    MemoryInline::FlatWrite8(r8_stbu_ea_2, static_cast<uint8_t>(r0));
    r8 = r8_stbu_ea_2;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A570;
    }
}

loc_8045A618:
{
    r5 = (r5 & 7);
}

loc_8045A61C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045A640;
    }
}

loc_8045A620:
{
    ctr = r5;
}

loc_8045A624:
{
    r7 = MemoryInline::FlatRead8(r8);
    r0 = (r7 + -1);
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r0));
    r7 = MemoryInline::FlatRead8((r8 + 1));
    r0 = (r7 + 10);
    r8_stbu_ea_5 = (r8 + 1);
    MemoryInline::FlatWrite8(r8_stbu_ea_5, static_cast<uint8_t>(r0));
    r8 = r8_stbu_ea_5;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A624;
    }
}

loc_8045A640:
{
    r5 = MemoryInline::FlatRead8(r6);
    r0 = (r5 + -1);
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
}

loc_8045A64C:
{
    r7 = r4;
    goto loc_8045A658;
}

loc_8045A654:
{
    r7 = (r7 + 1);
}

loc_8045A658:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8045A660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A654;
    }
}

loc_8045A664:
{
}

loc_8045A668:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r4))) {
        goto loc_8045A718;
    }
}

loc_8045A66C:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r6 = (r7 - r4);
    r8 = (r6 & 255);
    r5 = MemoryInline::FlatRead16((r3 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = (r4 + r0);
}

loc_8045A684:
{
    r0 = (r5 - r8);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r5 = (r6 - r7);
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_8045A70C;
    }
}

loc_8045A694:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
}

loc_8045A698:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045A6F4;
    }
}

loc_8045A6A0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r7);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r4, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r7 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r7 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r4 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r7 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r4 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r7 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r7 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r7 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r7 + 7));
    r7 = (r7 + 8);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A6A0;
    }
}

loc_8045A6EC:
{
    r5 = (r5 & 7);
}

loc_8045A6F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045A70C;
    }
}

loc_8045A6F4:
{
    ctr = r5;
}

loc_8045A6F8:
{
    r0 = MemoryInline::FlatRead8(r7);
    r7 = (r7 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A6F8;
    }
}

loc_8045A70C:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 - r8);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_8045A718:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (r3 + 5);
    r5 = (r4 + r0);
    r0 = (r5 - r4);
    ctr = r0;
}

loc_8045A730:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r4))) {
        goto loc_8045A744;
    }
}

loc_8045A734:
{
    r5 = (r5 + -1);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8045A73C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045A744;
    }
}

loc_8045A740:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045A734;
    }
}

loc_8045A744:
{
    r4 = (r5 - r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_8045A750:
{
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8045A288(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8045A288_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045A288 func_8045A288 preserves=true fpr_mask=0x00000000
