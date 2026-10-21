#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802B0058_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802B0058u);
    goto loc_802B0058;

loc_802B0058:
{
    r3 = 0x806C0000u;
    r4 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r4 + 3092));
    r0 = (r0 & 1);
}

loc_802B006C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B0108;
    }
}

loc_802B0070:
{
    r0 = MemoryInline::FlatRead8((r4 + 3013));
}

loc_802B0078:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16))) {
        goto loc_802B0100;
    }
}

loc_802B007C:
{
    r3 = 0x805D0000u;
    r3 = (r3 + -2188);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802B0100u:
        goto loc_802B0100;
        break;
    case 0x802B0094u:
        goto loc_802B0094;
        break;
    case 0x802B00B4u:
        goto loc_802B00B4;
        break;
    case 0x802B00D0u:
        goto loc_802B00D0;
        break;
    case 0x802B00ECu:
        goto loc_802B00EC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802B0094:
{
    r3 = MemoryInline::FlatRead8((r4 + 3014));
    r0 = (r3 + -2);
}

loc_802B00A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_802B00AC;
    }
}

loc_802B00A4:
{
}

loc_802B00A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(9))) {
        goto loc_802B0100;
    }
}

loc_802B00AC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802B00B4:
{
    r0 = MemoryInline::FlatRead8((r4 + 3014));
}

loc_802B00BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802B00C8;
    }
}

loc_802B00C0:
{
}

loc_802B00C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_802B0100;
    }
}

loc_802B00C8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802B00D0:
{
    r0 = MemoryInline::FlatRead8((r4 + 3014));
}

loc_802B00D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802B00E4;
    }
}

loc_802B00DC:
{
}

loc_802B00E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_802B0100;
    }
}

loc_802B00E4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802B00EC:
{
    r0 = MemoryInline::FlatRead8((r4 + 3014));
}

loc_802B00F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_802B0100;
    }
}

loc_802B00F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802B0100:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802B0108:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B0058(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B0058_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B0058 func_802B0058 preserves=true fpr_mask=0x00000000
