#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004A270(CpuContext* ctx);
extern "C" void func_8004A270_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8004A270_statefree(uint32_t, uint32_t);
extern "C" void func_8004A270_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8031A48C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8031A48C;

loc_8031A48C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (r3 + -1);
}

loc_8031A4C0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(5))) {
        goto loc_8031A5D8;
    }
}

loc_8031A4C4:
{
}

loc_8031A4C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(11))) {
        goto loc_8031A528;
    }
}

loc_8031A4CC:
{
    r3 = r28;
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl1_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl1_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl1_0x8027F13C;
    }
}

loc_inl1_0x8027F134:
{
    r3 = 0;
    goto loc_inl1_cont_8027F128;
}

loc_inl1_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_8031A4D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031A528;
    }
}

loc_8031A4DC:
{
    r3 = (r31 + 72);
    r4 = r28;
    // inline leaf 0x8004A270 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 6u, (r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r28 + 2));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 85), 0, 23u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 1u, (r31 + 86), static_cast<uint16_t>(r0));
    r3 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 85), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 3u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 3u, (r31 + 88), r3);
        MemoryInline::WriteResolved16(guest_range_0, 5u, (r31 + 90), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 7u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 7u, (r31 + 92), r3);
        MemoryInline::WriteResolved16(guest_range_0, 9u, (r31 + 94), r3);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r28 + 2));
    MemoryInline::WriteResolved16(guest_range_0, 13u, (r31 + 98), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r31 + 97), static_cast<uint8_t>(r3));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 15u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 15u, (r31 + 100), r3);
        MemoryInline::WriteResolved16(guest_range_0, 17u, (r31 + 102), r3);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 19u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_0, 19u, (r31 + 104), r3);
        MemoryInline::WriteResolved16(guest_range_0, 21u, (r31 + 106), r3);
    }
    goto loc_8031A5D8;
}

loc_8031A528:
{
    r0 = MemoryInline::FlatRead8((r27 + 464));
}

loc_8031A530:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_8031A594;
    }
}

loc_8031A534:
{
    r3 = MemoryInline::FlatRead8(r28);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_8031A544:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8031A560;
    }
}

loc_8031A548:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 98), static_cast<uint16_t>(r0));
    goto loc_8031A5D8;
}

loc_8031A560:
{
    r3 = (r27 + 464);
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl3_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl3_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl3_0x8027F13C;
    }
}

loc_inl3_0x8027F134:
{
    r3 = 0;
    goto loc_inl3_cont_8027F128;
}

loc_inl3_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
}

loc_inl3_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_8031A56C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8031A5D8;
    }
}

loc_8031A570:
{
    r3 = (r31 + 72);
    r4 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 98), static_cast<uint16_t>(r0));
    goto loc_8031A5D8;
}

loc_8031A594:
{
}

loc_8031A598:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8031A5D8;
    }
}

loc_8031A59C:
{
}

loc_8031A5A0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8031A5D8;
    }
}

loc_8031A5A4:
{
    r3 = MemoryInline::FlatRead8(r28);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_8031A5B4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8031A5D8;
    }
}

loc_8031A5B8:
{
    r3 = (r31 + 72);
    r4 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004A270u) && KnownTranslatedCpuCall<0x8004A270u>::kAvailable && !KnownTranslatedCpuCall<0x8004A270u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004A270u>()) {
        func_8004A270_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004A270u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 86), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 96), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 98), static_cast<uint16_t>(r0));
}

loc_8031A5D8:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031A48C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031A48C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031A48C func_8031A48C preserves=true fpr_mask=0x00000000
