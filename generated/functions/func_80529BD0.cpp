#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80529BD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80529BD0u);
    goto loc_80529BD0;

loc_80529BD0:
{
    r0 = (r3 * 28);
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -13336), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r11 = MemoryInline::FlatRead32((r1 + 12));
    r12 = MemoryInline::FlatRead8((r1 + 11));
    r3 = (r3 + r0);
}

loc_80529BE8:
{
    MemoryInline::FlatWrite8((r3 + 2732), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2733), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 2736), r6);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 2740), r7);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2744), static_cast<uint8_t>(r8));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2745), static_cast<uint8_t>(r9));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2746), static_cast<uint8_t>(r10));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2747), static_cast<uint8_t>(r12));
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80529C58;
    }
}

loc_80529C44:
{
}

loc_80529C48:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(1))) {
        goto loc_80529C8C;
    }
}

loc_80529C4C:
{
}

loc_80529C50:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(2))) {
        goto loc_80529CE0;
    }
}

loc_80529C54:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80529C58:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r6 = 50;
    r5 = 49;
    r4 = 1;
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2748), static_cast<uint8_t>(r6));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2749), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2756), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80529C8C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r4 = 49;
    r7 = 50;
    r6 = 148;
    r3 = (r3 + r0);
    r5 = 53;
    MemoryInline::FlatWrite8((r3 + 2748), static_cast<uint8_t>(r4));
    r4 = 2;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2749), static_cast<uint8_t>(r7));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2750), static_cast<uint8_t>(r6));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2751), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2756), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80529CE0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r6 = 49;
    r5 = 50;
    r4 = 1;
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2748), static_cast<uint8_t>(r6));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2749), static_cast<uint8_t>(r5));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13336));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 2756), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80529BD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80529BD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x000018F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80529BD0 func_80529BD0 preserves=true fpr_mask=0x00000000
