#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130D40(CpuContext* ctx);
extern "C" uint64_t func_80130D40_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_80182DA8_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_80182DA8;

loc_80182DA8:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_80182DB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_return;
    }
}

loc_80182DB4:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x80130D40u>(&func_80130D40)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80130D40_3A9 = func_80130D40_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130D40_3A9);
        r4 = static_cast<uint32_t>(regargs_result_80130D40_3A9 >> 32);
        r0 = ctx->gpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80130D40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80182DA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80182DA8_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80182DA8 func_80182DA8 preserves=true fpr_mask=0x00000000
