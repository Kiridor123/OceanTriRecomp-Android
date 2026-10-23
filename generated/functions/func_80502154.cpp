#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80502154_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80502154;

loc_80502154:
{
}

loc_80502158:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805021CC;
    }
}

loc_8050215C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80502164:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80502194;
    }
}

loc_80502168:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

loc_80502194:
{
    r6 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r6_addr_0 = (r6 + r5);
    MemoryInline::FlatWrite32(r6_addr_0, r4);
    r6 = r6_addr_0;
    MemoryInline::FlatWrite32((r6 + 4), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

loc_805021CC:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_805021D4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80502240;
    }
}

loc_805021D8:
{
}

loc_805021DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8050220C;
    }
}

loc_805021E0:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4 = (r5 + r4);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32(r4, r0);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

loc_8050220C:
{
    r4 = MemoryInline::FlatRead16((r3 + 10));
    r0 = 0;
    r4_addr_0 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_0, r0);
    r4 = r4_addr_0;
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_1, r5);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

loc_80502240:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_2 = (r4 + r0);
    r6 = MemoryInline::FlatRead32(r4_addr_2);
    r7 = (r5 + r0);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_0, r6);
    r6 = (r6 + r0);
    MemoryInline::FlatWrite32((r7 + 4), r4);
    MemoryInline::FlatWrite32((r6 + 4), r5);
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_3, r5);
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r4;
}

}

extern "C" void func_80502154(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80502154_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000000D1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80502154 func_80502154 preserves=true fpr_mask=0x00000000
