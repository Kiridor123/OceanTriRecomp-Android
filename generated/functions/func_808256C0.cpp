#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808256C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808256C0;

loc_808256C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    ctx->lr = 0x808256E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80827C00u>(ctx);
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
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r6 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r6 + 32));
}

loc_808256F0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8082574C;
    }
}

loc_808256F4:
{
    r5 = MemoryInline::FlatRead32((r30 + 12));
    r7 = (r5 + 1);
}

loc_80825700:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r7))) {
        goto loc_80825710;
    }
}

loc_80825704:
{
    r0 = (r5 + 9);
}

loc_8082570C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80825744;
    }
}

loc_80825710:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r5 + 32), r0);
    r4 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 + 9);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r30 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r5 + 32), r0);
    goto loc_8082574C;
}

loc_80825744:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r6 + 32), r0);
}

loc_8082574C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 1100u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r30 + 20));
}

loc_80825754:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80826170;
    }
}

loc_80825758:
{
}

loc_8082575C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80826170;
    }
}

loc_80825760:
{
    r0 = MemoryInline::FlatRead32((r6 + 32));
}

loc_80825768:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80826170;
    }
}

loc_8082576C:
{
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r30);
}

loc_80825774:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_808257EC;
    }
}

loc_80825778:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
}

loc_80825780:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_808257EC;
    }
}

loc_80825784:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r30 + 16));
    r5 = 0x80840000u;
    r5 = (r5 + 17664);
    r4 = 0;
    ctr = r0;
}

loc_8082579C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_808257C8;
    }
}

loc_808257A0:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_808257A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808257BC;
    }
}

loc_808257AC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808257B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_808257BC;
    }
}

loc_808257B8:
{
    goto loc_808257CC;
}

loc_808257BC:
{
    r5 = (r5 + 8);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808257A0;
    }
}

loc_808257C8:
{
    r4 = -1;
}

loc_808257CC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r30 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 704));
    r3 = r30;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl0_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl0_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x8081AA24;
    }
}

loc_inl0_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x8081AA28;
}

loc_inl0_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_80826170;
}

loc_808257EC:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r30 + 12));
    r0 = (r3 - r0);
}

loc_808257F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_80826170;
    }
}

loc_808257FC:
{
    r3 = 0x80840000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + 24800);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80825814u:
        goto loc_80825814;
        break;
    case 0x80825888u:
        goto loc_80825888;
        break;
    case 0x80825DBCu:
        goto loc_80825DBC;
        break;
    case 0x80825E44u:
        goto loc_80825E44;
        break;
    case 0x80825ECCu:
        goto loc_80825ECC;
        break;
    case 0x80825F54u:
        goto loc_80825F54;
        break;
    case 0x80825FDCu:
        goto loc_80825FDC;
        break;
    case 0x80826064u:
        goto loc_80826064;
        break;
    case 0x808260ECu:
        goto loc_808260EC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80825814:
{
}

loc_80825818:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80826170;
    }
}

loc_8082581C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80825820:
{
    r4 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80825848;
    }
}

loc_80825828:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1096u, (r30 + 1096));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825834:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80825848;
    }
}

loc_80825838:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 1060u, (r30 + 1060));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825844:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8082584C;
    }
}

loc_80825848:
{
    r4 = 0;
}

loc_8082584C:
{
}

loc_80825850:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8082587C;
    }
}

loc_80825854:
{
    r31 = MemoryInline::ReadResolved32(guest_range_0, 1096u, (r30 + 1096));
    r3 = r31;
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
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r3 = 12;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 116), r3);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_80826170;
}

loc_8082587C:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r30 + 108), r0);
    goto loc_80826170;
}

loc_80825888:
{
}

loc_8082588C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80825B24;
    }
}

loc_80825890:
{
    r3 = 0x80840000u;
    r0 = 37;
    r3 = (r3 + 17760);
    r31 = 0;
    ctr = r0;
    // nop
}

loc_808258A8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_808258B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808258C4;
    }
}

loc_808258B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_808258BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_808258C4;
    }
}

loc_808258C0:
{
    goto loc_808258F4;
}

loc_808258C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r31 = (r31 + 1);
}

loc_808258D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808258E4;
    }
}

loc_808258D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_808258DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_808258E4;
    }
}

loc_808258E0:
{
    goto loc_808258F4;
}

loc_808258E4:
{
    r3 = (r3 + 16);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808258A8;
    }
}

loc_808258F0:
{
    r31 = -1;
}

loc_808258F4:
{
    r5 = 0x80840000u;
    r3 = 37;
    r5 = (r5 + 17760);
    r0 = 1;
    r8 = 0;
    ctr = r3;
    // nop
}

loc_80825910:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80825918:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8082592C;
    }
}

loc_8082591C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80825924:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8082592C;
    }
}

loc_80825928:
{
    goto loc_8082595C;
}

loc_8082592C:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_80825938:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_8082594C;
    }
}

loc_8082593C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80825944:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8082594C;
    }
}

loc_80825948:
{
    goto loc_8082595C;
}

loc_8082594C:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825910;
    }
}

loc_80825958:
{
    r8 = -1;
}

loc_8082595C:
{
    r5 = 0x80840000u;
    r3 = 37;
    r5 = (r5 + 17760);
    r7 = 0;
    ctr = r3;
}

loc_80825970:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80825978:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8082598C;
    }
}

loc_8082597C:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80825984:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_8082598C;
    }
}

loc_80825988:
{
    goto loc_808259BC;
}

loc_8082598C:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_80825998:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_808259AC;
    }
}

loc_8082599C:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808259A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_808259AC;
    }
}

loc_808259A8:
{
    goto loc_808259BC;
}

loc_808259AC:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825970;
    }
}

loc_808259B8:
{
    r7 = -1;
}

loc_808259BC:
{
    r5 = 0x80840000u;
    r3 = 37;
    r5 = (r5 + 17760);
    r6 = 0;
    ctr = r3;
}

loc_808259D0:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_808259D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_808259EC;
    }
}

loc_808259DC:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808259E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_808259EC;
    }
}

loc_808259E8:
{
    goto loc_80825A1C;
}

loc_808259EC:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_808259F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80825A0C;
    }
}

loc_808259FC:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80825A04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80825A0C;
    }
}

loc_80825A08:
{
    goto loc_80825A1C;
}

loc_80825A0C:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808259D0;
    }
}

loc_80825A18:
{
    r6 = -1;
}

loc_80825A1C:
{
    r9 = 0x80840000u;
    r3 = 37;
    r9 = (r9 + 17760);
    r5 = 0;
    ctr = r3;
}

loc_80825A30:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_80825A38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80825A4C;
    }
}

loc_80825A3C:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_80825A44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80825A4C;
    }
}

loc_80825A48:
{
    goto loc_80825A7C;
}

loc_80825A4C:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_80825A58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80825A6C;
    }
}

loc_80825A5C:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_80825A64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80825A6C;
    }
}

loc_80825A68:
{
    goto loc_80825A7C;
}

loc_80825A6C:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825A30;
    }
}

loc_80825A78:
{
    r5 = -1;
}

loc_80825A7C:
{
}

loc_80825A80:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80825AE4;
    }
}

loc_80825A84:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825A98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80825AE4;
    }
}

loc_80825A9C:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825AB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80825AE4;
    }
}

loc_80825AB4:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825AC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80825AE4;
    }
}

loc_80825ACC:
{
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825AE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80825AE8;
    }
}

loc_80825AE4:
{
    r0 = 0;
}

loc_80825AE8:
{
}

loc_80825AEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80825B1C;
    }
}

loc_80825AF0:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
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
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 120), r31);
    MemoryInline::FlatWrite32((r30 + 112), r0);
    goto loc_80826170;
}

loc_80825B1C:
{
    MemoryInline::FlatWrite32((r30 + 112), r31);
    goto loc_80826170;
}

loc_80825B24:
{
}

loc_80825B28:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_80826170;
    }
}

loc_80825B2C:
{
    r3 = 0x80840000u;
    r0 = 37;
    r3 = (r3 + 17760);
    r31 = 0;
    ctr = r0;
}

loc_80825B40:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80825B48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80825B5C;
    }
}

loc_80825B4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80825B54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_80825B5C;
    }
}

loc_80825B58:
{
    goto loc_80825B8C;
}

loc_80825B5C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r31 = (r31 + 1);
}

loc_80825B68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80825B7C;
    }
}

loc_80825B6C:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80825B74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_80825B7C;
    }
}

loc_80825B78:
{
    goto loc_80825B8C;
}

loc_80825B7C:
{
    r3 = (r3 + 16);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825B40;
    }
}

loc_80825B88:
{
    r31 = -1;
}

loc_80825B8C:
{
    r5 = 0x80840000u;
    r3 = 37;
    r5 = (r5 + 17760);
    r0 = 1;
    r8 = 0;
    ctr = r3;
    // nop
}

loc_80825BA8:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80825BB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80825BC4;
    }
}

loc_80825BB4:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80825BBC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80825BC4;
    }
}

loc_80825BC0:
{
    goto loc_80825BF4;
}

loc_80825BC4:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r8 = (r8 + 1);
}

loc_80825BD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80825BE4;
    }
}

loc_80825BD4:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80825BDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80825BE4;
    }
}

loc_80825BE0:
{
    goto loc_80825BF4;
}

loc_80825BE4:
{
    r5 = (r5 + 16);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825BA8;
    }
}

loc_80825BF0:
{
    r8 = -1;
}

loc_80825BF4:
{
    r5 = 0x80840000u;
    r3 = 37;
    r5 = (r5 + 17760);
    r7 = 0;
    ctr = r3;
}

loc_80825C08:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80825C10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80825C24;
    }
}

loc_80825C14:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80825C1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80825C24;
    }
}

loc_80825C20:
{
    goto loc_80825C54;
}

loc_80825C24:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r7 = (r7 + 1);
}

loc_80825C30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80825C44;
    }
}

loc_80825C34:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80825C3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_80825C44;
    }
}

loc_80825C40:
{
    goto loc_80825C54;
}

loc_80825C44:
{
    r5 = (r5 + 16);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825C08;
    }
}

loc_80825C50:
{
    r7 = -1;
}

loc_80825C54:
{
    r5 = 0x80840000u;
    r3 = 37;
    r5 = (r5 + 17760);
    r6 = 0;
    ctr = r3;
}

loc_80825C68:
{
    r3 = MemoryInline::FlatRead32(r5);
}

loc_80825C70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80825C84;
    }
}

loc_80825C74:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80825C7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80825C84;
    }
}

loc_80825C80:
{
    goto loc_80825CB4;
}

loc_80825C84:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + 1);
}

loc_80825C90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_80825CA4;
    }
}

loc_80825C94:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80825C9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(19))) {
        goto loc_80825CA4;
    }
}

loc_80825CA0:
{
    goto loc_80825CB4;
}

loc_80825CA4:
{
    r5 = (r5 + 16);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825C68;
    }
}

loc_80825CB0:
{
    r6 = -1;
}

loc_80825CB4:
{
    r9 = 0x80840000u;
    r3 = 37;
    r9 = (r9 + 17760);
    r5 = 0;
    ctr = r3;
}

loc_80825CC8:
{
    r3 = MemoryInline::FlatRead32(r9);
}

loc_80825CD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80825CE4;
    }
}

loc_80825CD4:
{
    r3 = MemoryInline::FlatRead32((r9 + 4));
}

loc_80825CDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80825CE4;
    }
}

loc_80825CE0:
{
    goto loc_80825D14;
}

loc_80825CE4:
{
    r3 = MemoryInline::FlatRead32((r9 + 8));
    r5 = (r5 + 1);
}

loc_80825CF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80825D04;
    }
}

loc_80825CF4:
{
    r3 = MemoryInline::FlatRead32((r9 + 12));
}

loc_80825CFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_80825D04;
    }
}

loc_80825D00:
{
    goto loc_80825D14;
}

loc_80825D04:
{
    r9 = (r9 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825CC8;
    }
}

loc_80825D10:
{
    r5 = -1;
}

loc_80825D14:
{
}

loc_80825D18:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80825D7C;
    }
}

loc_80825D1C:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r3 = (r3_rot_7 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825D30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80825D7C;
    }
}

loc_80825D34:
{
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825D48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80825D7C;
    }
}

loc_80825D4C:
{
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r3 = (r3_rot_9 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825D60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80825D7C;
    }
}

loc_80825D64:
{
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r3 = (r3_rot_10 & -4);
    r3 = (r30 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r3 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80825D78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80825D80;
    }
}

loc_80825D7C:
{
    r0 = 0;
}

loc_80825D80:
{
}

loc_80825D84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80825DB4;
    }
}

loc_80825D88:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
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
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 120), r31);
    MemoryInline::FlatWrite32((r30 + 112), r0);
    goto loc_80826170;
}

loc_80825DB4:
{
    MemoryInline::FlatWrite32((r30 + 112), r31);
    goto loc_80826170;
}

loc_80825DBC:
{
}

loc_80825DC0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_80826170;
    }
}

loc_80825DC4:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80825DD8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825DE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80825DF4;
    }
}

loc_80825DE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825DEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825DF4;
    }
}

loc_80825DF0:
{
    goto loc_80825E24;
}

loc_80825DF4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825E00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_80825E14;
    }
}

loc_80825E04:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825E0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825E14;
    }
}

loc_80825E10:
{
    goto loc_80825E24;
}

loc_80825E14:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825DD8;
    }
}

loc_80825E20:
{
    r3 = -1;
}

loc_80825E24:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
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
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_80826170;
}

loc_80825E44:
{
}

loc_80825E48:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_80826170;
    }
}

loc_80825E4C:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80825E60:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825E68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825E7C;
    }
}

loc_80825E6C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825E74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825E7C;
    }
}

loc_80825E78:
{
    goto loc_80825EAC;
}

loc_80825E7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825E88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825E9C;
    }
}

loc_80825E8C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825E94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825E9C;
    }
}

loc_80825E98:
{
    goto loc_80825EAC;
}

loc_80825E9C:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825E60;
    }
}

loc_80825EA8:
{
    r3 = -1;
}

loc_80825EAC:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl5_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl5_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl5_0x8081AA24;
    }
}

loc_inl5_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl5_0x8081AA28;
}

loc_inl5_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl5_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_80826170;
}

loc_80825ECC:
{
}

loc_80825ED0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_80826170;
    }
}

loc_80825ED4:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80825EE8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825EF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80825F04;
    }
}

loc_80825EF4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825EFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825F04;
    }
}

loc_80825F00:
{
    goto loc_80825F34;
}

loc_80825F04:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825F10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_80825F24;
    }
}

loc_80825F14:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825F1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825F24;
    }
}

loc_80825F20:
{
    goto loc_80825F34;
}

loc_80825F24:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825EE8;
    }
}

loc_80825F30:
{
    r3 = -1;
}

loc_80825F34:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl6_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl6_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl6_0x8081AA24;
    }
}

loc_inl6_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl6_0x8081AA28;
}

loc_inl6_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl6_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_80826170;
}

loc_80825F54:
{
}

loc_80825F58:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_80826170;
    }
}

loc_80825F5C:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80825F70:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80825F78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_80825F8C;
    }
}

loc_80825F7C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80825F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825F8C;
    }
}

loc_80825F88:
{
    goto loc_80825FBC;
}

loc_80825F8C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80825F98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_80825FAC;
    }
}

loc_80825F9C:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80825FA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80825FAC;
    }
}

loc_80825FA8:
{
    goto loc_80825FBC;
}

loc_80825FAC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825F70;
    }
}

loc_80825FB8:
{
    r3 = -1;
}

loc_80825FBC:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl7_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl7_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl7_0x8081AA24;
    }
}

loc_inl7_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl7_0x8081AA28;
}

loc_inl7_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl7_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl7_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_80826170;
}

loc_80825FDC:
{
}

loc_80825FE0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_80826170;
    }
}

loc_80825FE4:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80825FF8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826000:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80826014;
    }
}

loc_80826004:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082600C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80826014;
    }
}

loc_80826010:
{
    goto loc_80826044;
}

loc_80826014:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826020:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80826034;
    }
}

loc_80826024:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8082602C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80826034;
    }
}

loc_80826030:
{
    goto loc_80826044;
}

loc_80826034:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80825FF8;
    }
}

loc_80826040:
{
    r3 = -1;
}

loc_80826044:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl8_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl8_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl8_0x8081AA24;
    }
}

loc_inl8_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl8_0x8081AA28;
}

loc_inl8_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl8_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl8_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_80826170;
}

loc_80826064:
{
}

loc_80826068:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_80826170;
    }
}

loc_8082606C:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80826080:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826088:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_8082609C;
    }
}

loc_8082608C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80826094:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8082609C;
    }
}

loc_80826098:
{
    goto loc_808260CC;
}

loc_8082609C:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_808260A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_808260BC;
    }
}

loc_808260AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_808260B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_808260BC;
    }
}

loc_808260B8:
{
    goto loc_808260CC;
}

loc_808260BC:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826080;
    }
}

loc_808260C8:
{
    r3 = -1;
}

loc_808260CC:
{
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_13 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl9_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl9_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl9_0x8081AA24;
    }
}

loc_inl9_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl9_0x8081AA28;
}

loc_inl9_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl9_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_80826170;
}

loc_808260EC:
{
}

loc_808260F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_80826170;
    }
}

loc_808260F4:
{
    r4 = 0x80840000u;
    r0 = 37;
    r4 = (r4 + 17760);
    r3 = 0;
    ctr = r0;
}

loc_80826108:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80826110:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_80826124;
    }
}

loc_80826114:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8082611C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_80826124;
    }
}

loc_80826120:
{
    goto loc_80826154;
}

loc_80826124:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80826130:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_80826144;
    }
}

loc_80826134:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_8082613C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_80826144;
    }
}

loc_80826140:
{
    goto loc_80826154;
}

loc_80826144:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80826108;
    }
}

loc_80826150:
{
    r3 = -1;
}

loc_80826154:
{
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_14 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl10_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl10_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl10_0x8081AA24;
    }
}

loc_inl10_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl10_0x8081AA28;
}

loc_inl10_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl10_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
}

loc_80826170:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808256C0 func_808256C0 preserves=true fpr_mask=0x00000000
