#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046E980_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r8_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    goto loc_8046E980;

loc_8046E980:
{
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r9 = MemoryInline::FlatRead32(r3);
    r0 = (r7 * 12);
    r8 = MemoryInline::FlatRead32((r9 + 4));
    r6 = (r8 + r0);
    // nop
}

loc_8046E998:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8046E9A0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_8046E9B0;
    }
}

loc_8046E9A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8046E9AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r7))) {
        goto loc_8046E9B8;
    }
}

loc_8046E9B0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046E9B8:
{
    MemoryInline::FlatWrite32(r4, r9);
    MemoryInline::FlatWrite32((r4 + 4), r7);
    r0 = MemoryInline::FlatRead32(r6);
    r5 = (r0 & -16777216);
    r0 = (0 - r5);
    r0 = (r0 | r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32(r6);
    r5 = MemoryInline::FlatRead32((r9 + 16));
    r0 = (r0 & 16777215);
    r5 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_8046E9F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_8046EA10;
    }
}

loc_8046E9F8:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046EA10;
    }
}

loc_8046EA04:
{
    r6 = (r6 + 12);
    r7 = (r7 + 1);
    goto loc_8046E998;
}

loc_8046EA10:
{
    r4 = (r7 * 12);
    r8_addr_0 = (r8 + r4);
    r0 = MemoryInline::FlatRead32(r8_addr_0);
    r0 = (r0 & -16777216);
}

loc_8046EA1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046EA2C;
    }
}

loc_8046EA20:
{
    r4 = (r8 + r4);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    goto loc_8046EA30;
}

loc_8046EA2C:
{
    r0 = (r7 + 1);
}

loc_8046EA30:
{
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046E980(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046E980_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8046E980 func_8046E980 preserves=true fpr_mask=0x00000000
