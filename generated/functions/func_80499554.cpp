#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80499554_ra70_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80499554u);
    goto loc_80499554;

loc_80499554:
{
    r4 = 0x80740000u;
    r0 = 2;
    r4 = (r4 + -5120);
    r3 = 0;
    r5 = (r4 + 8);
    r6 = 0;
    ctr = r0;
}

loc_80499570:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80499578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804995CC;
    }
}

loc_8049957C:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80499584:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80499594;
    }
}

loc_80499588:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80499590:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8049959C;
    }
}

loc_80499594:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r4;
}

loc_8049959C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_804995A4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804995CC;
    }
}

loc_804995A8:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804995B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804995CC;
    }
}

loc_804995B4:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 + -7);
}

loc_804995C0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804995CC;
    }
}

loc_804995C4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r4;
}

loc_804995CC:
{
    r0 = MemoryInline::FlatRead8((r5 + 92));
    r6 = (r6 + 1);
}

loc_804995D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049962C;
    }
}

loc_804995DC:
{
    r4 = MemoryInline::FlatRead32((r5 + 100));
}

loc_804995E4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804995F4;
    }
}

loc_804995E8:
{
    r0 = MemoryInline::FlatRead32((r5 + 96));
}

loc_804995F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_804995FC;
    }
}

loc_804995F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r4;
}

loc_804995FC:
{
    r0 = MemoryInline::FlatRead32((r5 + 104));
}

loc_80499604:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8049962C;
    }
}

loc_80499608:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80499610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049962C;
    }
}

loc_80499614:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r4 + -7);
}

loc_80499620:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8049962C;
    }
}

loc_80499624:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r4;
}

loc_8049962C:
{
    r6 = (r6 + 1);
    r5 = (r5 + 184);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80499570;
    }
}

loc_80499638:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80499554(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80499554_ra70_0_10_0(ctx, ctx->gpr[4], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000071 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80499554 func_80499554 preserves=true fpr_mask=0x00000000
