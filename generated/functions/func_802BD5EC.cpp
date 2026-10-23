#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802BD5EC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_802BD5EC;

loc_802BD5EC:
{
    r7 = MemoryInline::FlatRead32((r3 + 140));
}

loc_802BD5F4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_802BD620;
    }
}

loc_802BD5F8:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_802BD600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BD620;
    }
}

loc_802BD604:
{
    r0 = MemoryInline::FlatRead32((r7 + 444));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead32((r7 + 448));
    MemoryInline::FlatWrite32(r5, r0);
    r3 = r6;
    r4 = (r7 + 392);
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BD620:
{
    r0 = MemoryInline::FlatRead8((r3 + 65));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 65), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BD5EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BD5EC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x00000099 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BD5EC func_802BD5EC preserves=true fpr_mask=0x00000000
