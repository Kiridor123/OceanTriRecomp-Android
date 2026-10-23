#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803B1EBC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_803B1EBC;

loc_803B1EBC:
{
    r5 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803B1EC4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803B1EC8:
{
    r0 = (r3 & 255);
}

loc_803B1ED0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(8))) {
        goto loc_803B1ED8;
    }
}

loc_803B1ED4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803B1ED8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r3 + 26264));
    r6 = 0;
    goto loc_803B1F00;
}

loc_803B1EEC:
{
    r0 = MemoryInline::FlatRead16(r5);
    r5 = (r5 + 2);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = (r4 + 2);
    r6 = (r6 + 1);
}

loc_803B1F00:
{
    r0 = MemoryInline::FlatRead32((r3 + 26296));
}

loc_803B1F08:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_803B1EEC;
    }
}

loc_803B1F0C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B1EBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B1EBC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B1EBC func_803B1EBC preserves=true fpr_mask=0x00000000
