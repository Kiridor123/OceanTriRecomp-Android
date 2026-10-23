#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027DD0C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8027DD0C;

loc_8027DD0C:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8027DD14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8027DD3C;
    }
}

loc_8027DD18:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -52);
}

loc_8027DD24:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8027DD34;
    }
}

loc_8027DD28:
{
    r0 = (r3 + -61);
}

loc_8027DD30:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027DD3C;
    }
}

loc_8027DD34:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027DD3C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8027DD0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027DD0C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027DD0C func_8027DD0C preserves=true fpr_mask=0x00000000
