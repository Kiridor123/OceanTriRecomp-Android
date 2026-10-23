#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D2560(CpuContext* ctx);
extern "C" void func_804D2560_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" void func_8081EF20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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

    goto loc_8081EF20;

loc_8081EF20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r28 = r3;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r31);
    MemoryInline::FlatWrite32((r3 + 568), r31);
    MemoryInline::FlatWrite32((r3 + 592), r31);
    r3 = (r3 + 600);
    ctx->lr = 0x8081EF5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8082AF00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r4 = 1;
    r0 = -1;
    r5 = 30;
    r3 = 2;
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 1564u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 1108u, (r28 + 1108), r31);
    r29 = 0;
    r30 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1112u, (r28 + 1112), r5);
        MemoryInline::WriteResolved32(guest_range_0, 1116u, (r28 + 1116), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 1121u, (r28 + 1121), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1122u, (r28 + 1122), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1123u, (r28 + 1123), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1120u, (r28 + 1120), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 1560u, (r28 + 1560), r4);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r28 + 20), r3);
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r28 + 184), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r28 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r28 + 28), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r28, r31);
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r28 + 104), r31);
    MemoryInline::WriteResolved8(guest_range_0, 142u, (r28 + 142), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r28 + 108), r31);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r28 + 112), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r28 + 116), r31);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r28 + 120), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 143u, (r28 + 143), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 144u, (r28 + 144), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 151u, (r28 + 151), static_cast<uint8_t>(r31));
}

loc_8081EFCC:
{
    r3 = (r28 + r30);
    r3 = (r3 + 1128);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r3 = (r28 + r30);
    r3 = (r3 + 1320);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r29 = (r29 + 1);
    r30 = (r30 + 48);
}

loc_8081EFF0:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_8081EFCC;
    }
}

loc_8081EFF4:
{
    r3 = (r28 + 1512);
    // inline leaf 0x804CBB20 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x804CBB20
    r3 = 0x80870000u;
    r3 = (r3 + -32296);
    ctx->lr = 0x8081F008u;
    if constexpr (KnownRegArgsCpuCall<0x804D2560u>(&func_804D2560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_804D2560_ra8_0_0_0(ctx, r3);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804D2560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    }
    r3 = r28;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000DF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081EF20 func_8081EF20 preserves=true fpr_mask=0x00000000
