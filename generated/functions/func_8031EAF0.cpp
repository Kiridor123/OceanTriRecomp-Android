#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8031EB40(CpuContext* ctx);
extern "C" uint64_t func_8031EB40_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031EAF0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8031EAF0;

loc_8031EAF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11256));
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r5 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r5 + 32), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r0));
    r0 = (r4 & 255);
}

loc_8031EB1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031EB2C;
    }
}

loc_8031EB20:
{
}

loc_8031EB24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8031EB34;
    }
}

loc_8031EB28:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8031EB2C:
{
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8031EB40u>(&func_8031EB40)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8031EB40_65F = func_8031EB40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031EB40_65F);
        r4 = static_cast<uint32_t>(regargs_result_8031EB40_65F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031EB40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8031EB34:
{
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8031EB40u>(&func_8031EB40)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8031EB40_995 = func_8031EB40_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031EB40_995);
        r4 = static_cast<uint32_t>(regargs_result_8031EB40_995 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031EB40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031EAF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031EAF0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8031EAF0 func_8031EAF0 preserves=true fpr_mask=0x00000000
