#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8050D2D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_addic_src_3 = 0;
    uint32_t r6_addic_src_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8050D2D0u);
    goto loc_8050D2D0;

loc_8050D2D0:
{
    r0 = 8;
    r6 = 0;
    ctr = r0;
    // nop
}

loc_8050D2E0:
{
}

loc_8050D2E4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8050D308;
    }
}

loc_8050D2E8:
{
}

loc_8050D2EC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(13))) {
        goto loc_8050D308;
    }
}

loc_8050D2F0:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8050D2FC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8050D308;
    }
}

loc_8050D300:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8050D308:
{
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + 1);
}

loc_8050D30C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8050D330;
    }
}

loc_8050D310:
{
}

loc_8050D314:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(13))) {
        goto loc_8050D330;
    }
}

loc_8050D318:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_8050D324:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8050D330;
    }
}

loc_8050D328:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8050D330:
{
    r6_addic_src_3 = r6;
    r6 = (r6_addic_src_3 + 1);
}

loc_8050D334:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8050D358;
    }
}

loc_8050D338:
{
}

loc_8050D33C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(13))) {
        goto loc_8050D358;
    }
}

loc_8050D340:
{
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8050D34C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8050D358;
    }
}

loc_8050D350:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8050D358:
{
    r6_addic_src_4 = r6;
    r6 = (r6_addic_src_4 + 1);
}

loc_8050D35C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8050D380;
    }
}

loc_8050D360:
{
}

loc_8050D364:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(13))) {
        goto loc_8050D380;
    }
}

loc_8050D368:
{
    r5 = MemoryInline::FlatRead8((r3 + 3));
    r0 = MemoryInline::FlatRead8((r4 + 3));
}

loc_8050D374:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8050D380;
    }
}

loc_8050D378:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8050D380:
{
    r6 = (r6 + 1);
    r4 = (r4 + 4);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8050D2E0;
    }
}

loc_8050D390:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050D2D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050D2D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050D2D0 func_8050D2D0 preserves=true fpr_mask=0x00000000
