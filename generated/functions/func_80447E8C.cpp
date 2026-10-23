#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80447E8C_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_80447E8C;

loc_80447E8C:
{
    r0 = MemoryInline::FlatRead8((r3 + 13));
}

loc_80447E94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80447E98:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_80447E8C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80447E8C_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80447E8C func_80447E8C preserves=true fpr_mask=0x00000000
