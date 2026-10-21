#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80469698_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80469698u);
    goto loc_80469698;

loc_80469698:
{
    MemoryAlias::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 20), r0);
    r0 = 1;
    r31 = 0x80700000u;
    r31 = (r31 + -27496);
    MemoryAlias::FlatWriteRam32((r31 + 152), r0);
    // inline leaf 0x8046C26C (2 guest instruction(s))
    r3 = ctx->msr;
    // end of inlined leaf 0x8046C26C
    MemoryAlias::FlatWriteRam32((r31 + 140), r3);
    r0 = -536870912;
    r3 = 0;
    MemoryAlias::FlatWrite32((r13 + -16344), r0);
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80469698(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80469698_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80469698 func_80469698 preserves=true fpr_mask=0x00000000
