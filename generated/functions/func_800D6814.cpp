#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D6830(CpuContext* ctx);
extern "C" uint32_t func_800D6830_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_800D6814_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x800D6814u);
    goto loc_800D6814;

loc_800D6814:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
}

loc_800D681C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D6828;
    }
}

loc_800D6820:
{
    r3 = 0;
    return r3;
}

loc_800D6828:
{
    if constexpr (KnownRegArgsCpuCall<0x800D6830u>(&func_800D6830)) {
        const auto regargs_result_800D6830_2F2 = func_800D6830_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D6830_2F2;
    } else {
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D6830u>(ctx);
        r3 = ctx->gpr[3];
    }
    return r3;
}

}

extern "C" void func_800D6814(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800D6814_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D6814 func_800D6814 preserves=true fpr_mask=0x00000000
