#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8032FD40_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8032FD40u);
    goto loc_8032FD40;

loc_8032FD40:
{
    r0 = (r4 & 255);
}

loc_8032FD48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032FD58;
    }
}

loc_8032FD4C:
{
}

loc_8032FD50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8032FD6C;
    }
}

loc_8032FD54:
{
    goto loc_8032FD80;
}

loc_8032FD58:
{
    r0 = MemoryInline::FlatRead8((r3 + 824));
}

loc_8032FD60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8032FD80;
    }
}

loc_8032FD64:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8032FD6C:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_8032FD74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8032FD80;
    }
}

loc_8032FD78:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8032FD80:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8032FD40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8032FD40_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8032FD40 func_8032FD40 preserves=true fpr_mask=0x00000000
