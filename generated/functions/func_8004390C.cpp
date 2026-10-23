#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EDC20(CpuContext* ctx);
extern "C" uint64_t func_804EDC20_ra380_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8004390C_ra188_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7, uint32_t arg_r8)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r7 = arg_r7;
    uint32_t r8 = arg_r8;
    uint32_t r9 = ctx->gpr[9];

    goto loc_8004390C;

loc_8004390C:
{
}

loc_80043910:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80043914:
{
    if constexpr (KnownRegArgsCpuCall<0x804EDC20u>(&func_804EDC20)) {
        const auto regargs_result_804EDC20_342 = func_804EDC20_ra380_0_18_0(ctx, r7, r8, r9);
        r3 = static_cast<uint32_t>(regargs_result_804EDC20_342);
        r4 = static_cast<uint32_t>(regargs_result_804EDC20_342 >> 32);
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804EDC20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

loc_return:
{
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_8004390C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8004390C_ra188_0_8_0(ctx, ctx->gpr[3], ctx->gpr[7], ctx->gpr[8]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000278B gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004390C func_8004390C preserves=true fpr_mask=0x00000000
