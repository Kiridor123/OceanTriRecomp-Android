#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DEB4C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802DEB4C;

loc_802DEB4C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r29 = (r3 + 216);
    r28 = 0;
    r30 = 0;
    r31 = 1;
}

loc_802DEB78:
{
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r31));
    r3 = 14;
    r4 = (r28 & 65535);
    // inline leaf 0x8029F844 (10 guest instruction(s))
    r5 = 0x806B0000u;
    r5 = (r5 + -3160);
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    r0 = (r4 & 65535);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x8029F844
    MemoryInline::FlatWrite32((r29 + 8), r3);
    MemoryInline::FlatWrite32((r29 + 12), r30);
    r28 = (r28 + 1);
    r29 = (r29 + 24);
}

loc_802DEBA0:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(2))) {
        goto loc_802DEB78;
    }
}

loc_802DEBA4:
{
    r0 = MemoryInline::FlatRead8((r26 + 4));
}

loc_802DEBAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802DEBC8;
    }
}

loc_802DEBB0:
{
    r4 = 1;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = (r0 * 24);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite8((r3 + 217), static_cast<uint8_t>(r4));
    goto loc_802DEBE0;
}

loc_802DEBC8:
{
    r3 = -391905280;
    r4 = (r3 + 4095);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = (r0 * 24);
    r3 = (r26 + r0);
    MemoryInline::FlatWrite32((r3 + 228), r4);
}

loc_802DEBE0:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
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

extern "C" void func_802DEB4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DEB4C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DEB4C func_802DEB4C preserves=true fpr_mask=0x00000000
