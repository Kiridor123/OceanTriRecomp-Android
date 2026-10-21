#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801475B4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801475B4u);
    goto loc_801475B4;

loc_801475B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = 0x806A0000u;
    r31 = (r4 + 27152);
    r3 = (r3 & 255);
    ctx->lr = 0x801475DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80141538u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r0 = (r3 & 255);
}

loc_801475E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_80147604;
    }
}

loc_801475E8:
{
    r0 = (r0 * 24);
    r3 = (r31 + r0);
    r30 = MemoryInline::FlatRead8((r3 + 4));
}

loc_801475F8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80147604;
    }
}

loc_801475FC:
{
    r3 = 0;
    goto loc_801476D0;
}

loc_80147604:
{
    r0 = (r30 & 255);
    r3 = MemoryInline::FlatRead8((r31 + 3624));
}

loc_80147610:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147628;
    }
}

loc_80147614:
{
    r3 = MemoryInline::FlatRead8((r31 + 3626));
}

loc_8014761C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147628;
    }
}

loc_80147620:
{
    r3 = MemoryInline::FlatRead8((r31 + 3627));
    goto loc_801476D0;
}

loc_80147628:
{
    r4 = (r31 + 3644);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 84u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
}

loc_80147634:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8014764C;
    }
}

loc_80147638:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
}

loc_80147640:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8014764C;
    }
}

loc_80147644:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    goto loc_801476D0;
}

loc_8014764C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r4 + 20));
}

loc_80147654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8014766C;
    }
}

loc_80147658:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r4 + 22));
}

loc_80147660:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8014766C;
    }
}

loc_80147664:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r4 + 23));
    goto loc_801476D0;
}

loc_8014766C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r4 + 40));
}

loc_80147674:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8014768C;
    }
}

loc_80147678:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 42u, (r4 + 42));
}

loc_80147680:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8014768C;
    }
}

loc_80147684:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 43u, (r4 + 43));
    goto loc_801476D0;
}

loc_8014768C:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 60u, (r4 + 60));
}

loc_80147694:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801476AC;
    }
}

loc_80147698:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 62u, (r4 + 62));
}

loc_801476A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801476AC;
    }
}

loc_801476A4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 63u, (r4 + 63));
    goto loc_801476D0;
}

loc_801476AC:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 80u, (r4 + 80));
}

loc_801476B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801476CC;
    }
}

loc_801476B8:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 82u, (r4 + 82));
}

loc_801476C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801476CC;
    }
}

loc_801476C4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 83u, (r4 + 83));
    goto loc_801476D0;
}

loc_801476CC:
{
    r3 = 0;
}

loc_801476D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801475B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801475B4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801475B4 func_801475B4 preserves=true fpr_mask=0x00000000
