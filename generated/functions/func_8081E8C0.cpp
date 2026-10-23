#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081E8C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_8081E8C0;

loc_8081E8C0:
{
    // inline leaf 0x80840B00 (3 guest instruction(s))
    r4 = 0x80870000u;
    MemoryInline::FlatWriteRam32((r4 + -32000), r3);
    // end of inlined leaf 0x80840B00
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8081E8C0_statefree(uint32_t native_r3)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;

    goto loc_8081E8C0;

loc_8081E8C0:
{
    // inline leaf 0x80840B00 (3 guest instruction(s))
    cached_r4 = 0x80870000u;
    MemoryInline::FlatWriteRam32((cached_r4 + -32000), cached_r3);
    // end of inlined leaf 0x80840B00
return static_cast<uint64_t>(cached_r4);
}


    return static_cast<uint64_t>(cached_r4);
}
// RECOMP_STATE_FREE_ABI address=0x8081E8C0 symbol=func_8081E8C0_statefree gpr_in=0x00000008 gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081E8C0 func_8081E8C0 preserves=true fpr_mask=0x00000000

