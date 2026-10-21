#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EB2F0_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804EB2F0u);
    goto loc_804EB2F0;

loc_804EB2F0:
{
    r0 = MemoryInline::FlatRead8((r13 + -19585));
}

loc_804EB2F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_return;
    }
}

loc_804EB2FC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14224));
    MemoryInline::FlatWrite8((r13 + -19585), static_cast<uint8_t>(r3));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r13 + -14224), r0);
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_804EB2F0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804EB2F0_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804EB2F0 func_804EB2F0 preserves=true fpr_mask=0x00000000
