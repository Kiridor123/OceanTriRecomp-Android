#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803394CC_ra10_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x803394CCu);
    goto loc_803394CC;

loc_803394CC:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = MemoryInline::FlatRead8((r4 + 1));
    // inline leaf 0x80146C64 (11 guest instruction(s))
    r5 = 0x806A0000u;
    r5 = (r5 + 27152);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 3888));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 3888), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80146C64
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803394CC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803394CC_ra10_0_18_0(ctx, ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803394CC func_803394CC preserves=true fpr_mask=0x00000000
