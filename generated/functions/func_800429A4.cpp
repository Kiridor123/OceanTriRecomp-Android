#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80042C0C(CpuContext* ctx);
extern "C" uint64_t func_80042C0C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" void func_800429A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800429A4u);
    goto loc_800429A4;

loc_800429A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r5 = (r3 * 848);
    r4 = 0x80660000u;
    r0 = (r4 + -15088);
    r31 = (r0 + r5);
    r4 = 0x80660000u;
    r29 = (r4 + -11600);
    r4 = 0x80580000u;
    r28 = (r4 + 5680);
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 30), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r31);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    // inline leaf 0x80042BAC (6 guest instruction(s))
    r4 = 0x80740000u;
    r4 = (r4 + 15976);
    r0 = (r3 * 30);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 10));
    // end of inlined leaf 0x80042BAC
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80042A10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80042AC4;
    }
}

loc_80042A14:
{
    r3 = r30;
    // inline leaf 0x80042B98 (5 guest instruction(s))
    r0 = (r3 * 30);
    r3 = 0x80740000u;
    r3 = (r3 + 15976);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_0);
    // end of inlined leaf 0x80042B98
    r4 = 0;
    r5 = 0;
    r3 = (r3 & 65535);
    r0 = 4;
    ctr = r0;
}

loc_80042A30:
{
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r3 & r0);
}

loc_80042A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042A4C;
    }
}

loc_80042A40:
{
    r0 = MemoryInline::FlatRead16(r28);
    r0 = (r4 | r0);
    r4 = (r0 & 65535);
}

loc_80042A4C:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r3 & r0);
}

loc_80042A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042A68;
    }
}

loc_80042A5C:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
    r0 = (r4 | r0);
    r4 = (r0 & 65535);
}

loc_80042A68:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r3 & r0);
}

loc_80042A74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042A84;
    }
}

loc_80042A78:
{
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (r4 | r0);
    r4 = (r0 & 65535);
}

loc_80042A84:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r3 & r0);
}

loc_80042A90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80042AA0;
    }
}

loc_80042A94:
{
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r4 | r0);
    r4 = (r0 & 65535);
}

loc_80042AA0:
{
    r29 = (r29 + 8);
    r28 = (r28 + 8);
    r5 = (r5 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80042A30;
    }
}

loc_80042AB0:
{
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r4));
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x80042AC0u;
    if constexpr (KnownRegArgsCpuCall<0x80042C0Cu>(&func_80042C0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80042C0C_1123 = func_80042C0C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80042C0C_1123);
        r4 = static_cast<uint32_t>(regargs_result_80042C0C_1123 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80042C0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80042AE0;
}

loc_80042AC4:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 22), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 20), static_cast<uint16_t>(r0));
}

loc_80042AE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
            r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r31 + 8));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r31 + 10));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r31 + 10));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r31 + 8));
        }
    }
    r0 = (r3 & ~r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.second;
            r0 = resolved_pair.first;
        } else {
            r3 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
        }
    }
}

loc_80042B44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80042B74;
    }
}

loc_80042B48:
{
    r3 = MemoryInline::FlatRead16((r31 + 26));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 26));
}

loc_80042B5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_80042B78;
    }
}

loc_80042B60:
{
    r0 = 10;
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r31);
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
    goto loc_80042B78;
}

loc_80042B74:
{
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r4));
}

loc_80042B78:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF9 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800429A4 func_800429A4 preserves=true fpr_mask=0x00000000
