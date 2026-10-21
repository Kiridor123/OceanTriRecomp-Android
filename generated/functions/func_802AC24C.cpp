#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802AC24C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x802AC24Cu);
    goto loc_802AC24C;

loc_802AC24C:
{
    r0 = 0;
    r4 = MemoryInline::FlatRead8((r3 + 1652));
}

loc_802AC258:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AC260;
    }
}

loc_802AC25C:
{
    MemoryInline::FlatWrite8((r3 + 1655), static_cast<uint8_t>(r0));
}

loc_802AC260:
{
    r4 = MemoryInline::FlatRead8((r3 + 1796));
}

loc_802AC268:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AC270;
    }
}

loc_802AC26C:
{
    MemoryInline::FlatWrite8((r3 + 1799), static_cast<uint8_t>(r0));
}

loc_802AC270:
{
    r3 = (r3 + 288);
    r4 = MemoryInline::FlatRead8((r3 + 1652));
}

loc_802AC27C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AC284;
    }
}

loc_802AC280:
{
    MemoryInline::FlatWrite8((r3 + 1655), static_cast<uint8_t>(r0));
}

loc_802AC284:
{
    r4 = MemoryInline::FlatRead8((r3 + 1796));
}

loc_802AC28C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AC294;
    }
}

loc_802AC290:
{
    MemoryInline::FlatWrite8((r3 + 1799), static_cast<uint8_t>(r0));
}

loc_802AC294:
{
    r4 = MemoryInline::FlatRead8((r3 + 1940));
}

loc_802AC29C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AC2A4;
    }
}

loc_802AC2A0:
{
    MemoryInline::FlatWrite8((r3 + 1943), static_cast<uint8_t>(r0));
}

loc_802AC2A4:
{
    r4 = MemoryInline::FlatRead8((r3 + 2084));
}

loc_802AC2AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AC2B4;
    }
}

loc_802AC2B0:
{
    MemoryInline::FlatWrite8((r3 + 2087), static_cast<uint8_t>(r0));
}

loc_802AC2B4:
{
    r4 = MemoryInline::FlatRead8((r3 + 2228));
}

loc_802AC2BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802AC2C4;
    }
}

loc_802AC2C0:
{
    MemoryInline::FlatWrite8((r3 + 2231), static_cast<uint8_t>(r0));
}

loc_802AC2C4:
{
    r4 = MemoryInline::FlatRead8((r3 + 2372));
}

loc_802AC2CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802AC2D0:
{
    MemoryInline::FlatWrite8((r3 + 2375), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_802AC24C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802AC24C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AC24C func_802AC24C preserves=true fpr_mask=0x00000000
