#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80523E80_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80523E80;

loc_80523E80:
{
    r4 = MemoryInline::FlatRead32((r13 + -13532));
}

loc_80523E88:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80523EA4;
    }
}

loc_80523E8C:
{
    MemoryInline::FlatWrite32((r13 + -13532), r3);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80523EBC;
}

loc_80523EA0:
{
    r4 = r0;
}

loc_80523EA4:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80523EAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80523EA0;
    }
}

loc_80523EB0:
{
    MemoryInline::FlatWrite32(r4, r3);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80523EBC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80523E80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80523E80_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80523E80 func_80523E80 preserves=true fpr_mask=0x00000000
