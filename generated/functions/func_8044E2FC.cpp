#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8044E2FC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8044E2FCu);
    goto loc_8044E2FC;

loc_8044E2FC:
{
    r7 = MemoryInline::FlatRead32((r13 + -16440));
    r6 = 0;
    r3 = 0x806C0000u;
    r5 = (r3 + 6576);
    r3 = r5;
    goto loc_8044E330;
}

loc_8044E314:
{
    r4 = MemoryInline::FlatRead32((r5 + 5876));
}

loc_8044E31C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8044E328;
    }
}

loc_8044E320:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r5 + 5876), r0);
}

loc_8044E328:
{
    r5 = (r5 + 36);
    r6 = (r6 + 1);
}

loc_8044E330:
{
    r0 = MemoryInline::FlatRead32((r3 + 5840));
}

loc_8044E338:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_8044E314;
    }
}

loc_8044E33C:
{
    r4 = (r7 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -15228));
}

loc_8044E348:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8044E354;
    }
}

loc_8044E34C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + -15228), r0);
}

loc_8044E354:
{
    r4 = (r7 + 65536);
    r3 = MemoryInline::FlatRead32((r4 + -15508));
}

loc_8044E360:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8044E364:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + -15508), r0);
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

extern "C" void func_8044E2FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044E2FC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044E2FC func_8044E2FC preserves=true fpr_mask=0x00000000
