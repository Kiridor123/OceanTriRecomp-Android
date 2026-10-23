#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80080028(CpuContext* ctx);
extern "C" uint64_t func_80080028_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8007E000_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8007E000;

loc_8007E000:
{
    r0 = (r4 + -196608);
}

loc_8007E008:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8007E034;
    }
}

loc_8007E00C:
{
}

loc_8007E010:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8007E024;
    }
}

loc_8007E014:
{
    r0 = MemoryInline::FlatRead32((r3 + 316));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r3 + 316), r0);
    goto loc_8007E038;
}

loc_8007E024:
{
    r0 = MemoryInline::FlatRead32((r3 + 316));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 316), r0);
    goto loc_8007E038;
}

loc_8007E034:
{
    if constexpr (KnownRegArgsCpuCall<0x80080028u>(&func_80080028)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80080028_534 = func_80080028_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80080028_534);
        r4 = static_cast<uint32_t>(regargs_result_80080028_534 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80080028u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8007E038:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007E000(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007E000_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007E000 func_8007E000 preserves=true fpr_mask=0x00000000
