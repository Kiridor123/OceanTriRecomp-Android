#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027714C_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8027714Cu);
    goto loc_8027714C;

loc_8027714C:
{
    MemoryInline::FlatWrite32((r3 + 792), r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::FlatWrite8((r3 + 787), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 788), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite16((r3 + 796), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 800), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 798), static_cast<uint16_t>(r4));
    r6 = 0;
    r0 = 2;
    ctr = r0;
}

loc_80277178:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r5 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 802), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r5 + 802), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r5 + 803), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r5 + 804), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r5 + 805), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r5 + 806), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r5 + 807), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r5 + 808), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r5 + 809), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r5 = (r3 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 802), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r5 + 802), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r5 + 803), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r5 + 804), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r5 + 805), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r5 + 806), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r5 + 807), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r5 + 808), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r5 + 809), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r5 = (r3 + r0);
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 802), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r5 + 802), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r5 + 803), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r5 + 804), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r5 + 805), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r5 + 806), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r5 + 807), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r5 + 808), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r5 + 809), static_cast<uint8_t>(r4));
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80277178;
    }
}

loc_80277200:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_8027714C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027714C_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027714C func_8027714C preserves=true fpr_mask=0x00000000
