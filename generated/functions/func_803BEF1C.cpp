#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BEF1C_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x803BEF1Cu);
    goto loc_803BEF1C;

loc_803BEF1C:
{
    r4 = 0x806C0000u;
    r4 = (r4 + 6576);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
}

loc_803BEF34:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(1))) {
        goto loc_803BEF48;
    }
}

loc_803BEF38:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_803BEF48:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803BEF60:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_return;
    }
}

loc_803BEF64:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_803BEF1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BEF1C_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BEF1C func_803BEF1C preserves=true fpr_mask=0x00000000
