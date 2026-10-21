#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8033C3E8_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8033C3E8u);
    goto loc_8033C3E8;

loc_8033C3E8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15875));
    r0 = (r0 & 127);
    MemoryInline::FlatWrite8((r3 + 15875), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 15875));
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    MemoryInline::FlatWriteRam8((r3 + 8), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8033C3E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8033C3E8_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033C3E8 func_8033C3E8 preserves=true fpr_mask=0x00000000
