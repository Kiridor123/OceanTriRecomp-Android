#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007A574(CpuContext* ctx);
extern "C" uint64_t func_8007A574_ra10_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_80046EFC_ra10_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;

    goto loc_80046EFC;

loc_80046EFC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 33));
}

loc_80046F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80046F10:
{
    if constexpr (KnownRegArgsCpuCall<0x8007A574u>(&func_8007A574)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8007A574_34E = func_8007A574_ra10_0_18_0(ctx, r4);
        r3 = static_cast<uint32_t>(regargs_result_8007A574_34E);
        r4 = static_cast<uint32_t>(regargs_result_8007A574_34E >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007A574u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return r4;
}

}

extern "C" void func_80046EFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80046EFC_ra10_0_10_0(ctx, ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002013 gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80046EFC func_80046EFC preserves=true fpr_mask=0x00000000
