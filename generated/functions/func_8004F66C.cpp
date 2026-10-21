#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F66C_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8004F66Cu);
    goto loc_8004F66C;

loc_8004F66C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17804), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r13 + -17816), r4);
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r13 + -17801), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_8004F66C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8004F66C_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004F66C func_8004F66C preserves=true fpr_mask=0x00000000
