#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80481C7C_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t ctr = ctx->ctr;

    goto loc_80481C7C;

loc_80481C7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r4 = 0x80740000u;
    r4 = (r4 + -17608);
}

loc_80481C8C:
{
    r6 = (r4 + 52);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80481C94:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = 4;
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & -256);
    r4 = (r5 + r4);
    r4 = (r4 & 65535);
    ctr = r0;
}

loc_80481CB0:
{
    r0 = MemoryInline::FlatRead8((r6 + 281));
}

loc_80481CB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80481CFC;
    }
}

loc_80481CBC:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_80481CC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80481CFC;
    }
}

loc_80481CC8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    MemoryInline::FlatWrite8((r6 + 280), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16((r6 + 266), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r6 + 268), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80481CFC:
{
    r6 = (r6 + 284);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80481CB0;
    }
}

loc_80481D04:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80481C7C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80481C7C_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000059 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80481C7C func_80481C7C preserves=true fpr_mask=0x00000000
