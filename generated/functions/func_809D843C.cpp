#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8028F324(CpuContext* ctx);
extern "C" uint32_t func_8028F324_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_809D843C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809D843C;

loc_809D843C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r4;
    r28 = r5;
    r0 = (r3 & 255);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    r3 = 0x80A20000u;
    r31 = (r3 + 16456);
    r31_addr_0 = (r31 + r30);
    r29 = MemoryInline::FlatRead32(r31_addr_0);
}

loc_809D8470:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_809D847C;
    }
}

loc_809D8474:
{
    r3 = 0;
    goto loc_809D8640;
}

loc_809D847C:
{
    r0 = (r4 & 255);
}

loc_809D8484:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_809D8490;
    }
}

loc_809D8488:
{
    r3 = 0;
    goto loc_809D8640;
}

loc_809D8490:
{
    r25 = MemoryInline::FlatRead8((r5 + 27316));
    r3 = 3;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
}

loc_809D84C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r25))) {
        goto loc_809D84D0;
    }
}

loc_809D84C8:
{
    r3 = 0;
    goto loc_809D8640;
}

loc_809D84D0:
{
    r25 = 0;
    r26 = 0;
    goto loc_809D8500;
}

loc_809D84DC:
{
    r25 = (r25 + 1);
    ctx->lr = 0x809D84E4u;
    if constexpr (KnownRegArgsCpuCall<0x8028F324u>(&func_8028F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8028F324_13A0 = func_8028F324_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F324_13A0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028F324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 & 255);
    r0 = (r3 + 6);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r26 = (r26 + r0);
    r29 = (r29 + 24);
}

loc_809D8500:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_809D8508:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D84DC;
    }
}

loc_809D850C:
{
}

loc_809D8510:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_809D851C;
    }
}

loc_809D8514:
{
    r3 = 0;
    goto loc_809D8640;
}

loc_809D851C:
{
    r3 = 3;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r26 = (r4 - r0);
    r29 = 0;
    r31_addr_1 = (r31 + r30);
    r30 = MemoryInline::FlatRead32(r31_addr_1);
    goto loc_809D857C;
}

loc_809D8554:
{
    ctx->lr = 0x809D8558u;
    if constexpr (KnownRegArgsCpuCall<0x8028F324u>(&func_8028F324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8028F324_1FFE = func_8028F324_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F324_1FFE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8028F324u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 & 255);
    r0 = (r3 + 6);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r29 = (r29 + r0);
}

loc_809D8574:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r29))) {
        goto loc_809D8588;
    }
}

loc_809D8578:
{
    r30 = (r30 + 24);
}

loc_809D857C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_809D8584:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809D8554;
    }
}

loc_809D8588:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, r30);
}

loc_809D8590:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_809D859C;
    }
}

loc_809D8594:
{
    r3 = 0;
    goto loc_809D8640;
}

loc_809D859C:
{
    r5 = (r27 & 255);
    r0 = (r5 + 3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r3 + 793), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r30 + 10));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 794), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r30 + 12));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 795), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r30 + 2));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 797), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 4));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 798), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r30 + 6));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 799), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r30 + 8));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 800), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r30 + 18));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite16((r3 + 27012), static_cast<uint16_t>(r4));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r30 + 20));
    r3 = (r28 + r3);
    MemoryInline::FlatWrite32((r3 + 27020), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r30 + 22));
    MemoryInline::FlatWrite32((r3 + 27032), r0);
    r3 = MemoryInline::FlatRead8((r28 + 27316));
    r3 = (r3 + -20);
}

loc_809D862C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_809D8634;
    }
}

loc_809D8630:
{
    r3 = 0;
}

loc_809D8634:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r28 + 27316), static_cast<uint8_t>(r0));
    r3 = 1;
}

loc_809D8640:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D843C func_809D843C preserves=true fpr_mask=0x00000000
