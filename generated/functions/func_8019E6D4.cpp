#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8019E6D4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8019E6D4;

loc_8019E6D4:
{
    r0 = (r4 & 255);
}

loc_8019E6DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019E6FC;
    }
}

loc_8019E6E0:
{
}

loc_8019E6E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8019E714;
    }
}

loc_8019E6E8:
{
}

loc_8019E6EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8019E72C;
    }
}

loc_8019E6F0:
{
}

loc_8019E6F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8019E744;
    }
}

loc_8019E6F8:
{
    goto loc_8019E768;
}

loc_8019E6FC:
{
    r3 = MemoryInline::FlatRead8((r3 + 2401));
    r0 = (r5 & 255);
}

loc_8019E708:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8019E768;
    }
}

loc_8019E70C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8019E714:
{
    r3 = MemoryInline::FlatRead8((r3 + 2401));
    r0 = (r5 & 255);
}

loc_8019E720:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8019E768;
    }
}

loc_8019E724:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8019E72C:
{
    r3 = MemoryInline::FlatRead8((r3 + 2401));
    r0 = (r5 & 255);
}

loc_8019E738:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8019E768;
    }
}

loc_8019E73C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8019E744:
{
    r3 = MemoryInline::FlatRead8((r3 + 2401));
    r0 = (r5 & 255);
}

loc_8019E750:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8019E768;
    }
}

loc_8019E754:
{
    r0 = (r6 & 255);
}

loc_8019E75C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8019E768;
    }
}

loc_8019E760:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8019E768:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8019E6D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8019E6D4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019E6D4 func_8019E6D4 preserves=true fpr_mask=0x00000000
