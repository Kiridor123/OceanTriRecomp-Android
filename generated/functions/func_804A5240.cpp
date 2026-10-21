#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A5240_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];

    MKW_GUEST_ENTER(0x804A5240u);
    goto loc_804A5240;

loc_804A5240:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804A524C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-3))) {
        goto loc_804A53BC;
    }
}

loc_804A5250:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r10 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A5260:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-48))) {
        goto loc_804A526C;
    }
}

loc_804A5264:
{
    r0 = (r10 | 16384);
    r10 = (r0 & 65535);
}

loc_804A526C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A5274:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(48))) {
        goto loc_804A527C;
    }
}

loc_804A5278:
{
    r10 = (r10 | 32768);
}

loc_804A527C:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A5288:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-48))) {
        goto loc_804A5294;
    }
}

loc_804A528C:
{
    r0 = (r10 | 8192);
    r10 = (r0 & 65535);
}

loc_804A5294:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A529C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(48))) {
        goto loc_804A52A8;
    }
}

loc_804A52A0:
{
    r0 = (r10 | 4096);
    r10 = (r0 & 65535);
}

loc_804A52A8:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A52B4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-48))) {
        goto loc_804A52C0;
    }
}

loc_804A52B8:
{
    r0 = (r10 | 1024);
    r10 = (r0 & 65535);
}

loc_804A52C0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A52C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(48))) {
        goto loc_804A52D4;
    }
}

loc_804A52CC:
{
    r0 = (r10 | 2048);
    r10 = (r0 & 65535);
}

loc_804A52D4:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A52E0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-48))) {
        goto loc_804A52EC;
    }
}

loc_804A52E4:
{
    r0 = (r10 | 512);
    r10 = (r0 & 65535);
}

loc_804A52EC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804A52F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(48))) {
        goto loc_804A5300;
    }
}

loc_804A52F8:
{
    r0 = (r10 | 256);
    r10 = (r0 & 65535);
}

loc_804A5300:
{
    r8 = MemoryInline::FlatRead16((r4 + 16));
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r7 = (r8 ^ r10);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r10));
    r0 = (r10 & r7);
    r5 = MemoryInline::FlatRead8((r4 + 3));
    r7 = (r8 & r7);
    MemoryInline::FlatWrite16((r4 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 4));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    MemoryInline::FlatWrite16((r4 + 20), static_cast<uint16_t>(r7));
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r4 + 5));
    r9 = MemoryInline::FlatRead16(r4);
    r10 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r9 ^ r10);
    r0 = (r10 & r0);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    r0 = (r9 ^ r0);
    r0 = (r9 & r0);
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r8);
    MemoryInline::FlatWrite16((r4 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r4 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r4 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite16((r4 + 28), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
        }
    }
    MemoryInline::FlatWrite32((r4 + 4), r0);
    MemoryInline::FlatWrite32(r4, r5);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

loc_804A53BC:
{
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 12), 0, 18u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 8u, (r4 + 20), r0);
        MemoryInline::WriteResolved16(guest_range_1, 6u, (r4 + 18), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r4 + 14), r0);
        MemoryInline::WriteResolved16(guest_range_1, 0u, (r4 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 10u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 24), r0);
        MemoryInline::WriteResolved16(guest_range_1, 10u, (r4 + 22), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r4 + 28), r0);
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 26), r0);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return;
}

}

extern "C" void func_804A5240(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804A5240_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000439 gpr_write=0x000007E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A5240 func_804A5240 preserves=true fpr_mask=0x00000000
