#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CB820_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];

    goto loc_804CB820;

loc_804CB820:
{
    r5 = 64;
    r3 = ctx->lr;
    MemoryInline::FlatWriteRam32((r5 + 12), r3);
    r3 = MemoryInline::FlatRead32((r5 + 8));
    r3 = (r3 | -2147483648);
    ctx->lr = r3;
    r3 = 48;
    ctx->msr = r3;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_804CB820(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CB820_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000028 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CB820 func_804CB820 preserves=true fpr_mask=0x00000000
