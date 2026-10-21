#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803D2608_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x803D2608u);
    goto loc_803D2608;

loc_803D2608:
{
    r0 = -1;
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + 18469), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    MemoryInline::FlatWriteFloat32((r3 + 27876), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_803D2608(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803D2608_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803D2608 func_803D2608 preserves=true fpr_mask=0x00000000
