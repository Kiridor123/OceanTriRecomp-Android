#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EB100(CpuContext* ctx);
extern "C" uint64_t func_804EB100_ra608_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804EB260_ra600_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r9, uint32_t arg_r10)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r9 = arg_r9;
    uint32_t r10 = arg_r10;

    goto loc_804EB260;

loc_804EB260:
{
    r3 = 0x80630000u;
    r3 = (r3 + -15904);
    r3 = (r3 + 340);
    if constexpr (KnownRegArgsCpuCall<0x804EB100u>(&func_804EB100)) {
        const auto regargs_result_804EB100_2B4 = func_804EB100_ra608_0_18_0(ctx, r3, r9, r10);
        r3 = static_cast<uint32_t>(regargs_result_804EB100_2B4);
        r4 = static_cast<uint32_t>(regargs_result_804EB100_2B4 >> 32);
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        InvokeDirectCpu<0x804EB100u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    }
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EB260(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EB260_ra600_0_18_0(ctx, ctx->gpr[9], ctx->gpr[10]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000602 gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EB260 func_804EB260 preserves=true fpr_mask=0x00000000
