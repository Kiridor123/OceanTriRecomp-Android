#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80058BB4(CpuContext* MKW_RESTRICT ctx)
{
    goto loc_80058BB4;

loc_80058BB4:
{
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_80058BB4_statefree()
{

    goto loc_80058BB4;

loc_80058BB4:
{
    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80058BB4 symbol=func_80058BB4_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80058BB4 func_80058BB4 preserves=true fpr_mask=0x00000000
