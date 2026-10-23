#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8026F96C;

loc_8026F96C:
{
    r6 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 212));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r5 + -4);
}

loc_8026F988:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8026F9AC;
    }
}

loc_8026F98C:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_8026F994:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026F9AC;
    }
}

loc_8026F998:
{
    r0 = MemoryInline::FlatRead8((r3 + 1510));
}

loc_8026F9A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8026F9AC;
    }
}

loc_8026F9A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026F9AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 296));
}

loc_8026F9B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8026F9C8;
    }
}

loc_8026F9B8:
{
    r0 = 110;
    r3 = 90;
    r5 = 50;
    goto loc_8026F9D4;
}

loc_8026F9C8:
{
    r0 = 100;
    r3 = 80;
    r5 = 40;
}

loc_8026F9D4:
{
}

loc_8026F9D8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8026F9E4;
    }
}

loc_8026F9DC:
{
    r6 = 3;
    goto loc_8026FA00;
}

loc_8026F9E4:
{
}

loc_8026F9E8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r3))) {
        goto loc_8026F9F4;
    }
}

loc_8026F9EC:
{
    r6 = 1;
    goto loc_8026FA00;
}

loc_8026F9F4:
{
}

loc_8026F9F8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r5))) {
        goto loc_8026FA00;
    }
}

loc_8026F9FC:
{
    r6 = 1;
}

loc_8026FA00:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026F96C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026F96C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026F96C func_8026F96C preserves=true fpr_mask=0x00000000
