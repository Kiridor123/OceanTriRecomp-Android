#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80132608(CpuContext* ctx);
extern "C" uint64_t func_80132608_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013297C(CpuContext* ctx);
extern "C" uint64_t func_8013297C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80132C50(CpuContext* ctx);
extern "C" uint64_t func_80132C50_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80132EBC(CpuContext* ctx);
extern "C" uint64_t func_80132EBC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801331D0(CpuContext* ctx);
extern "C" uint64_t func_801331D0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801333A8(CpuContext* ctx);
extern "C" uint32_t func_801333A8_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80133478_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80133478;

loc_80133478:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x80133490u;
    if constexpr (KnownRegArgsCpuCall<0x80132608u>(&func_80132608)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80132608_5E0 = func_80132608_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132608_5E0);
        r4 = static_cast<uint32_t>(regargs_result_80132608_5E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80132608u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    ctx->lr = 0x80133498u;
    if constexpr (KnownRegArgsCpuCall<0x8013297Cu>(&func_8013297C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013297C_8EC = func_8013297C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013297C_8EC);
        r4 = static_cast<uint32_t>(regargs_result_8013297C_8EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013297Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    ctx->lr = 0x801334A0u;
    if constexpr (KnownRegArgsCpuCall<0x80132C50u>(&func_80132C50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80132C50_BF8 = func_80132C50_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132C50_BF8);
        r4 = static_cast<uint32_t>(regargs_result_80132C50_BF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80132C50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    ctx->lr = 0x801334A8u;
    if constexpr (KnownRegArgsCpuCall<0x80132EBCu>(&func_80132EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80132EBC_F04 = func_80132EBC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80132EBC_F04);
        r4 = static_cast<uint32_t>(regargs_result_80132EBC_F04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80132EBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    ctx->lr = 0x801334B0u;
    if constexpr (KnownRegArgsCpuCall<0x801331D0u>(&func_801331D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801331D0_1210 = func_801331D0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801331D0_1210);
        r4 = static_cast<uint32_t>(regargs_result_801331D0_1210 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801331D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x801333A8u>(&func_801333A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801333A8_1503 = func_801333A8_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_801333A8_1503;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801333A8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80133478(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80133478_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80133478 func_80133478 preserves=true fpr_mask=0x00000000
