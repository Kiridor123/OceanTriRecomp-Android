#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80053414(CpuContext* ctx);
extern "C" uint32_t func_80053414_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80053414_statefree(uint32_t, uint32_t);

extern "C" void func_80053580(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80053580u);
    goto loc_80053580;

loc_80053580:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x800535A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800531C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800535B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 12u, true, false);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r31 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r3 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r31 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x80053414 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80053414
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    r3 = MemoryInline::ReadResolved16(guest_range_0, 0u, r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r31 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80053414u) && KnownTranslatedCpuCall<0x80053414u>::kAvailable && !KnownTranslatedCpuCall<0x80053414u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80053414u>()) {
        const auto state_free_result_80053414_11A9 = func_80053414_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80053414_11A9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80053414u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x80053408 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x80053408
    // inline leaf 0x80053404 (1 guest instruction(s))
    // end of inlined leaf 0x80053404
    ctx->lr = 0x8005360Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800533D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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

// RECOMP_GUEST_ABI gpr_read=0x00003FCE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80053580 func_80053580 preserves=true fpr_mask=0x00000000
