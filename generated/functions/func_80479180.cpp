#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80479180_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80479180u);
    goto loc_80479180;

loc_80479180:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80479188:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8047918C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80479194:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_804791E8;
    }
}

loc_80479198:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804791A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804791AC;
    }
}

loc_804791A4:
{
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_804791C4;
}

loc_804791AC:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804791B4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804791BC;
    }
}

loc_804791B8:
{
    MemoryInline::FlatWrite32(r5, r4);
}

loc_804791BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
}

loc_804791C4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 - r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    goto loc_80479260;
}

loc_804791E8:
{
    r6 = MemoryInline::FlatRead32(r3);
    goto loc_80479208;
}

loc_804791F0:
{
}

loc_804791F4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80479204;
    }
}

loc_804791F8:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_80479204:
{
    r6 = MemoryInline::FlatRead32(r6);
}

loc_80479208:
{
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80479214:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r5))) {
        goto loc_804791F0;
    }
}

loc_80479218:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80479220:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_80479238;
    }
}

loc_80479224:
{
    MemoryInline::FlatWrite32(r4, r0);
    r5 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_80479250;
}

loc_80479238:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32(r3, r4);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32((r6 + 4), r4);
    MemoryInline::FlatWrite32(r4, r6);
}

loc_80479250:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r6 + 12), r0);
}

loc_80479260:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r4 + 22), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80479180(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80479180_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80479180 func_80479180 preserves=true fpr_mask=0x00000000
