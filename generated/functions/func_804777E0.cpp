#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804777E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];

    goto loc_804777E0;

loc_804777E0:
{
    // sync @ 0x804777E0 (no-op)
}

loc_804777E4:
{
    // nop
    r3 = 0;
    // nop
    goto loc_804777E4;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_804777E0_statefree_v1(uint32_t native_r3)
{

    uint32_t cached_r3 = 0;

    goto loc_804777E0;

loc_804777E0:
{
    // sync @ 0x804777E0 (no-op)
}

loc_804777E4:
{
    // nop
    cached_r3 = 0;
    // nop
    goto loc_804777E4;
}

}
// RECOMP_STATE_FREE_ABI address=0x804777E0 symbol=func_804777E0_statefree_v1 gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_804777E0_statefree_v0(uint32_t native_r3)
{

    uint32_t cached_r3 = 0;

    goto loc_804777E0;

loc_804777E0:
{
    // sync @ 0x804777E0 (no-op)
}

loc_804777E4:
{
    // nop
    cached_r3 = 0;
    // nop
    goto loc_804777E4;
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x804777E0 symbol=func_804777E0_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_804777E0_statefree()
{

    uint32_t cached_r3 = 0;

    goto loc_804777E0;

loc_804777E0:
{
    // sync @ 0x804777E0 (no-op)
}

loc_804777E4:
{
    // nop
    cached_r3 = 0;
    // nop
    goto loc_804777E4;
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x804777E0 symbol=func_804777E0_statefree gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804777E0 func_804777E0 preserves=true fpr_mask=0x00000000

