#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CB990_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];

    goto loc_804CB990;

loc_804CB990:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x804778B0 (2 guest instruction(s))
    r3 = ctx->hid2;
    // end of inlined leaf 0x804778B0
    r3 = (r3 | -1610612736);
    // inline leaf 0x804778C0 (2 guest instruction(s))
    ctx->hid2 = r3;
    // end of inlined leaf 0x804778C0
    // inline leaf 0x804CCDF0 (4 guest instruction(s))
    r3 = ctx->hid0;
    r3 = (r3 | 2048);
    ctx->hid0 = r3;
    // end of inlined leaf 0x804CCDF0
    // sync @ 0x804CB9AC (no-op)
    r3 = 0;
    ctx->gqr[0] = r3;
    ctx->gqr[1] = r3;
    ctx->gqr[2] = r3;
    ctx->gqr[3] = r3;
    ctx->gqr[4] = r3;
    ctx->gqr[5] = r3;
    ctx->gqr[6] = r3;
    ctx->gqr[7] = r3;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_804CB990(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CB990_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CB990 func_804CB990 preserves=true fpr_mask=0x00000000
