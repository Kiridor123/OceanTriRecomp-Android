#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8054FD2C_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8054FD2C;

loc_8054FD2C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = 0x80790000u;
    r26 = 200;
    r29 = 0x80060000u;
    r6 = (r13 + -13264);
    r27 = 50;
    r28 = 255;
    r25 = (r25 + 9904);
    MemoryInline::FlatWrite8((r13 + -13264), static_cast<uint8_t>(r26));
    r4 = (r29 + -19828);
    r3 = (r13 + -13264);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r27));
    r5 = (r25 + 12);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r28));
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 84u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r6 = (r13 + -13260);
    r30 = 20;
    MemoryInline::FlatWrite8((r13 + -13260), static_cast<uint8_t>(r30));
    r4 = (r29 + -19828);
    r5 = (r25 + 24);
    r3 = (r13 + -13260);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r28));
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r6 = (r13 + -13256);
    MemoryInline::FlatWrite8((r13 + -13256), static_cast<uint8_t>(r28));
    r4 = (r29 + -19828);
    r5 = (r25 + 36);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r27));
    r3 = (r13 + -13256);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r28));
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r6 = (r13 + -13252);
    r0 = 192;
    MemoryInline::FlatWrite8((r13 + -13252), static_cast<uint8_t>(r0));
    r4 = (r29 + -19828);
    r5 = (r25 + 48);
    r3 = (r13 + -13252);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r28));
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r6 = (r13 + -13248);
    r31 = 100;
    MemoryInline::FlatWrite8((r13 + -13248), static_cast<uint8_t>(r27));
    r4 = (r29 + -19828);
    r5 = (r25 + 60);
    r3 = (r13 + -13248);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r28));
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 48u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r6 = (r13 + -13244);
    MemoryInline::FlatWrite8((r13 + -13244), static_cast<uint8_t>(r31));
    r4 = (r29 + -19828);
    r5 = (r25 + 72);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r26));
    r3 = (r13 + -13244);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r28));
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r6 = (r13 + -13240);
    MemoryInline::FlatWrite8((r13 + -13240), static_cast<uint8_t>(r28));
    r4 = (r29 + -19828);
    r5 = (r25 + 84);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r30));
    r3 = (r13 + -13240);
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r28));
    // inline leaf 0x80456D24 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -16424));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, r5, r0);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r5 + 4), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -16424), r5);
    // end of inlined leaf 0x80456D24
    r3 = 0x80650000u;
    r0 = MemoryInline::FlatRead32((r13 + -18504));
    r3 = (r3 + 3096);
    r11 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r3 + 76), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8054FD2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8054FD2C_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8054FD2C func_8054FD2C preserves=true fpr_mask=0x00000000
