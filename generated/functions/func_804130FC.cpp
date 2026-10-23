#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804130FC_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_804130FC;

loc_804130FC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 92), r0);
    MemoryInline::FlatWrite32((r3 + 88), r0);
    r0 = 10;
    MemoryInline::FlatWrite8((r3 + 107), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_804130FC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804130FC_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804130FC func_804130FC preserves=true fpr_mask=0x00000000
