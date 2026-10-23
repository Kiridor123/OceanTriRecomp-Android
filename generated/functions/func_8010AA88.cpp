#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8010AA88_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8010AA88;

loc_8010AA88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r7;
    r31 = r8;
    r3 = (r3 + 24);
    r4 = r6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r28 + 444));
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 2), 0, 67u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 34u, (r27 + 36), r0);
    r0 = MemoryInline::FlatRead32((r28 + 448));
    MemoryInline::WriteResolved32(guest_range_0, 38u, (r27 + 40), r0);
    r3 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 42u, (r27 + 44), r3);
    r0 = 14;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r27 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r27 + 2), static_cast<uint8_t>(r29));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 10u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 10u, (r27 + 12), r3);
        MemoryInline::WriteResolved32(guest_range_0, 14u, (r27 + 16), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 46u, (r27 + 48), r28);
    r0 = MemoryInline::FlatRead8((r28 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r27 + 68), static_cast<uint8_t>(r0));
    r3 = r27;
    r4 = (r30 & 255);
    r5 = (r31 & 255);
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80110000u;
    r0 = (r3 + -21708);
    MemoryInline::WriteResolved32(guest_range_0, 62u, (r27 + 64), r0);
    r3 = 0x80110000u;
    r0 = (r3 + -21148);
    MemoryInline::WriteResolved32(guest_range_0, 50u, (r27 + 52), r0);
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8010AA88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8010AA88_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FA gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8010AA88 func_8010AA88 preserves=true fpr_mask=0x00000000
