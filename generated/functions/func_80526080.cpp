#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80526080_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_80526080;

loc_80526080:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8052608C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805260F8;
    }
}

loc_8052609C:
{
    r5 = 65536;
    r3 = 0x80520000u;
    r5 = (r5 + -26100);
    r0 = 0;
    r3 = (r3 + 24960);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r4 + 24), r3);
    r3 = MemoryInline::FlatRead32((r13 + -13532));
}

loc_805260C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805260DC;
    }
}

loc_805260C8:
{
    MemoryInline::FlatWrite32((r13 + -13532), r4);
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_8052616C;
}

loc_805260D8:
{
    r3 = r0;
}

loc_805260DC:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_805260E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805260D8;
    }
}

loc_805260E8:
{
    MemoryInline::FlatWrite32(r3, r4);
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    goto loc_8052616C;
}

loc_805260F8:
{
    r12 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80526100:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80526110;
    }
}

loc_80526104:
{
    r4 = MemoryInline::FlatRead32((r4 + 32));
    ctr = r12;
    ctx->lr = 0x80526110u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80526110:
{
    r0 = MemoryInline::FlatRead8((r31 + 36));
}

loc_80526118:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80526158;
    }
}

loc_8052611C:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 37u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r31 + 4), r0);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r31 + 6), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r31 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r31 + 10), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r31 + 12), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r31 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r31 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 28), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r31 + 32), r0);
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r31 + 36), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -13528));
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r0);
    MemoryInline::FlatWrite32((r13 + -13528), r31);
}

loc_80526158:
{
    r0 = MemoryInline::FlatRead32((r13 + -13544));
}

loc_80526160:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_8052616C;
    }
}

loc_80526164:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r13 + -13544), r0);
}

loc_8052616C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80526080(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80526080_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80526080 func_80526080 preserves=true fpr_mask=0x00000000
