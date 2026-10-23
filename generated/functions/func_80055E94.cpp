#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055E94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80055E94;

loc_80055E94:
{
    MemoryInline::FlatWrite8((r13 + -17792), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -17791), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80055E94_statefree(uint32_t native_r3, uint32_t native_r13)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r13 = native_r13;

    goto loc_80055E94;

loc_80055E94:
{
    MemoryInline::FlatWrite8((cached_r13 + -17792), static_cast<uint8_t>(cached_r3));
    cached_r0 = 0;
    MemoryInline::FlatWrite8((cached_r13 + -17791), static_cast<uint8_t>(cached_r0));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80055E94 symbol=func_80055E94_statefree gpr_in=0x00002008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80055E94 func_80055E94 preserves=true fpr_mask=0x00000000


extern "C" void func_80055E94_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80055E94(ctx);
}
