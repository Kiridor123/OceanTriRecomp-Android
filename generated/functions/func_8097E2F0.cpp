#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097E2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x8097E2F0u);
    goto loc_8097E2F0;

loc_8097E2F0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2320));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = 0x809D0000u;
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4140), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 13672));
    MemoryInline::FlatWrite8((r3 + 4311), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8097E2F0_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r4 = 0;

    MKW_GUEST_ENTER(0x8097E2F0u);
    goto loc_8097E2F0;

loc_8097E2F0:
{
    cached_r3 = 0x80660000u;
    cached_r3 = (cached_r3 + -21920);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2320));
    cached_r0 = (static_cast<int32_t>(static_cast<int8_t>(cached_r0)));
    cached_r4 = 0x809D0000u;
    cached_r3 = MemoryInline::FlatRead32((cached_r4 + 13672));
    MemoryInline::FlatWrite8((cached_r3 + 4140), static_cast<uint8_t>(cached_r0));
    cached_r0 = 0;
    cached_r3 = MemoryInline::FlatRead32((cached_r4 + 13672));
    MemoryInline::FlatWrite8((cached_r3 + 4311), static_cast<uint8_t>(cached_r0));

return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8097E2F0 symbol=func_8097E2F0_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097E2F0 func_8097E2F0 preserves=true fpr_mask=0x00000000

