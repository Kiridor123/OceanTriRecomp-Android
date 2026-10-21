#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4E8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x800E4E8Cu);
    goto loc_800E4E8C;

loc_800E4E8C:
{
    r3 = (r3 + 16);
    // inline leaf 0x800E4E7C (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x800E4E7C
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_800E4E8C_statefree(uint32_t native_r3)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    MKW_GUEST_ENTER(0x800E4E8Cu);
    goto loc_800E4E8C;

loc_800E4E8C:
{
    cached_r3 = (cached_r3 + 16);
    // inline leaf 0x800E4E7C (4 guest instruction(s))
    cached_r0 = 0;
    MemoryInline::FlatWrite32(cached_r3, cached_r0);
    MemoryInline::FlatWrite32((cached_r3 + 4), cached_r0);
    // end of inlined leaf 0x800E4E7C

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x800E4E8C symbol=func_800E4E8C_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E4E8C func_800E4E8C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800E4E8C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800E4E8C(ctx);
    return ctx->gpr[3];
}
