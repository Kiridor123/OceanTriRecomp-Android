#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8844(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x800E8844u);
    goto loc_800E8844;

loc_800E8844:
{
    // inline leaf 0x80477730 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r13 + -20728), r3);
    MemoryInline::FlatWrite32((r13 + -20724), r4);
    // end of inlined leaf 0x80477730
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_800E8844_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r13)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r13 = native_r13;

    MKW_GUEST_ENTER(0x800E8844u);
    goto loc_800E8844;

loc_800E8844:
{
    // inline leaf 0x80477730 (3 guest instruction(s))
    MemoryInline::FlatWrite32((cached_r13 + -20728), cached_r3);
    MemoryInline::FlatWrite32((cached_r13 + -20724), cached_r4);
    // end of inlined leaf 0x80477730
    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800E8844 symbol=func_800E8844_statefree gpr_in=0x00002018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E8844 func_800E8844 preserves=true fpr_mask=0x00000000


extern "C" void func_800E8844_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_800E8844(ctx);
}
