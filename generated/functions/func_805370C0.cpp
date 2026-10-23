#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055FD64(CpuContext* ctx);
extern "C" uint64_t func_8055FD64_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805370C0_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = arg_r6;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805370C0;

loc_805370C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r29 = r4;
    r28 = r3;
}

loc_805370E8:
{
    r0 = (r31 & 65535);
    r3 = MemoryInline::FlatRead32((r28 + 56));
    r30 = (r0 * 24);
    r4 = r29;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 + r30);
    ctx->lr = 0x80537104u;
    if constexpr (KnownRegArgsCpuCall<0x8055FD64u>(&func_8055FD64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8055FD64_50D = func_8055FD64_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8055FD64_50D);
        r4 = static_cast<uint32_t>(regargs_result_8055FD64_50D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8055FD64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
}

loc_80537108:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80537120;
    }
}

loc_8053710C:
{
    r3 = MemoryInline::FlatRead32((r28 + 56));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 + r30);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_80537130;
}

loc_80537120:
{
    r31 = (r31 + 1);
}

loc_80537128:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(27))) {
        goto loc_805370E8;
    }
}

loc_8053712C:
{
    r3 = 33;
}

loc_80537130:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805370C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805370C0_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000005B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805370C0 func_805370C0 preserves=true fpr_mask=0x00000000
