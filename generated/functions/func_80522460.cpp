#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80522460_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80522460;

loc_80522460:
{
    r3 = MemoryInline::FlatRead32((r13 + -13608));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80522460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80522460_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80522460 func_80522460 preserves=true fpr_mask=0x00000000
