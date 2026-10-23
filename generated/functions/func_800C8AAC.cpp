#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C8AAC_ra10_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    goto loc_800C8AAC;

loc_800C8AAC:
{
}

loc_800C8AB0:
{
    r3 = 0x800D0000u;
    r3 = (r3 + -29980);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800C8ABC:
{
    r3 = 0x800D0000u;
    r3 = (r3 + -29696);
    ctx->gpr[3] = r3;
    return;
}

loc_return:
{
    ctx->gpr[3] = r3;
    return;
}

}

extern "C" void func_800C8AAC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800C8AAC_ra10_0_0_0(ctx, ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C8AAC func_800C8AAC preserves=true fpr_mask=0x00000000
