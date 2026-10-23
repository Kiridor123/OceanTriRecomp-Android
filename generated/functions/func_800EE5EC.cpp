#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EE5EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EE5EC;

loc_800EE5EC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r31 = r4;
    r29 = r5;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & 65535);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 150), 0, 70u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r4 + 206), static_cast<uint16_t>(r0));
    r0 = (r6 & 65535);
    MemoryInline::WriteResolved16(guest_range_0, 58u, (r4 + 208), static_cast<uint16_t>(r0));
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 60u, (r4 + 210), r0);
        MemoryInline::WriteResolved16(guest_range_0, 62u, (r4 + 212), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 64u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 64u, (r4 + 214), r0);
        MemoryInline::WriteResolved16(guest_range_0, 66u, (r4 + 216), r0);
    }
    MemoryInline::WriteResolved16(guest_range_0, 68u, (r4 + 218), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r0);
    }
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EE664:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EE694;
    }
}

loc_800EE668:
{
}

loc_800EE66C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800EE6D0;
    }
}

loc_800EE670:
{
}

loc_800EE674:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_800EE70C;
    }
}

loc_800EE678:
{
}

loc_800EE67C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(3))) {
        goto loc_800EE738;
    }
}

loc_800EE680:
{
}

loc_800EE684:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(4))) {
        goto loc_800EE764;
    }
}

loc_800EE688:
{
}

loc_800EE68C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(5))) {
        goto loc_800EE790;
    }
}

loc_800EE690:
{
    goto loc_800EE7B8;
}

loc_800EE694:
{
    r30 = 1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 150), r30);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 152), r0);
    }
    r3 = (r4 + 166);
    r4 = (r5 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r3 = (r31 + 220);
    r4 = (r29 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE56Cu>(ctx);
    MemoryInline::FlatWrite16((r31 + 58), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r0 | 327680);
    r0 = (r0 | 33792);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_800EE7B8;
}

loc_800EE6D0:
{
    r30 = 1;
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 150), r30);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 152), r0);
    }
    r3 = (r4 + 166);
    r4 = (r5 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r3 = (r31 + 220);
    r4 = (r29 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE56Cu>(ctx);
    MemoryInline::FlatWrite16((r31 + 58), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r0 | 327680);
    r0 = (r0 | 33800);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    goto loc_800EE7C8;
}

loc_800EE70C:
{
    r30 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 150), static_cast<uint16_t>(r30));
    r0 = 10;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 152), static_cast<uint16_t>(r0));
    r3 = (r4 + 166);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 2048;
    MemoryInline::FlatWrite16((r31 + 198), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 58), static_cast<uint16_t>(r30));
    goto loc_800EE7B8;
}

loc_800EE738:
{
    r30 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 150), static_cast<uint16_t>(r30));
    r0 = 10;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 152), static_cast<uint16_t>(r0));
    r3 = (r4 + 166);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 2048;
    MemoryInline::FlatWrite16((r31 + 198), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 58), static_cast<uint16_t>(r30));
    goto loc_800EE7B8;
}

loc_800EE764:
{
    r30 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 150), static_cast<uint16_t>(r30));
    r0 = 25;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 152), static_cast<uint16_t>(r0));
    r3 = (r4 + 166);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 256;
    MemoryInline::FlatWrite16((r31 + 198), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 58), static_cast<uint16_t>(r30));
    goto loc_800EE7B8;
}

loc_800EE790:
{
    r30 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r4 + 150), static_cast<uint16_t>(r30));
    r0 = 25;
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 152), static_cast<uint16_t>(r0));
    r3 = (r4 + 166);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE588u>(ctx);
    r0 = 256;
    MemoryInline::FlatWrite16((r31 + 198), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 58), static_cast<uint16_t>(r30));
}

loc_800EE7B8:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r0 | 65536);
    r0 = (r0 | 33800);
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_800EE7C8:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EE5EC func_800EE5EC preserves=true fpr_mask=0x00000000
