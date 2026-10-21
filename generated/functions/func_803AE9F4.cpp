#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_803AE9F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803AE9F4u);
    goto loc_803AE9F4;

loc_803AE9F4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r3 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803AEA10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AEB54;
    }
}

loc_803AEA14:
{
    r30 = (r3 + 844);
    r29 = (r3 + 793);
    r25 = (r3 + 724);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r27 = (r3 + 916);
    r28 = (r3 + 788);
    r0 = MemoryInline::FlatRead8((r3 + 139));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = 0x80600000u;
    r3 = (r3 + -32680);
    r3_addr_1 = (r3 + r0);
    r26 = MemoryInline::FlatRead8(r3_addr_1);
    r24 = 0;
    r23 = 0;
    r3 = 0x805F0000u;
    r31 = (r3 + 32352);
}

loc_803AEA50:
{
    r3 = 0;
    ctx->lr = 0x803AEA58u;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4E3C_B57 = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_B57;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AEA5C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AEA68;
    }
}

loc_803AEA60:
{
}

loc_803AEA64:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(2))) {
        goto loc_803AEB54;
    }
}

loc_803AEA68:
{
    r3 = MemoryInline::FlatRead8(r28);
}

loc_803AEA70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AEB44;
    }
}

loc_803AEA74:
{
    r0 = MemoryInline::FlatRead8((r28 + 3));
}

loc_803AEA7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AEB44;
    }
}

loc_803AEA80:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r31_addr_2 = (r31 + r0);
    r22 = MemoryInline::FlatRead32(r31_addr_2);
}

loc_803AEA8C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_803AEB44;
    }
}

loc_803AEA90:
{
    goto loc_803AEAA0;
}

loc_803AEA94:
{
}

loc_803AEA98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r26))) {
        goto loc_803AEAAC;
    }
}

loc_803AEA9C:
{
    r22 = (r22 + 8);
}

loc_803AEAA0:
{
    r0 = MemoryInline::FlatRead8(r22);
}

loc_803AEAA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_803AEA94;
    }
}

loc_803AEAAC:
{
}

loc_803AEAB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803AEB44;
    }
}

loc_803AEAB4:
{
    r3 = r29;
    r4 = r28;
    ctx->lr = 0x803AEAC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x803AEBE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r0 = MemoryInline::FlatRead8(r29);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r29);
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r30, r0);
    r0 = MemoryInline::FlatRead8((r29 + 3));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r30 + 4), r0);
    r3 = (r30 + 8);
    r4 = MemoryInline::FlatRead32((r22 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (r0 * 48);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    // inline leaf 0x803AEB6C (29 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 8u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r4 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r3 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r4 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 14u, (r3 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r4 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r3 + 7), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 28), r0);
    // end of inlined leaf 0x803AEB6C
    r0 = MemoryInline::FlatRead8((r29 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r30 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8(r29);
    ctx->lr = 0x803AEB04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x803ADFE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
}

loc_803AEB08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_803AEB10;
    }
}

loc_803AEB0C:
{
    r3 = 3;
}

loc_803AEB10:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r30 + 40), static_cast<uint8_t>(r0));
}

loc_803AEB1C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(3))) {
        goto loc_803AEB34;
    }
}

loc_803AEB20:
{
    r0 = (r3 * 96);
    r27_addr_2 = (r27 + r0);
    r0 = MemoryInline::FlatRead32(r27_addr_2);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r30 + 44), r0);
    goto loc_803AEB38;
}

loc_803AEB34:
{
    MemoryInline::FlatWrite32((r30 + 44), r23);
}

loc_803AEB38:
{
    r30 = (r30 + 48);
    r29 = (r29 + 8);
    r25 = (r25 + 1);
}

loc_803AEB44:
{
    r24 = (r24 + 1);
    r28 = (r28 + 8);
}

loc_803AEB50:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(3))) {
        goto loc_803AEA50;
    }
}

loc_803AEB54:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AE9F4 func_803AE9F4 preserves=true fpr_mask=0x00000000
