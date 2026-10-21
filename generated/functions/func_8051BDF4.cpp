#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051BDF4_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8051BDF4u);
    goto loc_8051BDF4;

loc_8051BDF4:
{
}

loc_8051BDF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8051BDFC:
{
    MemoryInline::FlatWrite32((r3 + 44), r4);
    return;
}

loc_return:
{
    return;
}

}

extern "C" void func_8051BDF4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8051BDF4_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051BDF4 func_8051BDF4 preserves=true fpr_mask=0x00000000
