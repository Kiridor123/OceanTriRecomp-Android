#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80441668_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80441668;

loc_80441668:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806E0000u;
    r31 = (r3 + -30960);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + -30960), r0);
    MemoryInline::FlatWriteRam32((r31 + 4), r0);
    MemoryInline::FlatWriteRam32((r31 + 8), r0);
    MemoryInline::FlatWriteRam32((r31 + 12), r0);
    MemoryInline::FlatWriteRam32((r31 + 16), r0);
    r3 = (r31 + 20);
    r4 = (r13 + -21152);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_526 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_526;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2384));
    MemoryInline::FlatWriteRam32((r31 + 84), r3);
}

loc_804416B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804416C4;
    }
}

loc_804416BC:
{
    r3 = 0;
    goto loc_804416E4;
}

loc_804416C4:
{
    r0 = 16384;
    MemoryInline::FlatWriteRam32((r31 + 88), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r31 + 92), r0);
    r4 = 0;
    r5 = 16384;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
}

loc_804416E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80441668(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80441668_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80441668 func_80441668 preserves=true fpr_mask=0x00000000
