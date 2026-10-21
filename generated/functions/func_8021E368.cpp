#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8021E368_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8021E368u);
    goto loc_8021E368;

loc_8021E368:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8021E370:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(73))) {
        goto loc_8021E388;
    }
}

loc_8021E374:
{
    r0 = MemoryInline::FlatRead8((r3 + 2819));
}

loc_8021E37C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021E388;
    }
}

loc_8021E380:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8021E388:
{
    r0 = MemoryInline::FlatRead8((r4 + 598));
}

loc_8021E390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8021E39C;
    }
}

loc_8021E394:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8021E39C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8021E368(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8021E368_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021E368 func_8021E368 preserves=true fpr_mask=0x00000000
