#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E93F0(CpuContext* ctx);
extern "C" uint64_t func_801E93F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E96A4(CpuContext* ctx);
extern "C" uint64_t func_801E96A4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E98EC_ra1c0_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7, uint32_t arg_r8, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_801E98EC;

loc_801E98EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r31 + 16488);
    r4 = (r31 + 18512);
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r3 + 18516));
    MemoryInline::FlatWrite16((r31 + 16490), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r3 + 18518));
    MemoryInline::FlatWrite16((r31 + 16492), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r4 + 18512);
    r4 = (r4 + 18520);
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r5 + 18520);
    r4 = (r5 + 18524);
    r5 = (r5 + 18526);
    ctx->lr = 0x801E9950u;
    if constexpr (KnownRegArgsCpuCall<0x801E93F0u>(&func_801E93F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E93F0_94E = func_801E93F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E93F0_94E);
        r4 = static_cast<uint32_t>(regargs_result_801E93F0_94E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E93F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 16488);
    ctx->lr = 0x801E995Cu;
    if constexpr (KnownRegArgsCpuCall<0x801E96A4u>(&func_801E96A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E96A4_CBB = func_801E96A4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E96A4_CBB);
        r4 = static_cast<uint32_t>(regargs_result_801E96A4_CBB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E96A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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

extern "C" void func_801E98EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E98EC_ra1c0_1e_18_0(ctx, ctx->gpr[6], ctx->gpr[7], ctx->gpr[8], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021C2 gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E98EC func_801E98EC preserves=true fpr_mask=0x00000000
