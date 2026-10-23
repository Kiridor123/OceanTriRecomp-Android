#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802695B0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_802695B0;

loc_802695B0:
{
    r6 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_802695B8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_802695C4;
    }
}

loc_802695BC:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802695C4:
{
    r6 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r3 * 332);
    r6 = (r6 + r0);
    r4 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 156));
}

loc_802695E4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_802695F0;
    }
}

loc_802695E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802695F0:
{
    r6_addr_0 = (r6 + r4);
    r0 = MemoryInline::FlatRead8(r6_addr_0);
}

loc_802695F8:
{
    r3 = -1;
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_80269600:
{
    r3 = 1;
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

extern "C" void func_802695B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802695B0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002078 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802695B0 func_802695B0 preserves=true fpr_mask=0x00000000
