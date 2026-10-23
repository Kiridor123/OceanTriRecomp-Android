#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803D2A84(CpuContext* ctx);
extern "C" uint64_t func_803D2A84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803D18F8_ra208_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r9)
{
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    ctx->gpr[9] = arg_r9;

    goto loc_803D18F8;

loc_803D18F8:
{
    r4 = (r3 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + 18470));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = 0x80030000u;
    r5 = (r5 + 58);
    r6 = 0;
    r7 = 0x80000000u;
    r8 = 3;
    if constexpr (KnownRegArgsCpuCall<0x803D2A84u>(&func_803D2A84)) {
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_803D2A84_3FC = func_803D2A84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D2A84_3FC);
        r4 = static_cast<uint32_t>(regargs_result_803D2A84_3FC >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x803D2A84u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803D18F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D18F8_ra208_0_18_0(ctx, ctx->gpr[3], ctx->gpr[9]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000209 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803D18F8 func_803D18F8 preserves=true fpr_mask=0x00000000
