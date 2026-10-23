#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ECB4(CpuContext* ctx);
extern "C" uint64_t func_8027ECB4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027ED20(CpuContext* ctx);
extern "C" uint64_t func_8027ED20_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027EDD0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027EDD0;

loc_8027EDD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r5;
    r31 = r6;
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    MemoryInline::FlatWrite32(r6, r0);
    r5 = (r3 & 255);
    r0 = (r5 + -7);
}

loc_8027EE04:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8027EE20;
    }
}

loc_8027EE08:
{
    r0 = (r5 + -11);
}

loc_8027EE10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8027EE38;
    }
}

loc_8027EE14:
{
    r0 = (r5 + -14);
}

loc_8027EE1C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8027EE50;
    }
}

loc_8027EE20:
{
    r3 = (r3 & 255);
    r4 = (r4 & 65535);
    ctx->lr = 0x8027EE2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027ECB4u>(&func_8027ECB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ECB4_72A = func_8027ECB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ECB4_72A);
        r4 = static_cast<uint32_t>(regargs_result_8027ECB4_72A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ECB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32(r30, r3);
    r3 = 0;
    goto loc_8027EE54;
}

loc_8027EE38:
{
    r3 = r5;
    r4 = (r4 & 65535);
    ctx->lr = 0x8027EE44u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED20u>(&func_8027ED20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED20_A81 = func_8027ED20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ED20_A81);
        r4 = static_cast<uint32_t>(regargs_result_8027ED20_A81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32(r31, r3);
    r3 = 1;
    goto loc_8027EE54;
}

loc_8027EE50:
{
    r3 = -1;
}

loc_8027EE54:
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

extern "C" void func_8027EDD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027EDD0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027EDD0 func_8027EDD0 preserves=true fpr_mask=0x00000000
