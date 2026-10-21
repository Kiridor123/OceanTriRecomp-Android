#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802ABA78_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802ABA78u);
    goto loc_802ABA78;

loc_802ABA78:
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
    r3 = 0x806B0000u;
    r31 = (r3 + -1256);
    r30 = 0;
}

loc_802ABAA4:
{
    r3 = (r30 & 255);
    // inline leaf 0x802AB974 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -1256);
    r0 = (r3 & 255);
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r3 = (r3 + 812);
    // end of inlined leaf 0x802AB974
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_802ABAB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802ABAE8;
    }
}

loc_802ABAB8:
{
    MemoryInline::FlatWrite32(r3, r27);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r29));
    r0 = (r29 & 255);
    r5 = (r31 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 956));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r4));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 956), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    goto loc_802ABAF8;
}

loc_802ABAE8:
{
    r30 = (r30 + 1);
}

loc_802ABAF0:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(12))) {
        goto loc_802ABAA4;
    }
}

loc_802ABAF4:
{
    r3 = 0;
}

loc_802ABAF8:
{
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

extern "C" void func_802ABA78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802ABA78_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802ABA78 func_802ABA78 preserves=true fpr_mask=0x00000000
