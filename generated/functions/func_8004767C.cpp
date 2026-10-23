#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004767C_ra40_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = arg_r6;

    goto loc_8004767C;

loc_8004767C:
{
    r4 = 2;
    r3 = 0x80670000u;
    r3 = (r3 + -18072);
    r0 = MemoryInline::FlatRead32(r6);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004767C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004767C_ra40_0_18_0(ctx, ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000040 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004767C func_8004767C preserves=true fpr_mask=0x00000000
