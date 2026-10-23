#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8046AA30_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_8046AA30;

loc_8046AA30:
{
}

loc_8046AA34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_return;
    }
}

loc_8046AA38:
{
}

loc_8046AA3C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_8046AA40:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r4 = 0;
    r3 = (r3 + 31264);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_0, r4);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8046AA30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8046AA30_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046AA30 func_8046AA30 preserves=true fpr_mask=0x00000000
