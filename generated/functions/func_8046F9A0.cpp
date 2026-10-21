#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046F9A0_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8046F9A0u);
    goto loc_8046F9A0;

loc_8046F9A0:
{
    r5 = MemoryInline::FlatRead32((r13 + -16096));
    r4 = 0x80700000u;
    r4 = (r4 + -13312);
    r3 = (r5 + 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r5 = (r5_rot_0 & -128);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r0 = (r0_rot_0 & 128);
    r3 = (r3 & 1);
    MemoryInline::FlatWrite32((r13 + -16096), r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -16100), r0);
    r3 = (r4 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046F9A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046F9A0_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046F9A0 func_8046F9A0 preserves=true fpr_mask=0x00000000
