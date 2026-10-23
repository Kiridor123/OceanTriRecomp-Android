#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052748(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80052748;

loc_80052748:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80052748_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    goto loc_80052748;

loc_80052748:
{
    cached_r0 = MemoryInline::FlatRead16(cached_r4);
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::FlatWrite16(cached_r3, static_cast<uint16_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead16((cached_r4 + 2));
    cached_r0 = (cached_r0 << 16);
    cached_r0 = (static_cast<int32_t>(cached_r0) >> 16);
    MemoryInline::FlatWrite16((cached_r3 + 2), static_cast<uint16_t>(cached_r0));
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80052748 symbol=func_80052748_statefree gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052748 func_80052748 preserves=true fpr_mask=0x00000000


extern "C" void func_80052748_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80052748(ctx);
}
