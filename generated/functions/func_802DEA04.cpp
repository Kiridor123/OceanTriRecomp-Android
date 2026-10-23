#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DEA04_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_802DEA04;

loc_802DEA04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead16((r3 + 8));
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl0_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl0_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl0_0x8029F758;
    }
}

loc_inl0_0x8029F754:
{
    r3 = 0;
}

loc_inl0_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl0_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802DEA28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802DEA5C;
    }
}

loc_802DEA2C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead8((r31 + 295));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r31 + 292));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x802DE99C (10 guest instruction(s))
}

loc_inl1_0x802DE99C:
{
    r0 = MemoryInline::FlatRead8((r3 + 301));
}

loc_inl1_0x802DE9A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x802DE9BC;
    }
}

loc_inl1_0x802DE9A8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802DE9B0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(24))) {
        goto loc_inl1_0x802DE9BC;
    }
}

loc_inl1_0x802DE9B4:
{
    r3 = 1;
    goto loc_inl1_cont_802DE99C;
}

loc_inl1_0x802DE9BC:
{
    r3 = 0;
}

loc_inl1_cont_802DE99C:
{
    // end of inlined leaf 0x802DE99C
}

loc_802DEA50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DEA5C;
    }
}

loc_802DEA54:
{
    r3 = 0;
    goto loc_802DEA60;
}

loc_802DEA5C:
{
    r3 = 1;
}

loc_802DEA60:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DEA04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DEA04_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DEA04 func_802DEA04 preserves=true fpr_mask=0x00000000
