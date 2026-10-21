#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003F570_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8003F570u);
    goto loc_8003F570;

loc_8003F570:
{
}

loc_8003F574:
{
    r0 = 1;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8003F580;
    }
}

loc_8003F57C:
{
    r0 = r3;
}

loc_8003F580:
{
    MemoryInline::FlatWrite32((r13 + -18052), r0);
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8003F570(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8003F570_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8003F570 func_8003F570 preserves=true fpr_mask=0x00000000
