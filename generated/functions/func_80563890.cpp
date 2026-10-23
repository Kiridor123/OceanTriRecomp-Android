#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80563890_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_rot_0 = 0;
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80563890;

loc_80563890:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    r31 = r3;
    r28 = 0x80580000u;
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r28 = (r28 + -13840);
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 44u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 0u, r28);
    r12 = MemoryInline::FlatRead32(r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r28 + 4));
            r11 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r28 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r28 + 12));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r28 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r28 + 20));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r28 + 28));
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r28 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r28 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r28 + 40));
        }
    }
    r12 = MemoryInline::FlatRead32((r12 + 16));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r29);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r11);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r9);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r7);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r0);
    ctr = r12;
    ctx->lr = 0x80563920u;
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
    ctr = ctx->ctr;
    r0 = (r3 | 16);
    r3 = MemoryInline::FlatRead32((r31 + 28));
    MemoryInline::FlatWrite8((r31 + 72), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 280));
    ctr = r12;
    ctx->lr = 0x8056393Cu;
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
    ctr = ctx->ctr;
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r31 + 73), static_cast<uint8_t>(r3));
}

loc_80563948:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(11))) {
        goto loc_80563980;
    }
}

loc_8056394C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x80563960u;
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
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r31 + 73));
    r4 = (r1 + 8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_80563974:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_80563980;
    }
}

loc_80563978:
{
    r0 = 250;
    MemoryInline::FlatWrite8((r31 + 73), static_cast<uint8_t>(r0));
}

loc_80563980:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x80563994u;
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
    ctr = ctx->ctr;
    MemoryInline::FlatWrite8((r31 + 74), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 44));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x805639ACu;
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
    ctr = ctx->ctr;
    MemoryInline::FlatWrite8((r31 + 75), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 92));
    ctr = r12;
    ctx->lr = 0x805639C4u;
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
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r31 + 76));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r0_mrot_0 = (r0_rot_3 & 128);
    r0_mdest_0 = (r0 & -129);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r3 = MemoryInline::FlatRead32((r31 + 24));
    MemoryInline::FlatWrite8((r31 + 76), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x805639E4u;
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
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r31 + 76));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0_mrot_1 = (r0_rot_4 & 120);
    r0_mdest_1 = (r0 & -121);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r3 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWrite8((r31 + 76), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80563A04u;
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
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r31 + 76));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_2 = (r0_rot_5 & 4);
    r0_mdest_2 = (r0 & -5);
    r0 = (r0_mdest_2 | r0_mrot_2);
    r3 = 0x80790000u;
    r5 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r0 & -2);
    r4 = MemoryInline::FlatRead8((r31 + 77));
    MemoryInline::FlatWrite8((r31 + 76), static_cast<uint8_t>(r0));
    r3 = (r3 + 12836);
    r0 = MemoryInline::FlatRead32((r5 + 40));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4_mrot_0 = (r4_rot_0 & 240);
    r4_mdest_0 = (r4 & -241);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryInline::FlatWrite8((r31 + 77), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r5 + 48));
    r4_mrot_1 = (r0 & 15);
    r4_mdest_1 = (r4 & -16);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite8((r31 + 77), static_cast<uint8_t>(r4));
    // inline leaf 0x8056CBBC (7 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r4 = (r4 & ~r5);
    r0 = (r0 & r5);
    r3 = (r4 | r0);
    // end of inlined leaf 0x8056CBBC
    r3 = (r3 & 256);
    r0 = 0;
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead8((r31 + 76));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r3_mrot_0 = (r3_rot_0 & 2);
    r3_mdest_0 = (r3 & -3);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite8((r31 + 78), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 76), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 79), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80563890(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80563890_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80563890 func_80563890 preserves=true fpr_mask=0x00000000
