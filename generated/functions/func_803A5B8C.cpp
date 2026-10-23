#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803A5B8C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_803A5B8C;

loc_803A5B8C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
    r5 = 0;
    r4 = 0x80790000u;
    r4 = MemoryInline::FlatRead32((r4 + 23408));
    goto loc_803A5BB0;
}

loc_803A5BA8:
{
    r5 = (r5 + 1);
    r4 = (r4 + 10);
}

loc_803A5BB0:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_803A5BB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A5BA8;
    }
}

loc_803A5BBC:
{
    MemoryInline::FlatWrite16((r3 + 50), static_cast<uint16_t>(r5));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_803A5B8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803A5B8C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A5B8C func_803A5B8C preserves=true fpr_mask=0x00000000
