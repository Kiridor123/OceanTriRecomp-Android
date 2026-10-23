#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8026836C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8026836C;

loc_8026836C:
{
    r5 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80268374:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80268380;
    }
}

loc_80268378:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80268380:
{
    r4 = MemoryInline::FlatRead8((r3 + 8));
    r3 = (r5 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 560));
}

loc_80268390:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8026839C;
    }
}

loc_80268394:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026839C:
{
    r3 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r4 * 332);
    r4 = 0;
    r3 = (r3 + r0);
    r0 = 11;
    ctr = r0;
}

loc_802683B4:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802683BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802683C4;
    }
}

loc_802683C0:
{
    r4 = 1;
}

loc_802683C4:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802683B4;
    }
}

loc_802683CC:
{
    r3 = (1 - r4);
    r0 = (r4 + -1);
    r0 = (r3 | r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026836C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026836C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8026836C func_8026836C preserves=true fpr_mask=0x00000000
