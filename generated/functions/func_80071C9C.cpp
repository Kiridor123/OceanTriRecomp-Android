#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD110(CpuContext* ctx);
extern "C" void func_804CD110_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" void func_80071C9C_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x80071C9Cu);
    goto loc_80071C9C;

loc_80071C9C:
{
    if constexpr (KnownRegArgsCpuCall<0x804CD110u>(&func_804CD110)) {
        func_804CD110_ra8_0_0_0(ctx, r3);
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804CD110u>(ctx);
    }
    return;
}

}

extern "C" void func_80071C9C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80071C9C_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80071C9C func_80071C9C preserves=true fpr_mask=0x00000000
