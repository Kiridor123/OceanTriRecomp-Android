#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802C0B60_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_802C0B60;

loc_802C0B60:
{
    r7 = 255;
    r0 = 0;
    r0 = (r0 * 44);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 4009));
}

loc_802C0B78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0B94;
    }
}

loc_802C0B7C:
{
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r0 = MemoryInline::FlatRead16((r6 + 4014));
}

loc_802C0B88:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_802C0B94;
    }
}

loc_802C0B8C:
{
    r7 = 0;
    goto loc_802C0BC0;
}

loc_802C0B94:
{
    r0 = 1;
    r0 = (r0 * 44);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 4009));
}

loc_802C0BA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0BC0;
    }
}

loc_802C0BAC:
{
    r5 = MemoryInline::FlatRead16((r4 + 2));
    r0 = MemoryInline::FlatRead16((r6 + 4014));
}

loc_802C0BB8:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_802C0BC0;
    }
}

loc_802C0BBC:
{
    r7 = 1;
}

loc_802C0BC0:
{
}

loc_802C0BC4:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(255))) {
        goto loc_return;
    }
}

loc_802C0BC8:
{
    r0 = (r7 * 44);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 4008));
}

loc_802C0BD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_return;
    }
}

loc_802C0BDC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 4008), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0B60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0B60_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0B60 func_802C0B60 preserves=true fpr_mask=0x00000000
