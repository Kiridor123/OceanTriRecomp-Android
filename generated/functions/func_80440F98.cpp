#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80440F98_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80440F98u);
    goto loc_80440F98;

loc_80440F98:
{
    r0 = 0;
    r3 = 0x806E0000u;
    MemoryInline::FlatWriteRam32((r3 + -30960), r0);
    r3 = (r3 + -30960);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_80440F98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80440F98_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80440F98 func_80440F98 preserves=true fpr_mask=0x00000000
