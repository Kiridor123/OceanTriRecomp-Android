#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804847D4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_804847D4;

loc_804847D4:
{
    r4 = 0x80740000u;
    r4 = (r4 + -17608);
    r0 = MemoryInline::FlatRead32((r4 + 1388));
}

loc_804847E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804847F8;
    }
}

loc_804847E8:
{
}

loc_804847EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804847F8;
    }
}

loc_804847F0:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_804847F8:
{
    r4 = 0x80740000u;
    r4 = (r4 + -17608);
    MemoryInline::FlatWriteRam32((r4 + 1388), r3);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_804847D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804847D4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804847D4 func_804847D4 preserves=true fpr_mask=0x00000000
