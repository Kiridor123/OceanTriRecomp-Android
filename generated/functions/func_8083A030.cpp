#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083A030(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8083A030;

loc_8083A030:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r6 = 0;
    r7 = 0;
    r5 = (r3 + r0);
    goto loc_8083A11C;
}

loc_8083A048:
{
    r4 = MemoryInline::FlatRead32(r5);
    r0 = (r4 + -1179189248);
}

loc_8083A054:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(20038))) {
        goto loc_8083A08C;
    }
}

loc_8083A058:
{
    r0 = (r4 + -1413939200);
}

loc_8083A060:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(19536))) {
        goto loc_8083A0C8;
    }
}

loc_8083A064:
{
    r0 = (r4 + -1129775104);
}

loc_8083A06C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(17480))) {
        goto loc_8083A0D8;
    }
}

loc_8083A070:
{
    r0 = (r4 + -1129119744);
}

loc_8083A078:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16720))) {
        goto loc_8083A0F0;
    }
}

loc_8083A07C:
{
    r0 = (r4 + -1196163072);
}

loc_8083A084:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(18258))) {
        goto loc_8083A110;
    }
}

loc_8083A088:
{
    goto loc_8083A108;
}

loc_8083A08C:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r6 = (r5 + 8);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_8083A0A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083A0B0;
    }
}

loc_8083A0A8:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r6 + 12), r0);
}

loc_8083A0B0:
{
    r0 = MemoryInline::FlatRead32((r6 + 16));
}

loc_8083A0B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083A110;
    }
}

loc_8083A0BC:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r6 + 16), r0);
    goto loc_8083A110;
}

loc_8083A0C8:
{
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    goto loc_8083A110;
}

loc_8083A0D8:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8083A0E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083A110;
    }
}

loc_8083A0E4:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    goto loc_8083A110;
}

loc_8083A0F0:
{
    r0 = MemoryInline::FlatRead32((r5 + 16));
}

loc_8083A0F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083A110;
    }
}

loc_8083A0FC:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_8083A110;
}

loc_8083A108:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

loc_8083A110:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r7 = (r7 + 1);
    r5 = (r5 + r0);
}

loc_8083A11C:
{
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_8083A124:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8083A048;
    }
}

loc_8083A128:
{
    r4 = 1380319232;
    r0 = (r4 + 20053);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8083A030 func_8083A030 preserves=true fpr_mask=0x00000000
