#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80145D74_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80145D74;

loc_80145D74:
{
    r0 = 1;
    r4 = (r13 + -17296);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80145D74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80145D74_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80145D74 func_80145D74 preserves=true fpr_mask=0x00000000
