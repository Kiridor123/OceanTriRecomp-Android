#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801339EC_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_801339EC;

loc_801339EC:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_801339F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(40))) {
        goto loc_return;
    }
}

loc_801339F8:
{
    r0 = 7200;
    MemoryInline::FlatWrite16((r3 + 2380), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2798));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r3 + 2798), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_801339EC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_801339EC_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801339EC func_801339EC preserves=true fpr_mask=0x00000000
