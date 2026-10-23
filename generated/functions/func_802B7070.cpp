#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B7070_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_802B7070;

loc_802B7070:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1182), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1184), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1186), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1188), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 1190), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_802B7070(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802B7070_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B7070 func_802B7070 preserves=true fpr_mask=0x00000000
