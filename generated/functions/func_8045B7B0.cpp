#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045B7B0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8045B7B0;

loc_8045B7B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 52u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r6 = 0;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r4 = (r4_rot_0 & 7);
    r0 = (r4 + 255);
    r0 = (r0 & 255);
}

loc_8045B7C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8045B7D8;
    }
}

loc_8045B7CC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 10));
}

loc_8045B7D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B7E8;
    }
}

loc_8045B7D8:
{
    r0 = 40;
    MemoryInline::FlatWrite32((r13 + -16408), r0);
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045B7E8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 8));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & 7);
}

loc_8045B7F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045B7FC;
    }
}

loc_8045B7F4:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045B7FC:
{
    r8 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 28));
}

loc_8045B804:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 36));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 52));
    r4 = (r4 - r8);
    r7 = (r0 + r4);
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(3))) {
        goto loc_8045B820;
    }
}

loc_8045B818:
{
    r6 = (r5 + -2);
    r7 = (r7 - r6);
}

loc_8045B820:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_0 & 1);
}

loc_8045B828:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045B850;
    }
}

loc_8045B82C:
{
    r0 = (r4 - r6);
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B850;
    }
}

loc_8045B838:
{
    r0 = MemoryInline::FlatRead8(r8);
    r8 = (r8 + 1);
}

loc_8045B844:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8045B84C;
    }
}

loc_8045B848:
{
    r7 = (r7 + 1);
}

loc_8045B84C:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8045B838;
    }
}

loc_8045B850:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045B7B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045B7B0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8045B7B0 func_8045B7B0 preserves=true fpr_mask=0x00000000
