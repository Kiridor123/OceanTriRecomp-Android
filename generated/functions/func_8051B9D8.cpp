#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051B9D8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_8051B9D8;

loc_8051B9D8:
{
    r4 = MemoryInline::FlatRead32((r13 + -13728));
    r3 = 0;
    goto loc_8051B9EC;
}

loc_8051B9E4:
{
    r4 = MemoryInline::FlatRead32((r4 + 32));
    r3 = (r3 + 1);
}

loc_8051B9EC:
{
}

loc_8051B9F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8051B9E4;
    }
}

loc_8051B9F4:
{
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051B9D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051B9D8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000018 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051B9D8 func_8051B9D8 preserves=true fpr_mask=0x00000000
