#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80064C78(CpuContext* ctx);
extern "C" uint32_t func_80064C78_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802C1B3C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x802C1B3Cu);
    goto loc_802C1B3C;

loc_802C1B3C:
{
}

loc_802C1B40:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802C1B44:
{
    if constexpr (KnownRegArgsCpuCall<0x80064C78u>(&func_80064C78)) {
        const auto regargs_result_80064C78_2CB = func_80064C78_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064C78_2CB;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80064C78u>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

loc_return:
{
    return r3;
}

}

extern "C" void func_802C1B3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802C1B3C_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C1B3C func_802C1B3C preserves=true fpr_mask=0x00000000
