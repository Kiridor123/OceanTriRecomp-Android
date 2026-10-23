#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803982B8_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_803982B8;

loc_803982B8:
{
    r5 = 0;
    r6 = 0;
    r0 = (r4 & 255);
}

loc_803982C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803982E8;
    }
}

loc_803982CC:
{
}

loc_803982D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803982E8;
    }
}

loc_803982D4:
{
}

loc_803982D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803982F0;
    }
}

loc_803982DC:
{
}

loc_803982E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803982F8;
    }
}

loc_803982E4:
{
    goto loc_80398300;
}

loc_803982E8:
{
    r5 = (r3 + 12400);
    goto loc_80398308;
}

loc_803982F0:
{
    r5 = (r3 + 12592);
    goto loc_80398308;
}

loc_803982F8:
{
    r6 = (r3 + 12784);
    goto loc_80398308;
}

loc_80398300:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_80398308:
{
}

loc_8039830C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80398428;
    }
}

loc_80398310:
{
    r3 = 0;
    r0 = 6;
    ctr = r0;
}

loc_8039831C:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_80398324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039833C;
    }
}

loc_80398328:
{
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80398330:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039833C;
    }
}

loc_80398334:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8039833C:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
}

loc_80398344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039835C;
    }
}

loc_80398348:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80398350:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039835C;
    }
}

loc_80398354:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8039835C:
{
    r0 = MemoryInline::FlatRead16((r5 + 8));
}

loc_80398364:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039837C;
    }
}

loc_80398368:
{
    r0 = MemoryInline::FlatRead16((r5 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80398370:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039837C;
    }
}

loc_80398374:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8039837C:
{
    r0 = MemoryInline::FlatRead16((r5 + 12));
}

loc_80398384:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039839C;
    }
}

loc_80398388:
{
    r0 = MemoryInline::FlatRead16((r5 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80398390:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039839C;
    }
}

loc_80398394:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8039839C:
{
    r0 = MemoryInline::FlatRead16((r5 + 16));
}

loc_803983A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803983BC;
    }
}

loc_803983A8:
{
    r0 = MemoryInline::FlatRead16((r5 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803983B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803983BC;
    }
}

loc_803983B4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803983BC:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
}

loc_803983C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803983DC;
    }
}

loc_803983C8:
{
    r0 = MemoryInline::FlatRead16((r5 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803983D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803983DC;
    }
}

loc_803983D4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803983DC:
{
    r0 = MemoryInline::FlatRead16((r5 + 24));
}

loc_803983E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803983FC;
    }
}

loc_803983E8:
{
    r0 = MemoryInline::FlatRead16((r5 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803983F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803983FC;
    }
}

loc_803983F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803983FC:
{
    r0 = MemoryInline::FlatRead16((r5 + 28));
}

loc_80398404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039841C;
    }
}

loc_80398408:
{
    r0 = MemoryInline::FlatRead16((r5 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80398410:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8039841C;
    }
}

loc_80398414:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8039841C:
{
    r3 = (r3 + 7);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8039831C;
    }
}

loc_80398428:
{
}

loc_8039842C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80398510;
    }
}

loc_80398430:
{
    r3 = 0;
    r0 = 4;
    ctr = r0;
}

loc_8039843C:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80398444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80398450;
    }
}

loc_80398448:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_80398450:
{
    r0 = MemoryInline::FlatRead8((r6 + 12));
}

loc_80398458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80398464;
    }
}

loc_8039845C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_80398464:
{
    r0 = MemoryInline::FlatRead8((r6 + 24));
}

loc_8039846C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80398478;
    }
}

loc_80398470:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_80398478:
{
    r0 = MemoryInline::FlatRead8((r6 + 36));
}

loc_80398480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039848C;
    }
}

loc_80398484:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8039848C:
{
    r0 = MemoryInline::FlatRead8((r6 + 48));
}

loc_80398494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803984A0;
    }
}

loc_80398498:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803984A0:
{
    r0 = MemoryInline::FlatRead8((r6 + 60));
}

loc_803984A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803984B4;
    }
}

loc_803984AC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803984B4:
{
    r0 = MemoryInline::FlatRead8((r6 + 72));
}

loc_803984BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803984C8;
    }
}

loc_803984C0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803984C8:
{
    r0 = MemoryInline::FlatRead8((r6 + 84));
}

loc_803984D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803984DC;
    }
}

loc_803984D4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803984DC:
{
    r0 = MemoryInline::FlatRead8((r6 + 96));
}

loc_803984E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803984F0;
    }
}

loc_803984E8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_803984F0:
{
    r0 = MemoryInline::FlatRead8((r6 + 108));
}

loc_803984F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80398504;
    }
}

loc_803984FC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_80398504:
{
    r3 = (r3 + 9);
    r6 = (r6 + 120);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8039843C;
    }
}

loc_80398510:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_803982B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803982B8_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803982B8 func_803982B8 preserves=true fpr_mask=0x00000000
