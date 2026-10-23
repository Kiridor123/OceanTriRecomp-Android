#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804CD720_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_mtcrf_preserve_0 = 0;
    uint32_t r4_mtcrf_src_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804CD720;

loc_804CD720:
{
    r4 = 0x804D0000u;
    r6 = MemoryInline::FlatRead32((r3 + 408));
    r5 = (r4 + 4848);
}

loc_804CD730:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r5))) {
        goto loc_804CD748;
    }
}

loc_804CD734:
{
    r4 = 0x804D0000u;
    r0 = (r4 + 4860);
}

loc_804CD740:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_804CD748;
    }
}

loc_804CD744:
{
    MemoryInline::FlatWrite32((r3 + 408), r5);
}

loc_804CD748:
{
    r0 = MemoryInline::FlatRead32(r3);
    r1 = MemoryInline::FlatRead32((r3 + 4));
    r2 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead16((r3 + 418));
    r5 = (r4 & 2);
}

loc_804CD75C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804CD770;
    }
}

loc_804CD760:
{
    r4 = (r4 & -3);
    MemoryInline::FlatWrite16((r3 + 418), static_cast<uint16_t>(r4));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 20), 0, 108u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 20));
            r6 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 28));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 36));
            r10 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 44));
            r12 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 60));
            r16 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 68));
            r18 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 76));
            r20 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 72u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r3 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 80u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r3 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 96u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r3 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r3 + 124));
    goto loc_804CD774;
}

loc_804CD770:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 52), 0, 76u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 60));
            r16 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 68));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 76));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r3 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r3 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r3 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r3 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r3 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r3 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r3 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r3 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r3 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r3 + 124));
}

loc_804CD774:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 440u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 412u, (r3 + 424));
    ctx->gqr[1] = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 416u, (r3 + 428));
    ctx->gqr[2] = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 420u, (r3 + 432));
    ctx->gqr[3] = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 424u, (r3 + 436));
    ctx->gqr[4] = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 428u, (r3 + 440));
    ctx->gqr[5] = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 432u, (r3 + 444));
    ctx->gqr[6] = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 436u, (r3 + 448));
    ctx->gqr[7] = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r3 + 128));
    r4_mtcrf_src_0 = (r4 & -1);
    r4_mtcrf_preserve_0 = (cr & 0);
    cr = (r4_mtcrf_preserve_0 | r4_mtcrf_src_0);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r3 + 132));
    ctx->lr = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 124u, (r3 + 136));
    ctr = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 128u, (r3 + 140));
    xer = r4;
    r4 = ctx->msr;
    r4 = (r4 & -32769);
    r4 = (r4 & -3);
    ctx->msr = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 396u, (r3 + 408));
    ctx->srr0 = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_2, 400u, (r3 + 412));
    ctx->srr1 = r4;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.second;
            r3 = resolved_pair.first;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r3 + 16));
            r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + 12));
        }
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[13] = r13;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CD720(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CD720_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CD720 func_804CD720 preserves=true fpr_mask=0x00000000
