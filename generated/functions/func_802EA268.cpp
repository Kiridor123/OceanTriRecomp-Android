#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802EA268_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802EA268;

loc_802EA268:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = MemoryInline::FlatRead8((r3 + 205));
}

loc_802EA294:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_802EA2C4;
    }
}

loc_802EA298:
{
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r31 = (r3 + 212);
    r3 = r31;
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
    MemoryInline::FlatWrite32((r31 + 4), r29);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r27 + 205));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r27 + 205), static_cast<uint8_t>(r0));
}

loc_802EA2C4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return r3;
}

}

extern "C" void func_802EA268(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802EA268_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000080B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802EA268 func_802EA268 preserves=true fpr_mask=0x00000000
