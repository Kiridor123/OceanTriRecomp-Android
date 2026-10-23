#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8554(CpuContext* ctx);
extern "C" uint64_t func_800E8554_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800F2A80(CpuContext* ctx);
extern "C" uint32_t func_800F2A80_ra18_2_8_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_800F2A20_ra8_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_800F2A20;

loc_800F2A20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = (r3 & 255);
    r31 = (r13 + -30736);
    r31_addr_0 = (r31 + r30);
    r3 = MemoryInline::FlatRead8(r31_addr_0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    ctx->lr = 0x800F2A48u;
    if constexpr (KnownRegArgsCpuCall<0x800E8554u>(&func_800E8554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8554_53F = func_800E8554_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E8554_53F);
        r4 = static_cast<uint32_t>(regargs_result_800E8554_53F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E8554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31_addr_1 = (r31 + r30);
    r3 = MemoryInline::FlatRead8(r31_addr_1);
    r4 = 1;
    ctx->lr = 0x800F2A54u;
    if constexpr (KnownRegArgsCpuCall<0x800F2A80u>(&func_800F2A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2A80_861 = func_800F2A80_ra18_2_8_0(ctx, r3, r4, f1.d);
        r3 = regargs_result_800F2A80_861;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800F2A80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F2A20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F2A20_ra8_2_18_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F2A20 func_800F2A20 preserves=true fpr_mask=0x00000000
