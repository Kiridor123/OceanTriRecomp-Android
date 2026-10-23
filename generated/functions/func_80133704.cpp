#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80133704_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80133704;

loc_80133704:
{
    r4 = MemoryInline::FlatRead16((r3 + 2064));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148742916);
}

loc_8013370C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80133710:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 2064), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80133704(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80133704_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80133704 func_80133704 preserves=true fpr_mask=0x00000000
