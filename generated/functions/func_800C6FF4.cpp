#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C6FF4(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x800C6FF4u);
    goto loc_800C6FF4;

loc_800C6FF4:
{
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C6FF4 func_800C6FF4 preserves=true fpr_mask=0x00000000
