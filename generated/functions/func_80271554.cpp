#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80271554_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80271554;

loc_80271554:
{
    r4 = (r4 & 65535);
    r0 = MemoryInline::FlatRead16((r3 + 1522));
}

loc_80271560:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8027156C;
    }
}

loc_80271564:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8027156C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1524));
}

loc_80271574:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271580;
    }
}

loc_80271578:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80271580:
{
    r3 = (r3 + 4);
    r0 = MemoryInline::FlatRead16((r3 + 1522));
}

loc_8027158C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271598;
    }
}

loc_80271590:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80271598:
{
    r0 = MemoryInline::FlatRead16((r3 + 1524));
}

loc_802715A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802715AC;
    }
}

loc_802715A4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802715AC:
{
    r0 = MemoryInline::FlatRead16((r3 + 1526));
}

loc_802715B4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802715C0;
    }
}

loc_802715B8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802715C0:
{
    r0 = MemoryInline::FlatRead16((r3 + 1528));
}

loc_802715C8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802715D4;
    }
}

loc_802715CC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802715D4:
{
    r0 = MemoryInline::FlatRead16((r3 + 1530));
}

loc_802715DC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802715E8;
    }
}

loc_802715E0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802715E8:
{
    r0 = MemoryInline::FlatRead16((r3 + 1532));
}

loc_802715F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802715FC;
    }
}

loc_802715F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802715FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80271554(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80271554_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80271554 func_80271554 preserves=true fpr_mask=0x00000000
