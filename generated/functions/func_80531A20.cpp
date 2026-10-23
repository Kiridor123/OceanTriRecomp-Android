#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80531A20_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80531A20;

loc_80531A20:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r25 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r26 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r27 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r28 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r29 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r30 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r31 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r12 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 8));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r4 + 9));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r4 + 10));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 11));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r4 + 12));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r4 + 13));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 14));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r4 + 15));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 16u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r11));
    r11 = (r1 + 48);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r25));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 10), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 11), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 12), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 13), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 14), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r3 + 15), static_cast<uint8_t>(r0));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    return;
}

}

extern "C" void func_80531A20(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80531A20_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80531A20 func_80531A20 preserves=true fpr_mask=0x00000000
