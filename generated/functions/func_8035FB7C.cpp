#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8035FB7C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8035FB7C;

loc_8035FB7C:
{
    r0 = (r4 & 255);
}

loc_8035FB84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035FB94;
    }
}

loc_8035FB88:
{
}

loc_8035FB8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8035FBA8;
    }
}

loc_8035FB90:
{
    goto loc_8035FBBC;
}

loc_8035FB94:
{
    r0 = MemoryInline::FlatRead16((r3 + 808));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8035FB9C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8035FBBC;
    }
}

loc_8035FBA0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8035FBA8:
{
    r0 = MemoryInline::FlatRead16((r3 + 810));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8035FBB0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8035FBBC;
    }
}

loc_8035FBB4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8035FBBC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8035FB7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8035FB7C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035FB7C func_8035FB7C preserves=true fpr_mask=0x00000000
