#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B5320(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_mdest_0 = 0;
    uint32_t r31_mdest_1 = 0;
    uint32_t r31_mdest_2 = 0;
    uint32_t r31_mdest_3 = 0;
    uint32_t r31_mrot_0 = 0;
    uint32_t r31_mrot_1 = 0;
    uint32_t r31_mrot_2 = 0;
    uint32_t r31_mrot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804B5320u);
    goto loc_804B5320;

loc_804B5320:
{
    MemoryAlias::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
    guest_range_0 = MemoryAlias::ResolveRangeHost((r13 + -15448), 0, 65u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_0, 41u, (r13 + -15407));
}

loc_804B5344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B54A0;
    }
}

loc_804B5348:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r29 = MemoryAlias::FlatRead32((r2 + -2480));
    r30 = 0x80750000u;
    r28 = r3;
    r31 = 0;
    r0 = MemoryAlias::FlatRead32((r29 + 8));
    r30 = (r30 + -26784);
    r0 = (r0 & -2);
    MemoryAlias::FlatWrite32((r29 + 8), r0);
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r29 + 8));
    r0 = (r0 & -13);
    MemoryAlias::FlatWrite32((r29 + 8), r0);
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r30 + 24));
    MemoryAlias::FlatWriteRam32((r30 + 20), r0);
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWriteRam32((r30 + 28), r31);
    MemoryAlias::FlatWrite16((r3 + 48), static_cast<uint16_t>(r31));
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    r0 = MemoryAlias::FlatRead32((r30 + 24));
    MemoryAlias::FlatWrite16((r3 + 52), static_cast<uint16_t>(r0));
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    r0 = MemoryAlias::FlatRead32((r30 + 20));
    MemoryAlias::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r30 + 28));
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWrite16((r3 + 50), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r30 + 24));
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 16383);
    MemoryAlias::FlatWrite16((r3 + 54), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r30 + 20));
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 16383);
    MemoryAlias::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    // inline leaf 0x804777D0 (2 guest instruction(s))
    OSSystemCall();
    // end of inlined leaf 0x804777D0
    r0 = MemoryAlias::ReadResolved8(guest_range_0, 64u, (r13 + -15384));
}

loc_804B53F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B544C;
    }
}

loc_804B53F4:
{
    r5 = 0x80750000u;
    r4 = MemoryAlias::FlatRead32((r30 + 24));
    r5 = (r5 + -26748);
    r3 = MemoryAlias::FlatRead32((r30 + 20));
    r0 = MemoryAlias::FlatRead32((r30 + 28));
    r31_mrot_1 = (r4 & 536870880);
    r31_mdest_1 = (r31 & -536870881);
    r31 = (r31_mdest_1 | r31_mrot_1);
    MemoryAlias::FlatWriteRam32((r5 + 20), r3);
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 0u, (r13 + -15448));
    MemoryAlias::FlatWriteRam32((r5 + 24), r4);
    MemoryAlias::FlatWriteRam32((r5 + 28), r0);
    MemoryAlias::FlatWrite32((r3 + 20), r31);
    r0 = MemoryAlias::FlatRead32((r29 + 8));
    r0 = (r0 | 4);
    r0 = (r0 & -9);
    MemoryAlias::FlatWrite32((r29 + 8), r0);
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r29 + 8));
    r0 = (r0 | 16);
    MemoryAlias::FlatWrite32((r29 + 8), r0);
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_804B544C:
{
    r4 = MemoryAlias::FlatRead32((r29 + 8));
    r0 = 0;
    r6 = MemoryAlias::FlatRead32((r2 + -2480));
    r3 = r28;
    r4 = (r4 & -3);
    r5 = (r4 & -33);
    MemoryAlias::FlatWrite32((r29 + 8), r5);
    r4 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
    MemoryAlias::FlatWrite32((r13 + -15400), r0);
    r0 = MemoryAlias::FlatRead32((r6 + 16));
    r0 = (r0 | 3);
    MemoryAlias::FlatWrite32((r6 + 16), r0);
    r4 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead32((r29 + 8));
    r0 = (r0 | 1);
    MemoryAlias::FlatWrite32((r29 + 8), r0);
    r4 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r13 + -15444));
    MemoryAlias::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
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
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_804B54A0:
{
    r0 = MemoryAlias::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B5320 func_804B5320 preserves=true fpr_mask=0x00000000
