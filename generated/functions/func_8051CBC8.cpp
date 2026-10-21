#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D2560(CpuContext* ctx);
extern "C" void func_804D2560_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" void func_8051CBC8_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x8051CBC8u);
    goto loc_8051CBC8;

loc_8051CBC8:
{
    if constexpr (KnownRegArgsCpuCall<0x804D2560u>(&func_804D2560)) {
        func_804D2560_ra8_0_0_0(ctx, r3);
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804D2560u>(ctx);
    }
    return;
}

}

extern "C" void func_8051CBC8(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8051CBC8_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051CBC8 func_8051CBC8 preserves=true fpr_mask=0x00000000
