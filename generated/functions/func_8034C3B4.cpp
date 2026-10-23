#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034C3B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8034C3B4;

loc_8034C3B4:
{
    r3 = (r3 & 255);
    // inline leaf 0x802E19DC (5 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x805D0000u;
    r3 = (r3 + 24468);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    // end of inlined leaf 0x802E19DC
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8034C3B4_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t r3_addr_0 = 0;

    goto loc_8034C3B4;

loc_8034C3B4:
{
    cached_r3 = (cached_r3 & 255);
    // inline leaf 0x802E19DC (5 guest instruction(s))
    cached_r0 = (cached_r3 & 255);
    cached_r3 = 0x805D0000u;
    cached_r3 = (cached_r3 + 24468);
    r3_addr_0 = (cached_r3 + cached_r0);
    cached_r3 = MemoryInline::FlatRead8(r3_addr_0);
    // end of inlined leaf 0x802E19DC

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8034C3B4 symbol=func_8034C3B4_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034C3B4 func_8034C3B4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8034C3B4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8034C3B4(ctx);
    return ctx->gpr[3];
}
