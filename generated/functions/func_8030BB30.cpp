#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8030BB30_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x8030BB30u);
    goto loc_8030BB30;

loc_8030BB30:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 417), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 418), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 419), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 414), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8030BB30(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8030BB30_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8030BB30 func_8030BB30 preserves=true fpr_mask=0x00000000
