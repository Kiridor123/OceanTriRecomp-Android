#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274874(CpuContext* ctx);
extern "C" uint64_t func_80274874_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80212540_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_80212540;

loc_80212540:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80212554u;
    if constexpr (KnownRegArgsCpuCall<0x80274874u>(&func_80274874)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274874_3AC = func_80274874_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80274874_3AC);
        r4 = static_cast<uint32_t>(regargs_result_80274874_3AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274874u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r0 = 0;
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    MemoryInline::FlatWriteRam16((r4 + 132), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 136), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 134), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 140), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 138), static_cast<uint16_t>(r0));
    r3 = (r3 + 184);
    r4 = 0;
    r5 = 132;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 2;
    MemoryInline::FlatWrite16((r31 + 850), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80212540(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80212540_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80212540 func_80212540 preserves=true fpr_mask=0x00000000
