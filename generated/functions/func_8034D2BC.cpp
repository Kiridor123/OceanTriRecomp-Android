#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8034D2BC_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8034D2BC;

loc_8034D2BC:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r3 = 8;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8034D2BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8034D2BC_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034D2BC func_8034D2BC preserves=true fpr_mask=0x00000000
