#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FE390(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_801FE390;

loc_801FE390:
{
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 & 255);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_801FE390_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    uint32_t r3_rot_0 = 0;

    goto loc_801FE390;

loc_801FE390:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 80));
    cached_r3 = MemoryInline::FlatRead16((cached_r3 + 2));
    cached_r3 = (cached_r3 << 16);
    cached_r3 = (static_cast<int32_t>(cached_r3) >> 16);
    cached_r0 = (cached_r4 & 255);
    cached_r0 = (cached_r0 - cached_r3);
    cached_r0 = PPC_CntlzwInline(static_cast<uint32_t>(cached_r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(27));
    cached_r3 = (r3_rot_0 & 134217727);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x801FE390 symbol=func_801FE390_statefree gpr_in=0x00000018 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FE390 func_801FE390 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_801FE390_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_801FE390(ctx);
    return ctx->gpr[3];
}
