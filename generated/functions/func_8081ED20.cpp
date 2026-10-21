#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081ED20(CpuContext* MKW_RESTRICT ctx)
{
    MKW_GUEST_ENTER(0x8081ED20u);
    goto loc_8081ED20;

loc_8081ED20:
{
    InvokeDirectCpu<0x8081E530u>(ctx);
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081ED20 func_8081ED20 preserves=true fpr_mask=0x00000000
