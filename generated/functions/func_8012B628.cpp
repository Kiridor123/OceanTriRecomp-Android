#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8012B628_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8012B628;

loc_8012B628:
{
    r7 = MemoryInline::FlatRead8((r3 + 896));
    r0 = (r4 & 255);
}

loc_8012B634:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r0))) {
        goto loc_8012B660;
    }
}

loc_8012B638:
{
    r4 = MemoryInline::FlatRead8((r3 + 897));
    r0 = (r5 & 255);
}

loc_8012B644:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8012B660;
    }
}

loc_8012B648:
{
    r3 = MemoryInline::FlatRead8((r3 + 898));
    r0 = (r6 & 255);
}

loc_8012B654:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012B660;
    }
}

loc_8012B658:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8012B660:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012B628(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012B628_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000099 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012B628 func_8012B628 preserves=true fpr_mask=0x00000000
