#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808273F0(CpuContext* MKW_RESTRICT ctx)
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    goto loc_808273F0;

loc_808273F0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = r3;
    r25 = 0;
    r26 = r31;
    r28 = 0x80840000u;
    r29 = 1;
    r30 = 0;
    goto loc_80827498;
}

loc_80827420:
{
    r0 = MemoryInline::FlatRead32((r26 + 32));
}

loc_80827428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80827490;
    }
}

loc_8082742C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 16));
    r4 = (r28 + 17664);
    r3 = 0;
    ctr = r0;
}

loc_80827440:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80827470;
    }
}

loc_80827444:
{
    // nop
}

loc_80827448:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80827450:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r0))) {
        goto loc_80827464;
    }
}

loc_80827454:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082745C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80827464;
    }
}

loc_80827460:
{
    goto loc_80827474;
}

loc_80827464:
{
    r4 = (r4 + 8);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827448;
    }
}

loc_80827470:
{
    r3 = -1;
}

loc_80827474:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 704));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r27 + 20), r29);
    MemoryInline::FlatWrite32((r26 + 32), r30);
}

loc_80827490:
{
    r26 = (r26 + 4);
    r25 = (r25 + 1);
}

loc_80827498:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 1100u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
}

loc_808274A0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_80827420;
    }
}

loc_808274A4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_808274B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808274E4;
    }
}

loc_808274B8:
{
    r27 = MemoryInline::ReadResolved32(guest_range_0, 1096u, (r31 + 1096));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r4 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r0 = (r3 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 32), r4);
}

loc_808274E4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r0 = (r3 + 1);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_808274FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80827644;
    }
}

loc_80827500:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r31);
}

loc_80827508:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_808275B0;
    }
}

loc_8082750C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 28));
}

loc_80827514:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80827644;
    }
}

loc_80827518:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_80827530:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80827538:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8082754C;
    }
}

loc_8082753C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80827544:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8082754C;
    }
}

loc_80827548:
{
    goto loc_8082757C;
}

loc_8082754C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80827558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8082756C;
    }
}

loc_8082755C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80827564:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_8082756C;
    }
}

loc_80827568:
{
    goto loc_8082757C;
}

loc_8082756C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80827530;
    }
}

loc_80827578:
{
    r3 = -1;
}

loc_8082757C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r31 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl3_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8081AA24;
    }
}

loc_inl3_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x8081AA28;
}

loc_inl3_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r4 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 32), r4);
    goto loc_80827644;
}

loc_808275B0:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
    // nop
}

loc_808275C8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_808275D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808275E4;
    }
}

loc_808275D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_808275DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_808275E4;
    }
}

loc_808275E0:
{
    goto loc_80827614;
}

loc_808275E4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808275F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80827604;
    }
}

loc_808275F4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808275FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80827604;
    }
}

loc_80827600:
{
    goto loc_80827614;
}

loc_80827604:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808275C8;
    }
}

loc_80827610:
{
    r3 = -1;
}

loc_80827614:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r31 + r0);
    r27 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r27;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl4_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl4_0x8081AA24;
    }
}

loc_inl4_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x8081AA28;
}

loc_inl4_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r27 + 20), r0);
    r4 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 12));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32((r3 + 32), r4);
}

loc_80827644:
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
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808273F0 func_808273F0 preserves=true fpr_mask=0x00000000
