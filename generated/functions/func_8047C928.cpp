#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047B6F0(CpuContext* ctx);
extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_8047C928_ra88_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r7 = arg_r7;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8047C928;

loc_8047C928:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80740000u;
    r31 = (r31 + -18600);
    r3 = MemoryInline::FlatRead32((r31 + 116));
}

loc_8047C948:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C958;
    }
}

loc_8047C94C:
{
    ctx->lr = 0x8047C950u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8047B6F0_492 = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_492);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_492 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8047B6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
    }
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 116), r0);
}

loc_8047C958:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_8047C928(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8047C928_ra88_0_8_0(ctx, ctx->gpr[3], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000208B gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8047C928 func_8047C928 preserves=true fpr_mask=0x00000000
