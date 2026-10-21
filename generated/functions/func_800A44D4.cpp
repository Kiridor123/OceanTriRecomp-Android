#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A44D4(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x800A44D4u);
    goto loc_800A44D4;

loc_800A44D4:
{
    InvokeDirectCpu<0x800A4A90u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A44D4 func_800A44D4 preserves=true fpr_mask=0x00000000
