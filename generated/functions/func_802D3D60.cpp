#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D68EC(CpuContext* ctx);
extern "C" void func_802D68EC_ra28_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802D3D60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802D3D60;

loc_802D3D60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x802D3D40 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 558), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 562), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D3D40
    r3 = r30;
    // inline leaf 0x802D3D50 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 546), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 550), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D3D50
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 540), 0, 36u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r30 + 540), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r30 + 544), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r30 + 552), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r30 + 556), static_cast<uint16_t>(r3));
    r0 = (r31 & 255);
}

loc_802D3DA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D3DC8;
    }
}

loc_802D3DA8:
{
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r30 + 564), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r30 + 565), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r30 + 568), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r30 + 569), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r30 + 566), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r30 + 570), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r30 + 572), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r30 + 574), static_cast<uint16_t>(r3));
}

loc_802D3DC8:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x802D68ECu>(&func_802D68EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        func_802D68EC_ra28_0_0_0(ctx, r3, r5);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D68ECu>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D3D60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D3D60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D3D60 func_802D3D60 preserves=true fpr_mask=0x00000000
