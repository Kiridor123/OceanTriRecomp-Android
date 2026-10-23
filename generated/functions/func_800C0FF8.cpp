#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C0CC4(CpuContext* ctx);
extern "C" double func_800C0CC4_ra8_2_0_2(CpuContext*, uint32_t, double);
extern "C" void func_800C0DE8(CpuContext* ctx);
extern "C" uint32_t func_800C0DE8_ra38_6_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_800C0EC0(CpuContext* ctx);
extern "C" uint64_t func_800C0EC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800C0FF8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_800C0FF8;

loc_800C0FF8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r0 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r3 = (r1 + 8);
    r4 = r0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30940));
    if constexpr (KnownRegArgsCpuCall<0x800C0CC4u>(&func_800C0CC4)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_800C0CC4_621 = func_800C0CC4_ra8_2_0_2(ctx, r3, f1.d);
        f1.d = regargs_result_800C0CC4_621;
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800C0CC4u>(ctx);
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = (r1 + 20);
    r4 = r28;
    r5 = r29;
    r6 = r30;
    r7 = (r1 + 8);
    ctx->lr = 0x800C1050u;
    if constexpr (KnownRegArgsCpuCall<0x800C0EC0u>(&func_800C0EC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        const auto regargs_result_800C0EC0_8CB = func_800C0EC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C0EC0_8CB);
        r4 = static_cast<uint32_t>(regargs_result_800C0EC0_8CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800C0EC0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r3 = (r1 + 20);
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r5 = r31;
    ctx->lr = 0x800C1064u;
    if constexpr (KnownRegArgsCpuCall<0x800C0DE8u>(&func_800C0DE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800C0DE8_D18 = func_800C0DE8_ra38_6_8_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = regargs_result_800C0DE8_D18;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800C0DE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800C0FF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C0FF8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FE gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C0FF8 func_800C0FF8 preserves=true fpr_mask=0x00000000
