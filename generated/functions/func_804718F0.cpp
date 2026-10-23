#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80471920(CpuContext* ctx);
extern "C" uint64_t func_80471920_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804718F0_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_804718F0;

loc_804718F0:
{
    r5 = 0x80700000u;
    r4 = 0x80700000u;
    r3 = 0x80700000u;
    r0 = 96;
    r5 = (r5 + -9344);
    r4 = (r4 + 21376);
    r3 = (r3 + 27520);
    MemoryInline::FlatWrite32((r13 + -15932), r0);
    MemoryInline::FlatWrite32((r13 + -15944), r5);
    MemoryInline::FlatWrite32((r13 + -15940), r4);
    MemoryInline::FlatWrite32((r13 + -15936), r3);
    if constexpr (KnownRegArgsCpuCall<0x80471920u>(&func_80471920)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80471920_451 = func_80471920_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80471920_451);
        r4 = static_cast<uint32_t>(regargs_result_80471920_451 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80471920u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804718F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804718F0_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020C2 gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804718F0 func_804718F0 preserves=true fpr_mask=0x00000000
