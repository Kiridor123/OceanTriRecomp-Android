#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AEE70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_800AEE70;

loc_800AEE70:
{
    r4 = MemoryInline::FlatRead32((r4 + 36));
    // inline leaf 0x800A89FC (2 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    // end of inlined leaf 0x800A89FC
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_800AEE70_statefree_v0(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    goto loc_800AEE70;

loc_800AEE70:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + 36));
    // inline leaf 0x800A89FC (2 guest instruction(s))
    MemoryInline::FlatWrite32(cached_r3, cached_r4);
    // end of inlined leaf 0x800A89FC
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800AEE70 symbol=func_800AEE70_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_800AEE70_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    goto loc_800AEE70;

loc_800AEE70:
{
    cached_r4 = MemoryInline::FlatRead32((cached_r4 + 36));
    // inline leaf 0x800A89FC (2 guest instruction(s))
    MemoryInline::FlatWrite32(cached_r3, cached_r4);
    // end of inlined leaf 0x800A89FC
return static_cast<uint64_t>(cached_r4);
}


    return static_cast<uint64_t>(cached_r4);
}
// RECOMP_STATE_FREE_ABI address=0x800AEE70 symbol=func_800AEE70_statefree gpr_in=0x00000018 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AEE70 func_800AEE70 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800AEE70_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_800AEE70(ctx);
    return ctx->gpr[4];
}
