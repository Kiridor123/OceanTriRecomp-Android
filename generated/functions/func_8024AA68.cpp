#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8024AA68_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8024AA68u);
    goto loc_8024AA68;

loc_8024AA68:
{
    r4 = 0;
    r0 = (r3 & 65535);
}

loc_8024AA74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(47))) {
        goto loc_8024AA94;
    }
}

loc_8024AA78:
{
}

loc_8024AA7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(40))) {
        goto loc_8024AA9C;
    }
}

loc_8024AA80:
{
}

loc_8024AA84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(265))) {
        goto loc_8024AAA4;
    }
}

loc_8024AA88:
{
}

loc_8024AA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(438))) {
        goto loc_8024AAAC;
    }
}

loc_8024AA90:
{
    goto loc_8024AAB0;
}

loc_8024AA94:
{
    r4 = 0;
    goto loc_8024AAB0;
}

loc_8024AA9C:
{
    r4 = 1;
    goto loc_8024AAB0;
}

loc_8024AAA4:
{
    r4 = 2;
    goto loc_8024AAB0;
}

loc_8024AAAC:
{
    r4 = 2;
}

loc_8024AAB0:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8024AA68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8024AA68_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8024AA68 func_8024AA68 preserves=true fpr_mask=0x00000000
