#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E086C(CpuContext* ctx);
extern "C" uint32_t func_800E086C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_800E0A50_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_800E0A50;

loc_800E0A50:
{
    r4 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 280));
}

loc_800E0A68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800E0A6C:
{
    r4 = (r4 + 28);
    if constexpr (KnownRegArgsCpuCall<0x800E086Cu>(&func_800E086C)) {
        const auto regargs_result_800E086C_3EE = func_800E086C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800E086C_3EE;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E086Cu>(ctx);
        r3 = ctx->gpr[3];
    }
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E0A50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E0A50_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E0A50 func_800E0A50 preserves=true fpr_mask=0x00000000
