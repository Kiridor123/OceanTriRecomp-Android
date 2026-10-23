#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004DE08_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    goto loc_8004DE08;

loc_8004DE08:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r3 + 15844));
}

loc_8004DE14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004DE20;
    }
}

loc_8004DE18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8004DE20:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 15844), static_cast<uint16_t>(r0));
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8004DE08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004DE08_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004DE08 func_8004DE08 preserves=true fpr_mask=0x00000000
