#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8041C948_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8041C948;

loc_8041C948:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_8041C950:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8041C95C;
    }
}

loc_8041C954:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8041C95C:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_8041C964:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8041C970;
    }
}

loc_8041C968:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8041C970:
{
    r0 = MemoryInline::FlatRead32((r3 + 116));
}

loc_8041C978:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8041C984;
    }
}

loc_8041C97C:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8041C984:
{
    r0 = MemoryInline::FlatRead8((r3 + 288));
}

loc_8041C98C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041C9A0;
    }
}

loc_8041C990:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 291), static_cast<uint8_t>(r0));
    r3 = -2;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8041C9A0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8041C948(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041C948_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041C948 func_8041C948 preserves=true fpr_mask=0x00000000
