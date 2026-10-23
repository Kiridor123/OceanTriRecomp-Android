#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8029F0B8_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    goto loc_8029F0B8;

loc_8029F0B8:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -4824);
    r3 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_8029F0D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60000))) {
        goto loc_8029F0E0;
    }
}

loc_8029F0D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
}

loc_8029F0E0:
{
    r3 = MemoryInline::FlatRead16((r4 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

}

extern "C" void func_8029F0B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8029F0B8_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000011 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029F0B8 func_8029F0B8 preserves=true fpr_mask=0x00000000
