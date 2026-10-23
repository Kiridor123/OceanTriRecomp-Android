#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046E3C0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8046E3C0;

loc_8046E3C0:
{
}

loc_8046E3C4:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8046E3E8;
    }
}

loc_8046E3CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8046E3D4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_8046E3E8;
    }
}

loc_8046E3D8:
{
    r4 = (r4 * 12);
    r6_addr_1 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = (r0 & -16777216);
}

loc_8046E3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046E3F0;
    }
}

loc_8046E3E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046E3F0:
{
    MemoryInline::FlatWrite32(r5, r3);
    r4 = (r6 + r4);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r5 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046E3C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046E3C0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046E3C0 func_8046E3C0 preserves=true fpr_mask=0x00000000
