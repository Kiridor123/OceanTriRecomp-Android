#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"
#include "pointer_controls.h"

extern "C" uint64_t func_802DCDBC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    PointerControls::UpdatePointerCursor(arg_r3);
    return (static_cast<uint64_t>(4) << 32) | arg_r3;
}

extern "C" void func_802DCDBC(CpuContext* MKW_RESTRICT ctx)
{
    PointerControls::UpdatePointerCursor(ctx->gpr[3]);
    ctx->gpr[4] = 4;
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DCDBC func_802DCDBC preserves=true fpr_mask=0x00000000
