#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80220554_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80220554u);
    goto loc_80220554;

loc_80220554:
{
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 0x805C0000u;
    r4 = (r4 + -20568);
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead8((r5 + 18004));
}

loc_8022056C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80220598;
    }
}

loc_80220570:
{
    r6 = MemoryInline::FlatRead32(r4);
    goto loc_8022058C;
}

loc_80220578:
{
}

loc_8022057C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80220588;
    }
}

loc_80220580:
{
    r3 = MemoryInline::FlatRead16((r6 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80220588:
{
    r6 = (r6 + 4);
}

loc_8022058C:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_80220594:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80220578;
    }
}

loc_80220598:
{
    r3 = MemoryInline::FlatRead8((r5 + 18005));
}

loc_802205A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802205CC;
    }
}

loc_802205A4:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_802205C0;
}

loc_802205AC:
{
}

loc_802205B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802205BC;
    }
}

loc_802205B4:
{
    r3 = MemoryInline::FlatRead16((r6 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802205BC:
{
    r6 = (r6 + 4);
}

loc_802205C0:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_802205C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802205AC;
    }
}

loc_802205CC:
{
    r3 = MemoryInline::FlatRead8((r5 + 18006));
}

loc_802205D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80220600;
    }
}

loc_802205D8:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
    goto loc_802205F4;
}

loc_802205E0:
{
}

loc_802205E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802205F0;
    }
}

loc_802205E8:
{
    r3 = MemoryInline::FlatRead16((r6 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802205F0:
{
    r6 = (r6 + 4);
}

loc_802205F4:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_802205FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802205E0;
    }
}

loc_80220600:
{
    r3 = MemoryInline::FlatRead8((r5 + 18007));
}

loc_80220608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80220634;
    }
}

loc_8022060C:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    goto loc_80220628;
}

loc_80220614:
{
}

loc_80220618:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80220624;
    }
}

loc_8022061C:
{
    r3 = MemoryInline::FlatRead16((r6 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80220624:
{
    r6 = (r6 + 4);
}

loc_80220628:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_80220630:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80220614;
    }
}

loc_80220634:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80220554(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80220554_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80220554 func_80220554 preserves=true fpr_mask=0x00000000
