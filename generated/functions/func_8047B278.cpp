#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8047B278_ra58_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;

    MKW_GUEST_ENTER(0x8047B278u);
    goto loc_8047B278;

loc_8047B278:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8047B284:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047B290;
    }
}

loc_8047B288:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8047B290:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r6 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r3 = (r4 + 2);
}

loc_8047B2A4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047B2B0;
    }
}

loc_8047B2A8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8047B2B0:
{
    r5 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8047B2BC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047B2C8;
    }
}

loc_8047B2C0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8047B2C8:
{
    r5 = MemoryInline::FlatRead8((r6 + 1));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8047B2D4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047B2E0;
    }
}

loc_8047B2D8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8047B2E0:
{
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8047B2EC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047B2F8;
    }
}

loc_8047B2F0:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8047B2F8:
{
    r5 = MemoryInline::FlatRead8((r6 + 3));
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_8047B304:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8047B310;
    }
}

loc_8047B308:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

loc_8047B310:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_8047B278(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8047B278_ra58_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000058 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8047B278 func_8047B278 preserves=true fpr_mask=0x00000000
