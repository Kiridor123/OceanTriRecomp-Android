#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804F2DB0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804F2DB0u);
    goto loc_804F2DB0;

loc_804F2DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r8 = 18;
    r7 = 2;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r0 = (0 - r5);
    r5 = (r0 | r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
}

loc_804F2DD0:
{
    r0 = 4;
    r5 = (static_cast<int32_t>(r5) >> 31);
    r0 = (r0 & ~r5);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r8);
    MemoryInline::FlatWriteRam16((r1 + 82), static_cast<uint16_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 60), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 100), r6);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804F2ED4;
    }
}

loc_804F2E00:
{
    r3 = 0x80630000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + -13356);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804F2E18u:
        goto loc_804F2E18;
        break;
    case 0x804F2E24u:
        goto loc_804F2E24;
        break;
    case 0x804F2E30u:
        goto loc_804F2E30;
        break;
    case 0x804F2E3Cu:
        goto loc_804F2E3C;
        break;
    case 0x804F2E48u:
        goto loc_804F2E48;
        break;
    case 0x804F2E54u:
        goto loc_804F2E54;
        break;
    case 0x804F2E60u:
        goto loc_804F2E60;
        break;
    case 0x804F2E6Cu:
        goto loc_804F2E6C;
        break;
    case 0x804F2E78u:
        goto loc_804F2E78;
        break;
    case 0x804F2E84u:
        goto loc_804F2E84;
        break;
    case 0x804F2E90u:
        goto loc_804F2E90;
        break;
    case 0x804F2E9Cu:
        goto loc_804F2E9C;
        break;
    case 0x804F2EB4u:
        goto loc_804F2EB4;
        break;
    case 0x804F2EC0u:
        goto loc_804F2EC0;
        break;
    case 0x804F2ECCu:
        goto loc_804F2ECC;
        break;
    case 0x804F2EA8u:
        goto loc_804F2EA8;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804F2E18:
{
    r0 = 48;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E24:
{
    r0 = 49;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E30:
{
    r0 = 51;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E3C:
{
    r0 = 50;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E48:
{
    r0 = 53;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E54:
{
    r0 = 55;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E60:
{
    r0 = 50;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E6C:
{
    r0 = 53;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E78:
{
    r0 = 55;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E84:
{
    r0 = 62;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E90:
{
    r0 = 50;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2E9C:
{
    r0 = 55;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2EA8:
{
    r0 = 55;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2EB4:
{
    r0 = 52;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2EC0:
{
    r0 = 53;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
    goto loc_804F2ED4;
}

loc_804F2ECC:
{
    r0 = 61;
    MemoryInline::FlatWriteRam8((r1 + 61), static_cast<uint8_t>(r0));
}

loc_804F2ED4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 56));
            r12 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 64));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 72));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 80));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 88));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r1 + 96));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 100));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r31);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r11);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r9);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 44), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 48), r3);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 52), r0);
    }
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead8(r30);
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r0 - r4);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_804F2F60;
    }
}

loc_804F2F54:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r29 + r0);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804F2F60:
{
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
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r3 + -1);
}

loc_804F2F70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r29))) {
        goto loc_804F2F84;
    }
}

loc_804F2F74:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl3_0x804D1330:
{
}

loc_inl3_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x804D1344;
    }
}

loc_inl3_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl3_0x804D1348;
}

loc_inl3_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl3_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl3_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 0;
    goto loc_804F2FFC;
}

loc_804F2F84:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r5 = 48;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 48);
    r3 = (r3 + r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + -1);
    r5 = (r6 - r4);
    r0 = (r6 + 1);
    r4 = (r4 - r6);
    r4 = ~(r5 | r4);
    r4 = (static_cast<int32_t>(r4) >> 31);
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 1;
}

loc_804F2FFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
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
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F2DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F2DB0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F2DB0 func_804F2DB0 preserves=true fpr_mask=0x00000000
