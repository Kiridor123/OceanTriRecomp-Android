#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80503588_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80503588;

loc_80503588:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r6, 0, 24u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 12u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r6 + 12));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r6 + 14));
        }
    }
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, r6);
    r10 = (r31 * r0);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r6 + 1));
    r9 = (r7 + 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 20));
    r8 = (r8 + 1);
    r12 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r10));
    r10 = (r12 * r10);
    r30 = (r5 - r10);
    r11 = PPC_Divwu(static_cast<uint32_t>(r30), static_cast<uint32_t>(r31));
    r0 = (r12 * r0);
    r0 = (r7 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 20u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r0);
    r10 = (r11 * r31);
    r12 = MemoryInline::FlatRead32((r3 + 20));
    r7 = MemoryInline::FlatRead32((r12 + 12));
    r0 = (r30 - r10);
    r9 = (r0 * r9);
    r8 = (r11 * r8);
    goto loc_8050362C;
}

loc_805035F8:
{
    r3 = MemoryInline::FlatRead16(r7);
}

loc_80503600:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r5))) {
        goto loc_80503628;
    }
}

loc_80503604:
{
    r0 = MemoryInline::FlatRead16((r7 + 2));
}

loc_8050360C:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r0))) {
        goto loc_80503628;
    }
}

loc_80503610:
{
    r3 = (r5 - r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 - r3);
    r3 = (r7 + r0);
    r7 = (r3 + 8);
    goto loc_80503638;
}

loc_80503628:
{
    r7 = MemoryInline::FlatRead32((r7 + 4));
}

loc_8050362C:
{
}

loc_80503630:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_805035F8;
    }
}

loc_80503634:
{
    r7 = (r12 + 4);
}

loc_80503638:
{
    r5 = MemoryInline::FlatRead8(r7);
    r3 = (r9 + 1);
    r0 = (r8 + 1);
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 4), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r7 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 5), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 6), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r6 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 7), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r6 + 10));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r5);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r6 + 16));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r4 + 12), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r6 + 18));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 14u, (r4 + 14), r5);
        MemoryInline::WriteResolved16(guest_range_1, 16u, (r4 + 16), r3);
    }
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r4 + 18), static_cast<uint16_t>(r0));
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return r3;
}

}

extern "C" void func_80503588(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80503588_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000013FB gpr_write=0x00001FEB gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80503588 func_80503588 preserves=true fpr_mask=0x00000000
