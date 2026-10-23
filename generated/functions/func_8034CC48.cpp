#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034CC48_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    goto loc_8034CC48;

loc_8034CC48:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -4792);
    r3 = MemoryInline::FlatRead32((r4 + 804));
}

loc_8034CC58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8034CC64;
    }
}

loc_8034CC5C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8034CC64:
{
    r0 = MemoryInline::FlatRead32((r4 + 808));
    ctr = r0;
}

loc_8034CC70:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8034CC88;
    }
}

loc_8034CC74:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8034CC7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8034CC80:
{
    r3 = (r3 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8034CC74;
    }
}

loc_8034CC88:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034CC48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034CC48_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034CC48 func_8034CC48 preserves=true fpr_mask=0x00000000
