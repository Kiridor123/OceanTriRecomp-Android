#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004B8D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8004B8D4;

loc_8004B8D4:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8004B8DC:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8004B8E0:
{
    r0 = (r4 & 65535);
}

loc_8004B8E8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(800))) {
        goto loc_return;
    }
}

loc_8004B8EC:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r4 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r6);
}

loc_8004B900:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_8004B914;
    }
}

loc_8004B904:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004B914:
{
    r0 = (r3 + r5);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004B8D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004B8D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004B8D4 func_8004B8D4 preserves=true fpr_mask=0x00000000
