#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8007AFD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

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

    MKW_GUEST_ENTER(0x8007AFD0u);
    goto loc_8007AFD0;

loc_8007AFD0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r31 = r4;
    r5 = MemoryInline::FlatRead16(r3);
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8007AFF8:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8007B00C;
    }
}

loc_8007AFFC:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_8007B008:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8007B014;
    }
}

loc_8007B00C:
{
    r3 = 0;
    goto loc_8007B0C0;
}

loc_8007B014:
{
    r27 = 0;
    r29 = 0;
    r28 = 0;
    goto loc_8007B07C;
}

loc_8007B024:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r0 + r29);
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800651F0
}

loc_8007B034:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007B050;
    }
}

loc_8007B038:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r0 + r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A57Cu>(ctx);
    goto loc_8007B05C;
}

loc_8007B050:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = (r0 + r29);
    // inline leaf 0x80065208 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80065208
}

loc_8007B05C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r0 + r28);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 + r28);
    // inline leaf 0x8007AF5C (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8007AF5C
    r29 = (r29 + 68);
    r28 = (r28 + 4);
    r27 = (r27 + 1);
}

loc_8007B07C:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_8007B084:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_8007B024;
    }
}

loc_8007B088:
{
    r28 = 0;
    r29 = 0;
    goto loc_8007B0B0;
}

loc_8007B094:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r0 + r29);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r4 = (r0 + r29);
    // inline leaf 0x8007B0D8 (11 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 9));
    MemoryInline::FlatWrite16((r3 + 9), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::FlatWrite8((r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8007B0D8
    r29 = (r29 + 12);
    r28 = (r28 + 1);
}

loc_8007B0B0:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_8007B0B8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_8007B094;
    }
}

loc_8007B0BC:
{
    r3 = 1;
}

loc_8007B0C0:
{
    r11 = (r1 + 32);
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

extern "C" void func_8007AFD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007AFD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007AFD0 func_8007AFD0 preserves=true fpr_mask=0x00000000
