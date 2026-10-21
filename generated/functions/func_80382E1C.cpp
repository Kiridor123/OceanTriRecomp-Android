#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80382E1C_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80382E1Cu);
    goto loc_80382E1C;

loc_80382E1C:
{
}

loc_80382E20:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_80382E30;
    }
}

loc_80382E24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1856), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_80382E30:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1856), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80382E1C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80382E1C_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80382E1C func_80382E1C preserves=true fpr_mask=0x00000000
