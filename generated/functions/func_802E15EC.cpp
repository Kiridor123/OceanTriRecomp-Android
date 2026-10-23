#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802E15EC_ra38_1fa_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_802E15EC;

loc_802E15EC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (r3 & 65535);
    r4 = 0;
    ctx->lr = 0x802E161Cu;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_5FB = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_5FB);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_5FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r4);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r0);
    r3 = (r1 + 28);
    r4 = (r1 + 32);
    r5 = (r29 & 255);
    // inline leaf 0x80055DF0 (15 guest instruction(s))
    r0 = (r5 & 255);
    r5 = 0x80580000u;
    r5 = (r5 + 8400);
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    r0 = (r0 * 20);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 20u, r3, static_cast<uint16_t>(r5));
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = (r5 + 20);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 24u, r4, static_cast<uint16_t>(r0));
    r0 = 20;
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r4 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80055DF0
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r30);
    r3 = (r1 + 8);
    r4 = r31;
    ctx->lr = 0x802E1684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x802E07A4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E15EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E15EC_ra38_1fa_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E15EC func_802E15EC preserves=true fpr_mask=0x00000000
