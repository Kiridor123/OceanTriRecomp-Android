#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8004D960_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x8004D960u);
    goto loc_8004D960;

loc_8004D960:
{
    r0 = (r5 & 255);
    r0 = (r0 * 42);
    r5 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 13184), 0, 18u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r5 + 13184));
    r3 = (r4 & 65535);
}

loc_8004D978:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004D984;
    }
}

loc_8004D97C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004D984:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r5 + 13186));
}

loc_8004D98C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004D998;
    }
}

loc_8004D990:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004D998:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r5 + 13188));
}

loc_8004D9A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004D9AC;
    }
}

loc_8004D9A4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004D9AC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r5 + 13196));
}

loc_8004D9B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004D9C0;
    }
}

loc_8004D9B8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004D9C0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r5 + 13198));
}

loc_8004D9C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004D9D4;
    }
}

loc_8004D9CC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004D9D4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r5 + 13190));
}

loc_8004D9DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004D9E8;
    }
}

loc_8004D9E0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004D9E8:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r5 + 13192));
}

loc_8004D9F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004D9FC;
    }
}

loc_8004D9F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004D9FC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r5 + 13194));
}

loc_8004DA04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004DA10;
    }
}

loc_8004DA08:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_8004DA10:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r5 + 13200));
    r0 = (r3 - r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_8004D960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004D960_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004D960 func_8004D960 preserves=true fpr_mask=0x00000000
