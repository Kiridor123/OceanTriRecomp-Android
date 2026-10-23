#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7E48(CpuContext* ctx);
extern "C" uint64_t func_800E7E48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E7F44(CpuContext* ctx);
extern "C" uint64_t func_800E7F44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F2640(CpuContext* ctx);
extern "C" uint64_t func_800F2640_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800EEAA8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r31_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EEAA8;

loc_800EEAA8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & -4);
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r4 = (r0 + r31);
    r4 = MemoryInline::FlatRead32((r4 + 16));
    ctx->lr = 0x800EEADCu;
    if constexpr (KnownRegArgsCpuCall<0x800E7E48u>(&func_800E7E48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E7E48_63F = func_800E7E48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E7E48_63F);
        r4 = static_cast<uint32_t>(regargs_result_800E7E48_63F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E7E48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r4 = (r0 + r31);
    r4 = MemoryInline::FlatRead32((r4 + 408));
    ctx->lr = 0x800EEAF0u;
    if constexpr (KnownRegArgsCpuCall<0x800E7F44u>(&func_800E7F44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E7F44_9E9 = func_800E7F44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E7F44_9E9);
        r4 = static_cast<uint32_t>(regargs_result_800E7F44_9E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E7F44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r0 + r30);
    MemoryInline::FlatWrite8((r3 + 800), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r0 + r30);
    MemoryInline::FlatWrite8((r3 + 849), static_cast<uint8_t>(r4));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r29)));
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r3 + 65536);
    r3 = (r0 + r30);
    MemoryInline::FlatWrite8((r3 + -26850), static_cast<uint8_t>(r4));
    r3 = r29;
    ctx->lr = 0x800EEB28u;
    if constexpr (KnownRegArgsCpuCall<0x800F2640u>(&func_800F2640)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F2640_F2A = func_800F2640_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F2640_F2A);
        r4 = static_cast<uint32_t>(regargs_result_800F2640_F2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F2640u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EEAA8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EEAA8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FA gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EEAA8 func_800EEAA8 preserves=true fpr_mask=0x00000000
