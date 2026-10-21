#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80470ED0_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80470ED0u);
    goto loc_80470ED0;

loc_80470ED0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = MemoryInline::FlatRead32((r13 + -15948));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 82), 0, 184u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 82));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = MemoryInline::FlatRead32((r13 + -15960));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -15948), r0);
    r5 = MemoryInline::FlatRead32((r13 + -15972));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r13 + -15984));
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r13 + -15960), r0);
    r8 = MemoryInline::FlatRead32((r13 + -15952));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::FlatRead32((r13 + -15964));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -15972), r0);
    r6 = MemoryInline::FlatRead32((r13 + -15976));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = MemoryInline::FlatRead32((r13 + -15988));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -15984), r0);
    r4 = MemoryInline::FlatRead32((r13 + -15956));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 90));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r30 = MemoryInline::FlatRead32((r13 + -15968));
    r0 = (r8 + r0);
    MemoryInline::FlatWrite32((r13 + -15952), r0);
    r31 = MemoryInline::FlatRead32((r13 + -15980));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 92));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r12 = MemoryInline::FlatRead32((r13 + -15992));
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r13 + -15964), r0);
    r11 = MemoryInline::FlatRead32((r13 + -15996));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 94));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r10 = MemoryInline::FlatRead32((r13 + -16000));
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r13 + -15976), r0);
    r9 = MemoryInline::FlatRead32((r13 + -16004));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 96));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = MemoryInline::FlatRead32((r13 + -16008));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -15988), r0);
    r7 = MemoryInline::FlatRead32((r13 + -16012));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 98));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = MemoryInline::FlatRead32((r13 + -16016));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -15956), r0);
    r5 = MemoryInline::FlatRead32((r13 + -16020));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r13 + -16024));
    r0 = (r30 + r0);
    MemoryInline::FlatWrite32((r13 + -15968), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 102));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r13 + -15980), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r12 + r0);
    MemoryInline::FlatWrite32((r13 + -15992), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 168u, (r3 + 250));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r11 + r0);
    MemoryInline::FlatWrite32((r13 + -15996), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 170u, (r3 + 252));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r10 + r0);
    MemoryInline::FlatWrite32((r13 + -16000), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 172u, (r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r9 + r0);
    MemoryInline::FlatWrite32((r13 + -16004), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 174u, (r3 + 256));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r8 + r0);
    MemoryInline::FlatWrite32((r13 + -16008), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 176u, (r3 + 258));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r13 + -16012), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 178u, (r3 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r13 + -16016), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 180u, (r3 + 262));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -16020), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 182u, (r3 + 264));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -16024), r0);
    r1 = (r1 + 16);
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
    return r4;
}

}

extern "C" void func_80470ED0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80470ED0_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x00001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80470ED0 func_80470ED0 preserves=true fpr_mask=0x00000000
