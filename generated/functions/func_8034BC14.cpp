#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034BC14_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8034BC14u);
    goto loc_8034BC14;

loc_8034BC14:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r5;
    r5 = 0;
    r31 = r4;
    r0 = (r3 & 255);
}

loc_8034BC3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8034BC4C;
    }
}

loc_8034BC40:
{
}

loc_8034BC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8034BC74;
    }
}

loc_8034BC48:
{
    goto loc_8034BC80;
}

loc_8034BC4C:
{
    r0 = (r4 & 255);
}

loc_8034BC54:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(12))) {
        goto loc_8034BC80;
    }
}

loc_8034BC58:
{
}

loc_8034BC5C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(26))) {
        goto loc_8034BC80;
    }
}

loc_8034BC60:
{
    r31 = (r4 + -12);
    r3 = 4;
    // inline leaf 0x8029F87C (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1880));
    // end of inlined leaf 0x8029F87C
    r5 = r3;
    goto loc_8034BC80;
}

loc_8034BC74:
{
    r3 = 5;
    // inline leaf 0x8029F87C (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1880));
    // end of inlined leaf 0x8029F87C
    r5 = r3;
}

loc_8034BC80:
{
}

loc_8034BC84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8034BCA0;
    }
}

loc_8034BC88:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r0 = (r31 & 255);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0 = (r5 + r4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    goto loc_8034BCA4;
}

loc_8034BCA0:
{
    r3 = -1;
}

loc_8034BCA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034BC14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034BC14_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034BC14 func_8034BC14 preserves=true fpr_mask=0x00000000
