#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800FBFB8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_800FBFB8;

loc_800FBFB8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
}

loc_800FC074:
{
    r3 = r29;
    r4 = 2048;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_800FC084:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FC094;
    }
}

loc_800FC088:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r0));
    goto loc_800FC09C;
}

loc_800FC094:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r0));
}

loc_800FC09C:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + -22);
}

loc_800FC0A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800FC0C4;
    }
}

loc_800FC0AC:
{
    r0 = (r3 + -25);
}

loc_800FC0B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800FC0D8;
    }
}

loc_800FC0B8:
{
}

loc_800FC0BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_800FC0EC;
    }
}

loc_800FC0C0:
{
    goto loc_800FC0F8;
}

loc_800FC0C4:
{
    r3 = (r30 + 36);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r4 + 84);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    goto loc_800FC0F8;
}

loc_800FC0D8:
{
    r3 = (r30 + 36);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r4 + 84);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    goto loc_800FC0F8;
}

loc_800FC0EC:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_800FC0F8:
{
    r3 = r30;
    r4 = 0;
    r5 = 4;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + -15384);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + -15220);
    MemoryInline::FlatWrite32((r30 + 52), r0);
    r11 = (r1 + 32);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -24), 0, 24u, true, false);
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800FBFB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FBFB8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE000001F gpr_write=0xFC00083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800FBFB8 func_800FBFB8 preserves=true fpr_mask=0x00000000
