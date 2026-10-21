#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804CAD50_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x804CAD50u);
    goto loc_804CAD50;

loc_804CAD50:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_804CAD58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CAD60;
    }
}

loc_804CAD5C:
{
    goto loc_804CAD7C;
}

loc_804CAD60:
{
    r4 = 0x80750000u;
    r3 = 0x80000000u;
    r4 = (r4 + -2208);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 | 32768);
    MemoryInline::FlatWriteRam16((r3 + 12518), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

loc_804CAD7C:
{
    r3 = 0x80000000u;
    r0 = 1;
    MemoryInline::FlatWriteRam16((r3 + 12518), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

}

extern "C" void func_804CAD50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804CAD50_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CAD50 func_804CAD50 preserves=true fpr_mask=0x00000000
