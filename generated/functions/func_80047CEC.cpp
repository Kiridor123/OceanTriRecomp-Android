#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80047CEC_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_80047CEC;

loc_80047CEC:
{
    r6 = 0x80670000u;
    r6 = (r6 + -18072);
    r0 = (r3 & 255);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite8((r3 + 1220), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1210), static_cast<uint8_t>(r5));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1200), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80047CEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80047CEC_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000049 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80047CEC func_80047CEC preserves=true fpr_mask=0x00000000
