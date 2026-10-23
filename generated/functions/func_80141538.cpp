#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80141538(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_80141538;

loc_80141538:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 27152);
    r0 = (r3 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 122u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
}

loc_8014154C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80141564;
    }
}

loc_80141550:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
}

loc_80141558:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141564;
    }
}

loc_8014155C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_80141564:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r4 + 25));
}

loc_8014156C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80141584;
    }
}

loc_80141570:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r4 + 26));
}

loc_80141578:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141584;
    }
}

loc_8014157C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_80141584:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 48u, (r4 + 49));
}

loc_8014158C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801415A4;
    }
}

loc_80141590:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 49u, (r4 + 50));
}

loc_80141598:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801415A4;
    }
}

loc_8014159C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_801415A4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 72u, (r4 + 73));
}

loc_801415AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801415C4;
    }
}

loc_801415B0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 73u, (r4 + 74));
}

loc_801415B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801415C4;
    }
}

loc_801415BC:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_801415C4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 96u, (r4 + 97));
}

loc_801415CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801415E4;
    }
}

loc_801415D0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 97u, (r4 + 98));
}

loc_801415D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801415E4;
    }
}

loc_801415DC:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_801415E4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 120u, (r4 + 121));
}

loc_801415EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80141604;
    }
}

loc_801415F0:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 121u, (r4 + 122));
}

loc_801415F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141604;
    }
}

loc_801415FC:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_80141604:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80141538 func_80141538 preserves=true fpr_mask=0x00000000
