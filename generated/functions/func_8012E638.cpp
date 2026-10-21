#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8012E638_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8012E638u);
    goto loc_8012E638;

loc_8012E638:
{
    r3 = (r3 & 255);
    r0 = (r3 + -36);
}

loc_8012E644:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8012E674;
    }
}

loc_8012E648:
{
}

loc_8012E64C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(34))) {
        goto loc_8012E65C;
    }
}

loc_8012E650:
{
}

loc_8012E654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(27))) {
        goto loc_8012E68C;
    }
}

loc_8012E658:
{
    goto loc_8012E6A0;
}

loc_8012E65C:
{
    r0 = (r4 & 255);
    r0 = (r0 & 2);
}

loc_8012E668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012E6A0;
    }
}

loc_8012E66C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8012E674:
{
    r0 = (r4 & 255);
    r0 = (r0 & 2);
}

loc_8012E680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012E6A0;
    }
}

loc_8012E684:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8012E68C:
{
    r0 = (r4 & 255);
}

loc_8012E694:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8012E6A0;
    }
}

loc_8012E698:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_8012E6A0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8012E638(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8012E638_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012E638 func_8012E638 preserves=true fpr_mask=0x00000000
