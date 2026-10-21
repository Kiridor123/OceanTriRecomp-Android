#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8025B138_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8025B138u);
    goto loc_8025B138;

loc_8025B138:
{
    r4 = MemoryInline::FlatRead8((r3 + 1094));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 1094), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_8025B14C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10))) {
        goto loc_return;
    }
}

loc_8025B150:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 1094), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return;
}

}

extern "C" void func_8025B138(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8025B138_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025B138 func_8025B138 preserves=true fpr_mask=0x00000000
