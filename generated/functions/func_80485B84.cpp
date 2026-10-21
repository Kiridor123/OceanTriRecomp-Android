#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80485B84_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80485B84u);
    goto loc_80485B84;

loc_80485B84:
{
}

loc_80485B88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80485C08;
    }
}

loc_80485B8C:
{
    r5 = 0x80740000u;
    r4 = 0x92490000u;
    r5 = (r5 + -17608);
    r0 = (r3 + -8);
    r3 = (r5 + 5860);
    r4 = (r4 + 9363);
    r0 = (r0 - r3);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r3 + r0);
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r3 = (r0 + r3);
    r0 = (r3 + 1);
    r4 = (r0 & 65535);
    r3 = (r4 * 28);
    r0 = (12 - r4);
    r3 = (r5 + r3);
    r3 = (r3 + 5860);
    ctr = r0;
}

loc_80485BDC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(12))) {
        goto loc_80485C00;
    }
}

loc_80485BE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
}

loc_80485BE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485BF4;
    }
}

loc_80485BEC:
{
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485BF4:
{
    r4 = (r4 + 1);
    r3 = (r3 + 28);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80485BE0;
    }
}

loc_80485C00:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485C08:
{
    r3 = 0x80740000u;
    r0 = 2;
    r3 = (r3 + -17608);
    r4 = 0;
    r3 = (r3 + 5860);
    ctr = r0;
}

loc_80485C20:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
}

loc_80485C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485C34;
    }
}

loc_80485C2C:
{
    r3 = (r3 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485C34:
{
    r0 = MemoryInline::FlatRead8((r3 + 54));
    r4 = (r4 + 1);
}

loc_80485C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485C4C;
    }
}

loc_80485C44:
{
    r3 = (r3 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485C4C:
{
    r0 = MemoryInline::FlatRead8((r3 + 82));
    r4 = (r4 + 1);
}

loc_80485C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485C64;
    }
}

loc_80485C5C:
{
    r3 = (r3 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485C64:
{
    r0 = MemoryInline::FlatRead8((r3 + 110));
    r4 = (r4 + 1);
}

loc_80485C70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485C7C;
    }
}

loc_80485C74:
{
    r3 = (r3 + 92);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485C7C:
{
    r0 = MemoryInline::FlatRead8((r3 + 138));
    r4 = (r4 + 1);
}

loc_80485C88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485C94;
    }
}

loc_80485C8C:
{
    r3 = (r3 + 120);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485C94:
{
    r0 = MemoryInline::FlatRead8((r3 + 166));
    r4 = (r4 + 1);
}

loc_80485CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485CAC;
    }
}

loc_80485CA4:
{
    r3 = (r3 + 148);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80485CAC:
{
    r4 = (r4 + 1);
    r3 = (r3 + 168);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80485C20;
    }
}

loc_80485CB8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80485B84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80485B84_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80485B84 func_80485B84 preserves=true fpr_mask=0x00000000
