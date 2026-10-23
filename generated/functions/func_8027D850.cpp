#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027D850_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8027D850;

loc_8027D850:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8027D858:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027D8D0;
    }
}

loc_8027D85C:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8027D864:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(79))) {
        goto loc_8027D888;
    }
}

loc_8027D868:
{
}

loc_8027D86C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(15))) {
        goto loc_8027D87C;
    }
}

loc_8027D870:
{
}

loc_8027D874:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_8027D8A8;
    }
}

loc_8027D878:
{
    goto loc_8027D8D0;
}

loc_8027D87C:
{
}

loc_8027D880:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(74))) {
        goto loc_8027D8B8;
    }
}

loc_8027D884:
{
    goto loc_8027D8D0;
}

loc_8027D888:
{
}

loc_8027D88C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(104))) {
        goto loc_8027D89C;
    }
}

loc_8027D890:
{
}

loc_8027D894:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(102))) {
        goto loc_8027D8A8;
    }
}

loc_8027D898:
{
    goto loc_8027D8D0;
}

loc_8027D89C:
{
}

loc_8027D8A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(106))) {
        goto loc_8027D8D0;
    }
}

loc_8027D8A4:
{
    goto loc_8027D8B8;
}

loc_8027D8A8:
{
}

loc_8027D8AC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(1))) {
        goto loc_8027D8D0;
    }
}

loc_8027D8B0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027D8B8:
{
}

loc_8027D8BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8027D8C8;
    }
}

loc_8027D8C0:
{
}

loc_8027D8C4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_8027D8D0;
    }
}

loc_8027D8C8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8027D8D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8027D850(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027D850_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027D850 func_8027D850 preserves=true fpr_mask=0x00000000
