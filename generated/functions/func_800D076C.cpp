#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D076C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x800D076Cu);
    goto loc_800D076C;

loc_800D076C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800D076C_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t r3_rot_0 = 0;

    MKW_GUEST_ENTER(0x800D076Cu);
    goto loc_800D076C;

loc_800D076C:
{
    cached_r3 = 0x80660000u;
    cached_r3 = (cached_r3 + -21920);
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 2003));
    cached_r0 = (cached_r3 + -1);
    cached_r0 = PPC_CntlzwInline(static_cast<uint32_t>(cached_r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(27));
    cached_r3 = (r3_rot_0 & 134217727);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800D076C symbol=func_800D076C_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D076C func_800D076C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800D076C_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800D076C(ctx);
    return ctx->gpr[3];
}
