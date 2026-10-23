#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800F7B08_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    goto loc_800F7B08;

loc_800F7B08:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 20916);
    r4 = (r4 + 4);
    r5 = 0;
    r3 = (r3 & 255);
    r0 = 32;
    ctr = r0;
}

loc_800F7B24:
{
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7B2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7B44;
    }
}

loc_800F7B30:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7B38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7B44;
    }
}

loc_800F7B3C:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7B44:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7B50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7B68;
    }
}

loc_800F7B54:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7B5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7B68;
    }
}

loc_800F7B60:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7B68:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7B74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7B8C;
    }
}

loc_800F7B78:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7B80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7B8C;
    }
}

loc_800F7B84:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7B8C:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7B98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7BB0;
    }
}

loc_800F7B9C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7BA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7BB0;
    }
}

loc_800F7BA8:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7BB0:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7BBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7BD4;
    }
}

loc_800F7BC0:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7BC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7BD4;
    }
}

loc_800F7BCC:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7BD4:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7BE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7BF8;
    }
}

loc_800F7BE4:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7BEC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7BF8;
    }
}

loc_800F7BF0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7BF8:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7C04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7C1C;
    }
}

loc_800F7C08:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7C10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7C1C;
    }
}

loc_800F7C14:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7C1C:
{
    r4 = (r4 + 24);
    r0 = MemoryInline::FlatRead8((r4 + 4));
}

loc_800F7C28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800F7C40;
    }
}

loc_800F7C2C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
}

loc_800F7C34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F7C40;
    }
}

loc_800F7C38:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800F7C40:
{
    r5 = (r5 + 7);
    r4 = (r4 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F7B24;
    }
}

loc_800F7C4C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F7B08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F7B08_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F7B08 func_800F7B08 preserves=true fpr_mask=0x00000000
