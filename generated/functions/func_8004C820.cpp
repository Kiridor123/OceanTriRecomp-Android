#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004C820_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8004C820;

loc_8004C820:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 140), 0, 18u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 146));
    r4 = (r4 & 65535);
}

loc_8004C82C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C838;
    }
}

loc_8004C830:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C838:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 148));
}

loc_8004C840:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C84C;
    }
}

loc_8004C844:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C84C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 150));
}

loc_8004C854:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C860;
    }
}

loc_8004C858:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C860:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 152));
}

loc_8004C868:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C874;
    }
}

loc_8004C86C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C874:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 154));
}

loc_8004C87C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C888;
    }
}

loc_8004C880:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C888:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 156));
}

loc_8004C890:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C89C;
    }
}

loc_8004C894:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C89C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 140));
}

loc_8004C8A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C8B0;
    }
}

loc_8004C8A8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C8B0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 142));
}

loc_8004C8B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004C8C4;
    }
}

loc_8004C8BC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004C8C4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 144));
    r0 = (r4 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004C820(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004C820_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004C820 func_8004C820 preserves=true fpr_mask=0x00000000
