#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804B3680_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    ctx->gpr[5] = arg_r5;

    MKW_GUEST_ENTER(0x804B3680u);
    goto loc_804B3680;

loc_804B3680:
{
}

loc_804B3684:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B3690;
    }
}

loc_804B3688:
{
    r0 = (r4 & 31);
}

loc_804B368C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B3698;
    }
}

loc_804B3690:
{
    r3 = -101;
    ctx->gpr[0] = r0;
    return r3;
}

loc_804B3698:
{
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BCA70u>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_804B3680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804B3680_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B3680 func_804B3680 preserves=true fpr_mask=0x00000000
