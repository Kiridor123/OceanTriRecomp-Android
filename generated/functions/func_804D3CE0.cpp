#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCD20(CpuContext* ctx);
extern "C" uint64_t func_804CCD20_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCDB0(CpuContext* ctx);
extern "C" uint64_t func_804CCDB0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804D3CE0_ra340_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r8, uint32_t arg_r9, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[8] = arg_r8;
    ctx->gpr[9] = arg_r9;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_804D3CE0;

loc_804D3CE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x804D0000u;
    r5 = 0x804D0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 15552);
    r5 = (r5 + 15580);
    r31 = 0x80000000u;
    r3 = (r31 + 3072);
    r5 = (r5 - r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + 3072);
    r4 = 256;
    if constexpr (KnownRegArgsCpuCall<0x804CCD20u>(&func_804CCD20)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCD20_66A = func_804CCD20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD20_66A);
        r4 = static_cast<uint32_t>(regargs_result_804CCD20_66A >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCD20u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    // sync @ 0x804D3D1C (no-op)
    r3 = (r31 + 3072);
    r4 = 256;
    if constexpr (KnownRegArgsCpuCall<0x804CCDB0u>(&func_804CCDB0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCDB0_92D = func_804CCDB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCDB0_92D);
        r4 = static_cast<uint32_t>(regargs_result_804CCDB0_92D >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCDB0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D3CE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D3CE0_ra340_1e_18_0(ctx, ctx->gpr[6], ctx->gpr[8], ctx->gpr[9], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D3CE0 func_804D3CE0 preserves=true fpr_mask=0x00000000
