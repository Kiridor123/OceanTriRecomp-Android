#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046EDD0(CpuContext* ctx);
extern "C" uint64_t func_8046EDD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D1330(CpuContext* ctx);
extern "C" uint32_t func_804D1330_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_8046EE60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8046EE60;

loc_8046EE60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r31 = r3;
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8046EDD0u>(&func_8046EDD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046EDD0_57B = func_8046EDD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046EDD0_57B);
        r4 = static_cast<uint32_t>(regargs_result_8046EDD0_57B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8046EDD0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead16((r30 + 56));
}

loc_8046EE90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8046EE9C;
    }
}

loc_8046EE94:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_8046EE9C:
{
    r3 = r30;
    // inline leaf 0x804718B0 (16 guest instruction(s))
    r4 = 413663232;
    r5 = 0;
    r0 = (r4 + 36);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 290u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 56), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 80u, (r3 + 108), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 28), r0);
    MemoryInline::WriteResolved16(guest_range_0, 198u, (r3 + 226), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 206u, (r3 + 234), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 226u, (r3 + 254), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 288u, (r3 + 316), static_cast<uint16_t>(r5));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 278u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 278u, (r3 + 306), r5);
        MemoryInline::WriteResolved16(guest_range_0, 280u, (r3 + 308), r5);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 282u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r5)))) {
        MemoryInline::WriteResolved16(guest_range_0, 282u, (r3 + 310), r5);
        MemoryInline::WriteResolved16(guest_range_0, 284u, (r3 + 312), r5);
    }
    MemoryInline::WriteResolved16(guest_range_0, 286u, (r3 + 314), static_cast<uint16_t>(r5));
    // end of inlined leaf 0x804718B0
    r5 = 0x80700000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r5 + -26256));
    r3 = r31;
    MemoryInline::FlatWrite32(r30, r4);
    MemoryInline::FlatWriteRam32((r5 + -26256), r30);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    if constexpr (KnownRegArgsCpuCall<0x804D1330u>(&func_804D1330)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804D1330_10CD = func_804D1330_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804D1330_10CD;
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1330u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000EB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046EE60 func_8046EE60 preserves=true fpr_mask=0x00000000
